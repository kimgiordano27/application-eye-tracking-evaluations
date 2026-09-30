/*
FUNCTION_NAME: UnityEngine.UIElements.ResolvedStyleAccess$$get_unityEditorTextRenderingMode
ENTRY_POINT: 06a18430
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UIElements_ResolvedStyleAccess__get_unityEditorTextRenderingMode(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  puVar4 = Method_Unity_Properties_ContainerPropertyBag<Vector2>_AddProperty<float>__;
  puVar2 = Method_Unity_Properties_ContainerPropertyBag<Translate>__ctor__;
  puVar3 = Method_Unity_Properties_ContainerPropertyBag<Translate>_AddProperty<float>__;
  if (*(long *)(unaff_x22 + 8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(unaff_x22 + 0x80);
  }
  auVar6 = FUN_03b26740(*(long *)(unaff_x22 + 8),uVar5,0,*unaff_x26);
  auVar7 = FUN_03b26b6c(*(undefined8 *)(unaff_x22 + 0x10),*(undefined4 *)(unaff_x22 + 0x80),0,
                        *unaff_x25);
  auVar8 = FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0x18),*(undefined4 *)(unaff_x22 + 0x80),0,
                        *unaff_x20);
  auVar9 = FUN_03b26b24(*(undefined8 *)(unaff_x22 + 0x20),*(undefined4 *)(unaff_x22 + 0x80),0,
                        *unaff_x23);
  puVar1 = Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__;
  if (*(long *)(unaff_x22 + 0x28) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(unaff_x22 + 0x80);
  }
  auVar10 = FUN_03b268cc(*(long *)(unaff_x22 + 0x28),uVar5,0,*unaff_x20);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0x30),*(undefined4 *)(unaff_x22 + 0x80),0,*unaff_x20);
  FUN_03b2680c(*(undefined8 *)(unaff_x22 + 0x38),*(undefined4 *)(unaff_x22 + 0x80),0,
               *(undefined8 *)puVar3);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0x40),*(undefined4 *)(unaff_x22 + 0x80),0,*unaff_x20);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0x48),*(undefined4 *)(unaff_x22 + 0x80),0,*unaff_x20);
  FUN_03b268c0(*(undefined8 *)(unaff_x22 + 0x50),*(undefined4 *)(unaff_x22 + 0x80),0,
               *(undefined8 *)puVar4);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0x58),*(undefined4 *)(unaff_x22 + 0x80),0,*unaff_x20);
  FUN_03b268c0(*(undefined8 *)(unaff_x22 + 0x60),*(undefined4 *)(unaff_x22 + 0x80),0,
               *(undefined8 *)puVar4);
  FUN_03b268cc(0,0,0,*unaff_x20);
  FUN_03b268cc(0,0,0,*unaff_x20);
  FUN_03b26818(*(undefined8 *)(unaff_x22 + 0x78),*(undefined4 *)(unaff_x22 + 0x80),0,
               *(undefined8 *)puVar2);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0x88),*(undefined4 *)(unaff_x22 + 0x90),0,*unaff_x20);
  puVar3 = Method_Unity_Properties_ContainerPropertyBag<Vector2>__ctor__;
  if (*(long *)(unaff_x22 + 0x98) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(unaff_x22 + 0x80);
  }
  FUN_03b26950(*(long *)(unaff_x22 + 0x98),uVar5,0,*(undefined8 *)puVar1);
  puVar2 = Method_Unity_Properties_ContainerPropertyBag<Translate>_AddProperty<Length>__;
  if (*(long *)(unaff_x22 + 0xa0) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(unaff_x22 + 0x80);
  }
  FUN_03b26950(*(long *)(unaff_x22 + 0xa0),uVar5,0,*(undefined8 *)puVar1);
  FUN_03b268cc(0,0,0,*unaff_x20);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0xb8),*(undefined4 *)(unaff_x22 + 0xd0),0,*unaff_x20);
  FUN_03b268c0(*(undefined8 *)(unaff_x22 + 0xc0),*(undefined4 *)(unaff_x22 + 0xd0),0,
               *(undefined8 *)puVar4);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 200),*(undefined4 *)(unaff_x22 + 0xd0),0,*unaff_x20);
  FUN_03b26af4(*(undefined8 *)(unaff_x22 + 0xd8),*(undefined4 *)(unaff_x22 + 0xe0),0,
               *(undefined8 *)puVar3);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0xe8),*(undefined4 *)(unaff_x22 + 0xf0),0,*unaff_x20);
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0xf8),*(undefined4 *)(unaff_x22 + 0x110),0,*unaff_x20);
  if (*(long *)(unaff_x22 + 0x100) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(unaff_x22 + 0x110);
  }
  FUN_03b26800(*(long *)(unaff_x22 + 0x100),uVar5,0,*(undefined8 *)puVar2);
  if (*(long *)(unaff_x22 + 0x100) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(unaff_x22 + 0x110);
  }
  FUN_03b268cc(*(undefined8 *)(unaff_x22 + 0x108),uVar5,0,*unaff_x20);
  in_stack_00000190 = in_stack_00000180;
  in_stack_00000198 = in_stack_00000178;
  _in_stack_000001a0 = auVar6;
  _in_stack_000001b0 = auVar7;
  _in_stack_000001c0 = auVar8;
  _in_stack_000001d0 = auVar9;
  _in_stack_000001e0 = auVar10;
  if (in_stack_00000188 != 0) {
    (**(code **)(in_stack_00000188 + 0x18))
              (*(undefined8 *)(in_stack_00000188 + 0x40),&stack0x00000190,in_stack_00000010,
               in_stack_00000018,*(undefined8 *)(in_stack_00000188 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


