/*
FUNCTION_NAME: FUN_01c2af54
ENTRY_POINT: 01c2af54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c2b4dc) */
/* WARNING: Removing unreachable block (ram,0x01c2b4c8) */

void FUN_01c2af54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char local_48 [4];
  char local_44 [4];
  
  puVar1 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
  if ((DAT_0377ea17 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_ITypeDescriptorContext_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_UpdateDriverGroup_<>c_<InjectUpdateDrivers>b__15_0__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_AttitudeSensor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8150);
    thunk_FUN_00d48444(StringLiteral_6212);
    thunk_FUN_00d48444(System_Runtime_Serialization_SerializationEventHandler_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<DragGesture>_get_recognizer__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f73c0);
    thunk_FUN_00d48444(Oculus_Interaction_Input_HandSkeleton_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2510);
    thunk_FUN_00d48444(PTR_DAT_033ee7b8);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegd_s64__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_get_Item__
                      );
    thunk_FUN_00d48444(
                      Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TrySetException__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_85_0_TypeInfo);
    thunk_FUN_00d48444(System_Security_Util_Tokenizer_ITokenReader_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_RhythmGameStarter_TouchInputHandler_<>c__DisplayClass2_0_<GetTouchById>b__0__
                      );
    thunk_FUN_00d48444(StringLiteral_13264);
    thunk_FUN_00d48444(Method_System_UriBuilder_set_Scheme__);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_DecrementInstruction_DecrementInt16_TypeInfo
                      );
    DAT_0377ea17 = 1;
  }
  local_44[0] = '\0';
  local_48[0] = '\0';
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar4 = Method_Oculus_Interaction_UpdateDriverGroup_<>c_<InjectUpdateDrivers>b__15_0__;
  puVar2 = PTR_DAT_033f73c0;
  if (lVar7 != 0) {
    FUN_017b46ec(lVar7,0);
    **(long **)(*(long *)puVar4 + 0xb8) = lVar7;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<DragGesture>_get_recognizer__;
    if (lVar7 != 0) {
      FUN_01298da0(lVar7,*(undefined8 *)StringLiteral_6212);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar7;
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar6 = StringLiteral_8150;
      if (lVar7 != 0) {
        FUN_01298da0(lVar7,*(undefined8 *)StringLiteral_8150);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar7;
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar5 = StringLiteral_2510;
        puVar3 = Oculus_Interaction_Input_HandSkeleton_TypeInfo;
        if (lVar7 != 0) {
          FUN_017b46ec(lVar7,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = lVar7;
          lVar7 = *(long *)puVar5;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar5;
          }
          uVar10 = **(undefined8 **)(lVar7 + 0xb8);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar7 != 0) {
            FUN_01298e34(lVar7,uVar10,*(undefined8 *)UnityEngine_InputSystem_AttitudeSensor_TypeInfo
                        );
            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = lVar7;
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar7 != 0) {
              FUN_017b46ec(lVar7,0);
              *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = lVar7;
              lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar7 != 0) {
                FUN_01298da0(lVar7,*(undefined8 *)puVar6);
                *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = lVar7;
                lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar1 = 
                Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TrySetException__
                ;
                if (lVar7 != 0) {
                  FUN_017b46ec(lVar7,0);
                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = lVar7;
                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  puVar1 = OVRPlugin_OVRP_1_85_0_TypeInfo;
                  if (lVar7 != 0) {
                    FUN_01320e50(lVar7,*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_get_Item__
                                );
                    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = lVar7;
                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    puVar2 = StringLiteral_13264;
                    puVar1 = System_ComponentModel_ITypeDescriptorContext_TypeInfo;
                    if (lVar7 != 0) {
                      FUN_01320e50(lVar7,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegd_s64__);
                      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = lVar7;
                      lVar7 = thunk_FUN_00d92814(0);
                      lVar8 = *(long *)puVar2;
                      if (*(int *)(lVar8 + 0xe0) == 0) {
                        thunk_FUN_00d32864(lVar8);
                        lVar8 = *(long *)puVar2;
                      }
                      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                      if ((lVar8 != 0) &&
                         (FUN_016f4944(lVar8,uVar10,
                                       *(undefined8 *)
                                        Method_RhythmGameStarter_TouchInputHandler_<>c__DisplayClass2_0_<GetTouchById>b__0__
                                       ,0), lVar7 != 0)) {
                        FUN_017b7624(lVar7,lVar8,0);
                        lVar7 = thunk_FUN_00d92814(0);
                        if ((lVar7 != 0) &&
                           (lVar7 = FUN_017b69d4(lVar7,0), puVar1 = PTR_DAT_033ee7b8, lVar7 != 0)) {
                          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
                            uVar12 = 0;
                            uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                            do {
                              if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              uVar11 = *(undefined8 *)(lVar7 + 0x20 + uVar12 * 8);
                              uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
                              local_44[0] = '\0';
                              FUN_017d75a8(uVar10,local_44,0);
                              lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00acdbc0(lVar8,uVar11,*(undefined8 *)puVar1);
                              if (local_44[0] != '\0') {
                                thunk_FUN_00d56f10(uVar10,0);
                              }
                              uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
                              uVar12 = uVar12 + 1;
                            } while ((long)uVar12 < (long)(int)*(uint *)(lVar7 + 0x18));
                          }
                          uVar10 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
                          local_48[0] = '\0';
                          FUN_017d75a8(uVar10,local_48,0);
                          puVar1 = System_Security_Util_Tokenizer_ITokenReader_TypeInfo;
                          lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                          uVar11 = *(undefined8 *)
                                    System_Security_Util_Tokenizer_ITokenReader_TypeInfo;
                          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar11 = FUN_01780344(uVar11,0);
                          puVar2 = System_Runtime_Serialization_SerializationEventHandler_TypeInfo;
                          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01299e64(lVar7,*(undefined8 *)Method_System_UriBuilder_set_Scheme__,
                                       uVar11,*(undefined8 *)
                                               System_Runtime_Serialization_SerializationEventHandler_TypeInfo
                                      );
                          lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                          uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
                          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01299e64(lVar7,*(undefined8 *)
                                              System_Linq_Expressions_Interpreter_DecrementInstruction_DecrementInt16_TypeInfo
                                       ,uVar11,*(undefined8 *)puVar2);
                          if (local_48[0] != '\0') {
                            thunk_FUN_00d56f10(uVar10,0);
                          }
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


