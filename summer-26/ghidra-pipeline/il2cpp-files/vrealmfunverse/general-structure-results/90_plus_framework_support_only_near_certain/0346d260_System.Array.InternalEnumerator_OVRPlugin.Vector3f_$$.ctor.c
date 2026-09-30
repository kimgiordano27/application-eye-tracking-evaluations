/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 0346d260
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_Vector3f>___ctor(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x22;
  ulong uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_02b76274();
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  iVar2 = thunk_FUN_02b4ba0c();
  if (1 < iVar2) {
    thunk_FUN_02ba3594(&DAT_0644b458);
    uVar5 = thunk_FUN_02b79644();
    uVar6 = thunk_FUN_02ba3594(&DAT_064a6d10);
    FUN_04d8cc78(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5);
  }
  uVar3 = FUN_04d941cc();
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000030,
             (void *)((long)unaff_x22 + uVar8 * *(uint *)(*unaff_x22 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x22 + 0x104));
      in_stack_00000028 = in_stack_00000038;
      in_stack_00000020 = in_stack_00000030;
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar7);
      }
      uVar4 = thunk_FUN_04dd5180();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


