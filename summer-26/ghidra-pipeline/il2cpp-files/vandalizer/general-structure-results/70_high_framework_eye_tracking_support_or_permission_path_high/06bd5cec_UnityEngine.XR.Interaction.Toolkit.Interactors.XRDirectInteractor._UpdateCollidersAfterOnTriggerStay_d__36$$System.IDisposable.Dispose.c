/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRDirectInteractor.<UpdateCollidersAfterOnTriggerStay>d__36$$System.IDisposable.Dispose
ENTRY_POINT: 06bd5cec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


/* WARNING: Removing unreachable block (ram,0x06bd6388) */
/* WARNING: Removing unreachable block (ram,0x06bd6238) */
/* WARNING: Removing unreachable block (ram,0x06bd65e4) */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_IDisposable_Dispose
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar13;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0xf20));
  *(undefined1 *)(unaff_x21 + 0xf12) = 1;
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *unaff_x20;
  }
  plVar13 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar5 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_075b7fd0) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06bd5d70;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)PTR_DAT_075b7fd0,0);
LAB_06bd5d70:
  puVar4 = UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var;
  puVar3 = Meta_XR_MRUtilityKit_MRUKRoom_CouchSeat_var;
  puVar2 = PTR_DAT_0759e2a8;
  puVar1 = PTR_DAT_0759b238;
  plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
  do {
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar5 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__get_gazeAssistanceColliderFixedSize
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar2,0);
UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__get_gazeAssistanceColliderFixedSize
    :
    uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar13 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 == 0) goto LAB_06bd6508;
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_075b7fd8) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__set_gazeAssistanceDistanceScalingClampValue
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)PTR_DAT_075b7fd8,0);

    UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__set_gazeAssistanceDistanceScalingClampValue
    :
    uVar7 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if (*(int *)(*(long *)PTR_DAT_075d74b0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    plVar8 = (long *)FUN_06bd35c0(uVar7);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar5 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_075b75e8) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06bd5ef8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_075b75e8,0);
LAB_06bd5ef8:
    plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
LAB_06bd5f0c:
    lVar5 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06bd5f58;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar2,0);
LAB_06bd5f58:
    uVar11 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if ((uVar11 & 1) != 0) {
      lVar5 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_075b75f0) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06bd5fbc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_075b75f0,0);
LAB_06bd5fbc:
      plVar9 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      uVar7 = *(undefined8 *)Meta_XR_MRUtilityKit_MRUKRoom_Surface_var;
      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
      uVar7 = FUN_05e2cbb4(plVar9,uVar7,0,0);
      plVar10 = (long *)FUN_03dd37dc(uVar7,*(undefined8 *)
                                            Meta_XR_MRUtilityKit_MRUK_SharedRoomsData_var);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      (**(code **)(*plVar9 + 0x2d8))(plVar9,*(undefined8 *)(*plVar9 + 0x2e0));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar5 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Meta_XR_MRUtilityKit_MRUKAnchor_SceneLabels_var) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06bd6094;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_0322c1e8(plVar10,*(long *)Meta_XR_MRUtilityKit_MRUKAnchor_SceneLabels_var,0);
LAB_06bd6094:
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
LAB_06bd60a8:
      lVar5 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06bd60f4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar10,*(long *)puVar2,0);
LAB_06bd60f4:
      uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar11 & 1) != 0) {
        lVar5 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06bd6150;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar10,*(long *)puVar3,0);
LAB_06bd6150:
        lVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
        uVar11 = FUN_05813a3c();
        if ((uVar11 & 1) == 0) {
          FUN_05813848();
        }
        else {
          uVar7 = FUN_05c89614(*(undefined8 *)puVar4,uVar7,plVar9,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_06de0af4(uVar7,0);
        }
        goto LAB_06bd60a8;
      }
      if (plVar10 != (long *)0x0) {
        lVar5 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0759b580) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06bd6228;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar10,*(long *)PTR_DAT_0759b580,0);
LAB_06bd6228:
        (*(code *)*puVar6)(plVar10,puVar6[1]);
      }
      goto LAB_06bd5f0c;
    }
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0759b580) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06bd6378;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_0759b580,0);
LAB_06bd6378:
      (*(code *)*puVar6)(plVar8,puVar6[1]);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06bd6524;
    }
  }
LAB_06bd6508:
  puVar6 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)PTR_DAT_0759b580,0);
LAB_06bd6524:
  (*(code *)*puVar6)(plVar13,puVar6[1]);
  return;
}


