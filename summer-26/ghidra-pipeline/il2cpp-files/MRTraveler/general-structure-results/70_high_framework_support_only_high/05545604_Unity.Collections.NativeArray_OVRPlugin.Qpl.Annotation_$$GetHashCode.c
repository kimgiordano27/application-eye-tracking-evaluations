/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetHashCode
ENTRY_POINT: 05545604
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetHashCode(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  long lVar3;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x26;
  int unaff_w27;
  long unaff_x29;
  
  FUN_04ac1c5c(unaff_x29 + -0x40,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28();
  }
  if (((unaff_w27 == 5) || (unaff_w27 == 0)) && ((unaff_x23 & 1) != 0)) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
      unaff_x20 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x21,unaff_x20,unaff_x22);
    uVar1 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e84e18);
    uVar1 = FUN_06f6be0c(uVar2,uVar1,0);
    thunk_FUN_03ce5214(PTR_DAT_08e71970);
    uVar2 = thunk_FUN_03cf5234();
    FUN_07100530(uVar2,uVar1,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar2);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


