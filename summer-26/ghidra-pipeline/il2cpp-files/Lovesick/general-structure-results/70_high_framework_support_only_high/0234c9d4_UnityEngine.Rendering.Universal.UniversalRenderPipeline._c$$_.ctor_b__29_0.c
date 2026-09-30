/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalRenderPipeline.<>c$$<.ctor>b__29_0
ENTRY_POINT: 0234c9d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_UniversalRenderPipeline_<>c__<_ctor>b__29_0
               (long param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  ulong uVar7;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long lVar8;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  
  while (FUN_01299bc0(param_1,param_2,param_3,param_4), unaff_x25 != 0) {
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w20) {
LAB_0234ca84:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x27 = unaff_x27 + 1;
    *(undefined4 *)(unaff_x25 + (long)(int)unaff_w20 * 4 + 0x20) = in_stack_00000048._4_4_;
    lVar6 = *(long *)(unaff_x24 + 0x10);
    param_1 = unaff_x26;
    if (lVar6 == 0) break;
    while (unaff_w20 = unaff_w20 - 1, unaff_x19 <= (long)unaff_x27) {
      FUN_022f9144(lVar6,unaff_x25,0);
      FUN_00ca11d0(in_stack_00000010,unaff_x24,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
      in_stack_00000028 = in_stack_00000028 + 1;
      if ((long)(int)*(uint *)(in_stack_00000018 + 0x18) <= (long)in_stack_00000028) {
        FUN_022fabf0(in_stack_00000010,in_stack_00000008,in_stack_00000038,0,0);
        return;
      }
      if (*(uint *)(in_stack_00000018 + 0x18) <= in_stack_00000028) goto LAB_0234ca84;
      lVar6 = *(long *)(in_stack_00000018 + in_stack_00000028 * 8 + 0x20);
      unaff_x24 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
      if (unaff_x24 == 0) goto LAB_0234ca80;
      FUN_022fb2d8(unaff_x24,0);
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
      if (lVar2 == 0) goto LAB_0234ca80;
      FUN_01320e50(lVar2,*(undefined8 *)PTR_DAT_033ee588);
      *(long *)(unaff_x24 + 0x18) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
      if (lVar2 == 0) goto LAB_0234ca80;
      FUN_022f9928(lVar2,lVar6,0);
      *(long *)(unaff_x24 + 0x10) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
      if (lVar2 == 0) goto LAB_0234ca80;
      FUN_01320e50(lVar2,*(undefined8 *)PTR_DAT_033f6e48);
      *(long *)(unaff_x24 + 0x20) = lVar2;
      param_1 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
      if (param_1 == 0) goto LAB_0234ca80;
      FUN_01298da0(param_1,*(undefined8 *)
                            Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
      if ((*(long *)(unaff_x24 + 0x10) == 0) ||
         (lVar2 = *(long *)(*(long *)(unaff_x24 + 0x10) + 0x10), lVar2 == 0)) goto LAB_0234ca80;
      uVar4 = *(ulong *)(lVar2 + 0x18);
      unaff_w20 = (uint)uVar4;
      if (0 < (int)unaff_w20) {
        if (lVar6 == 0) goto LAB_0234ca80;
        lVar2 = 8;
        do {
          lVar5 = *(long *)(lVar6 + 0x10);
          if (lVar5 == 0) goto LAB_0234ca80;
          uVar7 = lVar2 - 8;
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0234ca84;
          uStack0000000000000040 = *(undefined4 *)(lVar5 + lVar2 * 4);
          uVar3 = FUN_0129aa60(param_1,&stack0x00000040,*unaff_x29);
          if ((uVar3 & 1) == 0) {
            lVar5 = *(long *)(lVar6 + 0x10);
            if (lVar5 == 0) goto LAB_0234ca80;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0234ca84;
            uVar1 = *(undefined4 *)(lVar5 + lVar2 * 4);
            in_stack_00000048._4_4_ =
                 GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                           (param_1,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                           );
            uStack0000000000000040 = uVar1;
            FUN_0129a054(param_1,&stack0x00000040,(long)&stack0x00000048 + 4,
                         *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
            lVar5 = *(long *)(lVar6 + 0x10);
            if (lVar5 == 0) goto LAB_0234ca80;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0234ca84;
            lVar8 = *(long *)(unaff_x24 + 0x18);
            FUN_0132138c(in_stack_00000038,*(undefined4 *)(lVar5 + lVar2 * 4),&stack0x00000040,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            if (lVar8 == 0) goto LAB_0234ca80;
            FUN_00ca0af8(lVar8,CONCAT44(uStack0000000000000044,uStack0000000000000040),
                         *(undefined8 *)OVRManager_XrApi_TypeInfo);
            lVar5 = *(long *)(lVar6 + 0x10);
            if (lVar5 == 0) goto LAB_0234ca80;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0234ca84;
            if (unaff_x23 == 0) goto LAB_0234ca80;
            uStack0000000000000040 = *(undefined4 *)(lVar5 + lVar2 * 4);
            lVar5 = *(long *)(unaff_x24 + 0x20);
            FUN_01299bc0();
            if (lVar5 == 0) goto LAB_0234ca80;
            FUN_00ac20f0(lVar5,in_stack_00000048._4_4_,*(undefined8 *)StringLiteral_4747);
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 - (uVar4 & 0xffffffff) != 8);
      }
      unaff_x25 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                               uVar4);
      lVar6 = *(long *)(unaff_x24 + 0x10);
      if (lVar6 == 0) goto LAB_0234ca80;
      unaff_x27 = 0;
      unaff_x19 = (long)(int)unaff_w20;
    }
    uStack0000000000000040 = FUN_022f96bc(lVar6,unaff_x27 & 0xffffffff,0);
    param_4 = *unaff_x21;
    param_2 = (undefined8 *)&stack0x00000040;
    param_3 = (long)&stack0x00000048 + 4;
    unaff_x26 = param_1;
  }
LAB_0234ca80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


