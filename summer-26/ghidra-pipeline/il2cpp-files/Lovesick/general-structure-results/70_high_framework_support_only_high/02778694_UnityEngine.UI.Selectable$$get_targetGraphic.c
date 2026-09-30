/*
FUNCTION_NAME: UnityEngine.UI.Selectable$$get_targetGraphic
ENTRY_POINT: 02778694
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UI_Selectable__get_targetGraphic(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  int iVar7;
  long unaff_x29;
  ulong *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  *param_1 = unaff_x25;
  if ((*(long *)(unaff_x25 + 0x18) != 0) &&
     (lVar6 = *(long *)(*(long *)(unaff_x25 + 0x18) + 0x40), lVar6 != 0)) {
    FUN_02779618(&stack0x000000a8,lVar6,unaff_w24,unaff_w26 & 1);
    if ((*(long *)(unaff_x25 + 0x20) != 0) &&
       (lVar6 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0x40), lVar6 != 0)) {
      FUN_02779618(&stack0x00000090,lVar6,unaff_w23,unaff_w26 & 1);
      puVar2 = Method_System_Collections_Generic_List<Transform>_get_Item__;
      puVar1 = WaveFormController_<HideCoroutine>d__30_TypeInfo;
      iVar7 = in_stack_000000a8._4_4_;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661cd8(iVar7 == unaff_w24,*(undefined8 *)puVar2,0);
      iVar4 = in_stack_00000090._4_4_;
      FUN_02661cd8(in_stack_00000090._4_4_ == unaff_w23,*(undefined8 *)puVar1,0);
      if ((iVar4 != unaff_w23) || (iVar7 != unaff_w24)) {
        if (in_stack_000000b0 != 0) {
          if ((unaff_x25 == 0) || (*(long *)(unaff_x25 + 0x18) == 0)) goto LAB_02778a68;
          lVar6 = *(long *)(*(long *)(unaff_x25 + 0x18) + 0x40);
          in_stack_00000078 = in_stack_000000b0;
          in_stack_00000070 = in_stack_000000a8;
          in_stack_00000080 = in_stack_000000b8;
          if (lVar6 == 0) goto LAB_02778a68;
          in_stack_00000058 = in_stack_000000b0;
          in_stack_00000050 = in_stack_000000a8;
          in_stack_00000060 = in_stack_000000b8;
          FUN_02779754(lVar6,&stack0x00000050);
        }
        if (in_stack_00000098 != 0) {
          if ((unaff_x25 == 0) || (*(long *)(unaff_x25 + 0x18) == 0)) goto LAB_02778a68;
          lVar6 = *(long *)(*(long *)(unaff_x25 + 0x18) + 0x40);
          in_stack_00000078 = in_stack_00000098;
          in_stack_00000070 = in_stack_00000090;
          in_stack_00000080 = in_stack_000000a0;
          if (lVar6 == 0) goto LAB_02778a68;
          in_stack_00000038 = in_stack_00000098;
          in_stack_00000030 = in_stack_00000090;
          in_stack_00000040 = in_stack_000000a0;
          FUN_02779754(lVar6,&stack0x00000030);
        }
        unaff_w23 = 0;
        iVar7 = 0;
        in_stack_00000098 = 0;
        in_stack_000000a0 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
      }
      uVar5 = in_stack_000000a8;
      if ((unaff_x25 != 0) && (*(long *)(unaff_x25 + 0x18) != 0)) {
        FUN_01282738(*(long *)(unaff_x25 + 0x18),in_stack_000000a8 & 0xffffffff,iVar7,
                     *(undefined8 *)
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                    );
        uVar3 = in_stack_00000090;
        if (*(long *)(unaff_x25 + 0x20) != 0) {
          FUN_01282738(*(long *)(unaff_x25 + 0x20),in_stack_00000090 & 0xffffffff,unaff_w23,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
          lVar6 = *(long *)(unaff_x25 + 0x18);
          if (lVar6 != 0) {
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_01344298(&stack0x00000070,*(undefined8 *)(lVar6 + 0x20),
                         *(undefined8 *)(lVar6 + 0x28),uVar5 & 0xffffffff,iVar7,
                         *(undefined8 *)
                          Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__)
            ;
            in_stack_00000010[1] = in_stack_00000078;
            *in_stack_00000010 = in_stack_00000070;
            lVar6 = *(long *)(unaff_x25 + 0x20);
            if (lVar6 != 0) {
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_01344298(&stack0x00000020,*(undefined8 *)(lVar6 + 0x20),
                           *(undefined8 *)(lVar6 + 0x28),uVar3 & 0xffffffff,unaff_w23,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
              in_stack_00000018[1] = in_stack_00000028;
              *in_stack_00000018 = in_stack_00000020;
              if (unaff_x19 != 0) {
                *(long *)(unaff_x19 + 0x50) = unaff_x25;
                *(undefined8 *)(unaff_x19 + 0x28) = in_stack_000000b8;
                *(ulong *)(unaff_x19 + 0x20) = in_stack_000000b0;
                *(ulong *)(unaff_x19 + 0x18) = in_stack_000000a8;
                *(undefined8 *)(unaff_x19 + 0x40) = in_stack_000000a0;
                *(ulong *)(unaff_x19 + 0x38) = in_stack_00000098;
                *(ulong *)(unaff_x19 + 0x30) = in_stack_00000090;
                *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x29 + 0x60);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02778a68:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


