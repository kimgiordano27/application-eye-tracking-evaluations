/*
FUNCTION_NAME: FUN_055215a8
ENTRY_POINT: 055215a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_055215a8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_28;
  
  if ((DAT_06bbf63a & 1) == 0) {
    FUN_02f08768(UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf63a = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_0492e7f4(*(long *)(param_1 + 0x10),param_2,&local_28,
                         *(undefined8 *)
                          UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (local_28 != 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((*(byte *)(local_28 + 0x14) >> 1 & 1) == 0) {
        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
          if (*(uint *)(local_28 + 0x10) < *(uint *)(lVar3 + 0x18)) {
            lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(local_28 + 0x10) * 8 + 0x20);
            if (lVar3 == 0) {
              return 0;
            }
            uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo;
            lVar2 = thunk_FUN_02f45174(lVar3,uVar4);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(lVar3,uVar4);
            }
            return lVar2;
          }
LAB_055216b4:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      }
      else if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
        if (*(uint *)(local_28 + 0x10) < *(uint *)(lVar3 + 0x18)) {
          return *(long *)(lVar3 + (long)(int)*(uint *)(local_28 + 0x10) * 8 + 0x20);
        }
        goto LAB_055216b4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


