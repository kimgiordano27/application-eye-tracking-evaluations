/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 05ace814
PROGRAM: vandalizer-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lVar5 = *unaff_x19;
  if (lVar5 == 0) {
LAB_05ace920:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar3 = *(uint *)(lVar5 + 0x20);
  uVar4 = *(uint *)((long)unaff_x19 + 0xc);
  do {
    uVar8 = uVar4;
    if (uVar3 <= uVar8) {
      *(uint *)((long)unaff_x19 + 0xc) = uVar3 + 1;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[6] = 0;
      goto LAB_05ace900;
    }
    lVar6 = *(long *)(lVar5 + 0x18);
    *(uint *)((long)unaff_x19 + 0xc) = uVar8 + 1;
    if (lVar6 == 0) goto LAB_05ace920;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar4 = uVar8 + 1;
  } while (*(int *)(lVar6 + (long)(int)uVar8 * 0x30 + 0x20) < 0);
  lVar6 = lVar6 + (long)(int)uVar8 * 0x30;
  uVar10 = *(undefined8 *)(lVar6 + 0x40);
  uVar9 = *(undefined8 *)(lVar6 + 0x38);
  uVar7 = *(undefined8 *)(lVar6 + 0x48);
  uVar1 = *(undefined8 *)(lVar6 + 0x28);
  uVar2 = *(undefined8 *)(lVar6 + 0x30);
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4();
  }
  in_stack_00000050 = uVar9;
  in_stack_00000058 = uVar10;
  in_stack_00000060 = uVar7;
  FUN_045d91dc(&stack0x00000020,uVar1,uVar2,&stack0x00000050,
               *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  unaff_x19[6] = in_stack_00000040;
  unaff_x19[3] = in_stack_00000028;
  unaff_x19[2] = in_stack_00000020;
  unaff_x19[5] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000030;
  thunk_FUN_0329bf60(unaff_x19 + 4,0);
LAB_05ace900:
  return uVar8 < uVar3;
}


