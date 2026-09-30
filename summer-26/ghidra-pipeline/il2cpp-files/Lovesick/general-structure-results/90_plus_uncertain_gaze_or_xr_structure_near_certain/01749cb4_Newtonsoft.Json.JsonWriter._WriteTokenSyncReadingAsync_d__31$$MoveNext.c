/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter.<WriteTokenSyncReadingAsync>d__31$$MoveNext
ENTRY_POINT: 01749cb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_12
*/


void Newtonsoft_Json_JsonWriter_<WriteTokenSyncReadingAsync>d__31__MoveNext
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar10;
  uint unaff_w28;
  uint unaff_w29;
  float fVar11;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar9;
  
code_r0x01749cb4:
  lVar4 = FUN_01682720(unaff_x20,param_2,param_1,0);
  if (lVar4 == 0) {
    lVar5 = 0;
    goto LAB_0174a05c;
  }
  uVar10 = *(undefined8 *)StringLiteral_3033;
  lVar5 = thunk_FUN_00d6225c(lVar4,uVar10);
  unaff_x25 = unaff_x25;
  lVar6 = lVar5;
joined_r0x01749ce4:
  do {
    if (lVar6 == 0) {
LAB_0174a228:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar4,uVar10);
    }
LAB_0174a05c:
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar7 = FUN_0166b7d0();
              if ((uVar7 & 1) == 0) {
                fVar11 = *(float *)(unaff_x19 + 0x24) * (float)in_stack_00000010._4_4_;
                iVar1 = -0x80000000;
                if (fVar11 != INFINITY) {
                  iVar1 = (int)fVar11;
                }
                *(int *)(unaff_x19 + 0x20) = iVar1;
                    /* try { // try from 0174a0bc to 0184a0c7 has its CatchHandler @ 01749960 */
                if ((*(long *)(unaff_x19 + 0x40) == 0) && (in_stack_00000008 != 0 || unaff_x24 != 0)
                   ) {
                    /* try { // try from 0174a0c8 to 0184a0cf has its CatchHandler @ 0174a128 */
                    /* try { // try from 0174a0d0 to 0184a13b has its CatchHandler @ 01749960 */
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<MRUKAnchor,_GameObject>_Remove__
                                            );
                  if (lVar4 == 0) goto LAB_0174a224;
                  FUN_0173cb94(lVar4,in_stack_00000008,unaff_x24,0);
                  *(long *)(unaff_x19 + 0x40) = lVar4;
                }
                uVar10 = FUN_00da4fb8(*(undefined8 *)StringLiteral_1470,in_stack_00000010._4_4_);
                *(undefined8 *)(unaff_x19 + 0x10) = uVar10;
                if (lVar5 == 0) {
                  thunk_FUN_00d48444(
                                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                                    );
                  uVar10 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  puVar9 = PTR_DAT_033eb670;
                  goto LAB_0174a1f8;
                }
                if (unaff_x21 == 0) {
                  thunk_FUN_00d48444(
                                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                                    );
                  uVar10 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  puVar9 = StringLiteral_1034;
                  goto LAB_0174a1f8;
                }
                uVar2 = *(uint *)(lVar5 + 0x18);
                if (uVar2 != *(uint *)(unaff_x21 + 0x18)) {
                  thunk_FUN_00d48444(
                                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                                    );
                  uVar10 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  puVar9 = Method_System_Nullable<OVRPlugin_XrApi>_get_Value__;
                  goto LAB_0174a1f8;
                }
                if ((int)uVar2 < 1) goto LAB_0174a170;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0174a024 with catch @ 0174a128
                       catch(type#2 @ 00000000) { ... } // from try @ 0174a0c8 with catch @ 0174a128
                        */
                lVar4 = 0;
                    /* catch() { ... } // from try @ 01749fc0 with catch @ 0174a12c */
                goto LAB_0174a134;
              }
              uVar10 = FUN_0166b654();
              uVar2 = Newtonsoft_Json_Utilities_AotHelper__Ensure();
              if (unaff_w28 < uVar2) break;
              if (uVar2 == unaff_w29) {
                uVar7 = thunk_FUN_015fe514(uVar10,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<InternedString,_Type>_get_Keys__
                                           ,0);
                if ((uVar7 & 1) != 0) {
                  uVar10 = *(undefined8 *)Method_System_Net_FtpWebRequest_SetException__;
                  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0)
                      == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar10 = FUN_01780344(uVar10,0);
                  if (in_stack_00000018 == 0) goto LAB_0174a224;
                  lVar4 = FUN_01682720(in_stack_00000018,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<InternedString,_Type>_get_Keys__
                                       ,uVar10,0);
                  if (lVar4 != 0) {
                    uVar10 = *(undefined8 *)StringLiteral_5687;
                    unaff_x24 = thunk_FUN_00d6225c(lVar4,uVar10);
                    lVar6 = unaff_x24;
                    goto joined_r0x01749ce4;
                  }
                  unaff_x24 = 0;
                }
              }
              else if (uVar2 == 0x4939908b) {
                uVar7 = thunk_FUN_015fe514(uVar10,*(undefined8 *)PTR_DAT_033eafd8,0);
                if ((uVar7 & 1) != 0) {
                  uVar10 = *(undefined8 *)StringLiteral_13854;
                  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0)
                      == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar10 = FUN_01780344(uVar10,0);
                  if (in_stack_00000018 == 0) goto LAB_0174a224;
                  lVar4 = FUN_01682720(in_stack_00000018,*(undefined8 *)PTR_DAT_033eafd8,uVar10,0);
                  puVar9 = Method_System_Collections_Generic_List<Mesh>_GetEnumerator__;
                  if (lVar4 != 0) {
                    uVar10 = *(undefined8 *)
                              Method_System_Collections_Generic_List<Mesh>_GetEnumerator__;
                    lVar6 = thunk_FUN_00d6225c(lVar4,uVar10);
                    if (lVar6 == 0) goto LAB_0174a228;
                    *(long *)(unaff_x19 + 0x40) = lVar6;
                    uVar10 = *(undefined8 *)puVar9;
                    lVar6 = thunk_FUN_00d6225c(lVar4,uVar10);
                    unaff_x25 = (undefined8 *)PTR_DAT_033eb090;
                    goto joined_r0x01749ce4;
                  }
                  *(undefined8 *)(unaff_x19 + 0x40) = 0;
                  unaff_x25 = (undefined8 *)PTR_DAT_033eb090;
                }
              }
              else if ((uVar2 == unaff_w28) &&
                      (uVar7 = thunk_FUN_015fe514(uVar10,*unaff_x25,0), (uVar7 & 1) != 0)) {
                uVar10 = *(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo;
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864();
                }
                param_1 = FUN_01780344(uVar10,0);
                if (in_stack_00000018 == 0) goto LAB_0174a224;
                param_2 = *unaff_x25;
                unaff_x20 = in_stack_00000018;
                goto code_r0x01749cb4;
              }
            }
            if (uVar2 <= unaff_w22) break;
            if (uVar2 == 0xc80ab660) {
              uVar7 = thunk_FUN_015fe514(uVar10,*(undefined8 *)StringLiteral_8448,0);
              if ((uVar7 & 1) != 0) {
                if (in_stack_00000018 == 0) goto LAB_0174a224;
                in_stack_00000010._4_4_ =
                     FUN_016844dc(in_stack_00000018,*(undefined8 *)StringLiteral_8448,0);
              }
            }
            else if ((uVar2 == 0xcf9da972) &&
                    (uVar7 = thunk_FUN_015fe514(uVar10,*(undefined8 *)
                                                                                                                
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                ,0), (uVar7 & 1) != 0)) {
              if (in_stack_00000018 == 0) goto LAB_0174a224;
              uVar3 = FUN_016847c4(in_stack_00000018,
                                   *(undefined8 *)
                                    Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__,
                                   0);
              *(undefined4 *)(unaff_x19 + 0x24) = uVar3;
            }
          }
          if (uVar2 != 0x8d4d225b) break;
          uVar7 = thunk_FUN_015fe514(uVar10,*(undefined8 *)
                                             Method_System_Threading_WaitHandle_InternalWaitOne__,0)
          ;
          if ((uVar7 & 1) != 0) {
            uVar10 = *(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo;
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_01780344(uVar10,0);
            if (in_stack_00000018 == 0) goto LAB_0174a224;
            lVar4 = FUN_01682720(in_stack_00000018,
                                 *(undefined8 *)Method_System_Threading_WaitHandle_InternalWaitOne__
                                 ,uVar10,0);
            if (lVar4 != 0) {
              uVar10 = *(undefined8 *)StringLiteral_3033;
              unaff_x21 = thunk_FUN_00d6225c(lVar4,uVar10);
              unaff_x25 = unaff_x25;
              lVar6 = unaff_x21;
              goto joined_r0x01749ce4;
            }
            unaff_x21 = 0;
          }
        }
      } while ((uVar2 != unaff_w22) ||
              (uVar7 = thunk_FUN_015fe514(uVar10,*(undefined8 *)PTR_DAT_033f65f0,0),
              (uVar7 & 1) == 0));
      uVar10 = *(undefined8 *)StringLiteral_4596;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01780344(uVar10,0);
      if (in_stack_00000018 == 0) goto LAB_0174a224;
      lVar4 = FUN_01682720(in_stack_00000018,*(undefined8 *)PTR_DAT_033f65f0,uVar10,0);
      if (lVar4 != 0) break;
      in_stack_00000008 = 0;
      unaff_x25 = (undefined8 *)PTR_DAT_033eb090;
    }
    uVar10 = *(undefined8 *)StringLiteral_6314;
    in_stack_00000008 = thunk_FUN_00d6225c(lVar4,uVar10);
    unaff_x25 = (undefined8 *)PTR_DAT_033eb090;
    lVar6 = in_stack_00000008;
  } while( true );
LAB_0174a134:
                    /* catch() { ... } // from try @ 01749f9c with catch @ 0174a134 */
  if (uVar2 <= (uint)lVar4) {
Newtonsoft_Json_JsonWriterException___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  if (*(long *)(lVar5 + 0x20 + lVar4 * 8) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = PTR_DAT_033ef068;
LAB_0174a1f8:
    uVar8 = thunk_FUN_00d48444(puVar9);
    FUN_01679968(uVar10,uVar8,0);
    uVar8 = thunk_FUN_00d48444(
                              Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar8);
  }
  if (*(uint *)(unaff_x21 + 0x18) <= (uint)lVar4) goto Newtonsoft_Json_JsonWriterException___ctor;
  FUN_01747e0c();
  uVar2 = *(uint *)(lVar5 + 0x18);
  lVar4 = lVar4 + 1;
  if ((int)uVar2 <= (int)lVar4) {
LAB_0174a170:
    if (in_stack_00000018 != 0) {
      uVar3 = FUN_016844dc(in_stack_00000018,*(undefined8 *)PTR_DAT_033f2b68,0);
      thunk_FUN_00d8e500();
      *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
      lVar4 = FUN_017479a8();
      if (lVar4 != 0) {
        FUN_0127dce8();
        return;
      }
    }
LAB_0174a224:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  goto LAB_0174a134;
}


