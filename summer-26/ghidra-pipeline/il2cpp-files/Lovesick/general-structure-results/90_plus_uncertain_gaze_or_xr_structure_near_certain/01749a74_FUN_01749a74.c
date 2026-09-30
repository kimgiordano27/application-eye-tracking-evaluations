/*
FUNCTION_NAME: FUN_01749a74
ENTRY_POINT: 01749a74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_12;functionality_data_collection_or_telemetry_hits_12
*/


void FUN_01749a74(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  long local_78;
  int local_6c;
  long local_68;
  undefined *puVar10;
  
  if ((DAT_03778bb1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<MRUKAnchor,_GameObject>_Remove__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_Array_FindIndex<HandJointId>__);
    thunk_FUN_00d48444(Method_System_Net_FtpWebRequest_SetException__);
    thunk_FUN_00d48444(StringLiteral_5687);
    thunk_FUN_00d48444(StringLiteral_13854);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Mesh>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_4596);
    thunk_FUN_00d48444(StringLiteral_6314);
    thunk_FUN_00d48444(System_IO_UnexceptionalStreamReader_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033eb090);
    thunk_FUN_00d48444(StringLiteral_8448);
    thunk_FUN_00d48444(Method_System_Threading_WaitHandle_InternalWaitOne__);
    thunk_FUN_00d48444(PTR_DAT_033eafd8);
    thunk_FUN_00d48444(Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__);
    thunk_FUN_00d48444(PTR_DAT_033f65f0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<InternedString,_Type>_get_Keys__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2b68);
    thunk_FUN_00d48444(StringLiteral_1470);
    DAT_03778bb1 = 1;
  }
  local_68 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar4 = FUN_017479a8();
  if (lVar4 != 0) {
    FUN_0127df50(lVar4,param_1,&local_68,*(undefined8 *)Method_System_Array_FindIndex<HandJointId>__
                );
    if (local_68 == 0) {
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                        );
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vclezq_s64__;
    }
    else {
      lVar4 = FUN_0166b5c0(local_68,0);
      if (lVar4 == 0) goto LAB_0174a224;
                    /* try { // try from 01749be8 to 01849bff has its CatchHandler @ 01749f84 */
      uVar5 = FUN_0166b7d0(lVar4,0);
      if ((uVar5 & 1) == 0) {
        local_6c = 0;
        lVar13 = 0;
        local_78 = 0;
        lVar11 = 0;
        lVar12 = 0;
      }
      else {
        local_78 = 0;
        local_6c = 0;
                    /* try { // try from 01749c00 to 01849e23 has its CatchHandler @ 01749960 */
        lVar12 = 0;
        lVar11 = 0;
        lVar13 = 0;
        puVar14 = (undefined8 *)PTR_DAT_033eb090;
        do {
          uVar6 = FUN_0166b654(lVar4,0);
          uVar2 = Newtonsoft_Json_Utilities_AotHelper__Ensure();
          if (uVar2 < 0x602b32ee) {
            if (uVar2 == 0x351df9d2) {
              uVar5 = thunk_FUN_015fe514(uVar6,*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<InternedString,_Type>_get_Keys__
                                         ,0);
              lVar7 = local_68;
              if ((uVar5 & 1) != 0) {
                uVar6 = *(undefined8 *)Method_System_Net_FtpWebRequest_SetException__;
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864();
                }
                uVar6 = FUN_01780344(uVar6,0);
                if (lVar7 == 0) goto LAB_0174a224;
                lVar7 = FUN_01682720(lVar7,*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<InternedString,_Type>_get_Keys__
                                     ,uVar6,0);
                if (lVar7 != 0) {
                  uVar6 = *(undefined8 *)StringLiteral_5687;
                  lVar13 = thunk_FUN_00d6225c(lVar7,uVar6);
                  lVar8 = lVar13;
                  goto joined_r0x01749fe8;
                }
                lVar13 = 0;
              }
            }
            else if (uVar2 == 0x4939908b) {
              uVar5 = thunk_FUN_015fe514(uVar6,*(undefined8 *)PTR_DAT_033eafd8,0);
              lVar7 = local_68;
              if ((uVar5 & 1) != 0) {
                uVar6 = *(undefined8 *)StringLiteral_13854;
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864();
                }
                uVar6 = FUN_01780344(uVar6,0);
                if (lVar7 == 0) goto LAB_0174a224;
                lVar7 = FUN_01682720(lVar7,*(undefined8 *)PTR_DAT_033eafd8,uVar6,0);
                puVar10 = Method_System_Collections_Generic_List<Mesh>_GetEnumerator__;
                if (lVar7 != 0) {
                  uVar6 = *(undefined8 *)
                           Method_System_Collections_Generic_List<Mesh>_GetEnumerator__;
                  lVar8 = thunk_FUN_00d6225c(lVar7,uVar6);
                  if (lVar8 == 0) goto LAB_0174a228;
                  *(long *)(param_1 + 0x40) = lVar8;
                  uVar6 = *(undefined8 *)puVar10;
                  lVar8 = thunk_FUN_00d6225c(lVar7,uVar6);
                  puVar14 = (undefined8 *)PTR_DAT_033eb090;
                  goto joined_r0x01749fe8;
                }
                *(undefined8 *)(param_1 + 0x40) = 0;
                puVar14 = (undefined8 *)PTR_DAT_033eb090;
              }
            }
            else if ((uVar2 == 0x602b32ed) &&
                    (uVar5 = thunk_FUN_015fe514(uVar6,*puVar14,0), lVar7 = local_68,
                    (uVar5 & 1) != 0)) {
              uVar6 = *(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo;
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864();
              }
              uVar6 = FUN_01780344(uVar6,0);
              if (lVar7 == 0) goto LAB_0174a224;
              lVar7 = FUN_01682720(lVar7,*puVar14,uVar6,0);
              if (lVar7 == 0) {
                lVar11 = 0;
              }
              else {
                uVar6 = *(undefined8 *)StringLiteral_3033;
                lVar11 = thunk_FUN_00d6225c(lVar7,uVar6);
                lVar8 = lVar11;
joined_r0x01749fe8:
                if (lVar8 == 0) {
LAB_0174a228:
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar7,uVar6);
                }
              }
            }
          }
          else if (uVar2 < 0x94138db6) {
            if (uVar2 == 0x8d4d225b) {
              uVar5 = thunk_FUN_015fe514(uVar6,*(undefined8 *)
                                                Method_System_Threading_WaitHandle_InternalWaitOne__
                                         ,0);
              lVar7 = local_68;
              if ((uVar5 & 1) != 0) {
                uVar6 = *(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo;
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864();
                }
                uVar6 = FUN_01780344(uVar6,0);
                if (lVar7 == 0) goto LAB_0174a224;
                lVar7 = FUN_01682720(lVar7,*(undefined8 *)
                                            Method_System_Threading_WaitHandle_InternalWaitOne__,
                                     uVar6,0);
                if (lVar7 != 0) {
                  uVar6 = *(undefined8 *)StringLiteral_3033;
                  lVar12 = thunk_FUN_00d6225c(lVar7,uVar6);
                  lVar8 = lVar12;
                  goto joined_r0x01749fe8;
                }
                lVar12 = 0;
              }
            }
            else if ((uVar2 == 0x94138db5) &&
                    (uVar5 = thunk_FUN_015fe514(uVar6,*(undefined8 *)PTR_DAT_033f65f0,0),
                    lVar7 = local_68, (uVar5 & 1) != 0)) {
              uVar6 = *(undefined8 *)StringLiteral_4596;
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864();
              }
              uVar6 = FUN_01780344(uVar6,0);
              if (lVar7 == 0) goto LAB_0174a224;
              lVar7 = FUN_01682720(lVar7,*(undefined8 *)PTR_DAT_033f65f0,uVar6,0);
              if (lVar7 != 0) {
                uVar6 = *(undefined8 *)StringLiteral_6314;
                local_78 = thunk_FUN_00d6225c(lVar7,uVar6);
                puVar14 = (undefined8 *)PTR_DAT_033eb090;
                lVar8 = local_78;
                goto joined_r0x01749fe8;
              }
              local_78 = 0;
              puVar14 = (undefined8 *)PTR_DAT_033eb090;
            }
          }
          else if (uVar2 == 0xc80ab660) {
            uVar5 = thunk_FUN_015fe514(uVar6,*(undefined8 *)StringLiteral_8448,0);
            if ((uVar5 & 1) != 0) {
              if (local_68 == 0) goto LAB_0174a224;
              local_6c = FUN_016844dc(local_68,*(undefined8 *)StringLiteral_8448,0);
            }
          }
          else if ((uVar2 == 0xcf9da972) &&
                  (uVar5 = thunk_FUN_015fe514(uVar6,*(undefined8 *)
                                                                                                          
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                              ,0), (uVar5 & 1) != 0)) {
            if (local_68 == 0) goto LAB_0174a224;
            uVar3 = FUN_016847c4(local_68,*(undefined8 *)
                                           Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                 ,0);
            *(undefined4 *)(param_1 + 0x24) = uVar3;
          }
          uVar5 = FUN_0166b7d0(lVar4,0);
        } while ((uVar5 & 1) != 0);
      }
      fVar15 = *(float *)(param_1 + 0x24) * (float)local_6c;
      iVar1 = -0x80000000;
      if (fVar15 != INFINITY) {
        iVar1 = (int)fVar15;
      }
      *(int *)(param_1 + 0x20) = iVar1;
      if ((*(long *)(param_1 + 0x40) == 0) && (local_78 != 0 || lVar13 != 0)) {
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<MRUKAnchor,_GameObject>_Remove__
                                  );
        if (lVar4 == 0) goto LAB_0174a224;
        FUN_0173cb94(lVar4,local_78,lVar13,0);
        *(long *)(param_1 + 0x40) = lVar4;
      }
      uVar6 = FUN_00da4fb8(*(undefined8 *)StringLiteral_1470,local_6c);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      if (lVar11 == 0) {
        thunk_FUN_00d48444(
                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                          );
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar10 = PTR_DAT_033eb670;
      }
      else if (lVar12 == 0) {
        thunk_FUN_00d48444(
                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                          );
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar10 = StringLiteral_1034;
      }
      else {
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 == *(uint *)(lVar12 + 0x18)) {
          if (0 < (int)uVar2) {
            lVar4 = 0;
            do {
              if (uVar2 <= (uint)lVar4) {
Newtonsoft_Json_JsonWriterException___ctor:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar13 = *(long *)(lVar11 + 0x20 + lVar4 * 8);
              if (lVar13 == 0) {
                thunk_FUN_00d48444(
                                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                                  );
                uVar6 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                puVar10 = PTR_DAT_033ef068;
                goto LAB_0174a1f8;
              }
              if (*(uint *)(lVar12 + 0x18) <= (uint)lVar4)
              goto Newtonsoft_Json_JsonWriterException___ctor;
              FUN_01747e0c(param_1,lVar13,*(undefined8 *)(lVar12 + 0x20 + lVar4 * 8),1);
              uVar2 = *(uint *)(lVar11 + 0x18);
              lVar4 = lVar4 + 1;
            } while ((int)lVar4 < (int)uVar2);
          }
          if (local_68 != 0) {
            uVar3 = FUN_016844dc(local_68,*(undefined8 *)PTR_DAT_033f2b68,0);
            thunk_FUN_00d8e500();
            *(undefined4 *)(param_1 + 0x28) = uVar3;
            lVar4 = FUN_017479a8();
            if (lVar4 != 0) {
              FUN_0127dce8(lVar4,param_1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_Enumerator<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Dispose__
                          );
              return;
            }
          }
          goto LAB_0174a224;
        }
        thunk_FUN_00d48444(
                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                          );
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar10 = Method_System_Nullable<OVRPlugin_XrApi>_get_Value__;
      }
    }
LAB_0174a1f8:
    uVar9 = thunk_FUN_00d48444(puVar10);
    FUN_01679968(uVar6,uVar9,0);
    uVar9 = thunk_FUN_00d48444(
                              Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar9);
  }
LAB_0174a224:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


