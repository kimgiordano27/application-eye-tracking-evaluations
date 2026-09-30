/*
FUNCTION_NAME: FUN_06bd5b98
ENTRY_POINT: 06bd5b98
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ray_interaction;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


/* WARNING: Removing unreachable block (ram,0x06bd6388) */
/* WARNING: Removing unreachable block (ram,0x06bd6238) */
/* WARNING: Removing unreachable block (ram,0x06bd65e4) */

long FUN_06bd5b98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  
  puVar3 = UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_var;
  puVar2 = UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_var;
  puVar1 = PTR_DAT_075d7f20;
                    /* try { // try from 06bd5ba8 to 06cd5bb3 has its CatchHandler @ 06bd6268 */
                    /* try { // try from 06bd5bc4 to 06cd5bd3 has its CatchHandler @ 06bd6284 */
  if ((DAT_07a4fe77 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b238);
                    /* try { // try from 06bd5bec to 06cd5bef has its CatchHandler @ 06bd6238 */
    FUN_031f20f4(UnityEngine_InputSystem_InputControlExtensions_ControlBuilder_var);
    FUN_031f20f4(Meta_XR_MRUtilityKit_MRUK_SceneTrackingSettings_var);
    FUN_031f20f4(UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_var);
    FUN_031f20f4(UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_var);
    FUN_031f20f4(Meta_XR_MRUtilityKit_MRUK_SharedRoomsData_var);
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(PTR_DAT_075b7fd0);
    FUN_031f20f4(Meta_XR_MRUtilityKit_MRUKAnchor_SceneLabels_var);
    FUN_031f20f4(PTR_DAT_075b75e8);
                    /* try { // try from 06bd5c50 to 06cd5c7f has its CatchHandler @ 06bd628c */
    FUN_031f20f4(PTR_DAT_075b75f0);
    FUN_031f20f4(PTR_DAT_075b7fd8);
    FUN_031f20f4(Meta_XR_MRUtilityKit_MRUKRoom_CouchSeat_var);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(Meta_XR_MRUtilityKit_MRUKRoom_Surface_var);
    FUN_031f20f4(PTR_DAT_075d7f20);
    FUN_031f20f4(PTR_DAT_075d74b0);
    FUN_031f20f4(UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var);
    DAT_07a4fe77 = 1;
  }
  lVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_05812e88(lVar7,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a4ff12 == '\0') {
    FUN_031f20f4(PTR_DAT_075d7f20);
    DAT_07a4ff12 = '\x01';
  }
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar8 = *(long *)puVar1;
  }
  plVar16 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar8 = *plVar16;
  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_075b7fd0) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_06bd5d70;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_0322c1e8(plVar16,*(long *)PTR_DAT_075b7fd0,0);
LAB_06bd5d70:
  puVar6 = UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var;
  puVar5 = Meta_XR_MRUtilityKit_MRUKRoom_CouchSeat_var;
  puVar4 = Meta_XR_MRUtilityKit_MRUK_SceneTrackingSettings_var;
  puVar3 = UnityEngine_InputSystem_InputControlExtensions_ControlBuilder_var;
  puVar2 = PTR_DAT_0759e2a8;
  puVar1 = PTR_DAT_0759b238;
  plVar16 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
  do {
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__get_gazeAssistanceColliderFixedSize
          ;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0322c1e8(plVar16,*(long *)puVar2,0);
UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__get_gazeAssistanceColliderFixedSize
    :
    uVar14 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar16 == (long *)0x0) {
        return lVar7;
      }
      lVar8 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 == 0) goto LAB_06bd6508;
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_075b7fd8) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__set_gazeAssistanceDistanceScalingClampValue
          ;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0322c1e8(plVar16,*(long *)PTR_DAT_075b7fd8,0);

    UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__set_gazeAssistanceDistanceScalingClampValue
    :
    uVar10 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    if (*(int *)(*(long *)PTR_DAT_075d74b0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    plVar11 = (long *)FUN_06bd35c0(uVar10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar8 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_075b75e8) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06bd5ef8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)PTR_DAT_075b75e8,0);
LAB_06bd5ef8:
    plVar11 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
LAB_06bd5f0c:
    lVar8 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06bd5f58;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)puVar2,0);
LAB_06bd5f58:
    uVar14 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((uVar14 & 1) != 0) {
      lVar8 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_075b75f0) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06bd5fbc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)PTR_DAT_075b75f0,0);
LAB_06bd5fbc:
      plVar12 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
      uVar10 = *(undefined8 *)Meta_XR_MRUtilityKit_MRUKRoom_Surface_var;
      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
      uVar10 = FUN_05e2cbb4(plVar12,uVar10,0,0);
      plVar13 = (long *)FUN_03dd37dc(uVar10,*(undefined8 *)
                                             Meta_XR_MRUtilityKit_MRUK_SharedRoomsData_var);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar8 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)Meta_XR_MRUtilityKit_MRUKAnchor_SceneLabels_var) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06bd6094;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_0322c1e8(plVar13,*(long *)Meta_XR_MRUtilityKit_MRUKAnchor_SceneLabels_var,0);
LAB_06bd6094:
      plVar13 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
LAB_06bd60a8:
      lVar8 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06bd60f4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar2,0);
LAB_06bd60f4:
      uVar14 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      if ((uVar14 & 1) != 0) {
        lVar8 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06bd6150;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar5,0);
LAB_06bd6150:
        lVar8 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar10 = *(undefined8 *)(lVar8 + 0x10);
        uVar14 = FUN_05813a3c(lVar7,uVar10,*(undefined8 *)puVar4);
        if ((uVar14 & 1) == 0) {
          FUN_05813848(lVar7,uVar10,plVar12,*(undefined8 *)puVar3);
        }
        else {
          uVar10 = FUN_05c89614(*(undefined8 *)puVar6,uVar10,plVar12,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_06de0af4(uVar10,0);
        }
        goto LAB_06bd60a8;
      }
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0759b580) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06bd6228;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)PTR_DAT_0759b580,0);
LAB_06bd6228:
        (*(code *)*puVar9)(plVar13,puVar9[1]);
      }
      goto LAB_06bd5f0c;
    }
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0759b580) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06bd6378;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)PTR_DAT_0759b580,0);
LAB_06bd6378:
      (*(code *)*puVar9)(plVar11,puVar9[1]);
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_06bd6524;
    }
  }
LAB_06bd6508:
  puVar9 = (undefined8 *)FUN_0322c1e8(plVar16,*(long *)PTR_DAT_0759b580,0);
LAB_06bd6524:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
  return lVar7;
}


