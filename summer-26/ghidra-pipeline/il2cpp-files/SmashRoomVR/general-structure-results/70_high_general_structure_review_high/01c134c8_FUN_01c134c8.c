/*
FUNCTION_NAME: FUN_01c134c8
ENTRY_POINT: 01c134c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_20;telemetry_or_network_hits_6
*/


void FUN_01c134c8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((DAT_03fed414 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_WebResponseStream_<ReadAllAsync>d__48_MoveNext__);
    thunk_FUN_01ad9084(Method_System_Net_WebResponseStream_<ReadAllAsyncInner>d__47_MoveNext__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed414 = 1;
  }
  if (*(long *)(param_4 + 0x30) != 0) {
    uVar8 = *(undefined8 *)(param_4 + 0x20);
    lVar4 = FUN_0391c2b8(*(long *)(param_4 + 0x30),0);
    if ((lVar4 != 0) &&
       (lVar4 = FUN_0391fab4(lVar4,0),
       puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, lVar4 != 0))
    {
      uVar10 = FUN_03928d34(lVar4,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
      puVar5 = *(undefined4 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8);
      uVar14 = *puVar5;
      uVar13 = puVar5[1];
      uVar12 = puVar5[2];
      uVar11 = puVar5[3];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar4 = FUN_01f259b0(uVar10,param_2,param_3,uVar14,uVar13,uVar12,uVar11,uVar8,
                           *(undefined8 *)puVar2);
      if (lVar4 != 0) {
        lVar4 = FUN_01ed712c(lVar4,*(undefined8 *)
                                    Method_System_Net_WebResponseStream_<ReadAllAsyncInner>d__47_MoveNext__
                            );
        plVar9 = (long *)(param_4 + 0x28);
        *plVar9 = lVar4;
        thunk_FUN_01b4f09c(plVar9,lVar4);
        if ((*plVar9 != 0) &&
           (lVar4 = FUN_01e8a9f8(*plVar9,*(undefined8 *)
                                          Method_System_Net_WebResponseStream_<ReadAllAsync>d__48_MoveNext__
                                ), lVar4 != 0)) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_4 + 0x40);
          thunk_FUN_01b4f09c();
          plVar9 = *(long **)(param_4 + 0x30);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x628))
                      (plVar9,*(undefined8 *)(param_4 + 0x28),1,1,*(undefined8 *)(*plVar9 + 0x630));
            if (*(long *)(param_4 + 0x28) != 0) {
              lVar4 = *(long *)(param_4 + 0x48);
              uVar8 = FUN_0391c2b8(*(long *)(param_4 + 0x28),0);
              if (lVar4 != 0) {
                lVar6 = *(long *)(lVar4 + 0x10);
                lVar7 = *(long *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                    thunk_FUN_01b4f09c();
                  }
                  else {
                    FUN_02b599e4(lVar4,uVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                  FUN_01c13704(param_4);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


