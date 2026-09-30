/*
FUNCTION_NAME: FUN_0170ae60
ENTRY_POINT: 0170ae60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 127
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;functionality_gaze_retrieval_or_extraction
*/


ulong FUN_0170ae60(undefined8 param_1,long param_2,uint param_3,uint param_4,long param_5,
                  uint param_6,uint param_7,uint param_8)

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
  undefined *puVar8;
  
  if ((DAT_037789d2 & 1) == 0) {
    thunk_FUN_00d48444(System_Func<Spectrum_Point,_float>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    DAT_037789d2 = 1;
  }
  if (param_8 == 0x10000000) {
    uVar1 = param_4;
    if ((int)param_7 <= (int)param_4) {
      uVar1 = param_7;
    }
    uVar2 = FUN_015fd6d4(param_2,param_3,param_5,param_6,uVar1,5,0);
    if (param_4 == param_7) {
      return uVar2;
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar1 = 0xffffffff;
    if ((int)param_7 < (int)param_4) {
      uVar1 = 1;
    }
    return (ulong)uVar1;
  }
  puVar11 = Method_Mono_Security_X509_X509CertificateCollection_IndexOf__;
  puVar8 = Method_System_Collections_ArrayList_Insert__;
  uVar1 = param_4;
  if (((((int)param_7 < 0) || ((int)param_4 < 0)) ||
      (puVar11 = 
       Method_System_Collections_Generic_List_Enumerator<SubtitleManager_SubtitleDataObjectPair>_Dispose__
      , puVar8 = PTR_DAT_033f0f88, uVar1 = param_3, (int)param_6 < 0)) || ((int)param_3 < 0)) {
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
  if (param_2 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(param_2 + 0x10);
  }
  if ((int)(iVar10 - param_4) < (int)param_3) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = PTR_DAT_033ea8d0;
  }
  else {
    if (param_5 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(param_5 + 0x10);
    }
    if ((int)param_6 <= (int)(iVar10 - param_7)) {
      if ((param_8 >> 0x1e & 1) == 0) {
        if ((param_8 & 0xdfffffe0) == 0) {
LAB_0170afa0:
          if (param_2 == 0) {
            uVar2 = (ulong)-(uint)(param_5 != 0);
          }
          else {
            if (param_5 != 0) {
              if (DAT_037780a2 == '\0') {
                thunk_FUN_00d48444(PTR_DAT_033ee010);
                DAT_037780a2 = '\x01';
              }
              if ((*(uint *)(param_2 + 0x10) < param_3) ||
                 (*(uint *)(param_2 + 0x10) - param_3 < param_4)) {
                FUN_01792dd4(0x18,0);
              }
              lVar4 = FUN_015fd038(param_2,0);
              if (DAT_037780a2 == '\0') {
                thunk_FUN_00d48444(PTR_DAT_033ee010);
                DAT_037780a2 = '\x01';
              }
              lVar4 = lVar4 + (long)(int)param_3 * 2;
              if ((*(uint *)(param_5 + 0x10) < param_6) ||
                 (*(uint *)(param_5 + 0x10) - param_6 < param_7)) {
                FUN_01792dd4(0x18,0);
              }
              lVar5 = FUN_015fd038(param_5,0);
              lVar5 = lVar5 + (long)(int)param_6 * 2;
              if (param_8 == 0x40000000) {
                if (DAT_03778a40 == '\0') {
                  thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
                  thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
                  DAT_03778a40 = '\x01';
                }
                puVar8 = Method_System_Configuration_IgnoreSection_IsModified__;
                uVar3 = FUN_01120480(lVar4,param_4,
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
                  uVar2 = FUN_0170a734(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                       param_8);
                  return uVar2;
                }
                if ((param_8 & 1) != 0) {
                  if (*(int *)(*(long *)System_Func<Spectrum_Point,_float>_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar2 = FUN_0170a540(lVar4,param_4,lVar5,param_7);
                  return uVar2;
                }
                if (DAT_03778a40 == '\0') {
                  thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
                  thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
                  DAT_03778a40 = '\x01';
                }
                puVar8 = Method_System_Configuration_IgnoreSection_IsModified__;
                uVar3 = FUN_01120480(lVar4,param_4,
                                     *(undefined8 *)
                                      Method_System_Configuration_IgnoreSection_IsModified__);
                uVar7 = *(undefined8 *)puVar8;
              }
              uVar7 = FUN_01120480(lVar5,param_7,uVar7);
              uVar2 = FUN_01785574(uVar3,param_4,uVar7,param_7,0);
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
        if (param_8 == 0x40000000) goto LAB_0170afa0;
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


