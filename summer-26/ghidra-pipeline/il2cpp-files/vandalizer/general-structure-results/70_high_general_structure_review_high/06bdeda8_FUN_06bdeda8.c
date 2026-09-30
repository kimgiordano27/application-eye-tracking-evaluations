/*
FUNCTION_NAME: FUN_06bdeda8
ENTRY_POINT: 06bdeda8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06bdf588) */

void FUN_06bdeda8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_07a4fedb & 1) == 0) {
    FUN_031f20f4(UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var);
    FUN_031f20f4(PTR_DAT_075d6aa0);
    FUN_031f20f4(System_Xml_Schema_XmlSchemaChoice_var);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_var);
    FUN_031f20f4(UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter_var);
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(PTR_DAT_075a23e0);
    FUN_031f20f4(PTR_DAT_075a23e8);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(PTR_DAT_075d74b0);
    FUN_031f20f4(UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_var);
    FUN_031f20f4(
                Oculus_Interaction_PoseDetection_ShapeRecognizerActiveState_FingerFeatureStateUsage_var
                );
    FUN_031f20f4(UnityEngine_TextCore_Text_TextSettings_FontReferenceMap_var);
    FUN_031f20f4(UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo_var);
    FUN_031f20f4(UnityEngine_UIElements_TextureRegistry_TextureInfo_var);
    DAT_07a4fedb = 1;
  }
  lVar5 = FUN_06bde988();
  puVar4 = UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var;
  if (lVar5 != 0) {
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_075d6aa0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_075d6aa0);
    }
    uVar11 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<Int32Enum>
                       (uVar11,*(undefined8 *)puVar4);
    if (DAT_07a4ff19 == '\0') {
      FUN_031f20f4(
                  Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour_InstantiationSettings_var
                  );
      DAT_07a4ff19 = '\x01';
    }
    puVar4 = Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour_InstantiationSettings_var;
    puVar6 = (undefined8 *)
             (*(long *)(*(long *)
                         Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour_InstantiationSettings_var
                       + 0xb8) + 0x10);
    *puVar6 = uVar11;
    thunk_FUN_0329bf60(puVar6,uVar11);
    if (DAT_07a4ff17 == '\0') {
      FUN_031f20f4(
                  Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour_InstantiationSettings_var
                  );
      DAT_07a4ff17 = '\x01';
    }
    puVar1 = Oculus_Interaction_PoseDetection_ShapeRecognizerActiveState_FingerFeatureStateUsage_var
    ;
    FUN_06bdfa38(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10));
    if (DAT_07a4ff1a == '\0') {
      FUN_031f20f4(
                  Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour_InstantiationSettings_var
                  );
      DAT_07a4ff1a = '\x01';
    }
    lVar5 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_var;
    lVar12 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar12 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *(long *)puVar1;
      }
      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
      lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                   UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter_var);
      FUN_042d6b48(lVar12,uVar13,
                   *(undefined8 *)UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_var,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = lVar12;
      thunk_FUN_0329bf60(plVar7,lVar12);
    }
    plVar7 = (long *)FUN_03deda2c(uVar11,lVar12,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_075a23e0) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06bdf060;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_075a23e0,0);
LAB_06bdf060:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar3 = System_Xml_Schema_XmlSchemaChoice_var;
      puVar2 = PTR_DAT_075a23e8;
      puVar1 = PTR_DAT_0759e2a8;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
LAB_06bdf090:
      do {
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06bdf0dc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar1,0);
LAB_06bdf0dc:
        uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 == 0) goto LAB_06bdf4f8;
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_06bdf4e0;
        }
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06bdf138;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar2,0);
LAB_06bdf138:
        uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (DAT_07a4ff17 == '\0') {
          FUN_031f20f4(puVar4);
          DAT_07a4ff17 = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar9 = FUN_06bdfe58(lVar5,uVar11);
        if ((uVar9 & 1) == 0) {
          if (DAT_07a4ff17 == '\0') {
            FUN_031f20f4(puVar4);
            DAT_07a4ff17 = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_07a4ff1a == '\0') {
            FUN_031f20f4(puVar4);
            DAT_07a4ff1a = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar13 = FUN_06be0398(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__set_scaleDistanceDeltaInput
                    (lVar12,uVar11,uVar13);
          goto LAB_06bdf090;
        }
        if (DAT_07a4ff17 == '\0') {
          FUN_031f20f4(puVar4);
          DAT_07a4ff17 = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar5 = FUN_06be0398(lVar5,uVar11);
        if (lVar5 == 0) {
          if (DAT_07a4ff1a == '\0') {
            FUN_031f20f4(puVar4);
            DAT_07a4ff1a = '\x01';
          }
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar5 = FUN_06be0398(lVar5,uVar11);
          if (lVar5 != 0) {
            if (DAT_07a4ff1a == '\0') {
              FUN_031f20f4(puVar4);
              DAT_07a4ff1a = '\x01';
            }
            lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            lVar5 = FUN_06be0398(lVar5,uVar11);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            uVar13 = thunk_FUN_03202440(lVar5,0);
            if (*(int *)(*(long *)PTR_DAT_075d74b0 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar9 = FUN_06bc9d24(uVar13);
            if ((uVar9 & 1) == 0) {
              uVar11 = FUN_05c88a70(*(undefined8 *)
                                     UnityEngine_UIElements_TextureRegistry_TextureInfo_var,uVar11,
                                    *(undefined8 *)
                                     UnityEngine_TextCore_Text_TextSettings_FontReferenceMap_var,0);
              if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              FUN_06de0af4(uVar11,0);
              goto LAB_06bdf090;
            }
          }
          if (DAT_07a4ff17 == '\0') {
            FUN_031f20f4(puVar4);
            DAT_07a4ff17 = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_07a4ff1a == '\0') {
            FUN_031f20f4(puVar4);
            DAT_07a4ff1a = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar13 = FUN_06be0398(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__set_scaleDistanceDeltaInput
                    (lVar12,uVar11,uVar13);
          goto LAB_06bdf090;
        }
        if (DAT_07a4ff1a == '\0') {
          FUN_031f20f4(puVar4);
          DAT_07a4ff1a = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar13 = FUN_06be0398(lVar5,uVar11);
        if (DAT_07a4ff17 == '\0') {
          FUN_031f20f4(puVar4);
          DAT_07a4ff17 = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar5 = FUN_06be0398(lVar5,uVar11);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar8 = thunk_FUN_03202440(lVar5,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar9 = FUN_06bc9a2c(uVar13,uVar8,1);
        if ((uVar9 & 1) == 0) {
          if (DAT_07a4ff17 == '\0') {
            FUN_031f20f4(puVar4);
            DAT_07a4ff17 = '\x01';
          }
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar5 = FUN_06be0398(lVar5,uVar11);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar13 = thunk_FUN_03202440(lVar5,0);
          uVar11 = FUN_05c89614(*(undefined8 *)
                                 UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo_var,uVar11,
                                uVar13,0);
          if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_06de0af4(uVar11,0);
        }
        else {
          if (DAT_07a4ff17 == '\0') {
            FUN_031f20f4(puVar4);
            DAT_07a4ff17 = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_07a4ff1a == '\0') {
            FUN_031f20f4(puVar4);
            DAT_07a4ff1a = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar13 = FUN_06be0398(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__set_scaleDistanceDeltaInput
                    (lVar12,uVar11,uVar13);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_06bdf4e0:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06bdf514;
    }
  }
LAB_06bdf4f8:
  puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_0759b580,0);
LAB_06bdf514:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


