/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 02f93bd0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 128
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_Vector3f>(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar7;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  iVar1 = thunk_FUN_02b4ba0c();
  if (1 < iVar1) {
    thunk_FUN_02ba3594(&DAT_0644b458);
    uVar4 = thunk_FUN_02b79644();
    uVar5 = thunk_FUN_02ba3594(&DAT_064a6d10);
    FUN_04d8cc78(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar4);
  }
  uVar2 = FUN_04d941cc();
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000050,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000038 = unaff_x21[1];
      in_stack_00000030 = *unaff_x21;
      in_stack_00000048 = unaff_x21[3];
      in_stack_00000040 = unaff_x21[2];
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar6);
      }
      uVar3 = thunk_FUN_04dd5180();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_02b4b9cc();
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_02b4b9cc();
  return iVar1 + -1;
}


