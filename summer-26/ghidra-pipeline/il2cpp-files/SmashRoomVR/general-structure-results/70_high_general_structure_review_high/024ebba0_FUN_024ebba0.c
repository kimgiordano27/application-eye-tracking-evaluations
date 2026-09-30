/*
FUNCTION_NAME: FUN_024ebba0
ENTRY_POINT: 024ebba0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_024ebba0(undefined8 param_1,void *param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong __n;
  void *__dest;
  void *__s;
  long *plVar7;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_03feecf2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feecf2 = 1;
  }
  plVar7 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar7[1] + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)((long)&local_60 - uVar6);
  __s = (void *)((long)__dest - uVar6);
  memset(__s,0,__n);
  pcVar2 = (char *)thunk_FUN_01ac78a4(param_1,*(undefined8 *)(*plVar7 + 0x80));
  plVar7 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
  if (*pcVar2 == '\0') {
    uVar3 = (**(code **)plVar7[3])(param_1);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar6 = FUN_0391f968(uVar3,0,0);
    if ((uVar6 & 1) != 0) {
      lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18))
                        (param_1);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
      local_60 = __dest;
      (*(code *)puVar5[2])(*puVar5,puVar5,lVar4,&local_60,__dest);
      goto LAB_024ebd20;
    }
    memset(__s,0,__n);
  }
  else {
    __s = (void *)thunk_FUN_01ac78a4(param_1,*(long *)(*plVar7 + 0x80) + 0x20);
  }
  memcpy(__dest,__s,__n);
LAB_024ebd20:
  memcpy(param_2,__dest,__n);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


