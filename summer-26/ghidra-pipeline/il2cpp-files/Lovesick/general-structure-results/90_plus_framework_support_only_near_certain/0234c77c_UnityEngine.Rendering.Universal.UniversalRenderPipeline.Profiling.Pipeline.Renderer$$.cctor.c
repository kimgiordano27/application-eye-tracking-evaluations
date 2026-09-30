/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalRenderPipeline.Profiling.Pipeline.Renderer$$.cctor
ENTRY_POINT: 0234c77c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 132
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Renderer___cctor
               (undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar8;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long lVar9;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  
  while( true ) {
    FUN_01320e50(param_2,*param_1);
    *(long *)(unaff_x24 + 0x18) = param_2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    if (lVar2 == 0) break;
    FUN_022f9928(lVar2,unaff_x25,0);
    *(long *)(unaff_x24 + 0x10) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    if (lVar2 == 0) break;
    FUN_01320e50(lVar2,*(undefined8 *)PTR_DAT_033f6e48);
    *(long *)(unaff_x24 + 0x20) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
    if (lVar2 == 0) break;
    FUN_01298da0(lVar2,*(undefined8 *)
                        Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    if ((*(long *)(unaff_x24 + 0x10) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x24 + 0x10) + 0x10), lVar4 == 0)) break;
    uVar5 = *(ulong *)(lVar4 + 0x18);
    uVar7 = (uint)uVar5;
    if (0 < (int)uVar7) {
      if (unaff_x25 == 0) break;
      lVar4 = 8;
      do {
        lVar6 = *(long *)(unaff_x25 + 0x10);
        if (lVar6 == 0) goto LAB_0234ca80;
        uVar8 = lVar4 - 8;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0234ca84;
        uStack0000000000000040 = *(undefined4 *)(lVar6 + lVar4 * 4);
        uVar3 = FUN_0129aa60(lVar2,&stack0x00000040,*unaff_x29);
        if ((uVar3 & 1) == 0) {
          lVar6 = *(long *)(unaff_x25 + 0x10);
          if (lVar6 == 0) goto LAB_0234ca80;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0234ca84;
          uVar1 = *(undefined4 *)(lVar6 + lVar4 * 4);
          in_stack_00000048._4_4_ =
               GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                         (lVar2,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                         );
          uStack0000000000000040 = uVar1;
          FUN_0129a054(lVar2,&stack0x00000040,(long)&stack0x00000048 + 4,
                       *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
          lVar6 = *(long *)(unaff_x25 + 0x10);
          if (lVar6 == 0) goto LAB_0234ca80;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0234ca84;
          lVar9 = *(long *)(unaff_x24 + 0x18);
          FUN_0132138c(in_stack_00000038,*(undefined4 *)(lVar6 + lVar4 * 4),&stack0x00000040,
                       *(undefined8 *)
                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
          if (lVar9 == 0) goto LAB_0234ca80;
          FUN_00ca0af8(lVar9,CONCAT44(uStack0000000000000044,uStack0000000000000040),
                       *(undefined8 *)OVRManager_XrApi_TypeInfo);
          lVar6 = *(long *)(unaff_x25 + 0x10);
          if (lVar6 == 0) goto LAB_0234ca80;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0234ca84;
          if (unaff_x23 == 0) goto LAB_0234ca80;
          uStack0000000000000040 = *(undefined4 *)(lVar6 + lVar4 * 4);
          lVar6 = *(long *)(unaff_x24 + 0x20);
          FUN_01299bc0();
          if (lVar6 == 0) goto LAB_0234ca80;
          FUN_00ac20f0(lVar6,in_stack_00000048._4_4_,*(undefined8 *)StringLiteral_4747);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 - (uVar5 & 0xffffffff) != 8);
    }
    lVar4 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,uVar5);
    lVar6 = *(long *)(unaff_x24 + 0x10);
    if (lVar6 == 0) break;
    uVar5 = 0;
    lVar9 = (long)(int)uVar7;
    while (uVar7 = uVar7 - 1, (long)uVar5 < lVar9) {
      uStack0000000000000040 = FUN_022f96bc(lVar6,uVar5 & 0xffffffff,0);
      FUN_01299bc0(lVar2,&stack0x00000040,(long)&stack0x00000048 + 4,*unaff_x21);
      if (lVar4 == 0) goto LAB_0234ca80;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0234ca84;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar7 * 4 + 0x20) = in_stack_00000048._4_4_;
      lVar6 = *(long *)(unaff_x24 + 0x10);
      if (lVar6 == 0) goto LAB_0234ca80;
    }
    FUN_022f9144(lVar6,lVar4,0);
    FUN_00ca11d0(in_stack_00000010,unaff_x24,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
    unaff_x20 = unaff_x20 + 1;
    if ((long)(int)*(uint *)(in_stack_00000018 + 0x18) <= (long)unaff_x20) {
      FUN_022fabf0(in_stack_00000010,in_stack_00000008,in_stack_00000038,0,0);
      return;
    }
    if (*(uint *)(in_stack_00000018 + 0x18) <= unaff_x20) {
LAB_0234ca84:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x25 = *(long *)(in_stack_00000018 + unaff_x20 * 8 + 0x20);
    unaff_x24 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
    if (unaff_x24 == 0) break;
    FUN_022fb2d8(unaff_x24,0);
    param_2 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    param_1 = (undefined8 *)PTR_DAT_033ee588;
    if (param_2 == 0) break;
  }
LAB_0234ca80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


