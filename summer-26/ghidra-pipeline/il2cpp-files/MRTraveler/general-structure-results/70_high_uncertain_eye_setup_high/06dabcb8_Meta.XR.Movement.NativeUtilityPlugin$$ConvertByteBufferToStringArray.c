/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin$$ConvertByteBufferToStringArray
ENTRY_POINT: 06dabcb8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_Movement_NativeUtilityPlugin__ConvertByteBufferToStringArray(uint param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((DAT_09419af1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8fac8);
    DAT_09419af1 = 1;
  }
  lVar2 = 0;
  if (((((~param_1 & 0xc00) != 0) && ((param_1 & 0xf000) != 0xf000)) && ((param_1 & 0x60000) != 0))
     && ((0xffdfffff < param_1 && ((param_1 & 0x180000) != 0x80000)))) {
    uVar1 = param_1 >> 4 & 0xf;
    lVar2 = 0;
    if ((uVar1 < 0xd) && ((1 << (ulong)uVar1 & 0x11f1U) != 0)) {
      lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8fac8);
      FUN_07145224(lVar2,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      *(uint *)(lVar2 + 0x3c) = param_1;
    }
  }
  return lVar2;
}


