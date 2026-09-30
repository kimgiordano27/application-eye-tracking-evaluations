/*
FUNCTION_NAME: UnityEngine.UI.Selectable$$set_colors
ENTRY_POINT: 0277850c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 171
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void UnityEngine_UI_Selectable__set_colors(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x19;
  undefined8 *unaff_x21;
  ulong *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long lVar17;
  uint unaff_w26;
  long lVar18;
  long *plVar19;
  long unaff_x29;
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
  
  plVar19 = (long *)StringLiteral_302;
  puVar7 = Method_Sirenix_Serialization_Serializer<Vector3>_WriteValue__;
  if (*(uint *)(unaff_x29 + 0x34) < unaff_w24) {
    FUN_02777bf8();
    lVar16 = *(long *)(unaff_x29 + 0x28);
    if (lVar16 == 0) {
      lVar18 = 0;
LAB_02778614:
      puVar7 = Method_System_Collections_Generic_List<List<IntPoint>>_get_Count__;
      uVar5 = *(uint *)(unaff_x29 + 0xa8);
      uVar11 = 2;
      if (unaff_w24 <= uVar5) {
        uVar11 = unaff_w24;
      }
      if (*(int *)(*plVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661cd8(unaff_w24 <= uVar5,*(undefined8 *)puVar7,0);
      cVar4 = *(char *)(unaff_x29 + 0x10);
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_Sirenix_Serialization_Serializer<Vector3>_WriteValue__);
      if (lVar14 == 0) goto LAB_02778a68;
      FUN_027797d8(lVar14,uVar11,unaff_w23,4,cVar4 != '\0');
      plVar1 = (long *)(unaff_x29 + 0x28);
      if (lVar18 != 0) {
        plVar1 = (long *)(lVar18 + 0x28);
      }
      *plVar1 = lVar14;
    }
    else {
      uVar11 = 0x7fffffff;
      lVar17 = 0;
      do {
        lVar18 = lVar16;
        if ((*(long *)(lVar18 + 0x18) == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto LAB_02778a68;
        iVar2 = *(int *)(*(long *)(lVar18 + 0x20) + 0x28);
        uVar5 = *(int *)(*(long *)(lVar18 + 0x18) + 0x28) - unaff_w24;
        bVar10 = FUN_02779924(lVar18);
        lVar14 = lVar18;
        if (((int)uVar5 < (int)uVar11 & bVar10 & -1 < (int)(iVar2 - unaff_w23 | uVar5)) == 0) {
          lVar14 = lVar17;
          uVar5 = uVar11;
        }
        uVar11 = uVar5;
        lVar16 = *(long *)(lVar18 + 0x28);
        lVar17 = lVar14;
      } while (*(long *)(lVar18 + 0x28) != 0);
      plVar19 = (long *)StringLiteral_302;
      if (lVar14 == 0) goto LAB_02778614;
    }
    if ((*(long *)(lVar14 + 0x18) == 0) ||
       (lVar16 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40), lVar16 == 0)) goto LAB_02778a68;
    FUN_02779618(&stack0x000000a8,lVar16,unaff_w24,unaff_w26 & 1);
    if ((*(long *)(lVar14 + 0x20) == 0) ||
       (lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0x40), lVar16 == 0)) goto LAB_02778a68;
    FUN_02779618(&stack0x00000090,lVar16,unaff_w23,unaff_w26 & 1);
  }
  else {
    lVar14 = *(long *)(unaff_x29 + 0x28);
    if (lVar14 == 0) {
      FUN_02777bf8();
    }
    else {
      uVar13 = FUN_02779514(param_1,lVar14,unaff_w24,unaff_w23,&stack0x000000a8,&stack0x00000090,
                            unaff_w26 & 1);
      while ((uVar13 & 1) == 0) {
        if (lVar14 == 0) goto LAB_02778a68;
        lVar16 = *(long *)(lVar14 + 0x28);
        if (lVar16 == 0) break;
        uVar13 = FUN_02779514(uVar13,lVar16,unaff_w24,unaff_w23,&stack0x000000a8,&stack0x00000090,
                              unaff_w26 & 1);
        lVar14 = lVar16;
      }
    }
    puVar6 = System_Threading_Timer_TimerComparer_TypeInfo;
    if (in_stack_00000090._4_4_ == 0) {
      iVar2 = *(int *)(unaff_x29 + 0x30) << 1;
      *(int *)(unaff_x29 + 0x30) = iVar2;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_01772558(iVar2,unaff_w24 << 1,0);
      *(int *)(unaff_x29 + 0x30) = (int)uVar15;
      uVar11 = FUN_01772750(uVar15,*(undefined4 *)(unaff_x29 + 0xa8),0);
      *(uint *)(unaff_x29 + 0x30) = uVar11;
      uVar12 = FUN_01772558((int)(*(float *)(unaff_x29 + 0x38) * (float)uVar11 + 0.5),unaff_w23 << 1
                            ,0);
      if (lVar14 == 0) {
        bVar9 = true;
      }
      else {
        if (lVar14 == 0) goto LAB_02778a68;
        bVar9 = *(long *)(lVar14 + 0x28) == 0;
      }
      if (*(int *)(*plVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661ba8(bVar9,0);
      uVar3 = *(undefined4 *)(unaff_x29 + 0x30);
      cVar4 = *(char *)(unaff_x29 + 0x10);
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
      if (lVar14 == 0) goto LAB_02778a68;
      FUN_027797d8(lVar14,uVar3,uVar12,4,cVar4 != '\0');
      *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(unaff_x29 + 0x28);
      *(long *)(unaff_x29 + 0x28) = lVar14;
      if ((*(long *)(lVar14 + 0x18) == 0) ||
         (lVar16 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40), lVar16 == 0)) goto LAB_02778a68;
      FUN_02779618(&stack0x000000a8,lVar16,unaff_w24,unaff_w26 & 1);
      if ((*(long *)(lVar14 + 0x20) == 0) ||
         (lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0x40), lVar16 == 0)) goto LAB_02778a68;
      FUN_02779618(&stack0x00000090,lVar16,unaff_w23,unaff_w26 & 1);
      FUN_02661ba8(in_stack_000000a8._4_4_ != 0,0);
      FUN_02661ba8(in_stack_00000090._4_4_ != 0,0);
    }
  }
  puVar6 = Method_System_Collections_Generic_List<Transform>_get_Item__;
  puVar7 = WaveFormController_<HideCoroutine>d__30_TypeInfo;
  uVar11 = in_stack_000000a8._4_4_;
  if (*(int *)(*plVar19 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02661cd8(uVar11 == unaff_w24,*(undefined8 *)puVar6,0);
  iVar2 = in_stack_00000090._4_4_;
  FUN_02661cd8(in_stack_00000090._4_4_ == unaff_w23,*(undefined8 *)puVar7,0);
  if ((iVar2 != unaff_w23) || (uVar11 != unaff_w24)) {
    if (in_stack_000000b0 != 0) {
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) goto LAB_02778a68;
      lVar16 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
      in_stack_00000078 = in_stack_000000b0;
      in_stack_00000070 = in_stack_000000a8;
      in_stack_00000080 = in_stack_000000b8;
      if (lVar16 == 0) goto LAB_02778a68;
      in_stack_00000058 = in_stack_000000b0;
      in_stack_00000050 = in_stack_000000a8;
      in_stack_00000060 = in_stack_000000b8;
      FUN_02779754(lVar16,&stack0x00000050);
    }
    if (in_stack_00000098 != 0) {
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) goto LAB_02778a68;
      lVar16 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
      in_stack_00000078 = in_stack_00000098;
      in_stack_00000070 = in_stack_00000090;
      in_stack_00000080 = in_stack_000000a0;
      if (lVar16 == 0) goto LAB_02778a68;
      in_stack_00000038 = in_stack_00000098;
      in_stack_00000030 = in_stack_00000090;
      in_stack_00000040 = in_stack_000000a0;
      FUN_02779754(lVar16,&stack0x00000030);
    }
    unaff_w23 = 0;
    uVar11 = 0;
    in_stack_00000098 = 0;
    in_stack_000000a0 = 0;
    in_stack_00000090 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000b0 = 0;
    in_stack_000000b8 = 0;
  }
  uVar13 = in_stack_000000a8;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
    FUN_01282738(*(long *)(lVar14 + 0x18),in_stack_000000a8 & 0xffffffff,uVar11,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                );
    uVar8 = in_stack_00000090;
    if (*(long *)(lVar14 + 0x20) != 0) {
      FUN_01282738(*(long *)(lVar14 + 0x20),in_stack_00000090 & 0xffffffff,unaff_w23,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
      lVar16 = *(long *)(lVar14 + 0x18);
      if (lVar16 != 0) {
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_01344298(&stack0x00000070,*(undefined8 *)(lVar16 + 0x20),*(undefined8 *)(lVar16 + 0x28),
                     uVar13 & 0xffffffff,uVar11,
                     *(undefined8 *)
                      Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
        unaff_x22[1] = in_stack_00000078;
        *unaff_x22 = in_stack_00000070;
        lVar16 = *(long *)(lVar14 + 0x20);
        if (lVar16 != 0) {
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          FUN_01344298(&stack0x00000020,*(undefined8 *)(lVar16 + 0x20),
                       *(undefined8 *)(lVar16 + 0x28),uVar8 & 0xffffffff,unaff_w23,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
          unaff_x21[1] = in_stack_00000028;
          *unaff_x21 = in_stack_00000020;
          if (unaff_x19 != 0) {
            *(long *)(unaff_x19 + 0x50) = lVar14;
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
LAB_02778a68:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


