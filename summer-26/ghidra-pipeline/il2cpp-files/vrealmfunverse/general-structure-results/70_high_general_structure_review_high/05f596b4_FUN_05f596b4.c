/*
FUNCTION_NAME: FUN_05f596b4
ENTRY_POINT: 05f596b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_9
*/


void FUN_05f596b4(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int local_24;
  
  if ((DAT_066dd112 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                );
    FUN_02b3c81c(
                Method_EmeraldAI_CombatTextSystem_<AnimateBounceText>d__11_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(PTR_DAT_06321b58);
    FUN_02b3c81c(
                Method_EmeraldAI_CombatTextSystem_<AnimateUpwardsText>d__12_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(Method_System_Resources_ResourceManager_ResourceManagerMediator__ctor__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_<>c_<_ctor>b__41_0__
                );
    FUN_02b3c81c(
                Method_RoundedBoxUIProperties_<DelayVertexGeneration>d__5_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_RuntimePanel_<>c_<_ctor>b__8_0__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_STP_<>c_<Execute>b__38_0__);
    FUN_02b3c81c(StringLiteral_559);
    DAT_066dd112 = 1;
  }
  if (param_2 >> 0x20 == 4) {
    FUN_05f52044(param_1,param_2 & 0xffffffff);
    return;
  }
  local_24 = (int)param_2;
  if (local_24 < 0x60002) {
    if (local_24 == 0x60000) {
      plVar6 = (long *)FUN_03f12cf0(param_1 + 0x20,
                                    *(undefined8 *)
                                     Method_System_Resources_ResourceManager_ResourceManagerMediator__ctor__
                                   );
      puVar2 = 
      Method_EmeraldAI_CombatTextSystem_<AnimateBounceText>d__11_System_Collections_IEnumerator_Reset__
      ;
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_EmeraldAI_CombatTextSystem_<AnimateBounceText>d__11_System_Collections_IEnumerator_Reset__
                         + 0x130);
        if (*(byte *)(*param_3 + 0x130) < bVar1) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = param_3;
          if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_EmeraldAI_CombatTextSystem_<AnimateBounceText>d__11_System_Collections_IEnumerator_Reset__
             ) {
            plVar9 = (long *)0x0;
          }
        }
        *plVar6 = (long)plVar9;
        lVar7 = *(long *)puVar2;
        if (*(byte *)(lVar7 + 0x130) <= *(byte *)(*param_3 + 0x130)) {
          lVar3 = *(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8;
          goto LAB_05f59adc;
        }
        goto LAB_05f59acc;
      }
      lVar3 = *plVar6;
                    /* try { // try from 05f599bc to 060599bf has its CatchHandler @ 05f599cc */
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)
                            Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                          );
      }
                    /* catch() { ... } // from try @ 05f599bc with catch @ 05f599cc */
      uVar4 = FUN_05e8ce90(0);
    }
    else {
      if (local_24 != 0x60001) {
LAB_05f59848:
        uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)
                            Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_<>c_<_ctor>b__41_0__
                           ,&local_24);
        uVar4 = FUN_04c00984(*(undefined8 *)StringLiteral_559,uVar4,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c45a7c(uVar4,0);
        return;
      }
      lVar3 = FUN_03f12cf0(param_1 + 0x20,
                           *(undefined8 *)
                            Method_System_Resources_ResourceManager_ResourceManagerMediator__ctor__)
      ;
      if (param_3 != (long *)0x0) {
        lVar7 = *(long *)
                 Method_EmeraldAI_CombatTextSystem_<AnimateBounceText>d__11_System_Collections_IEnumerator_Reset__
        ;
        uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
        if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = param_3;
          if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
            plVar9 = (long *)0x0;
          }
        }
        plVar6 = (long *)(lVar3 + 8);
        *plVar6 = (long)plVar9;
        goto LAB_05f59abc;
      }
      lVar3 = *(long *)(lVar3 + 8);
                    /* try { // try from 05f59944 to 06059983 has its CatchHandler @ 05f5980c */
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)
                            Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                          );
      }
      uVar4 = FUN_05e8cf08(0);
    }
                    /* try { // try from 05f599d0 to 060599d7 has its CatchHandler @ 05f599e0 */
                    /* try { // try from 05f599d8 to 060599e3 has its CatchHandler @ 05f5980c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f599d0 with catch @ 05f599e0
                        */
    FUN_03330890(lVar3,uVar4,*(undefined8 *)Method_UnityEngine_Rendering_STP_<>c_<Execute>b__38_0__)
    ;
  }
  else {
    if (local_24 == 0x60002) {
                    /* try { // try from 05f59904 to 0605990f has its CatchHandler @ 05f59998 */
      lVar3 = FUN_03f12cf0(param_1 + 0x20,
                           *(undefined8 *)
                            Method_System_Resources_ResourceManager_ResourceManagerMediator__ctor__)
      ;
      if (param_3 == (long *)0x0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)
                              Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                            );
        }
        uVar5 = FUN_05e8cf80(0);
        FUN_03330824(uVar4,uVar5,
                     *(undefined8 *)Method_UnityEngine_UIElements_RuntimePanel_<>c_<_ctor>b__8_0__);
        goto LAB_05f59aec;
      }
      lVar7 = *(long *)PTR_DAT_06321b58;
      uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
      if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
                    /* try { // try from 05f59930 to 06059943 has its CatchHandler @ 05f599a0 */
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = param_3;
        if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
          plVar9 = (long *)0x0;
        }
      }
      plVar6 = (long *)(lVar3 + 0x10);
      *plVar6 = (long)plVar9;
    }
    else {
      if (local_24 != 0x60003) goto LAB_05f59848;
                    /* try { // try from 05f5980c to 06059903 has its CatchHandler @ 05f5980c
                       catch() { ... } // from try @ 05f5980c with catch @ 05f5980c
                       catch() { ... } // from try @ 05f59944 with catch @ 05f5980c
                       catch() { ... } // from try @ 05f59988 with catch @ 05f5980c
                       catch() { ... } // from try @ 05f599d8 with catch @ 05f5980c */
      lVar3 = FUN_03f12cf0(param_1 + 0x20,
                           *(undefined8 *)
                            Method_System_Resources_ResourceManager_ResourceManagerMediator__ctor__)
      ;
      if (param_3 == (long *)0x0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)
                              Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                            );
        }
                    /* try { // try from 05f59984 to 06059987 has its CatchHandler @ 05f5999c */
                    /* try { // try from 05f59988 to 060599bb has its CatchHandler @ 05f5980c */
        uVar5 = FUN_05e8cff8(0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f59904 with catch @ 05f59998
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f59984 with catch @ 05f5999c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f59930 with catch @ 05f599a0
                        */
        FUN_033307d0(uVar4,uVar5,
                     *(undefined8 *)
                      Method_RoundedBoxUIProperties_<DelayVertexGeneration>d__5_System_Collections_IEnumerator_Reset__
                    );
        goto LAB_05f59aec;
      }
      lVar7 = *(long *)
               Method_EmeraldAI_CombatTextSystem_<AnimateUpwardsText>d__12_System_Collections_IEnumerator_Reset__
      ;
      uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
      if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = param_3;
        if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
          plVar9 = (long *)0x0;
        }
      }
      plVar6 = (long *)(lVar3 + 0x18);
      *plVar6 = (long)plVar9;
    }
LAB_05f59abc:
    if ((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar8) {
LAB_05f59acc:
      param_3 = (long *)0x0;
    }
    else {
      lVar3 = *(long *)(*param_3 + 200) + uVar8 * 8;
LAB_05f59adc:
      if (*(long *)(lVar3 + -8) != lVar7) {
        param_3 = (long *)0x0;
      }
    }
    thunk_FUN_02bb0e9c(plVar6,param_3);
  }
LAB_05f59aec:
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48),0);
  return;
}


