/*
FUNCTION_NAME: UnityEngine.UIElements.MinMaxSlider$$UpdateDragElementPosition
ENTRY_POINT: 07ded248
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 164
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_12
*/


void UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack0000000000000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long lStack0000000000000078;
  
  lStack0000000000000078 = *(long *)(unaff_x22 + 0x28);
  if ((*(byte *)(unaff_x21 + 0x1dd) & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_Posef_TypeInfo);
    FUN_03a8a718(OVRPlugin_Quatf_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x1dd) = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  _iStack0000000000000060 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar3 = false;
    if (*(long *)(unaff_x22 + 0x28) == lStack0000000000000078) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_07ded594;
  }
  FUN_04e9b100(&stack0x00000028,*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
  in_stack_00000070 = in_stack_00000048;
  in_stack_00000058 = in_stack_00000030;
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000068 = in_stack_00000040;
  _iStack0000000000000060 = in_stack_00000038;
  in_stack_00000028 = 0;
  do {
    uVar4 = FUN_061dc36c(&stack0x00000050,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      FUN_061dc368(&stack0x00000050,*(undefined8 *)puVar1);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_07ded3cc;
      FUN_04e9de50(*(long *)(param_1 + 0x18),*(undefined8 *)OVRPlugin_Posef_TypeInfo);
      in_stack_00000028 = 0;
      goto LAB_07ded380;
    }
  } while (iStack0000000000000060 != unaff_w20);
  FUN_061dc368(&stack0x00000050,*(undefined8 *)puVar1);
LAB_07ded3b0:
  bVar3 = true;
LAB_07ded4a4:
  if (*(long *)(unaff_x22 + 0x28) == lStack0000000000000078) {
    return;
  }
LAB_07ded594:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
LAB_07ded380:
  uVar4 = FUN_061dc5b8();
  if ((uVar4 & 1) != 0) goto code_r0x07ded390;
  FUN_061dc5b4();
LAB_07ded3cc:
  if (unaff_w20 < 0x30001) {
    if (unaff_w20 == 0x10003) {
      cVar5 = *(char *)(param_1 + 0x50);
      goto LAB_07ded49c;
    }
    if (unaff_w20 == 0x30000) {
      cVar5 = *(char *)(param_1 + 0x28);
      goto LAB_07ded49c;
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if (unaff_w20 < 0x50002) {
      if (unaff_w20 == 0x3000a) {
        cVar5 = *(char *)(param_1 + 0x74);
      }
      else if (unaff_w20 == 0x50000) {
        cVar5 = *(char *)(param_1 + 0xcc);
      }
      else {
        if (unaff_w20 != 0x50001) goto LAB_07ded4a4;
        cVar5 = *(char *)(param_1 + 0xec);
      }
    }
    else if (unaff_w20 == 0x50002) {
      cVar5 = *(char *)(param_1 + 0x90);
    }
    else if (unaff_w20 == 0x50003) {
      cVar5 = *(char *)(param_1 + 0xac);
    }
    else {
      if (unaff_w20 != 0x70005) goto LAB_07ded4a4;
      cVar5 = *(char *)(param_1 + 0x104);
    }
LAB_07ded49c:
    bVar3 = cVar5 != '\0';
  }
  goto LAB_07ded4a4;
code_r0x07ded390:
  if (unaff_w20 == 0) goto code_r0x07ded39c;
  goto LAB_07ded380;
code_r0x07ded39c:
  FUN_061dc5b4();
  goto LAB_07ded3b0;
}


