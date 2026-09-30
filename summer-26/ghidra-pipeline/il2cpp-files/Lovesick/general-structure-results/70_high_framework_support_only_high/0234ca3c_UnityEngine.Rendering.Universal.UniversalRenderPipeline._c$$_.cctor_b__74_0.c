/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalRenderPipeline.<>c$$<.cctor>b__74_0
ENTRY_POINT: 0234ca3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_UniversalRenderPipeline_<>c__<_cctor>b__74_0(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint in_w8;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 unaff_x19;
  uint uVar8;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar9;
  long unaff_x22;
  long unaff_x23;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  
  do {
    unaff_x20 = unaff_x20 + 1;
    if ((long)(int)in_w8 <= (long)unaff_x20) {
      FUN_022fabf0(unaff_x19,in_stack_00000008,in_stack_00000038,0,0);
      return;
    }
    if (in_w8 <= unaff_x20) {
LAB_0234ca84:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar10 = *(long *)(unaff_x22 + unaff_x20 * 8 + 0x20);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
    if (lVar2 == 0) {
LAB_0234ca80:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_022fb2d8(lVar2,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    if (lVar3 == 0) goto LAB_0234ca80;
    FUN_01320e50(lVar3,*(undefined8 *)PTR_DAT_033ee588);
    *(long *)(lVar2 + 0x18) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    if (lVar3 == 0) goto LAB_0234ca80;
    FUN_022f9928(lVar3,lVar10,0);
    *(long *)(lVar2 + 0x10) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    if (lVar3 == 0) goto LAB_0234ca80;
    FUN_01320e50(lVar3,*(undefined8 *)PTR_DAT_033f6e48);
    *(long *)(lVar2 + 0x20) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
    if (lVar3 == 0) goto LAB_0234ca80;
    FUN_01298da0(lVar3,*(undefined8 *)
                        Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    if ((*(long *)(lVar2 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar2 + 0x10) + 0x10), lVar5 == 0)) goto LAB_0234ca80;
    uVar6 = *(ulong *)(lVar5 + 0x18);
    uVar8 = (uint)uVar6;
    if (0 < (int)uVar8) {
      if (lVar10 == 0) goto LAB_0234ca80;
      lVar5 = 8;
      do {
        lVar7 = *(long *)(lVar10 + 0x10);
        if (lVar7 == 0) goto LAB_0234ca80;
        uVar9 = lVar5 - 8;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0234ca84;
        uStack0000000000000040 = *(undefined4 *)(lVar7 + lVar5 * 4);
        uVar4 = FUN_0129aa60(lVar3,&stack0x00000040,*unaff_x29);
        if ((uVar4 & 1) == 0) {
          lVar7 = *(long *)(lVar10 + 0x10);
          if (lVar7 == 0) goto LAB_0234ca80;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0234ca84;
          uVar1 = *(undefined4 *)(lVar7 + lVar5 * 4);
          in_stack_00000048._4_4_ =
               GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                         (lVar3,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                         );
          uStack0000000000000040 = uVar1;
          FUN_0129a054(lVar3,&stack0x00000040,(long)&stack0x00000048 + 4,
                       *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
          lVar7 = *(long *)(lVar10 + 0x10);
          if (lVar7 == 0) goto LAB_0234ca80;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0234ca84;
          lVar11 = *(long *)(lVar2 + 0x18);
          FUN_0132138c(in_stack_00000038,*(undefined4 *)(lVar7 + lVar5 * 4),&stack0x00000040,
                       *(undefined8 *)
                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
          if (lVar11 == 0) goto LAB_0234ca80;
          FUN_00ca0af8(lVar11,CONCAT44(uStack0000000000000044,uStack0000000000000040),
                       *(undefined8 *)OVRManager_XrApi_TypeInfo);
          lVar7 = *(long *)(lVar10 + 0x10);
          if (lVar7 == 0) goto LAB_0234ca80;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0234ca84;
          if (unaff_x23 == 0) goto LAB_0234ca80;
          uStack0000000000000040 = *(undefined4 *)(lVar7 + lVar5 * 4);
          lVar7 = *(long *)(lVar2 + 0x20);
          FUN_01299bc0();
          if (lVar7 == 0) goto LAB_0234ca80;
          FUN_00ac20f0(lVar7,in_stack_00000048._4_4_,*(undefined8 *)StringLiteral_4747);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 - (uVar6 & 0xffffffff) != 8);
    }
    lVar10 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,uVar6)
    ;
    lVar5 = *(long *)(lVar2 + 0x10);
    if (lVar5 == 0) goto LAB_0234ca80;
    uVar6 = 0;
    lVar7 = (long)(int)uVar8;
    while (uVar8 = uVar8 - 1, (long)uVar6 < lVar7) {
      uStack0000000000000040 = FUN_022f96bc(lVar5,uVar6 & 0xffffffff,0);
      FUN_01299bc0(lVar3,&stack0x00000040,(long)&stack0x00000048 + 4,*unaff_x21);
      if (lVar10 == 0) goto LAB_0234ca80;
      if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_0234ca84;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar10 + (long)(int)uVar8 * 4 + 0x20) = in_stack_00000048._4_4_;
      lVar5 = *(long *)(lVar2 + 0x10);
      if (lVar5 == 0) goto LAB_0234ca80;
    }
    FUN_022f9144(lVar5,lVar10,0);
    FUN_00ca11d0(in_stack_00000010,lVar2,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
    in_w8 = *(uint *)(in_stack_00000018 + 0x18);
    unaff_x19 = in_stack_00000010;
    unaff_x22 = in_stack_00000018;
  } while( true );
}


