/*
FUNCTION_NAME: FUN_01cb8778
ENTRY_POINT: 01cb8778
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_4
*/


undefined8 FUN_01cb8778(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  if ((DAT_03feda27 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakAsync>d__66_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda27 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar5 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar5;
    if (lVar6 == 0) goto LAB_01cb8910;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_01cb8910;
    uVar4 = *(undefined8 *)(lVar6 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(long *)(lVar6 + 0x30) != 0) &&
     (lVar2 = FUN_0391fab4(*(long *)(lVar6 + 0x30),0), lVar2 != 0)) {
    iVar1 = FUN_0392a654(lVar2,0);
    if (iVar1 <= iVar5) {
      return 0;
    }
    if (((*(long *)(lVar6 + 0x30) != 0) &&
        (lVar6 = FUN_0391fab4(*(long *)(lVar6 + 0x30),0), lVar6 != 0)) &&
       (lVar6 = FUN_0392a9fc(lVar6,*(undefined4 *)(param_1 + 0x30),0), lVar6 != 0)) {
      lVar6 = FUN_01e8a9f8(lVar6,*(undefined8 *)
                                  Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakAsync>d__66_System_Collections_IEnumerator_Reset__
                          );
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_0391f968(lVar6,0,0);
      if ((uVar3 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 2;
        return 1;
      }
      if (lVar6 != 0) {
        uVar4 = FUN_03900d8c(lVar6,0);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar4);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
  }
LAB_01cb8910:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


