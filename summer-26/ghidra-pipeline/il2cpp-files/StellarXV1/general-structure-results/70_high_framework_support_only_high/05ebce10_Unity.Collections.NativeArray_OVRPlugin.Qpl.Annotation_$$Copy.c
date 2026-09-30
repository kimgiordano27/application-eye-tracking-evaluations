/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 05ebce10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  int iVar1;
  long lVar2;
  code *in_x9;
  long *unaff_x19;
  ulong unaff_x22;
  ulong unaff_x23;
  
  (*in_x9)();
  if ((unaff_x22 & 1) == 0) {
    return;
  }
  if ((unaff_x23 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x458))();
  }
  lVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
  FUN_074f484c(lVar2,0);
  if (unaff_x19[7] != 0) {
    if (*(long *)(unaff_x19[7] + 0xb8) != 0) {
      FUN_06791340();
    }
    if (lVar2 != 0) {
      iVar1 = FUN_074eea38(lVar2,0);
      if (0 < iVar1) {
        FUN_074d57ec(*(undefined8 *)PTR_DAT_092ba6d8,lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x05ebced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x268))();
        return;
      }
      (**(code **)(*unaff_x19 + 0x468))();
                    /* WARNING: Could not recover jumptable at 0x05ebcf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x2a8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


