/*
FUNCTION_NAME: UnityEngine.UI.Selectable$$get_spriteState
ENTRY_POINT: 02778590
PROGRAM: Lovesick-libil2cpp.so
SCORE: 163
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_UI_Selectable__get_spriteState(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
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
  
  while( true ) {
    lVar11 = param_1;
    puVar6 = StringLiteral_302;
    puVar4 = Method_System_Collections_Generic_List<List<IntPoint>>_get_Count__;
    lVar10 = unaff_x27;
    if ((in_w10 & in_w9) == 0) {
      lVar10 = unaff_x25;
      unaff_w21 = unaff_w28;
    }
    unaff_w28 = unaff_w21;
    if (lVar11 == 0) break;
    if ((*(long *)(lVar11 + 0x18) == 0) || (*(long *)(lVar11 + 0x20) == 0)) goto LAB_02778a68;
    iVar1 = *(int *)(*(long *)(lVar11 + 0x20) + 0x28);
    unaff_w21 = *(int *)(*(long *)(lVar11 + 0x18) + 0x28) - unaff_w24;
    uVar9 = FUN_02779924(lVar11);
    in_w10 = (uint)((int)unaff_w21 < (int)unaff_w28);
    in_w9 = uVar9 & -1 < (int)(iVar1 - unaff_w23 | unaff_w21);
    param_1 = *(long *)(lVar11 + 0x28);
    unaff_x25 = lVar10;
    unaff_x27 = lVar11;
  }
  if (lVar10 == 0) {
    uVar2 = *(uint *)(unaff_x29 + 0xa8);
    uVar9 = 2;
    if (unaff_w24 <= uVar2) {
      uVar9 = unaff_w24;
    }
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661cd8(unaff_w24 <= uVar2,*(undefined8 *)puVar4,0);
    cVar3 = *(char *)(unaff_x29 + 0x10);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_Sirenix_Serialization_Serializer<Vector3>_WriteValue__);
    if (lVar10 == 0) goto LAB_02778a68;
    FUN_027797d8(lVar10,uVar9,unaff_w23,4,cVar3 != '\0');
    if (unaff_x27 != 0) {
      unaff_x20 = (long *)(unaff_x27 + 0x28);
    }
    *unaff_x20 = lVar10;
  }
  if ((*(long *)(lVar10 + 0x18) != 0) &&
     (lVar11 = *(long *)(*(long *)(lVar10 + 0x18) + 0x40), lVar11 != 0)) {
    FUN_02779618(&stack0x000000a8,lVar11,unaff_w24,unaff_w26 & 1);
    if ((*(long *)(lVar10 + 0x20) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x40), lVar11 != 0)) {
      FUN_02779618(&stack0x00000090,lVar11,unaff_w23,unaff_w26 & 1);
      puVar5 = Method_System_Collections_Generic_List<Transform>_get_Item__;
      puVar4 = WaveFormController_<HideCoroutine>d__30_TypeInfo;
      uVar9 = in_stack_000000a8._4_4_;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661cd8(uVar9 == unaff_w24,*(undefined8 *)puVar5,0);
      iVar1 = in_stack_00000090._4_4_;
      FUN_02661cd8(in_stack_00000090._4_4_ == unaff_w23,*(undefined8 *)puVar4,0);
      if ((iVar1 != unaff_w23) || (uVar9 != unaff_w24)) {
        if (in_stack_000000b0 != 0) {
          if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) goto LAB_02778a68;
          lVar11 = *(long *)(*(long *)(lVar10 + 0x18) + 0x40);
          in_stack_00000078 = in_stack_000000b0;
          in_stack_00000070 = in_stack_000000a8;
          in_stack_00000080 = in_stack_000000b8;
          if (lVar11 == 0) goto LAB_02778a68;
          in_stack_00000058 = in_stack_000000b0;
          in_stack_00000050 = in_stack_000000a8;
          in_stack_00000060 = in_stack_000000b8;
          FUN_02779754(lVar11,&stack0x00000050);
        }
        if (in_stack_00000098 != 0) {
          if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) goto LAB_02778a68;
          lVar11 = *(long *)(*(long *)(lVar10 + 0x18) + 0x40);
          in_stack_00000078 = in_stack_00000098;
          in_stack_00000070 = in_stack_00000090;
          in_stack_00000080 = in_stack_000000a0;
          if (lVar11 == 0) goto LAB_02778a68;
          in_stack_00000038 = in_stack_00000098;
          in_stack_00000030 = in_stack_00000090;
          in_stack_00000040 = in_stack_000000a0;
          FUN_02779754(lVar11,&stack0x00000030);
        }
        unaff_w23 = 0;
        uVar9 = 0;
        in_stack_00000098 = 0;
        in_stack_000000a0 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
      }
      uVar8 = in_stack_000000a8;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
        FUN_01282738(*(long *)(lVar10 + 0x18),in_stack_000000a8 & 0xffffffff,uVar9,
                     *(undefined8 *)
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                    );
        uVar7 = in_stack_00000090;
        if (*(long *)(lVar10 + 0x20) != 0) {
          FUN_01282738(*(long *)(lVar10 + 0x20),in_stack_00000090 & 0xffffffff,unaff_w23,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
          lVar11 = *(long *)(lVar10 + 0x18);
          if (lVar11 != 0) {
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_01344298(&stack0x00000070,*(undefined8 *)(lVar11 + 0x20),
                         *(undefined8 *)(lVar11 + 0x28),uVar8 & 0xffffffff,uVar9,
                         *(undefined8 *)
                          Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__)
            ;
            in_stack_00000010[1] = in_stack_00000078;
            *in_stack_00000010 = in_stack_00000070;
            lVar11 = *(long *)(lVar10 + 0x20);
            if (lVar11 != 0) {
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_01344298(&stack0x00000020,*(undefined8 *)(lVar11 + 0x20),
                           *(undefined8 *)(lVar11 + 0x28),uVar7 & 0xffffffff,unaff_w23,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
              in_stack_00000018[1] = in_stack_00000028;
              *in_stack_00000018 = in_stack_00000020;
              if (unaff_x19 != 0) {
                *(long *)(unaff_x19 + 0x50) = lVar10;
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


