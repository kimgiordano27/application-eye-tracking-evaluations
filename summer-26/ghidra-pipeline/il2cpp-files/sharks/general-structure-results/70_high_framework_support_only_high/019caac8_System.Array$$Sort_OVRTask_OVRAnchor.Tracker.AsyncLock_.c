/*
FUNCTION_NAME: System.Array$$Sort<OVRTask<OVRAnchor.Tracker.AsyncLock>>
ENTRY_POINT: 019caac8
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


int System_Array__Sort<OVRTask<OVRAnchor_Tracker_AsyncLock>>(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  ulong uVar6;
  ulong unaff_x21;
  undefined8 unaff_x22;
  int iVar7;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  ulong in_stack_00000008;
  
  uVar6 = 0;
  iVar7 = 0;
  do {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      param_2 = *unaff_x26;
    }
    lVar4 = *(long *)(*(long *)(param_2 + 0xb8) + 0x48);
    if (lVar4 == 0) goto LAB_019cac14;
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    lVar4 = *(long *)(lVar4 + uVar6 * 8 + 0x20);
    if (lVar4 != 0) {
      if (unaff_w28 == 0) {
        if (unaff_w29 == 0) {
          if ((*(long *)(lVar4 + 0x30) != 0) &&
             (uVar2 = OVRPlugin__SetHandNodePoseStateLatency(unaff_x22,*(long *)(lVar4 + 0x30),0),
             (uVar2 & 1) != 0)) goto LAB_019cab58;
        }
        else if (*(int *)(lVar4 + 0x40) == unaff_w27) {
LAB_019cab58:
          if ((((unaff_x21 & 1) == 0) || (*(char *)(lVar4 + 0x110) != '\0')) &&
             (iVar7 = iVar7 + 1, (in_stack_00000008 & 0x100000000) != 0)) {
            if (unaff_x19 == 0) {
LAB_019cac14:
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            lVar5 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 019cab8c to 01acabf7 has its CatchHandler @ 019cab8c
                       catch() { ... } // from try @ 019cab8c with catch @ 019cab8c
                       catch() { ... } // from try @ 019cac0c with catch @ 019cab8c */
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar5 == 0) goto LAB_019cac14;
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *plVar3 = lVar4;
              thunk_FUN_0188fd20(plVar3,lVar4);
            }
            else {
              FUN_0270a444();
            }
          }
        }
      }
      else if ((*(long *)(lVar4 + 0x38) != 0) && (uVar2 = FUN_02a4fe10(), (uVar2 & 1) == 0))
      goto LAB_019cab58;
    }
    if (param_1 - 1U == uVar6) {
                    /* try { // try from 019cabf8 to 01acac0b has its CatchHandler @ 019cac20 */
                    /* try { // try from 019cac0c to 01acac37 has its CatchHandler @ 019cab8c */
      return iVar7;
    }
    param_2 = *unaff_x26;
    uVar6 = uVar6 + 1;
  } while( true );
}


