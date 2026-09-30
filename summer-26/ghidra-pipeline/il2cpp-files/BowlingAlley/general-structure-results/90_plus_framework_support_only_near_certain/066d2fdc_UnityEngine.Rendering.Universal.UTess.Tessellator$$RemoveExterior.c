/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UTess.Tessellator$$RemoveExterior
ENTRY_POINT: 066d2fdc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_Universal_UTess_Tessellator__RemoveExterior(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x29;
  long in_stack_00000028;
  
  *(undefined8 *)(param_1 + 0x48) = unaff_x25;
  thunk_FUN_0333a630();
  lVar4 = *unaff_x19;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *unaff_x19;
  }
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x88);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar4 = *unaff_x19;
    }
    uVar9 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
    FUN_0501d488(lVar7,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_Add__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0x88);
    *plVar5 = lVar7;
    thunk_FUN_0333a630(plVar5,lVar7);
  }
  *(long *)(unaff_x24 + 0x50) = lVar7;
  thunk_FUN_0333a630((long *)(unaff_x24 + 0x50),lVar7);
  lVar4 = *unaff_x19;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *unaff_x19;
  }
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x90);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar4 = *unaff_x19;
    }
    uVar9 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
    FUN_055c5e7c(lVar7,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_GetEnumerator__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0x90);
    *plVar5 = lVar7;
    thunk_FUN_0333a630(plVar5,lVar7);
  }
  *(long *)(unaff_x24 + 0x60) = lVar7;
  thunk_FUN_0333a630((long *)(unaff_x24 + 0x60),lVar7);
  if (unaff_x23 != 0) {
    FUN_0474fa70();
    lVar7 = *(long *)(unaff_x22 + 0x48);
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                              );
    FUN_066c0510(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x28) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
      ;
      thunk_FUN_0333a630();
      lVar6 = *unaff_x19;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *unaff_x19;
      }
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
      if (lVar8 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar6 = *unaff_x19;
        }
        uVar9 = **(undefined8 **)(lVar6 + 0xb8);
        lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
        FUN_055c676c(lVar8,uVar9,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Item__
                     ,0);
        plVar5 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0x98);
        *plVar5 = lVar8;
        thunk_FUN_0333a630(plVar5,lVar8);
      }
      *(long *)(lVar4 + 0x48) = lVar8;
      thunk_FUN_0333a630((long *)(lVar4 + 0x48),lVar8);
      lVar6 = *unaff_x19;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *unaff_x19;
      }
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa0);
      if (lVar8 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar6 = *unaff_x19;
        }
        uVar9 = **(undefined8 **)(lVar6 + 0xb8);
        lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
        FUN_05020914(lVar8,uVar9,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>__ctor__
                     ,0);
        plVar5 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0xa0);
        *plVar5 = lVar8;
        thunk_FUN_0333a630(plVar5,lVar8);
      }
      *(long *)(lVar4 + 0x50) = lVar8;
      thunk_FUN_0333a630((long *)(lVar4 + 0x50),lVar8);
      lVar6 = *unaff_x19;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *unaff_x19;
      }
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa8);
      if (lVar8 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar6 = *unaff_x19;
        }
        uVar9 = **(undefined8 **)(lVar6 + 0xb8);
        lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
        FUN_055c676c(lVar8,uVar9,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>__ctor__
                     ,0);
        plVar5 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0xa8);
        *plVar5 = lVar8;
        thunk_FUN_0333a630(plVar5,lVar8);
      }
      *(long *)(lVar4 + 0x60) = lVar8;
      thunk_FUN_0333a630((long *)(lVar4 + 0x60),lVar8);
      lVar6 = *unaff_x19;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *unaff_x19;
      }
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb0);
      if (lVar8 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar6 = *unaff_x19;
        }
        uVar9 = **(undefined8 **)(lVar6 + 0xb8);
        lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
        FUN_055c676c(lVar8,uVar9,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_Add__
                     ,0);
        plVar5 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0xb0);
        *plVar5 = lVar8;
        thunk_FUN_0333a630(plVar5,lVar8);
      }
      *(long *)(lVar4 + 0x68) = lVar8;
      thunk_FUN_0333a630((long *)(lVar4 + 0x68),lVar8);
      if (lVar7 != 0) {
        FUN_0474fa70(lVar7,lVar4,*unaff_x29);
        lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>__ctor__
                                  );
        FUN_066ac73c(lVar4,0);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x28) =
               *(undefined8 *)Method_Unity_VisualScripting_Distance<Vector4>__ctor__;
          thunk_FUN_0333a630();
          *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(in_stack_00000028 + 0x1d0);
          thunk_FUN_0333a630();
          FUN_05283634(lVar4,*(undefined8 *)(in_stack_00000028 + 0x1d8),
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_MockRuntime_AfterFunctionDelegate>_set_Item__
                      );
          puVar3 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
          uVar9 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var)
          ;
          FUN_055c5e7c();
          *(undefined8 *)(lVar4 + 0x80) = uVar9;
          thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x80),uVar9);
          puVar2 = PTR_DAT_072aecd8;
          uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
          FUN_0501d488();
          *(undefined8 *)(lVar4 + 0x88) = uVar9;
          thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x88),uVar9);
          uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
          FUN_055c5e7c();
          *(undefined8 *)(lVar4 + 0x48) = uVar9;
          thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x48),uVar9);
          uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
          FUN_0501d488();
          *(undefined8 *)(lVar4 + 0x50) = uVar9;
          thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x50),uVar9);
          *(long *)(in_stack_00000028 + 0x1f0) = lVar4;
          thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1f0),lVar4);
          if (*(long *)(unaff_x22 + 0x48) != 0) {
            FUN_0474fa70(*(long *)(unaff_x22 + 0x48),*(undefined8 *)(in_stack_00000028 + 0x1f0),
                         *unaff_x29);
            lVar7 = *(long *)(unaff_x22 + 0x48);
            lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                      );
            FUN_066c0510(lVar4,0);
            puVar2 = 
            Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x28) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>__ctor__
              ;
              thunk_FUN_0333a630();
              lVar6 = *(long *)puVar2;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar6 = *(long *)puVar2;
              }
              lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb8);
              if (lVar8 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar6 = *(long *)puVar2;
                }
                uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                FUN_055c676c(lVar8,uVar9,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_GetEnumerator__
                             ,0);
                plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
                *plVar5 = lVar8;
                thunk_FUN_0333a630(plVar5,lVar8);
              }
              *(long *)(lVar4 + 0x48) = lVar8;
              thunk_FUN_0333a630((long *)(lVar4 + 0x48),lVar8);
              lVar6 = *(long *)puVar2;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar6 = *(long *)puVar2;
              }
              lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0);
              if (lVar8 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar6 = *(long *)puVar2;
                }
                uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                FUN_05020914(lVar8,uVar9,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_get_Item__
                             ,0);
                plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc0);
                *plVar5 = lVar8;
                thunk_FUN_0333a630(plVar5,lVar8);
              }
              *(long *)(lVar4 + 0x50) = lVar8;
              thunk_FUN_0333a630((long *)(lVar4 + 0x50),lVar8);
              lVar6 = *(long *)puVar2;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar6 = *(long *)puVar2;
              }
              lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 200);
              if (lVar8 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar6 = *(long *)puVar2;
                }
                uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                FUN_055c676c(lVar8,uVar9,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>__ctor__
                             ,0);
                plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200);
                *plVar5 = lVar8;
                thunk_FUN_0333a630(plVar5,lVar8);
              }
              *(long *)(lVar4 + 0x60) = lVar8;
              thunk_FUN_0333a630((long *)(lVar4 + 0x60),lVar8);
              lVar6 = *(long *)puVar2;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar6 = *(long *)puVar2;
              }
              lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd0);
              if (lVar8 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar6 = *(long *)puVar2;
                }
                uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                FUN_055c676c(lVar8,uVar9,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_Remove__
                             ,0);
                plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd0);
                *plVar5 = lVar8;
                thunk_FUN_0333a630(plVar5,lVar8);
              }
              *(long *)(lVar4 + 0x68) = lVar8;
              thunk_FUN_0333a630((long *)(lVar4 + 0x68),lVar8);
              if ((lVar7 != 0) && (FUN_0474fa70(lVar7,lVar4,*unaff_x29), unaff_x20 != 0)) {
                lVar4 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                    thunk_FUN_0333a630();
                  }
                  else {
                    FUN_041e2c78();
                  }
                  puVar3 = 
                  Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__;
                  puVar2 = 
                  Method_System_Collections_Generic_Dictionary<string,_Enum>_GetEnumerator__;
                  if (0 < *(int *)(unaff_x20 + 0x18)) {
                    uVar9 = FUN_041e47e4();
                    *(undefined8 *)(in_stack_00000028 + 0x1a0) = uVar9;
                    thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1a0),uVar9);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    lVar4 = FUN_066ac7a8(0);
                    lVar7 = *(long *)puVar3;
                    if (*(int *)(lVar7 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0(lVar7);
                    }
                    if (((lVar4 == 0) ||
                        (lVar4 = FUN_066ac820(lVar4,*(undefined8 *)
                                                     (*(long *)(*(long *)puVar3 + 0xb8) + 0x10),1,0,
                                              0,0), lVar4 == 0)) || (*(long *)(lVar4 + 0x28) == 0))
                    goto LAB_066d38d0;
                    FUN_0474fbc4(*(long *)(lVar4 + 0x28),*(undefined8 *)(in_stack_00000028 + 0x1a0),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Values__
                                );
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  lVar4 = FUN_066ac7a8(0);
                  if (lVar4 != 0) {
                    FUN_066b19ec(lVar4,*(undefined8 *)(in_stack_00000028 + 400),0);
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
LAB_066d38d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


