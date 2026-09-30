/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$.cctor
ENTRY_POINT: 04fd6d0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>___cctor(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w27;
  undefined8 unaff_x28;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 04fd6d0c to 050d6d17 has its CatchHandler @ 04fd6a78 */
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04fd6c5c with catch @ 04fd6d14
                       catch(type#2 @ 00000000) { ... } // from try @ 04fd6d08 with catch @ 04fd6d14
                        */
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w27 / (int)uVar2;
    }
    uVar3 = unaff_w27 - iVar4 * uVar2;
    if (uVar3 < uVar2) {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      piVar1 = (int *)(param_1 + (ulong)uVar3 * 4 + 0x20);
      if (lVar5 == 0) goto LAB_04fd6e68;
      if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)unaff_w19 * 0x18;
        *(int *)(lVar5 + 0x20) = unaff_w27;
        *(int *)(lVar5 + 0x24) = *piVar1 + -1;
        *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
        *(undefined8 *)(lVar5 + 0x30) = unaff_x28;
        LeanTween__value();
        *piVar1 = unaff_w19 + 1;
                    /* try { // try from 04fd6d88 to 050d6de3 has its CatchHandler @ 04fd6d88
                       catch() { ... } // from try @ 04fd6d88 with catch @ 04fd6d88
                       catch() { ... } // from try @ 04fd6ea8 with catch @ 04fd6d88
                       catch() { ... } // from try @ 04fd6f30 with catch @ 04fd6d88
                       catch() { ... } // from try @ 04fd6f70 with catch @ 04fd6d88
                       catch() { ... } // from try @ 04fd6f9c with catch @ 04fd6d88
                       catch() { ... } // from try @ 04fd701c with catch @ 04fd6d88 */
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_04fd6e68:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


