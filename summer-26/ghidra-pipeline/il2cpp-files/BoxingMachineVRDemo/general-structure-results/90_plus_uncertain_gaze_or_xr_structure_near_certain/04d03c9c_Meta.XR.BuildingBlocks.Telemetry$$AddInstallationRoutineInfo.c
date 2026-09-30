/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddInstallationRoutineInfo
ENTRY_POINT: 04d03c9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddInstallationRoutineInfo
               (long *param_1,undefined8 ****param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong __n;
  long *__dest;
  void *__s;
  void *__dest_00;
  long *plVar6;
  long lVar7;
  long lStack_30;
  undefined8 ***pppuStack_28;
  long *plStack_20;
  long *plStack_18;
  char acStack_c [4];
  long lStack_8;
  
  lStack_30 = tpidr_el0;
  lStack_8 = *(long *)(lStack_30 + 0x28);
  lVar7 = *(long *)(param_3 + 0x20);
  lVar3 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
  uVar2 = *(uint *)(lVar3 + 0xfc);
  __n = (ulong)uVar2;
  pppuStack_28 = param_2;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
    uVar2 = *(uint *)(lVar3 + 0xfc);
    lVar7 = *(long *)(param_3 + 0x20);
  }
  lVar3 = (long)&lStack_30 - ((ulong)(uVar2 + 0x10) + 0xf & 0x1fffffff0);
  uVar4 = __n + 0xf & 0x1fffffff0;
  __dest = (long *)(lVar3 - uVar4);
  plVar6 = (long *)((long)__dest - uVar4);
  __dest_00 = (void *)((long)plVar6 - uVar4);
  __s = (void *)((long)__dest_00 - uVar4);
  memset(__s,0,__n);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0x28)) {
    param_2 = &pppuStack_28;
  }
  memcpy(__dest,param_2,__n);
  plStack_20 = __dest;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0x28)) {
    plStack_20 = (long *)*__dest;
  }
  lVar7 = *(long *)(*param_1 + 0x230);
  plStack_18 = plVar6;
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,param_1,&plStack_20,plVar6);
  memcpy(__s,plVar6,__n);
  memcpy(__dest_00,__s,__n);
  uVar4 = FUN_02d60a9c(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18),__dest_00
                      );
  if ((uVar4 & 1) != 0) {
    lVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30))
                      (param_1);
    if (lVar7 == 0) goto LAB_04d03f80;
    puVar1 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    plStack_20 = __dest;
    (*(code *)puVar1[2])(*puVar1,puVar1,lVar7,&plStack_20,__dest);
    plVar6 = (long *)thunk_FUN_02d9d164(*(undefined8 *)
                                         (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18),__dest
                                       );
    lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0(lVar7);
      lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    plStack_20 = plVar6;
    FUN_02d613d0(lVar7,*(undefined8 *)(lVar5 + 0x48),lVar3,__s,&plStack_20,acStack_c);
    if (acStack_c[0] != '\0') goto LAB_04d03f4c;
  }
  lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50))(param_1);
  memcpy(__dest,__s,__n);
  if (lVar3 != 0) {
    lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    puVar1 = *(undefined8 **)(lVar7 + 0x58);
    plStack_20 = __dest;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x18) + 0x28)) {
      plStack_20 = (long *)*__dest;
    }
    (*(code *)puVar1[2])(*puVar1,puVar1,lVar3,&plStack_20);
    lVar3 = param_1[0xb];
    if (lVar3 != 0) {
      memcpy(__dest,__s,__n);
      lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      puVar1 = *(undefined8 **)(lVar7 + 0x68);
      if (-1 < *(int *)(*(long *)(lVar7 + 0x18) + 0x28)) {
        __dest = (long *)*__dest;
      }
      plStack_20 = param_1;
      plStack_18 = __dest;
      (*(code *)puVar1[2])(*puVar1,puVar1,lVar3,&plStack_20,__dest);
    }
LAB_04d03f4c:
    if (*(long *)(lStack_30 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_04d03f80:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


