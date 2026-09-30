/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DefaultValueHandling
ENTRY_POINT: 0170af20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 165
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_3;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__get_DefaultValueHandling(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  int iVar9;
  uint unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  undefined *puVar7;
  
  if ((int)unaff_w23 < 0) {
    puVar7 = PTR_DAT_033f0f88;
    if (-1 < (int)unaff_w23) {
      puVar7 = 
      Method_System_Collections_Generic_List_Enumerator<SubtitleManager_SubtitleDataObjectPair>_Dispose__
      ;
    }
    uVar1 = thunk_FUN_00d48444(puVar7);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
    FUN_016efd4c(uVar6,uVar1,uVar8,0);
    uVar1 = thunk_FUN_00d48444(
                              Method_Meta_WitAi_Lib_BaseAudioClipInput_<PerformActivation>d__61_System_Collections_IEnumerator_Reset__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar1);
  }
  if (unaff_x25 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(unaff_x25 + 0x10);
  }
  if ((int)(iVar9 - unaff_w20) < (int)unaff_w23) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar1 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = PTR_DAT_033ea8d0;
  }
  else {
    if (unaff_x22 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(unaff_x22 + 0x10);
    }
    if ((int)unaff_w21 <= (int)(iVar9 - unaff_w19)) {
      if ((unaff_w24 >> 0x1e & 1) == 0) {
        if ((unaff_w24 & 0xdfffffe0) == 0) {
LAB_0170afa0:
          if (unaff_x25 == 0) {
            uVar5 = (ulong)-(uint)(unaff_x22 != 0);
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
              lVar2 = FUN_015fd038();
              if (DAT_037780a2 == '\0') {
                thunk_FUN_00d48444(PTR_DAT_033ee010);
                DAT_037780a2 = '\x01';
              }
              lVar2 = lVar2 + (long)(int)unaff_w23 * 2;
              if ((*(uint *)(unaff_x22 + 0x10) < unaff_w21) ||
                 (*(uint *)(unaff_x22 + 0x10) - unaff_w21 < unaff_w19)) {
                FUN_01792dd4(0x18,0);
              }
              lVar3 = FUN_015fd038();
              lVar3 = lVar3 + (long)(int)unaff_w21 * 2;
              if (unaff_w24 == 0x40000000) {
                if (DAT_03778a40 == '\0') {
                  thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
                  thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
                  DAT_03778a40 = '\x01';
                }
                puVar7 = Method_System_Configuration_IgnoreSection_IsModified__;
                uVar1 = FUN_01120480(lVar2,unaff_w20,
                                     *(undefined8 *)
                                      Method_System_Configuration_IgnoreSection_IsModified__);
                uVar6 = *(undefined8 *)puVar7;
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
                puVar7 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                lVar4 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                if (*(int *)(lVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar4 = *(long *)puVar7;
                }
                if (**(char **)(lVar4 + 0xb8) == '\0') {
                  uVar5 = FUN_0170a734();
                  return uVar5;
                }
                if ((unaff_w24 & 1) != 0) {
                  if (*(int *)(*(long *)System_Func<Spectrum_Point,_float>_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar5 = FUN_0170a540(lVar2,unaff_w20,lVar3,unaff_w19);
                  return uVar5;
                }
                if (DAT_03778a40 == '\0') {
                  thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
                  thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
                  DAT_03778a40 = '\x01';
                }
                puVar7 = Method_System_Configuration_IgnoreSection_IsModified__;
                uVar1 = FUN_01120480(lVar2,unaff_w20,
                                     *(undefined8 *)
                                      Method_System_Configuration_IgnoreSection_IsModified__);
                uVar6 = *(undefined8 *)puVar7;
              }
              uVar6 = FUN_01120480(lVar3,unaff_w19,uVar6);
              uVar5 = FUN_01785574(uVar1,unaff_w20,uVar6,unaff_w19,0);
              return uVar5;
            }
            uVar5 = 1;
          }
          return uVar5;
        }
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar1 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar7 = 
        Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
        ;
      }
      else {
        if (unaff_w24 == 0x40000000) goto LAB_0170afa0;
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar1 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar7 = StringLiteral_5433;
      }
      uVar6 = thunk_FUN_00d48444(puVar7);
      uVar8 = thunk_FUN_00d48444(
                                Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__
                                );
      FUN_016ec624(uVar1,uVar6,uVar8,0);
      goto LAB_0170b3a8;
    }
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar1 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = Method_System_Runtime_Remoting_Proxies_TransparentProxy_StoreRemoteField__;
  }
  uVar6 = thunk_FUN_00d48444(puVar7);
  uVar8 = thunk_FUN_00d48444(Method_System_Nullable<RaycastResult>__ctor__);
  FUN_016efd4c(uVar1,uVar6,uVar8,0);
LAB_0170b3a8:
  uVar6 = thunk_FUN_00d48444(
                            Method_Meta_WitAi_Lib_BaseAudioClipInput_<PerformActivation>d__61_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar1,uVar6);
}


