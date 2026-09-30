/*
FUNCTION_NAME: FUN_019cc908
ENTRY_POINT: 019cc908
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_019cc908(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = UnityEngine_InputSystem_InputInteraction_TypeInfo;
                    /* try { // try from 019cc920 to 01acc923 has its CatchHandler @ 019cc92c */
                    /* try { // try from 019cc924 to 01acc927 has its CatchHandler @ 019cc928 */
                    /* catch() { ... } // from try @ 019cc924 with catch @ 019cc928 */
  if ((DAT_0377a6ff & 1) == 0) {
                    /* catch() { ... } // from try @ 019cc920 with catch @ 019cc92c */
                    /* catch() { ... } // from try @ 019cc8d4 with catch @ 019cc930 */
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB3_MultiMeshCombiner_CombinedMesh_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_24>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(
                      Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OpenCloseStateBuilder_TypeInfo
                      );
    thunk_FUN_00d48444(Sirenix_Serialization_CachedMemoryStream_TypeInfo);
    thunk_FUN_00d48444(System_Func<SimpleTuple<FaceRebuildData,_List<int>>,_int>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Resources_LoadAll<STMAutoClipData>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                      );
    thunk_FUN_00d48444(StringLiteral_5956);
    thunk_FUN_00d48444(StringLiteral_11002);
    thunk_FUN_00d48444(StringLiteral_2688);
    thunk_FUN_00d48444(StringLiteral_9510);
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputInteraction_TypeInfo);
    DAT_0377a6ff = 1;
  }
  puVar5 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_24>_SliceWithStride<Vector4>__
  ;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar2;
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  puVar4 = DigitalOpus_MB_Core_MB3_MultiMeshCombiner_CombinedMesh_TypeInfo;
  if (lVar6 != 0) {
    FUN_01253574(lVar6,uVar8,*(undefined8 *)Sirenix_Serialization_CachedMemoryStream_TypeInfo,0);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar3 = 
    Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OpenCloseStateBuilder_TypeInfo;
    puVar1 = UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo;
    if (lVar7 != 0) {
      FUN_01253360(lVar7,lVar6,
                   *(undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo);
      **(long **)(*(long *)puVar3 + 0xb8) = lVar7;
      uVar8 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if (lVar6 != 0) {
        FUN_01253574(lVar6,uVar8,
                     *(undefined8 *)
                      System_Func<SimpleTuple<FaceRebuildData,_List<int>>,_int>_TypeInfo,0);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar7 != 0) {
          FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar1);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar7;
          uVar8 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          if (lVar6 != 0) {
            FUN_01253574(lVar6,uVar8,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                         ,0);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar7 != 0) {
              FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar1);
              *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar7;
              uVar8 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              if (lVar6 != 0) {
                FUN_01253574(lVar6,uVar8,
                             *(undefined8 *)Method_UnityEngine_Resources_LoadAll<STMAutoClipData>__,
                             0);
                lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if (lVar7 != 0) {
                  FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar1);
                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = lVar7;
                  uVar8 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                  if (lVar6 != 0) {
                    FUN_01253574(lVar6,uVar8,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                                 ,0);
                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    if (lVar7 != 0) {
                      FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar1);
                      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = lVar7;
                      uVar8 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                      if (lVar6 != 0) {
                        FUN_01253574(lVar6,uVar8,*(undefined8 *)StringLiteral_5956,0);
                        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                        if (lVar7 != 0) {
                          FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar1);
                          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = lVar7;
                          uVar8 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                          if (lVar6 != 0) {
                            FUN_01253574(lVar6,uVar8,*(undefined8 *)StringLiteral_11002,0);
                            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                            if (lVar7 != 0) {
                              FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar1);
                              *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = lVar7;
                              uVar8 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                              if (lVar6 != 0) {
                                FUN_01253574(lVar6,uVar8,*(undefined8 *)StringLiteral_2688,0);
                                lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                if (lVar7 != 0) {
                                  FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar1);
                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) = lVar7;
                                  uVar8 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                  if (lVar6 != 0) {
                                    FUN_01253574(lVar6,uVar8,*(undefined8 *)StringLiteral_9510,0);
                                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                    if (lVar7 != 0) {
                                      FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar1);
                                      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = lVar7;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


