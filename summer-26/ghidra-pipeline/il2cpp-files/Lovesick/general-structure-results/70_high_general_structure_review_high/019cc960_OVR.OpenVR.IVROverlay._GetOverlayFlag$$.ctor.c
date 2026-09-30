/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetOverlayFlag$$.ctor
ENTRY_POINT: 019cc960
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


void OVR_OpenVR_IVROverlay__GetOverlayFlag___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xe88));
  thunk_FUN_00d48444(System_Func<SimpleTuple<FaceRebuildData,_List<int>>,_int>_TypeInfo);
                    /* try { // try from 019cc97c to 01acc9a3 has its CatchHandler @ 019cc9b8 */
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_Resources_LoadAll<STMAutoClipData>__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                    );
  thunk_FUN_00d48444(StringLiteral_5956);
  thunk_FUN_00d48444(StringLiteral_11002);
                    /* try { // try from 019cc9b0 to 01acc9b3 has its CatchHandler @ 019cc9b4 */
                    /* catch() { ... } // from try @ 019cc9b0 with catch @ 019cc9b4 */
                    /* catch() { ... } // from try @ 019cc97c with catch @ 019cc9b8 */
  thunk_FUN_00d48444(StringLiteral_2688);
  thunk_FUN_00d48444(StringLiteral_9510);
  thunk_FUN_00d48444(UnityEngine_InputSystem_InputInteraction_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x6ff) = 1;
  puVar4 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_24>_SliceWithStride<Vector4>__
  ;
  lVar5 = *unaff_x21;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *unaff_x21;
  }
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                    /* try { // try from 019cca04 to 01acca07 has its CatchHandler @ 019ccbfc */
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar3 = DigitalOpus_MB_Core_MB3_MultiMeshCombiner_CombinedMesh_TypeInfo;
  if (lVar5 != 0) {
    FUN_01253574(lVar5,uVar7,*(undefined8 *)Sirenix_Serialization_CachedMemoryStream_TypeInfo,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar2 = 
    Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OpenCloseStateBuilder_TypeInfo;
    puVar1 = UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo;
    if (lVar6 != 0) {
      FUN_01253360(lVar6,lVar5,
                   *(undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo);
      **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
      uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar5 != 0) {
        FUN_01253574(lVar5,uVar7,
                     *(undefined8 *)
                      System_Func<SimpleTuple<FaceRebuildData,_List<int>>,_int>_TypeInfo,0);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar6 != 0) {
          FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar1);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar6;
          uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar5 != 0) {
            FUN_01253574(lVar5,uVar7,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                         ,0);
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            if (lVar6 != 0) {
              FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar1);
              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar6;
              uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
              if (lVar5 != 0) {
                FUN_01253574(lVar5,uVar7,
                             *(undefined8 *)Method_UnityEngine_Resources_LoadAll<STMAutoClipData>__,
                             0);
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                if (lVar6 != 0) {
                  FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar1);
                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar6;
                  uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if (lVar5 != 0) {
                    FUN_01253574(lVar5,uVar7,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                                 ,0);
                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    if (lVar6 != 0) {
                      FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar1);
                      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar6;
                      uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                      if (lVar5 != 0) {
                        FUN_01253574(lVar5,uVar7,*(undefined8 *)StringLiteral_5956,0);
                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                        if (lVar6 != 0) {
                          FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar1);
                          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = lVar6;
                          uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
                          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                          if (lVar5 != 0) {
                            FUN_01253574(lVar5,uVar7,*(undefined8 *)StringLiteral_11002,0);
                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                            if (lVar6 != 0) {
                              FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar1);
                              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = lVar6;
                              uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
                              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                              if (lVar5 != 0) {
                                FUN_01253574(lVar5,uVar7,*(undefined8 *)StringLiteral_2688,0);
                                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                if (lVar6 != 0) {
                                  FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar1);
                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = lVar6;
                                  uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
                                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                  if (lVar5 != 0) {
                                    FUN_01253574(lVar5,uVar7,*(undefined8 *)StringLiteral_9510,0);
                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                    if (lVar6 != 0) {
                                      FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar1);
                                      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = lVar6;
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


