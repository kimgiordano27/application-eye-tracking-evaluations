/*
FUNCTION_NAME: FUN_06e398e0
ENTRY_POINT: 06e398e0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_06e398e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_0727c9e8;
  if ((DAT_076ead5c & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRResult_From<OVRAnchor_SaveResult>__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_NullCoalesce_Coalesce__);
    thunk_FUN_032e1da0(Method_System_Nullable_GetUnderlyingType__);
    thunk_FUN_032e1da0(Method_OVRResult_From<OVRAnchor_ShareResult>__);
    thunk_FUN_032e1da0(Method_System_ComponentModel_NullableConverter__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_07282088);
    thunk_FUN_032e1da0(PTR_DAT_0727c9e8);
    thunk_FUN_032e1da0(Method_OVRResult_From<List<OVRAnchor>,_OVRAnchor_FetchResult>__);
    thunk_FUN_032e1da0(
                      Method_OVRResult_From<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRResult_From<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>__
                      );
    thunk_FUN_032e1da0(Method_OVRRoomLayout_FetchAnchorsAsync__);
    thunk_FUN_032e1da0(Method_OVRRoomLayout_FetchLayoutAnchorsAsync__);
    thunk_FUN_032e1da0(Method_OVRRoomLayout_IOVRAnchorComponent<OVRRoomLayout>_SetEnabledAsync__);
    thunk_FUN_032e1da0(Method_OVRRuntimeAssetsBase_LoadAsset<OVROverlayCanvasSettings>__);
    thunk_FUN_032e1da0(Method_OVRRuntimeAssetsBase_LoadAsset<OVRRuntimeSettings>__);
    thunk_FUN_032e1da0(Method_OVRRuntimeAssetsBase_LoadAsset<RuntimeSettings>__);
    thunk_FUN_032e1da0(Method_OVRRuntimeAssetsBase_LoadAsset<RuntimeSettings>__);
    thunk_FUN_032e1da0(PTR_DAT_0728a5c8);
    thunk_FUN_032e1da0(Method_OVRRuntimeController_InputFocusAquired__);
    thunk_FUN_032e1da0(Method_OVRRuntimeController_InputFocusLost__);
    thunk_FUN_032e1da0(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    thunk_FUN_032e1da0(Method_OVRRuntimeSettings_HandleSettingsCreated__);
    thunk_FUN_032e1da0(Method_OVRScene_ValidateRequestString__);
    thunk_FUN_032e1da0(Method_OVRSceneAnchor_SyncComponent<OVRScenePlane>__);
    DAT_076ead5c = 1;
  }
  lVar8 = *(long *)puVar1;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_03293514(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_032934b8();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar3 = Method_OVRRuntimeAssetsBase_LoadAsset<OVROverlayCanvasSettings>__;
  puVar2 = PTR_DAT_07282088;
  lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_032934b8();
  }
  uVar9 = **(undefined8 **)(lVar7 + 0xb8);
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_06b99628(lVar7,*(undefined8 *)puVar3,uVar9,0);
  puVar3 = Method_System_ComponentModel_NullableConverter__ctor__;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar8 != 0)) && (lVar7 != 0)) {
    FUN_03ac26e8(lVar7,*(undefined8 *)Method_OVRScene_ValidateRequestString__,
                 *(undefined8 *)(lVar8 + 0x18),
                 *(undefined8 *)Method_System_ComponentModel_NullableConverter__ctor__);
    lVar10 = *(long *)puVar1;
    lVar8 = *(long *)(lVar10 + 0x38);
    if (lVar8 == 0) {
      FUN_03293514(lVar10);
      lVar8 = *(long *)(lVar10 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    puVar1 = Method_OVRRuntimeController_InputFocusLost__;
    lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8();
    }
    uVar9 = **(undefined8 **)(lVar8 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_06b99628(lVar8,*(undefined8 *)puVar1,uVar9,0);
    if (lVar8 != 0) {
      FUN_03ac26e8(lVar8,*(undefined8 *)
                          Method_OVRResult_From<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>__
                   ,lVar7,*(undefined8 *)Method_OVRResult_From<OVRAnchor_SaveResult>__);
      puVar1 = Method_OVRResult_From<OVRAnchor_ShareResult>__;
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_03ac2738(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18),lVar8,
                     *(undefined8 *)Method_OVRRuntimeAssetsBase_LoadAsset<RuntimeSettings>__,
                     *(undefined8 *)Method_OVRResult_From<OVRAnchor_ShareResult>__);
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_03ac2738(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x1c),lVar8,
                       *(undefined8 *)Method_OVRRuntimeAssetsBase_LoadAsset<OVRRuntimeSettings>__,
                       *(undefined8 *)puVar1);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_03ac2738(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x20),lVar8,
                         *(undefined8 *)Method_OVRSceneAnchor_SyncComponent<OVRScenePlane>__,
                         *(undefined8 *)puVar1);
            if (*(long *)(param_1 + 0x10) != 0) {
              FUN_03ac2738(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24),lVar8,
                           *(undefined8 *)Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__,
                           *(undefined8 *)puVar1);
              if (*(long *)(param_1 + 0x10) != 0) {
                FUN_03ac2738(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28),lVar8,
                             *(undefined8 *)Method_OVRRuntimeAssetsBase_LoadAsset<RuntimeSettings>__
                             ,*(undefined8 *)puVar1);
                if (*(long *)(param_1 + 0x10) != 0) {
                  FUN_03ac2698(lVar8,*(undefined8 *)Method_OVRRoomLayout_FetchLayoutAnchorsAsync__,
                               *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x2c),
                               *(undefined8 *)Method_System_Nullable_GetUnderlyingType__);
                  if (*(long *)(param_1 + 0x10) != 0) {
                    FUN_03ac2738(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x30),lVar8,
                                 *(undefined8 *)Method_OVRRuntimeController_InputFocusAquired__,
                                 *(undefined8 *)puVar1);
                    if (*(long *)(param_1 + 0x10) != 0) {
                      FUN_03ac2648(lVar8,*(undefined8 *)
                                          Method_OVRResult_From<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>__
                                   ,*(undefined1 *)(*(long *)(param_1 + 0x10) + 0x38),
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_NullCoalesce_Coalesce__);
                      puVar6 = Method_OVRRuntimeSettings_HandleSettingsCreated__;
                      puVar5 = 
                      Method_OVRRoomLayout_IOVRAnchorComponent<OVRRoomLayout>_SetEnabledAsync__;
                      puVar4 = Method_OVRRoomLayout_FetchAnchorsAsync__;
                      puVar2 = PTR_DAT_0728a5c8;
                      if (*(long *)(param_1 + 0x10) != 0) {
                        FUN_03ac2738(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x4c),lVar8,
                                     *(undefined8 *)
                                      Method_OVRResult_From<List<OVRAnchor>,_OVRAnchor_FetchResult>__
                                     ,*(undefined8 *)puVar1);
                        FUN_03ac26e8(lVar8,*(undefined8 *)puVar6,*(undefined8 *)puVar4,
                                     *(undefined8 *)puVar3);
                        FUN_03ac26e8(lVar8,*(undefined8 *)puVar5,*(undefined8 *)puVar2,
                                     *(undefined8 *)puVar3);
                        return lVar8;
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
  FUN_032d5ee8();
}


