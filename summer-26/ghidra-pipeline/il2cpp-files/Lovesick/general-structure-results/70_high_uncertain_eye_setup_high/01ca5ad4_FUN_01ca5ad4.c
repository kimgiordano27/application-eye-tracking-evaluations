/*
FUNCTION_NAME: FUN_01ca5ad4
ENTRY_POINT: 01ca5ad4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01ca5ad4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_70;
  long *local_68;
  
  puVar4 = StringLiteral_7818;
  puVar3 = Method_System_DateTime_AddYears__;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  if ((DAT_0377ed58 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzq_s16__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_13249);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerable<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                      );
    thunk_FUN_00d48444(StringLiteral_2823);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<PlayableDirector>__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_DateTime_AddYears__);
    thunk_FUN_00d48444(StringLiteral_7818);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    DAT_0377ed58 = 1;
  }
  local_70 = (long *)0x0;
  FUN_01d00ed8(param_1,*(undefined8 *)puVar2,0);
  FUN_01d00ed8(param_2,*(undefined8 *)puVar4,0);
  uVar13 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01780344(uVar13,0);
  uVar8 = FUN_01789ac0(param_1,uVar13,0);
  plVar15 = (long *)Method_UnityEngine_Component_GetComponent<PlayableDirector>__;
  puVar1 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__;
  if ((uVar8 & 1) != 0) {
    uVar13 = thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    uVar13 = FUN_01cb25d4(uVar13,0);
LAB_01ca5ec0:
    uVar12 = thunk_FUN_00d48444(StringLiteral_12476);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar13,uVar12);
  }
  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<PlayableDirector>__ + 0xe0) == 0)
  {
    thunk_FUN_00d32864();
  }
  FUN_01d07ec4(param_1,*(undefined8 *)puVar2,0);
  lVar9 = FUN_010c06e0(param_2,*(undefined8 *)puVar1);
  puVar2 = StringLiteral_13249;
  if (lVar9 != 0) {
    uVar6 = FUN_013836e0(lVar9,*(undefined8 *)StringLiteral_13249);
    puVar1 = System_Collections_Generic_IEnumerable<ShapeRecognizer_FingerFeatureConfig>_TypeInfo;
    if (0 < (int)uVar6) {
      uVar8 = 0;
      plVar14 = (long *)0x0;
      plVar16 = (long *)
                System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
      ;
      do {
        FUN_01383784(lVar9,uVar8 & 0xffffffff,&local_68,*(undefined8 *)puVar1);
        local_70 = local_68;
        FUN_01d03f10(local_68,*(undefined8 *)puVar4,uVar8 & 0xffffffff,0);
        if (local_70 == (long *)0x0) goto LAB_01ca5e84;
        uVar13 = (**(code **)(*local_70 + 0x188))(local_70,*(undefined8 *)(*local_70 + 400));
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar15);
        }
        uVar10 = FUN_01d041b4(param_1,uVar13,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*plVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01d0427c(param_1,&local_70,0);
          plVar5 = local_70;
          if ((uVar10 & 1) == 0) {
            FUN_00ac2be8(local_70);
            lVar9 = *plVar5;
            uVar13 = (**(code **)(lVar9 + 0x188))(plVar5,*(undefined8 *)(lVar9 + 400));
            uVar13 = FUN_01cb0f80(uVar13,param_1,0);
            goto LAB_01ca5ec0;
          }
          if (plVar14 == (long *)0x0) {
            uVar7 = FUN_013836e0(lVar9,*(undefined8 *)puVar2);
            plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzq_s16__,
                                           uVar7);
            if (uVar8 == 0) goto LAB_01ca5cf8;
            uVar10 = 0;
            do {
              FUN_01383784(lVar9,uVar10 & 0xffffffff,&local_68,*(undefined8 *)puVar1);
              plVar15 = local_68;
              if (plVar14 == (long *)0x0) goto LAB_01ca5e84;
              if ((local_68 != (long *)0x0) &&
                 (lVar11 = thunk_FUN_00d6225c(local_68,*(undefined8 *)(*plVar14 + 0x40)),
                 lVar11 == 0)) goto LAB_01ca5e8c;
              if (*(uint *)(plVar14 + 3) <= uVar10) goto LAB_01ca5e88;
              plVar14[uVar10 + 4] = (long)plVar15;
              uVar10 = uVar10 + 1;
              plVar15 = (long *)Method_UnityEngine_Component_GetComponent<PlayableDirector>__;
              plVar16 = (long *)
                        System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
              ;
            } while (uVar8 != uVar10);
          }
LAB_01ca5dcc:
          plVar5 = local_70;
          if ((local_70 != (long *)0x0) &&
             (lVar11 = thunk_FUN_00d6225c(local_70,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0))
          {
LAB_01ca5e8c:
            uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar13,0);
          }
          if (*(uint *)(plVar14 + 3) <= uVar8) {
LAB_01ca5e88:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar14[uVar8 + 4] = (long)plVar5;
        }
        else {
LAB_01ca5cf8:
          if (plVar14 != (long *)0x0) goto LAB_01ca5dcc;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
      if (plVar14 != (long *)0x0) {
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2823);
        if (lVar9 == 0) goto LAB_01ca5e84;
        FUN_013d1804(lVar9,plVar14,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                    );
      }
    }
    if (param_1 != (long *)0x0) {
      uVar13 = (**(code **)(*param_1 + 0x8f8))(param_1,*(undefined8 *)(*param_1 + 0x900));
      FUN_01cbabfc(0x20,uVar13,lVar9,0);
      return;
    }
  }
LAB_01ca5e84:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


