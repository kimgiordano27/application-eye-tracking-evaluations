/*
FUNCTION_NAME: FUN_02dfe974
ENTRY_POINT: 02dfe974
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_02dfe974(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
  ;
  if ((DAT_03ff0098 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0098 = 1;
  }
  lVar3 = FUN_01e8b468(param_1,*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar4 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_02dfea88;
        FUN_0395b38c(lVar4,0,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03923030(uVar6,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(uVar6,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = FUN_02dfea8c(param_1);
        FUN_03920cb0(param_1,uVar6,0);
        return;
      }
    }
    return;
  }
LAB_02dfea88:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


