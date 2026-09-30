/*
FUNCTION_NAME: FUN_01c3b0f4
ENTRY_POINT: 01c3b0f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_01c3b0f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_03fed562 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696
                      );
    DAT_03fed562 = 1;
  }
  lVar2 = FUN_0391c27c(param_1,0);
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
  if (lVar2 != 0) {
    uVar3 = FUN_03928c2c(lVar2,0);
    puVar5 = (undefined8 *)(param_1 + 0x58);
    *puVar5 = uVar3;
    thunk_FUN_01b4f09c(puVar5,uVar3);
    lVar2 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_0391fedc(lVar2,0);
    if (lVar2 != 0) {
      lVar2 = FUN_0391fab4(lVar2,0);
      plVar6 = (long *)(param_1 + 0x60);
      *plVar6 = lVar2;
      thunk_FUN_01b4f09c(plVar6,lVar2);
      if (*plVar6 != 0) {
        FUN_0392316c(*plVar6,*(undefined8 *)
                              Field_<PrivateImplementationDetails>_7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696
                     ,0);
        lVar7 = *(long *)(param_1 + 0x60);
        lVar2 = FUN_0391c27c(param_1,0);
        if ((lVar2 != 0) && (FUN_03928d34(lVar2,0), lVar7 != 0)) {
          FUN_03928dd4(lVar7,0);
          lVar7 = *(long *)(param_1 + 0x60);
          lVar2 = FUN_0391c27c(param_1,0);
          if ((lVar2 != 0) && (FUN_039274a0(lVar2,0), lVar7 != 0)) {
            FUN_03928f54(lVar7,0);
            if (*(char *)(param_1 + 0x50) != '\0') {
              lVar2 = FUN_0391c27c(param_1,0);
              if ((*(long *)(param_1 + 0x28) == 0) ||
                 (uVar3 = FUN_0391c27c(*(long *)(param_1 + 0x28),0), lVar2 == 0)) goto LAB_01c3b2fc;
              FUN_039294c8(lVar2,uVar3,0);
            }
            puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            uVar3 = *(undefined8 *)(param_1 + 0x20);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar4 = FUN_03923030(uVar3,0);
            if ((uVar4 & 1) == 0) {
              uVar3 = *(undefined8 *)(param_1 + 0x28);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar4 = FUN_03923030(uVar3,0);
              lVar2 = *plVar6;
              if ((uVar4 & 1) == 0) {
                if (lVar2 != 0) {
                  uVar3 = *puVar5;
                  goto LAB_01c3b2e8;
                }
              }
              else if ((*(long *)(param_1 + 0x28) != 0) &&
                      (uVar3 = FUN_0391c27c(*(long *)(param_1 + 0x28),0), lVar2 != 0)) {
LAB_01c3b2e8:
                FUN_039294c8(lVar2,uVar3,0);
                return;
              }
            }
            else {
              lVar2 = *plVar6;
              if (lVar2 != 0) {
                uVar3 = *(undefined8 *)(param_1 + 0x20);
                goto LAB_01c3b2e8;
              }
            }
          }
        }
      }
    }
  }
LAB_01c3b2fc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


