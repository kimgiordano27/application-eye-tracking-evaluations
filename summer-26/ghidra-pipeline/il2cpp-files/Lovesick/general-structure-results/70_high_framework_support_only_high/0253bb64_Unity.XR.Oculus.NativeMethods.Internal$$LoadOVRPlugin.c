/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$LoadOVRPlugin
ENTRY_POINT: 0253bb64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_XR_Oculus_NativeMethods_Internal__LoadOVRPlugin
          (long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long unaff_x19;
  long unaff_x23;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  int iStack000000000000000c;
  long in_stack_00000050;
  int iStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  plVar15 = *(long **)(unaff_x23 + 0x348);
  if ((*(byte *)(unaff_x19 + 0xb55) & 1) == 0) {
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JsonMergeSettings_set_MergeNullValueHandling__);
    thunk_FUN_00d48444(StringLiteral_9506);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_DictionaryWrapper<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonWriter_AutoCompleteAsync__);
    thunk_FUN_00d48444(UnityEngine_Rendering_MSAASamples_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2998);
    thunk_FUN_00d48444(StringLiteral_14237);
    thunk_FUN_00d48444(StringLiteral_9717);
    thunk_FUN_00d48444(System_Nullable<uint>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectOfType<SunGlassesPlacementPoint>__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<LinkCollider2D>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_ShadowUtility_<>c_<GenerateShadowMesh>b__9_1__
                      );
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_Locomotion_Teleporter_<Teleport>d__39_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_Clickable_OnMouseUp__);
    thunk_FUN_00d48444(StringLiteral_13209);
    thunk_FUN_00d48444(PTR_DAT_033eb808);
    *(undefined1 *)(unaff_x19 + 0xb55) = 1;
  }
  lVar8 = *plVar15;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000050 = 0;
  _iStack0000000000000058 = 0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *plVar15;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 != 0) {
    lVar12 = *(long *)Method_UnityEngine_Object_FindObjectOfType<SunGlassesPlacementPoint>__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
    }
    else {
      iVar14 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (0 < iVar14) {
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar14,0);
      }
    }
    puVar7 = StringLiteral_14237;
    puVar6 = StringLiteral_9717;
    puVar5 = StringLiteral_2998;
    puVar4 = 
    Method_RCG_Lovesick_Locomotion_Teleporter_<Teleport>d__39_System_Collections_IEnumerator_Reset__
    ;
    puVar3 = Method_Newtonsoft_Json_JsonWriter_AutoCompleteAsync__;
    puVar2 = Method_UnityEngine_UIElements_Clickable_OnMouseUp__;
    puVar1 = UnityEngine_Rendering_MSAASamples_TypeInfo;
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_01323390(*(long *)(param_1 + 0x50),&stack0x000000b0,
                   *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<LinkCollider2D>__);
      iStack000000000000000c = 0;
      in_stack_00000088 = in_stack_000000b8;
      in_stack_00000080 = in_stack_000000b0;
      in_stack_00000090 = in_stack_000000c0;
      while (uVar9 = FUN_012b894c(&stack0x00000080,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        plVar15 = (long *)FUN_00cbddec(&stack0x00000080,*(undefined8 *)puVar7);
        uVar11 = param_2[2];
        uVar17 = param_2[1];
        uVar16 = *param_2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar8 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0253bdd0;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar6,0);
LAB_0253bdd0:
        in_stack_000000b0 = uVar16;
        in_stack_000000b8 = uVar17;
        in_stack_000000c0 = uVar11;
        auVar18 = (*(code *)*puVar10)(plVar15,&stack0x000000b0,param_3,2,puVar10[1]);
        if (auVar18._0_8_ != 0) {
          lVar8 = *(long *)
                   Method_Newtonsoft_Json_Linq_JsonMergeSettings_set_MergeNullValueHandling__;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar8 = *(long *)
                     Method_Newtonsoft_Json_Linq_JsonMergeSettings_set_MergeNullValueHandling__;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00cbdef4(lVar8,auVar18._0_8_,auVar18._8_8_,
                       *(undefined8 *)System_Nullable<uint>_TypeInfo);
          iStack000000000000000c = iStack000000000000000c + auVar18._8_4_;
        }
      }
      FUN_012b8948(&stack0x00000080,
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Utilities_DictionaryWrapper<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_TryGetValue__
                  );
      FUN_013421d4(&stack0x000000a0,iStack000000000000000c,param_4,1,
                   *(undefined8 *)StringLiteral_13209);
      puVar3 = Method_Newtonsoft_Json_Linq_JsonMergeSettings_set_MergeNullValueHandling__;
      lVar8 = *(long *)Method_Newtonsoft_Json_Linq_JsonMergeSettings_set_MergeNullValueHandling__;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 != 0) {
        FUN_01323390(lVar8,&stack0x00000060,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_Universal_ShadowUtility_<>c_<GenerateShadowMesh>b__9_1__
                    );
        iVar14 = 0;
        while (uVar9 = FUN_012b894c(&stack0x00000060,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
          auVar18 = FUN_00cbe0f0(&stack0x00000060,*(undefined8 *)puVar5);
          _in_stack_00000050 = auVar18;
          if (0 < auVar18._8_4_) {
            FUN_01343a6c(auVar18._0_8_,auVar18._8_8_,0,in_stack_000000a0,in_stack_000000a8,iVar14,
                         auVar18._8_8_ & 0xffffffff,*(undefined8 *)puVar4);
            iVar14 = iStack0000000000000058 + iVar14;
          }
          if (in_stack_00000050 != 0) {
            FUN_01342a94(&stack0x00000050,*(undefined8 *)puVar2);
          }
        }
        FUN_012b8948(&stack0x00000060,*(undefined8 *)StringLiteral_9506);
        auVar18._8_8_ = in_stack_000000a8;
        auVar18._0_8_ = in_stack_000000a0;
        return auVar18;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


