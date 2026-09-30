/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_NullValueHandling
ENTRY_POINT: 0170aebc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 165
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_3;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__set_NullValueHandling(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  int iVar10;
  undefined *puVar11;
  uint unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x27;
  undefined *puVar8;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x27 + 0x9d2) = 1;
  if (unaff_w24 == 0x10000000) {
    uVar2 = FUN_015fd6d4();
    if (unaff_w20 == unaff_w19) {
      return uVar2;
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar1 = 0xffffffff;
    if ((int)unaff_w19 < (int)unaff_w20) {
      uVar1 = 1;
    }
    return (ulong)uVar1;
  }
  puVar11 = Method_Mono_Security_X509_X509CertificateCollection_IndexOf__;
  puVar8 = Method_System_Collections_ArrayList_Insert__;
  uVar1 = unaff_w20;
  if (((((int)unaff_w19 < 0) || ((int)unaff_w20 < 0)) ||
      (puVar11 = 
       Method_System_Collections_Generic_List_Enumerator<SubtitleManager_SubtitleDataObjectPair>_Dispose__
      , puVar8 = PTR_DAT_033f0f88, uVar1 = unaff_w23, (int)unaff_w21 < 0)) || ((int)unaff_w23 < 0))
  {
    if (-1 < (int)uVar1) {
      puVar8 = puVar11;
    }
    uVar3 = thunk_FUN_00d48444(puVar8);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
    FUN_016efd4c(uVar7,uVar3,uVar9,0);
    uVar3 = thunk_FUN_00d48444(
                              Method_Meta_WitAi_Lib_BaseAudioClipInput_<PerformActivation>d__61_System_Collections_IEnumerator_Reset__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar3);
  }
  if (unaff_x25 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(unaff_x25 + 0x10);
  }
  if ((int)(iVar10 - unaff_w20) < (int)unaff_w23) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = PTR_DAT_033ea8d0;
  }
  else {
    if (unaff_x22 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(unaff_x22 + 0x10);
    }
    if ((int)unaff_w21 <= (int)(iVar10 - unaff_w19)) {
      if ((unaff_w24 >> 0x1e & 1) == 0) {
        if ((unaff_w24 & 0xdfffffe0) == 0) {
LAB_0170afa0:
          if (unaff_x25 == 0) {
            uVar2 = (ulong)-(uint)(unaff_x22 != 0);
          }
          else {
            if (unaff_x22 != 0) {
              if (DAT_037780a2 == '\0') {
                thunk_FUN_00d48444(PTR_DAT_033ee010);
                DAT_037780a2 = '\x01';
              }
              if ((*(uint *)(unaff_x25 + 0x10) < unaff_w23) ||
                 (*(uint *)(unaff_x25 + 0x10) - unaff_w23 < unaff_w20)) {
                FUN_01792dd4(0x18,0);
              }
              lVar4 = FUN_015fd038();
              if (DAT_037780a2 == '\0') {
                thunk_FUN_00d48444(PTR_DAT_033ee010);
                DAT_037780a2 = '\x01';
              }
              lVar4 = lVar4 + (long)(int)unaff_w23 * 2;
              if ((*(uint *)(unaff_x22 + 0x10) < unaff_w21) ||
                 (*(uint *)(unaff_x22 + 0x10) - unaff_w21 < unaff_w19)) {
                FUN_01792dd4(0x18,0);
              }
              lVar5 = FUN_015fd038();
              lVar5 = lVar5 + (long)(int)unaff_w21 * 2;
              if (unaff_w24 == 0x40000000) {
                if (DAT_03778a40 == '\0') {
                  thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
                  thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
                  DAT_03778a40 = '\x01';
                }
                puVar8 = Method_System_Configuration_IgnoreSection_IsModified__;
                uVar3 = FUN_01120480(lVar4,unaff_w20,
                                     *(undefined8 *)
                                      Method_System_Configuration_IgnoreSection_IsModified__);
                uVar7 = *(undefined8 *)puVar8;
              }
              else {
                if (*(int *)(*(long *)
                              Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ +
                            0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (DAT_03778a3f == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                                    );
                  DAT_03778a3f = '\x01';
                }
                puVar8 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                lVar6 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar6 = *(long *)puVar8;
                }
                if (**(char **)(lVar6 + 0xb8) == '\0') {
                  uVar2 = FUN_0170a734();
                  return uVar2;
                }
                if ((unaff_w24 & 1) != 0) {
                  if (*(int *)(*(long *)System_Func<Spectrum_Point,_float>_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar2 = FUN_0170a540(lVar4,unaff_w20,lVar5,unaff_w19);
                  return uVar2;
                }
                if (DAT_03778a40 == '\0') {
                  thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
                  thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
                  DAT_03778a40 = '\x01';
                }
                puVar8 = Method_System_Configuration_IgnoreSection_IsModified__;
                uVar3 = FUN_01120480(lVar4,unaff_w20,
                                     *(undefined8 *)
                                      Method_System_Configuration_IgnoreSection_IsModified__);
                uVar7 = *(undefined8 *)puVar8;
              }
              uVar7 = FUN_01120480(lVar5,unaff_w19,uVar7);
              uVar2 = FUN_01785574(uVar3,unaff_w20,uVar7,unaff_w19,0);
              return uVar2;
            }
            uVar2 = 1;
          }
          return uVar2;
        }
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar3 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar8 = 
        Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
        ;
      }
      else {
        if (unaff_w24 == 0x40000000) goto LAB_0170afa0;
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar3 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar8 = StringLiteral_5433;
      }
      uVar7 = thunk_FUN_00d48444(puVar8);
      uVar9 = thunk_FUN_00d48444(
                                Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__
                                );
      FUN_016ec624(uVar3,uVar7,uVar9,0);
      goto LAB_0170b3a8;
    }
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = Method_System_Runtime_Remoting_Proxies_TransparentProxy_StoreRemoteField__;
  }
  uVar7 = thunk_FUN_00d48444(puVar8);
  uVar9 = thunk_FUN_00d48444(Method_System_Nullable<RaycastResult>__ctor__);
  FUN_016efd4c(uVar3,uVar7,uVar9,0);
LAB_0170b3a8:
  uVar7 = thunk_FUN_00d48444(
                            Method_Meta_WitAi_Lib_BaseAudioClipInput_<PerformActivation>d__61_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar7);
}


