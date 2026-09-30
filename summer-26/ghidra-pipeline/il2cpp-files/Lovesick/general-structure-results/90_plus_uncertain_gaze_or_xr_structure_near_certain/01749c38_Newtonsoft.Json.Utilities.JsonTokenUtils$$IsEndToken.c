/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.JsonTokenUtils$$IsEndToken
ENTRY_POINT: 01749c38
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


void Newtonsoft_Json_Utilities_JsonTokenUtils__IsEndToken(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar9;
  uint unaff_w28;
  uint unaff_w29;
  float fVar10;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar8;
  
  do {
    uVar2 = Newtonsoft_Json_Utilities_AotHelper__Ensure();
    if (unaff_w28 < uVar2) {
      if (unaff_w22 < uVar2) {
        if (uVar2 == 0xc80ab660) {
          uVar4 = thunk_FUN_015fe514(unaff_x26,*(undefined8 *)StringLiteral_8448,0);
          if ((uVar4 & 1) != 0) {
            if (in_stack_00000018 == 0) goto LAB_0174a224;
            in_stack_00000010._4_4_ =
                 FUN_016844dc(in_stack_00000018,*(undefined8 *)StringLiteral_8448,0);
          }
        }
        else if ((uVar2 == 0xcf9da972) &&
                (uVar4 = thunk_FUN_015fe514(unaff_x26,
                                            *(undefined8 *)
                                             Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                            ,0), (uVar4 & 1) != 0)) {
          if (in_stack_00000018 == 0) goto LAB_0174a224;
          uVar3 = FUN_016847c4(in_stack_00000018,
                               *(undefined8 *)
                                Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__,0);
          *(undefined4 *)(unaff_x19 + 0x24) = uVar3;
        }
      }
      else if (uVar2 == 0x8d4d225b) {
        uVar4 = thunk_FUN_015fe514(unaff_x26,
                                   *(undefined8 *)
                                    Method_System_Threading_WaitHandle_InternalWaitOne__,0);
        if ((uVar4 & 1) != 0) {
          uVar9 = *(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo;
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_01780344(uVar9,0);
          if (in_stack_00000018 == 0) goto LAB_0174a224;
          lVar5 = FUN_01682720(in_stack_00000018,
                               *(undefined8 *)Method_System_Threading_WaitHandle_InternalWaitOne__,
                               uVar9,0);
          if (lVar5 != 0) {
            uVar9 = *(undefined8 *)StringLiteral_3033;
            unaff_x21 = thunk_FUN_00d6225c(lVar5,uVar9);
            lVar6 = unaff_x21;
            goto joined_r0x01749fe8;
          }
          unaff_x21 = 0;
        }
      }
      else if ((uVar2 == unaff_w22) &&
              (uVar4 = thunk_FUN_015fe514(unaff_x26,*(undefined8 *)PTR_DAT_033f65f0,0),
              (uVar4 & 1) != 0)) {
        uVar9 = *(undefined8 *)StringLiteral_4596;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01780344(uVar9,0);
        if (in_stack_00000018 == 0) goto LAB_0174a224;
        lVar5 = FUN_01682720(in_stack_00000018,*(undefined8 *)PTR_DAT_033f65f0,uVar9,0);
        if (lVar5 != 0) {
          uVar9 = *(undefined8 *)StringLiteral_6314;
          in_stack_00000008 = thunk_FUN_00d6225c(lVar5,uVar9);
          unaff_x25 = (undefined8 *)PTR_DAT_033eb090;
          lVar6 = in_stack_00000008;
          goto joined_r0x01749fe8;
        }
        in_stack_00000008 = 0;
        unaff_x25 = (undefined8 *)PTR_DAT_033eb090;
      }
    }
    else if (uVar2 == unaff_w29) {
      uVar4 = thunk_FUN_015fe514(unaff_x26,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<InternedString,_Type>_get_Keys__
                                 ,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = *(undefined8 *)Method_System_Net_FtpWebRequest_SetException__;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01780344(uVar9,0);
        if (in_stack_00000018 == 0) goto LAB_0174a224;
        lVar5 = FUN_01682720(in_stack_00000018,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<InternedString,_Type>_get_Keys__
                             ,uVar9,0);
        if (lVar5 != 0) {
          uVar9 = *(undefined8 *)StringLiteral_5687;
          unaff_x24 = thunk_FUN_00d6225c(lVar5,uVar9);
          lVar6 = unaff_x24;
          goto joined_r0x01749fe8;
        }
        unaff_x24 = 0;
      }
    }
    else if (uVar2 == 0x4939908b) {
      uVar4 = thunk_FUN_015fe514(unaff_x26,*(undefined8 *)PTR_DAT_033eafd8,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = *(undefined8 *)StringLiteral_13854;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01780344(uVar9,0);
        if (in_stack_00000018 == 0) goto LAB_0174a224;
        lVar5 = FUN_01682720(in_stack_00000018,*(undefined8 *)PTR_DAT_033eafd8,uVar9,0);
        puVar8 = Method_System_Collections_Generic_List<Mesh>_GetEnumerator__;
        if (lVar5 != 0) {
          uVar9 = *(undefined8 *)Method_System_Collections_Generic_List<Mesh>_GetEnumerator__;
          lVar6 = thunk_FUN_00d6225c(lVar5,uVar9);
          if (lVar6 == 0) goto LAB_0174a228;
          *(long *)(unaff_x19 + 0x40) = lVar6;
          uVar9 = *(undefined8 *)puVar8;
          lVar6 = thunk_FUN_00d6225c(lVar5,uVar9);
          unaff_x25 = (undefined8 *)PTR_DAT_033eb090;
          goto joined_r0x01749fe8;
        }
        *(undefined8 *)(unaff_x19 + 0x40) = 0;
        unaff_x25 = (undefined8 *)PTR_DAT_033eb090;
      }
    }
    else if ((uVar2 == unaff_w28) &&
            (uVar4 = thunk_FUN_015fe514(unaff_x26,*unaff_x25,0), (uVar4 & 1) != 0)) {
      uVar9 = *(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      if (in_stack_00000018 == 0) goto LAB_0174a224;
      lVar5 = FUN_01682720(in_stack_00000018,*unaff_x25,uVar9,0);
      if (lVar5 == 0) {
        unaff_x20 = 0;
      }
      else {
        uVar9 = *(undefined8 *)StringLiteral_3033;
        unaff_x20 = thunk_FUN_00d6225c(lVar5,uVar9);
        lVar6 = unaff_x20;
joined_r0x01749fe8:
        if (lVar6 == 0) {
LAB_0174a228:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar5,uVar9);
        }
      }
    }
    uVar4 = FUN_0166b7d0();
    if ((uVar4 & 1) == 0) break;
    unaff_x26 = FUN_0166b654();
  } while( true );
  fVar10 = *(float *)(unaff_x19 + 0x24) * (float)in_stack_00000010._4_4_;
  iVar1 = -0x80000000;
  if (fVar10 != INFINITY) {
    iVar1 = (int)fVar10;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  if ((*(long *)(unaff_x19 + 0x40) == 0) && (in_stack_00000008 != 0 || unaff_x24 != 0)) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<MRUKAnchor,_GameObject>_Remove__
                              );
    if (lVar5 == 0) goto LAB_0174a224;
    FUN_0173cb94(lVar5,in_stack_00000008,unaff_x24,0);
    *(long *)(unaff_x19 + 0x40) = lVar5;
  }
  uVar9 = FUN_00da4fb8(*(undefined8 *)StringLiteral_1470,in_stack_00000010._4_4_);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar9;
  if (unaff_x20 == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = PTR_DAT_033eb670;
  }
  else if (unaff_x21 == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = StringLiteral_1034;
  }
  else {
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if (uVar2 == *(uint *)(unaff_x21 + 0x18)) {
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          if (uVar2 <= (uint)lVar5) {
Newtonsoft_Json_JsonWriterException___ctor:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(long *)(unaff_x20 + 0x20 + lVar5 * 8) == 0) {
            thunk_FUN_00d48444(
                              UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                              );
            uVar9 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            puVar8 = PTR_DAT_033ef068;
            goto LAB_0174a1f8;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= (uint)lVar5)
          goto Newtonsoft_Json_JsonWriterException___ctor;
          FUN_01747e0c();
          uVar2 = *(uint *)(unaff_x20 + 0x18);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar2);
      }
      if (in_stack_00000018 != 0) {
        uVar3 = FUN_016844dc(in_stack_00000018,*(undefined8 *)PTR_DAT_033f2b68,0);
        thunk_FUN_00d8e500();
        *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
        lVar5 = FUN_017479a8();
        if (lVar5 != 0) {
          FUN_0127dce8();
          return;
        }
      }
LAB_0174a224:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = Method_System_Nullable<OVRPlugin_XrApi>_get_Value__;
  }
LAB_0174a1f8:
  uVar7 = thunk_FUN_00d48444(puVar8);
  FUN_01679968(uVar9,uVar7,0);
  uVar7 = thunk_FUN_00d48444(
                            Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar7);
}


