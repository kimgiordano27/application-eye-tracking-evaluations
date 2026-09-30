/*
FUNCTION_NAME: UnityEngine.UI.Selectable$$set_image
ENTRY_POINT: 0277893c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UI_Selectable__set_image(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x25;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uStack0000000000000040 = param_1;
  FUN_02779754();
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  if ((unaff_x25 != 0) && (*(long *)(unaff_x25 + 0x18) != 0)) {
    FUN_01282738(*(long *)(unaff_x25 + 0x18),0,0,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                );
    uVar1 = in_stack_00000090;
    if (*(long *)(unaff_x25 + 0x20) != 0) {
      FUN_01282738(*(long *)(unaff_x25 + 0x20),in_stack_00000090 & 0xffffffff,0,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
      lVar2 = *(long *)(unaff_x25 + 0x18);
      if (lVar2 != 0) {
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_01344298(&stack0x00000070,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),0,
                     0,*(undefined8 *)
                        Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
        in_stack_00000010[1] = in_stack_00000078;
        *in_stack_00000010 = in_stack_00000070;
        lVar2 = *(long *)(unaff_x25 + 0x20);
        if (lVar2 != 0) {
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          FUN_01344298(&stack0x00000020,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                       uVar1 & 0xffffffff,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
          in_stack_00000018[1] = in_stack_00000028;
          *in_stack_00000018 = in_stack_00000020;
          if (unaff_x19 != 0) {
            *(long *)(unaff_x19 + 0x50) = unaff_x25;
            uVar4 = unaff_x28[1];
            uVar3 = *unaff_x28;
            *(undefined8 *)(unaff_x19 + 0x28) = in_stack_000000b8;
            *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
            *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
            *(undefined8 *)(unaff_x19 + 0x40) = in_stack_000000a0;
            *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000098;
            *(ulong *)(unaff_x19 + 0x30) = in_stack_00000090;
            *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x29 + 0x60);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


