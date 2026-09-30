/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalRenderPipeline.Profiling.Pipeline.Context$$.cctor
ENTRY_POINT: 0234c848
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Context___cctor
               (long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  ulong uVar4;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar5;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  
  while (param_1 != 0) {
    uVar4 = unaff_x27 - 8;
    if (*(uint *)(param_1 + 0x18) <= uVar4) goto LAB_0234ca84;
    uStack0000000000000040 = *(undefined4 *)(param_1 + unaff_x27 * 4);
    uVar2 = FUN_0129aa60(unaff_x26,&stack0x00000040,*unaff_x29);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(unaff_x25 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_0234ca84:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(undefined4 *)(lVar3 + unaff_x27 * 4);
      in_stack_00000048._4_4_ =
           GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                     (unaff_x26,
                      *(undefined8 *)
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                     );
      uStack0000000000000040 = uVar1;
      FUN_0129a054(unaff_x26,&stack0x00000040,(long)&stack0x00000048 + 4,
                   *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
      lVar3 = *(long *)(unaff_x25 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_0234ca84;
      lVar5 = *(long *)(unaff_x24 + 0x18);
      FUN_0132138c(in_stack_00000038,*(undefined4 *)(lVar3 + unaff_x27 * 4),&stack0x00000040,
                   *(undefined8 *)
                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                  );
      if (lVar5 == 0) break;
      FUN_00ca0af8(lVar5,CONCAT44(uStack0000000000000044,uStack0000000000000040),
                   *(undefined8 *)OVRManager_XrApi_TypeInfo);
      lVar3 = *(long *)(unaff_x25 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_0234ca84;
      if (unaff_x23 == 0) break;
      uStack0000000000000040 = *(undefined4 *)(lVar3 + unaff_x27 * 4);
      lVar3 = *(long *)(unaff_x24 + 0x20);
      FUN_01299bc0();
      if (lVar3 == 0) break;
      FUN_00ac20f0(lVar3,in_stack_00000048._4_4_,*(undefined8 *)StringLiteral_4747);
    }
    unaff_x27 = unaff_x27 + 1;
    if (unaff_x19 + unaff_x27 == 8) {
      do {
        lVar3 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                             in_stack_00000020);
        lVar5 = *(long *)(unaff_x24 + 0x10);
        if (lVar5 == 0) goto LAB_0234ca80;
        uVar4 = 0;
        while ((long)uVar4 < (long)(int)in_stack_00000030) {
          uStack0000000000000040 = FUN_022f96bc(lVar5,uVar4 & 0xffffffff,0);
          FUN_01299bc0(unaff_x26,&stack0x00000040,(long)&stack0x00000048 + 4,*unaff_x21);
          if (lVar3 == 0) goto LAB_0234ca80;
          if (*(uint *)(lVar3 + 0x18) <= unaff_w20) goto LAB_0234ca84;
          lVar5 = (long)(int)unaff_w20;
          uVar4 = uVar4 + 1;
          unaff_w20 = unaff_w20 - 1;
          *(undefined4 *)(lVar3 + lVar5 * 4 + 0x20) = in_stack_00000048._4_4_;
          lVar5 = *(long *)(unaff_x24 + 0x10);
          if (lVar5 == 0) goto LAB_0234ca80;
        }
        FUN_022f9144(lVar5,lVar3,0);
        FUN_00ca11d0(in_stack_00000010,unaff_x24,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__
                    );
        in_stack_00000028 = in_stack_00000028 + 1;
        if ((long)(int)*(uint *)(in_stack_00000018 + 0x18) <= (long)in_stack_00000028) {
          FUN_022fabf0(in_stack_00000010,in_stack_00000008,in_stack_00000038,0,0);
          return;
        }
        if (*(uint *)(in_stack_00000018 + 0x18) <= in_stack_00000028) goto LAB_0234ca84;
        unaff_x25 = *(long *)(in_stack_00000018 + in_stack_00000028 * 8 + 0x20);
        unaff_x24 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
        if (unaff_x24 == 0) goto LAB_0234ca80;
        FUN_022fb2d8(unaff_x24,0);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo
                                  );
        if (lVar3 == 0) goto LAB_0234ca80;
        FUN_01320e50(lVar3,*(undefined8 *)PTR_DAT_033ee588);
        *(long *)(unaff_x24 + 0x18) = lVar3;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
        if (lVar3 == 0) goto LAB_0234ca80;
        FUN_022f9928(lVar3,unaff_x25,0);
        *(long *)(unaff_x24 + 0x10) = lVar3;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                    UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
        if (lVar3 == 0) goto LAB_0234ca80;
        FUN_01320e50(lVar3,*(undefined8 *)PTR_DAT_033f6e48);
        *(long *)(unaff_x24 + 0x20) = lVar3;
        unaff_x26 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
        if (unaff_x26 == 0) goto LAB_0234ca80;
        FUN_01298da0(unaff_x26,
                     *(undefined8 *)
                      Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
        if ((*(long *)(unaff_x24 + 0x10) == 0) ||
           (lVar3 = *(long *)(*(long *)(unaff_x24 + 0x10) + 0x10), lVar3 == 0)) goto LAB_0234ca80;
        in_stack_00000020 = *(ulong *)(lVar3 + 0x18);
        unaff_w20 = (int)in_stack_00000020 - 1;
        in_stack_00000030 = in_stack_00000020 & 0xffffffff;
      } while ((int)in_stack_00000020 < 1);
      if (unaff_x25 == 0) break;
      unaff_x27 = 8;
      unaff_x19 = -in_stack_00000030;
    }
    param_1 = *(long *)(unaff_x25 + 0x10);
  }
LAB_0234ca80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


