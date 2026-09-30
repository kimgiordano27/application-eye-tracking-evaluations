/*
FUNCTION_NAME: FUN_01f18a8c
ENTRY_POINT: 01f18a8c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


void FUN_01f18a8c(long param_1,long param_2,void *param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulong __n;
  ulong uVar11;
  void *__dest;
  void *__src;
  void *__s;
  void *__s_00;
  void *__dest_00;
  undefined1 auStack_b0 [12];
  int local_a4;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  void *local_88;
  long local_80;
  long local_78;
  void *pvStack_70;
  long local_68;
  undefined *puVar6;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_4 + 0x38);
  local_88 = param_3;
  local_80 = param_2;
  if (lVar8 == 0) {
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    lVar8 = *(long *)(param_4 + 0x38);
    if (lVar8 == 0) {
      FUN_01ae9ed0(param_4);
      lVar8 = *(long *)(param_4 + 0x38);
    }
  }
  lVar8 = *(long *)(lVar8 + 8);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  uVar9 = *(uint *)(lVar8 + 0xfc);
  __n = (ulong)uVar9;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_01ae9e74();
    lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    uVar9 = *(uint *)(lVar2 + 0xfc);
    uVar1 = *(ushort *)(lVar8 + 0x135);
  }
  puVar10 = auStack_b0 + -((ulong)(uVar9 + 0x10) + 0xf & 0x1fffffff0);
  local_a0 = puVar10;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_01ae9e74();
  }
  local_98 = (long)puVar10 - ((ulong)(*(int *)(lVar8 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (void *)(local_98 - uVar11);
  __dest_00 = (void *)((long)__src - uVar11);
  __s = (void *)((long)__dest_00 - uVar11);
  memset(__s,0,__n);
  __s_00 = (void *)((long)__s - uVar11);
  memset(__s_00,0,__n);
  puVar6 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_03922f24(param_1,0,0);
  if ((uVar11 & 1) == 0) {
    if (local_80 != 0) {
      if (param_1 != 0) {
        local_90 = lVar3;
        lVar3 = FUN_01ed712c(param_1,*(undefined8 *)
                                      Method_System_Collections_Stack_StackEnumerator_get_Current__)
        ;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar6);
        }
        uVar11 = FUN_0391f968(lVar3,0,0);
        lVar8 = 0;
        if ((uVar11 & 1) != 0) {
          if (lVar3 == 0) goto LAB_01f18ed0;
          lVar8 = FUN_03900d8c(lVar3,0);
        }
        memset(__s,0,__n);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar11 = FUN_03922f24(lVar8,0,0);
        lVar3 = local_90;
        __dest = local_88;
        if ((uVar11 & 1) == 0) {
          if (lVar8 == 0) goto LAB_01f18ed0;
          local_a4 = FUN_03901b0c(lVar8,0);
          lVar3 = FUN_01ed712c(param_1,*(undefined8 *)
                                        Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_2__
                              );
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar6);
          }
          uVar11 = FUN_0391f968(lVar3,0,0);
          lVar2 = 0;
          if ((uVar11 & 1) != 0) {
            if (lVar3 == 0) goto LAB_01f18ed0;
            lVar2 = FUN_039010c8(lVar3,0);
          }
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar11 = FUN_0391f968(lVar2,0,0);
          if ((uVar11 & 1) != 0) {
            puVar7 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x10);
            local_78 = lVar2;
            pvStack_70 = __src;
            (*(code *)puVar7[2])(*puVar7,puVar7,local_80,&local_78,__src);
            memcpy(__s,__src,__n);
            memcpy(__dest_00,__s,__n);
            uVar11 = FUN_01b48138(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),__dest_00);
            if ((uVar11 & 1) != 0) {
              lVar2 = *(long *)(param_4 + 0x38);
              lVar3 = *(long *)(lVar2 + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01ae9e74();
                lVar2 = *(long *)(param_4 + 0x38);
              }
              FUN_01b48960(lVar3,*(undefined8 *)(lVar2 + 0x18),local_a0,__s,0,&local_78);
              lVar3 = local_90;
              __dest = local_88;
              if ((int)local_78 == local_a4) goto LAB_01f18e80;
            }
          }
          puVar7 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x10);
          local_78 = lVar8;
          pvStack_70 = __src;
          (*(code *)puVar7[2])(*puVar7,puVar7,local_80,&local_78,__src);
          memcpy(__s,__src,__n);
          memcpy(__dest_00,__s,__n);
          uVar11 = FUN_01b48138(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),__dest_00);
          __dest = local_88;
          lVar3 = local_90;
          if ((uVar11 & 1) != 0) {
            lVar2 = *(long *)(param_4 + 0x38);
            lVar8 = *(long *)(lVar2 + 8);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01ae9e74();
              lVar2 = *(long *)(param_4 + 0x38);
            }
            FUN_01b48960(lVar8,*(undefined8 *)(lVar2 + 0x18),local_98,__s,0,&local_78);
            if ((int)local_78 == local_a4) goto LAB_01f18e80;
          }
          memset(__s_00,0,__n);
          __s = __s_00;
        }
LAB_01f18e80:
        memcpy(__src,__s,__n);
        memcpy(__dest,__src,__n);
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
LAB_01f18ed0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar4 = thunk_FUN_01afaadc();
    puVar6 = StringLiteral_2622;
  }
  else {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar4 = thunk_FUN_01afaadc();
    puVar6 = StringLiteral_2621;
  }
  uVar5 = thunk_FUN_01ad9084(puVar6);
  FUN_02fd1220(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar4,param_4);
}


