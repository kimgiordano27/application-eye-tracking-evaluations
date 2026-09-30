/*
FUNCTION_NAME: FUN_06b4aef0
ENTRY_POINT: 06b4aef0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_06b4aef0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_07a4fa17 & 1) == 0) {
    FUN_031f20f4(UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARRaycast>_var);
    FUN_031f20f4(UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARTrackedImage>_var);
    FUN_031f20f4(UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARTrackedObject>_var);
    FUN_031f20f4(
                UnityEngine_ResourceManagement_ResourceProviders_BinaryAssetProvider<ContentCatalogData_Serializer>_var
                );
    FUN_031f20f4(PTR_DAT_076368c0);
    FUN_031f20f4(System_Collections_Generic_Dictionary<object,_object>_var);
    FUN_031f20f4(System_Collections_Generic_Dictionary<string,_object>_var);
    FUN_031f20f4(UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_var);
    DAT_07a4fa17 = 1;
  }
  puVar1 = UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_var;
  plVar6 = (long *)(param_1 + 0x30);
  lVar7 = *plVar6;
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      lVar4 = *(long *)UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_var;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar4 = *(long *)puVar1;
      }
      puVar2 = UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARRaycast>_var;
      lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
      if (lVar8 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar4 = *(long *)puVar1;
        }
        uVar9 = **(undefined8 **)(lVar4 + 0xb8);
        lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                    UnityEngine_ResourceManagement_ResourceProviders_BinaryAssetProvider<ContentCatalogData_Serializer>_var
                                  );
        FUN_042d3d58(lVar8,uVar9,
                     *(undefined8 *)System_Collections_Generic_Dictionary<object,_object>_var,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
        *plVar5 = lVar8;
        thunk_FUN_0329bf60(plVar5,lVar8);
      }
      uVar9 = FUN_03de95cc(lVar7,lVar8,*(undefined8 *)puVar2);
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
        lVar7 = *(long *)puVar1;
      }
      puVar3 = UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARTrackedObject>_var;
      puVar2 = UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARTrackedImage>_var;
      lVar4 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
      if (lVar4 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
          lVar7 = *(long *)puVar1;
        }
        uVar10 = **(undefined8 **)(lVar7 + 0xb8);
        lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                    UnityEngine_ResourceManagement_ResourceProviders_BinaryAssetProvider<ContentCatalogData_Serializer>_var
                                  );
        FUN_042d3d58(lVar4,uVar10,
                     *(undefined8 *)System_Collections_Generic_Dictionary<string,_object>_var,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
        *plVar5 = lVar4;
        thunk_FUN_0329bf60(plVar5,lVar4);
      }
      uVar9 = FUN_03df58dc(uVar9,lVar4,*(undefined8 *)puVar2);
      lVar7 = FUN_03df7cf4(uVar9,*(undefined8 *)puVar3);
      *plVar6 = lVar7;
      thunk_FUN_0329bf60(plVar6,lVar7);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


