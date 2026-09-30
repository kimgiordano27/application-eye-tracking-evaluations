/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03f24654
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__IndexOf<OVRPlugin_Qpl_Annotation>(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined4 unaff_w25;
  undefined8 *puVar5;
  
  FUN_069b3780();
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w25;
  puVar5 = (undefined8 *)(unaff_x20 + 0xb0);
  *puVar5 = unaff_x24;
  thunk_FUN_0329bf60(puVar5);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x23;
  thunk_FUN_0329bf60();
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x22;
  *(undefined4 *)(unaff_x20 + 0x1c) = 1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x20 + 0x20));
  *(undefined1 *)(unaff_x20 + 0x2a) = 1;
  *unaff_x21 = *puVar5;
  thunk_FUN_0329bf60();
  lVar2 = *(long *)(unaff_x19 + 0x38);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = unaff_x20;
        thunk_FUN_0329bf60(plVar4);
      }
      else {
        FUN_047af440();
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_069af73c();
        return *(undefined8 *)(unaff_x19 + 0x30);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


