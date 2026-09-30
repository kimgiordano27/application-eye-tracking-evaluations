/*
FUNCTION_NAME: System.Data.DataColumn$$set_XmlDataType
ENTRY_POINT: 01c2b07c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01c2b4dc) */
/* WARNING: Removing unreachable block (ram,0x01c2b4c8) */

void System_Data_DataColumn__set_XmlDataType(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  undefined8 uVar9;
  undefined8 *unaff_x21;
  undefined8 uVar10;
  ulong uVar11;
  char in_stack_00000008;
  char cStack000000000000000c;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xfc8));
  *(undefined1 *)(unaff_x19 + 0xa17) = 1;
  cStack000000000000000c = '\0';
  in_stack_00000008 = 0;
  lVar6 = thunk_FUN_00d62348(*unaff_x21);
  puVar4 = Method_Oculus_Interaction_UpdateDriverGroup_<>c_<InjectUpdateDrivers>b__15_0__;
  puVar1 = PTR_DAT_033f73c0;
  if (lVar6 != 0) {
    FUN_017b46ec(lVar6,0);
    **(long **)(*(long *)puVar4 + 0xb8) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<DragGesture>_get_recognizer__;
    if (lVar6 != 0) {
      FUN_01298da0(lVar6,*(undefined8 *)StringLiteral_6212);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar6;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar3 = StringLiteral_8150;
      if (lVar6 != 0) {
        FUN_01298da0(lVar6,*(undefined8 *)StringLiteral_8150);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar6;
        lVar6 = thunk_FUN_00d62348(*unaff_x21);
        puVar5 = StringLiteral_2510;
        puVar2 = Oculus_Interaction_Input_HandSkeleton_TypeInfo;
        if (lVar6 != 0) {
          FUN_017b46ec(lVar6,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = lVar6;
          lVar6 = *(long *)puVar5;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar5;
          }
          uVar9 = **(undefined8 **)(lVar6 + 0xb8);
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar6 != 0) {
            FUN_01298e34(lVar6,uVar9,*(undefined8 *)UnityEngine_InputSystem_AttitudeSensor_TypeInfo)
            ;
            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = lVar6;
            lVar6 = thunk_FUN_00d62348(*unaff_x21);
            if (lVar6 != 0) {
              FUN_017b46ec(lVar6,0);
              *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = lVar6;
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar6 != 0) {
                FUN_01298da0(lVar6,*(undefined8 *)puVar3);
                *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = lVar6;
                lVar6 = thunk_FUN_00d62348(*unaff_x21);
                puVar1 = 
                Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TrySetException__
                ;
                if (lVar6 != 0) {
                  FUN_017b46ec(lVar6,0);
                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = lVar6;
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  puVar1 = OVRPlugin_OVRP_1_85_0_TypeInfo;
                  if (lVar6 != 0) {
                    FUN_01320e50(lVar6,*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_get_Item__
                                );
                    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = lVar6;
                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    puVar3 = StringLiteral_13264;
                    puVar1 = System_ComponentModel_ITypeDescriptorContext_TypeInfo;
                    if (lVar6 != 0) {
                      FUN_01320e50(lVar6,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegd_s64__);
                      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = lVar6;
                      lVar6 = thunk_FUN_00d92814(0);
                      lVar7 = *(long *)puVar3;
                      if (*(int *)(lVar7 + 0xe0) == 0) {
                        thunk_FUN_00d32864(lVar7);
                        lVar7 = *(long *)puVar3;
                      }
                      uVar9 = **(undefined8 **)(lVar7 + 0xb8);
                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                      if ((lVar7 != 0) &&
                         (FUN_016f4944(lVar7,uVar9,
                                       *(undefined8 *)
                                        Method_RhythmGameStarter_TouchInputHandler_<>c__DisplayClass2_0_<GetTouchById>b__0__
                                       ,0), lVar6 != 0)) {
                        FUN_017b7624(lVar6,lVar7,0);
                        lVar6 = thunk_FUN_00d92814(0);
                        if ((lVar6 != 0) &&
                           (lVar6 = FUN_017b69d4(lVar6,0), puVar1 = PTR_DAT_033ee7b8, lVar6 != 0)) {
                          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
                            uVar11 = 0;
                            uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                            do {
                              if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              uVar10 = *(undefined8 *)(lVar6 + 0x20 + uVar11 * 8);
                              uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
                              cStack000000000000000c = '\0';
                              FUN_017d75a8(uVar9,&stack0x0000000c,0);
                              lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00acdbc0(lVar7,uVar10,*(undefined8 *)puVar1);
                              if (cStack000000000000000c != '\0') {
                                thunk_FUN_00d56f10(uVar9,0);
                              }
                              uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
                              uVar11 = uVar11 + 1;
                            } while ((long)uVar11 < (long)(int)*(uint *)(lVar6 + 0x18));
                          }
                          uVar9 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
                          in_stack_00000008 = '\0';
                          FUN_017d75a8(uVar9,&stack0x00000008,0);
                          puVar1 = System_Security_Util_Tokenizer_ITokenReader_TypeInfo;
                          lVar6 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                          uVar10 = *(undefined8 *)
                                    System_Security_Util_Tokenizer_ITokenReader_TypeInfo;
                          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar10 = FUN_01780344(uVar10,0);
                          puVar3 = System_Runtime_Serialization_SerializationEventHandler_TypeInfo;
                          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01299e64(lVar6,*(undefined8 *)Method_System_UriBuilder_set_Scheme__,
                                       uVar10,*(undefined8 *)
                                               System_Runtime_Serialization_SerializationEventHandler_TypeInfo
                                      );
                          lVar6 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                          uVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
                          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01299e64(lVar6,*(undefined8 *)
                                              System_Linq_Expressions_Interpreter_DecrementInstruction_DecrementInt16_TypeInfo
                                       ,uVar10,*(undefined8 *)puVar3);
                          if (in_stack_00000008 != '\0') {
                            thunk_FUN_00d56f10(uVar9,0);
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


