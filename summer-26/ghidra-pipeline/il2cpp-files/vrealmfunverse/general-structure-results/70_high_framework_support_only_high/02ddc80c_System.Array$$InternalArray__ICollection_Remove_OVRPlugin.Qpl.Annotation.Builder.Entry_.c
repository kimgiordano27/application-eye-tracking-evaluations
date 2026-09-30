/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 02ddc80c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x23;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x23 + 0x520);
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313fe0);
    FUN_02b3c81c(PTR_DAT_06312cb0);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_0631b8a0);
    FUN_02b3c81c(PTR_DAT_0631b8a8);
    *(undefined1 *)(unaff_x20 + 0xa88) = 1;
  }
  puVar6 = (undefined8 *)(unaff_x19 + 0x28);
  uVar7 = *puVar6;
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = PTR_DAT_06312cb0;
  uVar3 = FUN_05c8e378(uVar7,0,0);
  puVar2 = PTR_DAT_0631b8a8;
  if ((uVar3 & 1) != 0) {
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_05c8d47c(lVar4,*(undefined8 *)puVar2,0);
    if (lVar4 == 0) goto LAB_02ddc9dc;
    lVar5 = FUN_05c8c8e0(lVar4,0);
    uVar7 = FUN_05c89340();
    if (lVar5 == 0) goto LAB_02ddc9dc;
    FUN_05c9ca60(lVar5,uVar7,0);
    uVar7 = FUN_031d8020(lVar4,*(undefined8 *)PTR_DAT_06313fe0);
    *puVar6 = uVar7;
    uVar7 = thunk_FUN_02bb0e9c(puVar6,uVar7);
    FUN_02ddcb28(uVar7,*puVar6);
  }
  puVar6 = (undefined8 *)(unaff_x19 + 0x30);
  uVar7 = *puVar6;
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_05c8e378(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_05c8d47c(lVar4,*(undefined8 *)PTR_DAT_0631b8a0,0);
  if (lVar4 != 0) {
    lVar5 = FUN_05c8c8e0(lVar4,0);
    uVar7 = FUN_05c89340();
    if (lVar5 != 0) {
      FUN_05c9ca60(lVar5,uVar7,0);
      uVar7 = FUN_031d8020(lVar4,*(undefined8 *)PTR_DAT_06313fe0);
      *puVar6 = uVar7;
      uVar7 = thunk_FUN_02bb0e9c(puVar6,uVar7);
      FUN_02ddcb28(uVar7,*puVar6);
      return;
    }
  }
LAB_02ddc9dc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


