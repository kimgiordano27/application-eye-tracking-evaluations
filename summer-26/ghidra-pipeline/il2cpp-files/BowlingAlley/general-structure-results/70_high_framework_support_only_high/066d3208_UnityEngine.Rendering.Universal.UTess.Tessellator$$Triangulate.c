/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UTess.Tessellator$$Triangulate
ENTRY_POINT: 066d3208
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_UTess_Tessellator__Triangulate(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x29;
  long in_stack_00000028;
  
  uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
  FUN_05020914();
  puVar5 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0xa0);
  *puVar5 = uVar4;
  thunk_FUN_0333a630(puVar5,uVar4);
  *(undefined8 *)(unaff_x24 + 0x50) = uVar4;
  thunk_FUN_0333a630((undefined8 *)(unaff_x24 + 0x50),uVar4);
  lVar6 = *unaff_x19;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *unaff_x19;
  }
  lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa8);
  if (lVar10 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *unaff_x19;
    }
    uVar4 = **(undefined8 **)(lVar6 + 0xb8);
    lVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
    FUN_055c676c(lVar10,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>__ctor__
                 ,0);
    plVar7 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0xa8);
    *plVar7 = lVar10;
    thunk_FUN_0333a630(plVar7,lVar10);
  }
  *(long *)(unaff_x24 + 0x60) = lVar10;
  thunk_FUN_0333a630((long *)(unaff_x24 + 0x60),lVar10);
  lVar6 = *unaff_x19;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *unaff_x19;
  }
  lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb0);
  if (lVar10 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *unaff_x19;
    }
    uVar4 = **(undefined8 **)(lVar6 + 0xb8);
    lVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
    FUN_055c676c(lVar10,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_Add__
                 ,0);
    plVar7 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0xb0);
    *plVar7 = lVar10;
    thunk_FUN_0333a630(plVar7,lVar10);
  }
  *(long *)(unaff_x24 + 0x68) = lVar10;
  thunk_FUN_0333a630((long *)(unaff_x24 + 0x68),lVar10);
  if (unaff_x23 != 0) {
    FUN_0474fa70();
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>__ctor__
                              );
    FUN_066ac73c(lVar6,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x28) =
           *(undefined8 *)Method_Unity_VisualScripting_Distance<Vector4>__ctor__;
      thunk_FUN_0333a630();
      *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(in_stack_00000028 + 0x1d0);
      thunk_FUN_0333a630();
      FUN_05283634(lVar6,*(undefined8 *)(in_stack_00000028 + 0x1d8),
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_MockRuntime_AfterFunctionDelegate>_set_Item__
                  );
      puVar3 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
      uVar4 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
      FUN_055c5e7c();
      *(undefined8 *)(lVar6 + 0x80) = uVar4;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x80),uVar4);
      puVar2 = PTR_DAT_072aecd8;
      uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
      FUN_0501d488();
      *(undefined8 *)(lVar6 + 0x88) = uVar4;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x88),uVar4);
      uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_055c5e7c();
      *(undefined8 *)(lVar6 + 0x48) = uVar4;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x48),uVar4);
      uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_0501d488();
      *(undefined8 *)(lVar6 + 0x50) = uVar4;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x50),uVar4);
      *(long *)(in_stack_00000028 + 0x1f0) = lVar6;
      thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1f0),lVar6);
      if (*(long *)(unaff_x22 + 0x48) != 0) {
        FUN_0474fa70(*(long *)(unaff_x22 + 0x48),*(undefined8 *)(in_stack_00000028 + 0x1f0),
                     *unaff_x29);
        lVar10 = *(long *)(unaff_x22 + 0x48);
        lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                  );
        FUN_066c0510(lVar6,0);
        puVar2 = 
        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__;
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x28) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>__ctor__
          ;
          thunk_FUN_0333a630();
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xb8);
          if (lVar9 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar2;
            }
            uVar4 = **(undefined8 **)(lVar8 + 0xb8);
            lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
            FUN_055c676c(lVar9,uVar4,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_GetEnumerator__
                         ,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
            *plVar7 = lVar9;
            thunk_FUN_0333a630(plVar7,lVar9);
          }
          *(long *)(lVar6 + 0x48) = lVar9;
          thunk_FUN_0333a630((long *)(lVar6 + 0x48),lVar9);
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xc0);
          if (lVar9 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar2;
            }
            uVar4 = **(undefined8 **)(lVar8 + 0xb8);
            lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
            FUN_05020914(lVar9,uVar4,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_get_Item__
                         ,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc0);
            *plVar7 = lVar9;
            thunk_FUN_0333a630(plVar7,lVar9);
          }
          *(long *)(lVar6 + 0x50) = lVar9;
          thunk_FUN_0333a630((long *)(lVar6 + 0x50),lVar9);
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 200);
          if (lVar9 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar2;
            }
            uVar4 = **(undefined8 **)(lVar8 + 0xb8);
            lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
            FUN_055c676c(lVar9,uVar4,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>__ctor__
                         ,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200);
            *plVar7 = lVar9;
            thunk_FUN_0333a630(plVar7,lVar9);
          }
          *(long *)(lVar6 + 0x60) = lVar9;
          thunk_FUN_0333a630((long *)(lVar6 + 0x60),lVar9);
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xd0);
          if (lVar9 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar2;
            }
            uVar4 = **(undefined8 **)(lVar8 + 0xb8);
            lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
            FUN_055c676c(lVar9,uVar4,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_Remove__
                         ,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd0);
            *plVar7 = lVar9;
            thunk_FUN_0333a630(plVar7,lVar9);
          }
          *(long *)(lVar6 + 0x68) = lVar9;
          thunk_FUN_0333a630((long *)(lVar6 + 0x68),lVar9);
          if ((lVar10 != 0) && (FUN_0474fa70(lVar10,lVar6,*unaff_x29), unaff_x20 != 0)) {
            lVar6 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                thunk_FUN_0333a630();
              }
              else {
                FUN_041e2c78();
              }
              puVar3 = Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__;
              puVar2 = Method_System_Collections_Generic_Dictionary<string,_Enum>_GetEnumerator__;
              if (0 < *(int *)(unaff_x20 + 0x18)) {
                uVar4 = FUN_041e47e4();
                *(undefined8 *)(in_stack_00000028 + 0x1a0) = uVar4;
                thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1a0),uVar4);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                lVar6 = FUN_066ac7a8(0);
                lVar10 = *(long *)puVar3;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(lVar10);
                }
                if (((lVar6 == 0) ||
                    (lVar6 = FUN_066ac820(lVar6,*(undefined8 *)
                                                 (*(long *)(*(long *)puVar3 + 0xb8) + 0x10),1,0,0,0)
                    , lVar6 == 0)) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_066d38d0;
                FUN_0474fbc4(*(long *)(lVar6 + 0x28),*(undefined8 *)(in_stack_00000028 + 0x1a0),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Values__
                            );
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              lVar6 = FUN_066ac7a8(0);
              if (lVar6 != 0) {
                FUN_066b19ec(lVar6,*(undefined8 *)(in_stack_00000028 + 400),0);
                return;
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


