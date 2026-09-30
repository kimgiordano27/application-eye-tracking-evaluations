/*
FUNCTION_NAME: FUN_070c4be4
ENTRY_POINT: 070c4be4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_070c4be4(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_07a5a938 & 1) == 0) {
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Bcpg_Sig_SignerUserId_TypeInfo);
    FUN_031f20f4(OVRManager_EventListener_TypeInfo);
    FUN_031f20f4(System_Linq_Expressions_SimpleBinaryExpression_TypeInfo);
    FUN_031f20f4(OVRManager_MrcCameraType_TypeInfo);
    FUN_031f20f4(OVRHand_Hand_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d76c8);
    DAT_07a5a938 = 1;
  }
  if (*(long *)(param_1 + 0x4c0) != 0) {
    lVar1 = FUN_047af170(*(long *)(param_1 + 0x4c0),param_2,*(undefined8 *)PTR_DAT_075d76c8);
    if ((*(long *)(param_1 + 0x4b8) != 0) &&
       (uVar2 = FUN_047af170(*(long *)(param_1 + 0x4b8),param_2,*(undefined8 *)OVRHand_Hand_TypeInfo
                            ), lVar1 != 0)) {
      uVar3 = FUN_06fc1e14(lVar1,0);
      if (((uVar3 & 1) == 0) || ((param_2 == param_3 || (*(char *)(param_1 + 0x4e8) == '\0')))) {
        return;
      }
      *(undefined1 *)(param_1 + 0x4d9) = 1;
      if (*(long *)(param_1 + 0x4c0) != 0) {
        FUN_047b0b9c(*(long *)(param_1 + 0x4c0),param_2,
                     *(undefined8 *)System_Linq_Expressions_SimpleBinaryExpression_TypeInfo);
        if (*(long *)(param_1 + 0x4c0) != 0) {
          FUN_047b0178(*(long *)(param_1 + 0x4c0),param_3,lVar1,
                       *(undefined8 *)
                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Bcpg_Sig_SignerUserId_TypeInfo);
          if (*(long *)(param_1 + 0x4b8) != 0) {
            FUN_047b0b9c(*(long *)(param_1 + 0x4b8),param_2,
                         *(undefined8 *)OVRManager_MrcCameraType_TypeInfo);
            if (*(long *)(param_1 + 0x4b8) != 0) {
              FUN_047b0178(*(long *)(param_1 + 0x4b8),param_3,uVar2,
                           *(undefined8 *)OVRManager_EventListener_TypeInfo);
              if (*(long *)(param_1 + 0x4a8) != 0) {
                FUN_06fcd45c(*(long *)(param_1 + 0x4a8),param_3,lVar1,0);
                FUN_06fcd45c(param_1,param_3,uVar2,0);
                *(undefined1 *)(param_1 + 0x4d9) = 0;
                if (*(char *)(param_1 + 0x4d8) != '\0') {
                  return;
                }
                FUN_070c3dcc(param_1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


