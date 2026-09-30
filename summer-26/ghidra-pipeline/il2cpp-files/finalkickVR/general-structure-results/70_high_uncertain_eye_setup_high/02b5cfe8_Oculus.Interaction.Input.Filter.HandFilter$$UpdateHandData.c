/*
FUNCTION_NAME: Oculus.Interaction.Input.Filter.HandFilter$$UpdateHandData
ENTRY_POINT: 02b5cfe8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_18;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_12
*/


void Oculus_Interaction_Input_Filter_HandFilter__UpdateHandData
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,MethodInfo *param_4)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  MethodInfo *in_stack_00000010;
  long in_stack_00000020;
  undefined4 uStack0000000000000034;
  byte bStack0000000000000047;
  undefined4 uStack00000000000001b4;
  float fStack00000000000001bc;
  
  uVar1 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline(param_4);
  *(undefined8 *)(in_stack_00000020 + 0x1d8) = uVar1;
  NullCheck(*(void **)(in_stack_00000020 + 0x1d8));
  uVar5 = OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                    (*(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 **)
                      (in_stack_00000020 + 0x1d8),in_stack_00000010);
  *(undefined4 *)(unaff_x29 + -0xa4) = uVar5;
  *(undefined4 *)(unaff_x29 + -0xa0) = param_2;
  *(undefined4 *)(unaff_x29 + -0x9c) = param_3;
  *(undefined8 *)(in_stack_00000020 + 0x1c8) = *(undefined8 *)(unaff_x29 + -0xa4);
  *(undefined4 *)(unaff_x29 + -0x90) = *(undefined4 *)(unaff_x29 + -0x9c);
  *(undefined4 *)(unaff_x29 + -0xa8) = *(undefined4 *)(unaff_x29 + -0x98);
  uVar1 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    (in_stack_00000010);
  *(undefined8 *)(in_stack_00000020 + 0x1b0) = uVar1;
  NullCheck(*(void **)(in_stack_00000020 + 0x1b0));
  uVar5 = OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                    (*(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 **)
                      (in_stack_00000020 + 0x1b0),in_stack_00000010);
  *(undefined4 *)(unaff_x29 + -0xcc) = uVar5;
  *(undefined4 *)(unaff_x29 + -200) = param_2;
  *(undefined4 *)(unaff_x29 + -0xc4) = param_3;
  *(undefined8 *)(in_stack_00000020 + 0x1a0) = *(undefined8 *)(unaff_x29 + -0xcc);
  *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0xc4);
  *(undefined4 *)(unaff_x29 + -0xd0) = *(undefined4 *)(unaff_x29 + -0xbc);
  uVar1 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    (in_stack_00000010);
  *(undefined8 *)(in_stack_00000020 + 0x188) = uVar1;
  NullCheck(*(void **)(in_stack_00000020 + 0x188));
  uVar5 = OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                    (*(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 **)
                      (in_stack_00000020 + 0x188),in_stack_00000010);
  *(undefined4 *)(unaff_x29 + -0xf4) = uVar5;
  *(undefined4 *)(unaff_x29 + -0xf0) = param_2;
  *(undefined4 *)(unaff_x29 + -0xec) = param_3;
  *(undefined8 *)(in_stack_00000020 + 0x178) = *(undefined8 *)(unaff_x29 + -0xf4);
  *(undefined4 *)(unaff_x29 + -0xe0) = *(undefined4 *)(unaff_x29 + -0xec);
  *(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(unaff_x29 + -0xe0);
  fVar6 = -*(float *)(unaff_x29 + -0xd0);
  fVar7 = *(float *)(unaff_x29 + -0xf8);
  HBAO__get_presets(-*(float *)(unaff_x29 + -0xa8),fVar6,fVar7,in_stack_00000010);
  *(undefined8 *)(in_stack_00000020 + 0x158) = *(undefined8 *)(in_stack_00000020 + 0x148);
  *(undefined8 *)(in_stack_00000020 + 0x150) = *(undefined8 *)(in_stack_00000020 + 0x140);
  *(undefined8 *)(in_stack_00000020 + 0x238) = *(undefined8 *)(in_stack_00000020 + 0x158);
  *(undefined8 *)(in_stack_00000020 + 0x230) = *(undefined8 *)(in_stack_00000020 + 0x150);
  *(undefined8 *)(in_stack_00000020 + 0x138) = *(undefined8 *)(in_stack_00000020 + 0x240);
  *(undefined8 *)(in_stack_00000020 + 0x128) = *(undefined8 *)(in_stack_00000020 + 0x238);
  *(undefined8 *)(in_stack_00000020 + 0x120) = *(undefined8 *)(in_stack_00000020 + 0x230);
  lVar2 = *(long *)(in_stack_00000020 + 0x138);
  uVar1 = *(undefined8 *)(in_stack_00000020 + 0x120);
  *(undefined8 *)(lVar2 + 0x14) = *(undefined8 *)(in_stack_00000020 + 0x128);
  *(undefined8 *)(lVar2 + 0xc) = uVar1;
  *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(in_stack_00000020 + 0x240);
  uVar1 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    (in_stack_00000010);
  *(undefined8 *)(in_stack_00000020 + 0x110) = uVar1;
  NullCheck(*(void **)(in_stack_00000020 + 0x110));
  uStack00000000000001b4 =
       OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline
                 (*(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 **)
                   (in_stack_00000020 + 0x110),in_stack_00000010);
  *(ulong *)(in_stack_00000020 + 0x100) = CONCAT44(fVar6,uStack00000000000001b4);
  puVar4 = *(undefined8 **)(in_stack_00000020 + 0x118);
  *puVar4 = *(undefined8 *)(in_stack_00000020 + 0x100);
  *(float *)(puVar4 + 1) = fVar7;
  *(undefined1 *)(unaff_x29 + -0x11) = 1;
  pvVar3 = *(void **)(*(long *)(in_stack_00000020 + 600) + 0x70);
  bStack0000000000000047 = *(byte *)(unaff_x29 + -0x11) & 1;
  fStack00000000000001bc = fVar7;
  NullCheck(pvVar3);
  *(byte *)((long)pvVar3 + 0x2c) = bStack0000000000000047 & 1;
  pvVar3 = *(void **)(*(long *)(in_stack_00000020 + 600) + 0x70);
  uStack0000000000000034 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(0);
  NullCheck(pvVar3);
  *(undefined4 *)((long)pvVar3 + 0x30) = uStack0000000000000034;
  return;
}


