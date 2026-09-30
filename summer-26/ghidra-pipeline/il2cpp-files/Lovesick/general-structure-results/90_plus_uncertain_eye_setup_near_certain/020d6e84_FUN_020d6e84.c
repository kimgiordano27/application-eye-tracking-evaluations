/*
FUNCTION_NAME: FUN_020d6e84
ENTRY_POINT: 020d6e84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_020d6e84(long param_1,long *param_2)

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
  long lVar12;
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
  undefined1 auStack_220 [96];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_03780f84 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8766);
    thunk_FUN_00d48444(StringLiteral_8154);
    thunk_FUN_00d48444(PTR_DAT_033f3a18);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                      );
    thunk_FUN_00d48444(Oculus_Interaction_UnityCanvas_CanvasCylinder_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5378);
    thunk_FUN_00d48444(System_Text_Latin1Encoding_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9461);
    thunk_FUN_00d48444(System_Func<Attribute,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_149__);
    thunk_FUN_00d48444(PTR_DAT_033f0890);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControlList_Enumerator<object>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<LocomotionSystem,_Pose>__ctor__)
    ;
    DAT_03780f84 = 1;
  }
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_149__;
  puVar5 = System_Func<Attribute,_bool>_TypeInfo;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_d4 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar8 = FUN_010c3404(param_1,*(undefined8 *)StringLiteral_8766);
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
    FUN_01323390(lVar9,&local_1c0,*(undefined8 *)PTR_DAT_033f5378);
    puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    uStack_b8 = uStack_1b8;
    local_c0 = local_1c0;
    local_b0 = local_1b0;
    while( true ) {
      do {
        uVar11 = FUN_012b894c(&local_c0,*puVar1);
        if ((uVar11 & 1) == 0) {
          FUN_012b8948(&local_c0,*(undefined8 *)StringLiteral_8154);
          return;
        }
        lVar9 = FUN_00c59f9c(&local_c0,*puVar3);
        uVar6 = FUN_0268cec4(*(undefined4 *)(param_1 + 0x38),0);
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
              (uVar11 = FUN_020d4e6c(lVar9,*(undefined4 *)(param_1 + 0x18)), (uVar11 & 1) == 0));
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
      uStack_cc = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      local_d4 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      local_120 = 0;
      FUN_0263fda0(&local_120,5,0);
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
      FUN_02693870(&local_1c0,uVar8,uVar18,uVar20,uVar16,uVar11,uVar21,in_d3,0);
      uStack_148 = uStack_1a8;
      local_150 = local_1b0;
      uStack_138 = uStack_198;
      uStack_140 = uStack_1a0;
      uStack_158 = uStack_1b8;
      local_160 = local_1c0;
      uStack_128 = uStack_188;
      local_130 = local_190;
      FUN_0263fd6c(&local_120,&local_160,0);
      in_d3 = (ulong)(uint)fVar15;
      FUN_0263fd8c(ABS(fVar13) * fVar22,ABS(fVar17) * fVar14,ABS(fVar19) * fVar15,&local_120,0);
      FUN_0263fda8(&local_120,*(undefined4 *)(lVar9 + 0x30),0);
      lVar9 = *param_2;
      memcpy(&local_1c0,&local_120,0x5c);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      memcpy(auStack_220,&local_1c0,0x5c);
      FUN_00c5a0a4(lVar9,auStack_220,*puVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_020d7384:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


