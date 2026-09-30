/*
FUNCTION_NAME: UnityEngine.InputSystem.LowLevel.InputEventBuffer.Enumerator$$get_Current
ENTRY_POINT: 020d6f60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_InputSystem_LowLevel_InputEventBuffer_Enumerator__get_Current(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar12;
  long unaff_x25;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong in_d3;
  float fVar22;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x21 + 0xf84) = 1;
  in_stack_00000198 = 0;
  in_stack_000001a0 = 0;
  in_stack_00000190 = 0;
  *(undefined8 *)(unaff_x25 + 0x54) = 0;
  *(undefined8 *)(unaff_x25 + 0x4c) = 0;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_149__;
  puVar5 = System_Func<Attribute,_bool>_TypeInfo;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  if (*(int *)(unaff_x20 + 0x1c) == 2) {
    uVar8 = FUN_010c3404();
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    puVar5 = Method_System_Collections_Generic_Dictionary<LocomotionSystem,_Pose>__ctor__;
    if (lVar9 == 0) goto LAB_020d7384;
    FUN_01320f6c(lVar9,uVar8,*(undefined8 *)StringLiteral_9461);
    lVar10 = *(long *)puVar5;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar5;
    }
    puVar4 = PTR_DAT_033f0890;
    lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar5;
      }
      uVar8 = **(undefined8 **)(lVar10 + 0xb8);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar12 == 0) goto LAB_020d7384;
      FUN_0136b58c(lVar12,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputControlList_Enumerator<object>_get_Current__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = lVar12;
    }
    FUN_0132478c(lVar9,lVar12,*(undefined8 *)System_Text_Latin1Encoding_TypeInfo);
    puVar1 = (undefined8 *)PTR_DAT_033f3a18;
    puVar2 = (undefined8 *)Oculus_Interaction_UnityCanvas_CanvasCylinder_TypeInfo;
    puVar3 = (undefined8 *)
             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo;
  }
  else {
    if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_149__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03780f8c == '\0') {
      thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_149__);
      DAT_03780f8c = '\x01';
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar9 = *(long *)puVar4;
    }
    lVar9 = **(long **)(lVar9 + 0xb8);
    puVar1 = (undefined8 *)PTR_DAT_033f3a18;
    puVar2 = (undefined8 *)Oculus_Interaction_UnityCanvas_CanvasCylinder_TypeInfo;
    puVar3 = (undefined8 *)
             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo;
  }
  PTR_DAT_033f3a18 = (undefined *)puVar1;
  Oculus_Interaction_UnityCanvas_CanvasCylinder_TypeInfo = (undefined *)puVar2;
  System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo =
       (undefined *)puVar3;
  if (lVar9 != 0) {
    FUN_01323390(lVar9,&stack0x00000090,*(undefined8 *)PTR_DAT_033f5378);
    puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    in_stack_00000198 = in_stack_00000098;
    in_stack_00000190 = in_stack_00000090;
    in_stack_000001a0 = in_stack_000000a0;
    while( true ) {
      do {
        uVar11 = FUN_012b894c(&stack0x00000190,*puVar1);
        if ((uVar11 & 1) == 0) {
          FUN_012b8948(&stack0x00000190,*(undefined8 *)StringLiteral_8154);
          return;
        }
        lVar9 = FUN_00c59f9c(&stack0x00000190,*puVar3);
        uVar6 = FUN_0268cec4(*(undefined4 *)(unaff_x20 + 0x38),0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = FUN_0268fd4c(lVar9,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar7 = FUN_0268ac68(lVar10,0);
      } while (((1 << (ulong)(uVar7 & 0x1f) & uVar6) == 0) ||
              (uVar11 = FUN_020d4e6c(lVar9,*(undefined4 *)(unaff_x20 + 0x18)), (uVar11 & 1) == 0));
      lVar10 = FUN_0268fd10(lVar9,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar18 = (ulong)*(uint *)(lVar9 + 0x28);
      uVar20 = (ulong)*(uint *)(lVar9 + 0x2c);
      uVar8 = FUN_026a0e4c(*(undefined4 *)(lVar9 + 0x24),lVar10,0);
      uVar11 = uVar18;
      uVar21 = uVar20;
      lVar10 = FUN_0268fd10(lVar9,0);
      if (lVar10 == 0) break;
      fVar13 = (float)FUN_026a125c(lVar10,0);
      fVar17 = (float)uVar11;
      fVar19 = (float)uVar21;
      fVar22 = *(float *)(lVar9 + 0x18);
      fVar14 = *(float *)(lVar9 + 0x1c);
      fVar15 = *(float *)(lVar9 + 0x20);
      *(undefined8 *)(unaff_x25 + 0x54) = 0;
      *(undefined8 *)(unaff_x25 + 0x4c) = 0;
      in_stack_00000168 = 0;
      in_stack_00000160 = 0;
      in_stack_00000178 = 0;
      in_stack_00000170 = 0;
      in_stack_00000148 = 0;
      in_stack_00000140 = 0;
      in_stack_00000158 = 0;
      in_stack_00000150 = 0;
      in_stack_00000138 = 0;
      in_stack_00000130 = 0;
      FUN_0263fda0(&stack0x00000130,5,0);
      lVar10 = FUN_0268fd10(lVar9,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar16 = FUN_0269f810(lVar10,0);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(puVar5);
        DAT_03774e1c = '\x01';
      }
      FUN_02693870(&stack0x00000090,uVar8,uVar18,uVar20,uVar16,uVar11,uVar21,in_d3,0);
      in_stack_00000108 = in_stack_000000a8;
      in_stack_00000100 = in_stack_000000a0;
      in_stack_00000118 = in_stack_000000b8;
      in_stack_00000110 = in_stack_000000b0;
      in_stack_000000f8 = in_stack_00000098;
      in_stack_000000f0 = in_stack_00000090;
      in_stack_00000128 = in_stack_000000c8;
      in_stack_00000120 = in_stack_000000c0;
      FUN_0263fd6c(&stack0x00000130,&stack0x000000f0,0);
      in_d3 = (ulong)(uint)fVar15;
      FUN_0263fd8c(ABS(fVar13) * fVar22,ABS(fVar17) * fVar14,ABS(fVar19) * fVar15,&stack0x00000130,0
                  );
      FUN_0263fda8(&stack0x00000130,*(undefined4 *)(lVar9 + 0x30),0);
      lVar9 = *unaff_x19;
      memcpy(&stack0x00000090,&stack0x00000130,0x5c);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      memcpy(&stack0x00000030,&stack0x00000090,0x5c);
      FUN_00c5a0a4(lVar9,&stack0x00000030,*puVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_020d7384:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


