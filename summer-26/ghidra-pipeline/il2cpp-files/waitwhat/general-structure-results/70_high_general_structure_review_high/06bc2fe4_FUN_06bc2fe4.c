/*
FUNCTION_NAME: FUN_06bc2fe4
ENTRY_POINT: 06bc2fe4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06bc2fe4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if ((DAT_0756043c & 1) == 0) {
    FUN_03188a78(
                Method_System_Collections_Generic_KeyValuePair<int,_TMP_ResourceManager_FontAssetRef>_get_Value__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
                );
    FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__)
    ;
    FUN_03188a78(
                Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Value__
                );
    FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__);
    FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Value__);
    FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<int,_Vector2Int>_get_Key__);
    FUN_03188a78(
                Method_System_Collections_Generic_KeyValuePair<int,_OvrAvatarEntity_LodData>_get_Key__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_KeyValuePair<int,_PanelWithManipulatorsBorderAffordanceController_FadePoint>_get_Key__
                );
    DAT_0756043c = 1;
  }
  puVar3 = Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Value__;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar9 = FUN_04b32ad4(*(long *)(param_1 + 0x20),
                         *(undefined8 *)
                          Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Value__);
    puVar4 = Method_System_Collections_Generic_KeyValuePair<int,_Vector2Int>_get_Key__;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar11 = FUN_04b34218(*(long *)(param_1 + 0x18),
                            *(undefined8 *)
                             Method_System_Collections_Generic_KeyValuePair<int,_Vector2Int>_get_Key__
                           );
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar12 = FUN_04b34218(*(long *)(param_1 + 0x18),*(undefined8 *)puVar4);
        lVar13 = *(long *)(param_1 + 0x10);
        if (lVar13 != 0) {
          iVar10 = *(int *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (0 < iVar10) {
            FUN_0595236c(*(undefined8 *)(lVar13 + 0x10),0,iVar10,0);
            lVar13 = *(long *)(param_1 + 0x10);
            if (lVar13 == 0) goto LAB_06bc3254;
          }
          puVar2 = 
          Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
          ;
          lVar14 = *(long *)(lVar13 + 0x10);
          lVar15 = *(long *)
                    Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
          ;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            }
            else {
              FUN_042e4a64(lVar13,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            lVar13 = *(long *)(param_1 + 0x10);
            if (lVar13 != 0) {
              lVar14 = *(long *)(lVar13 + 0x10);
              lVar15 = *(long *)puVar2;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 != 0) {
                uVar1 = *(uint *)(lVar13 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                }
                else {
                  FUN_042e4a64(lVar13,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                puVar8 = 
                Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Value__
                ;
                puVar7 = 
                Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
                ;
                puVar6 = 
                Method_System_Collections_Generic_KeyValuePair<int,_TMP_ResourceManager_FontAssetRef>_get_Value__
                ;
                puVar5 = 
                Method_System_Collections_Generic_KeyValuePair<int,_OvrAvatarEntity_LodData>_get_Key__
                ;
                puVar2 = Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__;
                lVar13 = *(long *)(param_1 + 0x20);
                while (lVar13 != 0) {
                  if ((*(int *)(lVar13 + 0x18) < 1) ||
                     (iVar10 = FUN_04b32a90(lVar13,*(undefined8 *)puVar2), iVar9 != iVar10)) {
                    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (*(undefined8 *)puVar6);
                    FUN_05971910(lVar13,0);
                    *(undefined8 *)(lVar13 + 0x30) = 0;
                    uVar12 = _UNK_012e5fe8;
                    uVar11 = _DAT_012e5fe0;
                    *(undefined8 *)(lVar13 + 0x28) = 0;
                    *(int *)(lVar13 + 0x24) = iVar9;
                    *(undefined8 *)(lVar13 + 0x18) = uVar12;
                    *(undefined8 *)(lVar13 + 0x10) = uVar11;
                    if (*(long *)(param_1 + 0x10) != 0) {
                      uVar11 = FUN_042e652c(*(long *)(param_1 + 0x10),*(undefined8 *)puVar8);
                      lVar14 = *(long *)(param_1 + 0x18);
                      *(undefined8 *)(lVar13 + 0x28) = uVar11;
                      if (lVar14 != 0) {
                        FUN_04b342c4(lVar14,lVar13,*(undefined8 *)puVar5);
                        return;
                      }
                    }
                    break;
                  }
                  if (*(long *)(param_1 + 0x18) == 0) break;
                  uVar11 = FUN_04b34218(*(long *)(param_1 + 0x18),*(undefined8 *)puVar4);
                  if (*(long *)(param_1 + 0x10) == 0) break;
                  FUN_042e57c0(*(long *)(param_1 + 0x10),0,uVar11,*(undefined8 *)puVar7);
                  if (*(long *)(param_1 + 0x20) == 0) break;
                  FUN_04b32ad4(*(long *)(param_1 + 0x20),*(undefined8 *)puVar3);
                  lVar13 = *(long *)(param_1 + 0x20);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06bc3254:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


