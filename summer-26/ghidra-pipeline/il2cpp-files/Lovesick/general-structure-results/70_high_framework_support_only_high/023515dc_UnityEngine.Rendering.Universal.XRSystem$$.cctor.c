/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.XRSystem$$.cctor
ENTRY_POINT: 023515dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
UnityEngine_Rendering_Universal_XRSystem___cctor
          (undefined1 param_1 [16],ulong param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  int in_w8;
  long lVar14;
  undefined8 uVar15;
  int unaff_w21;
  undefined8 unaff_x24;
  long unaff_x28;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long lStack0000000000000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d0;
  long in_stack_000000d8;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  
  while (puVar6 = Method_System_Collections_Generic_List<Grabbable>_Contains__,
        puVar4 = PTR_DAT_033f3268, unaff_w21 = unaff_w21 + 1, unaff_w21 < in_w8) {
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    if (lVar11 == 0) goto LAB_02351814;
    FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033ee588);
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                 UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    if (lVar14 == 0) goto LAB_02351814;
    FUN_01320e50(lVar14,*(undefined8 *)PTR_DAT_033f6e48);
    if (in_stack_00000040 == 0) {
      lStack0000000000000050 = 0;
    }
    else {
      lStack0000000000000050 =
           thunk_FUN_00d62348(*(undefined8 *)
                               UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
      if (lStack0000000000000050 == 0) goto LAB_02351814;
      FUN_01320e50(lStack0000000000000050,*(undefined8 *)PTR_DAT_033f6e48);
    }
    FUN_0132138c(unaff_x28,unaff_w21,&stack0x000000a0,*(undefined8 *)puVar6);
    puVar4 = 
    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
    ;
    if (in_stack_00000020 == 0) goto LAB_02351814;
    FUN_0132138c(in_stack_00000020,in_stack_000000a0,&stack0x000000a0,
                 *(undefined8 *)
                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                );
    puVar5 = OVRManager_XrApi_TypeInfo;
    FUN_00ca0af8(lVar11,in_stack_000000a0,*(undefined8 *)OVRManager_XrApi_TypeInfo);
    FUN_0132138c(unaff_x28,unaff_w21,&stack0x000000a0,*(undefined8 *)puVar6);
    FUN_0132138c(in_stack_00000020,in_stack_000000a0._4_4_,&stack0x000000a0,*(undefined8 *)puVar4);
    FUN_00ca0af8(lVar11,in_stack_000000a0,*(undefined8 *)puVar5);
    FUN_00ca0af8(lVar11,in_stack_00000038,*(undefined8 *)puVar5);
    FUN_0132138c(unaff_x28,unaff_w21,&stack0x000000a0,*(undefined8 *)puVar6);
    puVar4 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
    if (in_stack_00000030 == 0) goto LAB_02351814;
    FUN_01299bc0(in_stack_00000030,&stack0x000000a0,(long)&stack0x000000e8 + 4,
                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    puVar5 = StringLiteral_4747;
    FUN_00ac20f0(lVar14,uStack00000000000000ec,*(undefined8 *)StringLiteral_4747);
    FUN_0132138c(unaff_x28,unaff_w21,&stack0x000000a0,*(undefined8 *)puVar6);
    in_stack_000000a0 = CONCAT44(in_stack_000000a0._4_4_,in_stack_000000a0._4_4_);
    FUN_01299bc0(in_stack_00000030,&stack0x000000a0,(long)&stack0x000000e8 + 4,*(undefined8 *)puVar4
                );
    FUN_00ac20f0(lVar14,uStack00000000000000ec,*(undefined8 *)puVar5);
    FUN_00ac20f0(lVar14,*(undefined4 *)(in_stack_00000020 + 0x18),*(undefined8 *)puVar5);
    if (in_stack_00000040 != 0) {
      FUN_0129a9f4(in_stack_00000040,*(undefined8 *)StringLiteral_6798);
      FUN_0132138c(unaff_x28,unaff_w21,&stack0x000000a0,*(undefined8 *)puVar6);
      uVar12 = FUN_0129eff4(in_stack_00000040,&stack0x000000a0,&stack0x000000e8,
                            *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
      puVar4 = StringLiteral_4747;
      if ((uVar12 & 1) == 0) {
        if (lStack0000000000000050 == 0) goto LAB_02351814;
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = uStack00000000000000e8;
        if (lStack0000000000000050 == 0) goto LAB_02351814;
      }
      FUN_00ac20f0(lStack0000000000000050,uVar13,*(undefined8 *)StringLiteral_4747);
      FUN_0132138c(unaff_x28,unaff_w21,&stack0x000000a0,*(undefined8 *)puVar6);
      in_stack_000000a0 = CONCAT44(in_stack_000000a0._4_4_,in_stack_000000a0._4_4_);
      uVar12 = FUN_0129eff4(in_stack_00000040,&stack0x000000a0,&stack0x000000e8,
                            *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
      uVar13 = uStack00000000000000e8;
      if ((uVar12 & 1) == 0) {
        uVar13 = 0xffffffff;
      }
      FUN_00ac20f0(lStack0000000000000050,uVar13,*(undefined8 *)puVar4);
      FUN_00ac20f0(lStack0000000000000050,*(undefined4 *)(in_stack_00000020 + 0x18),
                   *(undefined8 *)puVar4);
    }
    FUN_0237620c(lVar11,&stack0x000000d8,1,0,0);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
    if ((lVar9 == 0) || (FUN_022fb2d8(lVar9,0), in_stack_000000d8 == 0)) goto LAB_02351814;
    uVar15 = FUN_01325140(in_stack_000000d8,*(undefined8 *)StringLiteral_10837);
    in_stack_00000088 = in_stack_00000028[1];
    in_stack_00000080 = *in_stack_00000028;
    in_stack_00000098 = in_stack_00000028[3];
    in_stack_00000090 = in_stack_00000028[2];
    uVar13 = *(undefined4 *)(in_stack_00000058 + 0x48);
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    FUN_022eff30(&stack0x000000a0,&stack0x00000080,0);
    uVar1 = *(undefined4 *)(in_stack_00000058 + 0x18);
    uVar2 = *(undefined4 *)(in_stack_00000058 + 0x54);
    cVar3 = *(char *)(in_stack_00000058 + 0x4c);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    if (lVar10 == 0) goto LAB_02351814;
    in_stack_00000068 = in_stack_000000a8;
    in_stack_00000060 = in_stack_000000a0;
    in_stack_00000078 = in_stack_000000b8;
    in_stack_00000070 = in_stack_000000b0;
    param_2 = in_stack_000000b0;
    FUN_022f986c(lVar10,uVar15,uVar13,&stack0x00000060,uVar1,uVar2,0xffffffff,cVar3 != '\0');
    *(long *)(lVar9 + 0x10) = lVar10;
    *(long *)(lVar9 + 0x18) = lVar11;
    *(long *)(lVar9 + 0x20) = lVar14;
    *(long *)(lVar9 + 0x28) = lStack0000000000000050;
    FUN_00ca11d0(in_stack_00000048,lVar9,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
    unaff_x24 = in_stack_00000048;
    in_w8 = *(int *)(unaff_x28 + 0x18);
  }
  FUN_022fad74(unaff_x24,in_stack_00000020,in_stack_00000010,in_stack_00000030,in_stack_00000040,0);
  FUN_02310a38(in_stack_00000018,in_stack_00000020,0,0);
  FUN_0230f6a8(in_stack_00000018,in_stack_00000010,0);
  FUN_0230ff4c(in_stack_00000018,in_stack_00000030,0);
  FUN_02310070(in_stack_00000018,in_stack_00000040,0);
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar4;
  }
  puVar6 = StringLiteral_5105;
  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
  if (lVar14 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar4;
    }
    uVar15 = **(undefined8 **)(lVar11 + 0xb8);
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar14 == 0) {
LAB_02351814:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar14,uVar15,
                 *(undefined8 *)
                  Method_System_Linq_Enumerable_LastOrDefault<__Il2CppFullySharedGenericType>__,0);
    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = lVar14;
  }
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpminq_u16__;
  puVar7 = Method_UnityEngine_UIElements_StyleDataRef<TransitionData>_CopyFrom__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_MoveNext__;
  puVar6 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_AddCallback__
  ;
  puVar4 = PTR_DAT_033f5998;
  uVar15 = FUN_010dcdb8(unaff_x24,lVar14,
                        *(undefined8 *)
                         Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                       );
  uVar15 = FUN_010df6b8(uVar15,*(undefined8 *)puVar7);
  FUN_01323390(unaff_x24,&stack0x000000a0,*(undefined8 *)puVar6);
  in_stack_000000c8 = in_stack_000000a8;
  in_stack_000000c0 = in_stack_000000a0;
  in_stack_000000d0 = in_stack_000000b0;
  while( true ) {
    fVar18 = (float)param_2;
    uVar12 = FUN_012b894c(&stack0x000000c0,*(undefined8 *)puVar4);
    if ((uVar12 & 1) == 0) {
      FUN_012b8948(&stack0x000000c0,*(undefined8 *)puVar5);
      FUN_0234ee30(in_stack_00000018,in_stack_00000058);
      return uVar15;
    }
    lVar11 = FUN_00ca18d0(&stack0x000000c0,*(undefined8 *)puVar8);
    if (lVar11 == 0) break;
    lVar11 = *(long *)(lVar11 + 0x10);
    fVar16 = (float)FUN_02302c7c(in_stack_00000018,in_stack_00000058,0);
    fVar21 = param_3;
    fVar19 = fVar18;
    fVar17 = (float)FUN_02302c7c(in_stack_00000018,lVar11,0);
    fVar20 = param_3 * fVar21;
    param_2 = (ulong)(uint)fVar20;
    param_3 = fVar21;
    if (fVar20 + fVar16 * fVar17 + fVar18 * fVar19 < 0.0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_022fa1b4(lVar11,0);
      param_3 = fVar21;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


