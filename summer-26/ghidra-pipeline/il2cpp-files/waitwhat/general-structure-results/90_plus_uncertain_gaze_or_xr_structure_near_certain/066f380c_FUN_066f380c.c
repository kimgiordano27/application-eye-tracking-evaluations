/*
FUNCTION_NAME: FUN_066f380c
ENTRY_POINT: 066f380c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 147
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066f403c) */
/* WARNING: Removing unreachable block (ram,0x066f4018) */
/* WARNING: Removing unreachable block (ram,0x066f3d30) */

void FUN_066f380c(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [12];
  long local_88;
  long *local_80;
  undefined4 local_74;
  long local_70;
  long *local_68;
  
  if ((DAT_0755827b & 1) == 0) {
    FUN_03188a78(OVRMeshRenderer_TypeInfo);
    FUN_03188a78(OVRMixedReality_TypeInfo);
    FUN_03188a78(System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo);
    FUN_03188a78(System_Net_NetworkInformation_MacOsNetworkInterfaceAPI_TypeInfo);
    FUN_03188a78(Photon_Realtime_ClientState_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(OVRMixedRealityCaptureConfiguration_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_DebugManager_TypeInfo);
    FUN_03188a78(OVRNativeBuffer_TypeInfo);
    FUN_03188a78(OVRNodeStateProperties_TypeInfo);
    FUN_03188a78(OVROverlay_TypeInfo);
    FUN_03188a78(OVRPermissionsRequester_TypeInfo);
    FUN_03188a78(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
    FUN_03188a78(OVROverlayCanvasSettings_TypeInfo);
    FUN_03188a78(OVRPlatformMenu_TypeInfo);
    FUN_03188a78(OVRPlugin_TypeInfo);
    FUN_03188a78(OVRPassthroughLayer_TypeInfo);
    DAT_0755827b = 1;
  }
  puVar3 = System_Net_NetworkInformation_MacOsNetworkInterfaceAPI_TypeInfo;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_74 = 0;
  local_88 = 0;
  local_80 = (long *)0x0;
  if (param_3 != 0) {
    lVar8 = FUN_066c5ab4(param_3,*(undefined8 *)
                                  System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo);
    FUN_066c5ab4(param_3,*(undefined8 *)puVar3);
    if ((lVar8 != 0) &&
       (uVar9 = FUN_066c690c(param_1,0), puVar6 = OVRPassthroughLayer_TypeInfo,
       puVar3 = Photon_Realtime_ClientState_TypeInfo, param_2 != 0)) {
      plVar10 = (long *)FUN_03c04e30(param_2,*(undefined8 *)OVRPlatformMenu_TypeInfo,&local_70,uVar9
                                     ,*(undefined8 *)OVRPassthroughLayer_TypeInfo,0xe4,
                                     *(undefined8 *)OVRNodeStateProperties_TypeInfo);
      local_68 = plVar10;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_066f3a10;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar3,2);
LAB_066f3a10:
      (*(code *)*puVar11)(plVar10,1,puVar11[1]);
      plVar10 = local_68;
      puVar2 = UnityEngine_Rendering_DebugManager_TypeInfo;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *local_68;
      uVar9 = *param_4;
      uVar1 = param_4[1];
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)UnityEngine_Rendering_DebugManager_TypeInfo) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_066f3a80;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_031c0d08(local_68,*(long *)UnityEngine_Rendering_DebugManager_TypeInfo,0);
LAB_066f3a80:
      (*(code *)*puVar11)(plVar10,uVar9,uVar1,0,2,puVar11[1]);
      plVar10 = local_68;
      puVar5 = OVROverlayCanvasSettings_TypeInfo;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *local_68;
      uVar9 = *param_5;
      uVar1 = param_5[1];
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_066f3b08;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(local_68,*(long *)puVar2,4);
LAB_066f3b08:
      (*(code *)*puVar11)(plVar10,uVar9,uVar1,3,puVar11[1]);
      lVar12 = local_70;
      local_74 = 1;
      auVar17 = FUN_066480cc(param_2,lVar8 + 0xd8,&local_74,0);
      plVar10 = local_68;
      lVar15 = local_70;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      *(undefined1 (*) [12])(lVar12 + 0x10) = auVar17;
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *local_68;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_066f3bac;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(local_68,*(long *)puVar3,9);
LAB_066f3bac:
      (*(code *)*puVar11)(plVar10,lVar15 + 0x10,puVar11[1]);
      plVar10 = local_68;
      lVar12 = *(long *)puVar5;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar12 = *(long *)puVar5;
      }
      puVar11 = *(undefined8 **)(lVar12 + 0xb8);
      lVar15 = puVar11[3];
      if (lVar15 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar11 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar9 = *puVar11;
        lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)OVRMeshRenderer_TypeInfo);
        FUN_04a59b8c(lVar15,uVar9,*(undefined8 *)OVRPermissionsRequester_TypeInfo,0);
        *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar15;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *plVar10;
      lVar16 = *(long *)OVRMixedRealityCaptureConfiguration_TypeInfo;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_066f3c90;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar12 = FUN_031c0d08(plVar10);
LAB_066f3c90:
      lVar12 = thunk_FUN_031a5ef4(*(undefined8 *)(lVar12 + 8),lVar16);
      (**(code **)(lVar12 + 8))(plVar10,lVar15,lVar12);
      plVar10 = local_68;
      puVar2 = PTR_DAT_070c2e88;
      if (local_68 != (long *)0x0) {
        lVar12 = *local_68;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_070c2e88) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_066f3d18;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar11 = (undefined8 *)FUN_031c0d08(local_68,*(long *)PTR_DAT_070c2e88,0);
LAB_066f3d18:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      puVar7 = OVRPlugin_TypeInfo;
      puVar4 = OVROverlay_TypeInfo;
      uVar9 = FUN_066c690c(param_1,0);
      plVar10 = (long *)FUN_03c051c0(param_2,*(undefined8 *)puVar7,&local_88,uVar9,
                                     *(undefined8 *)puVar6,0xf8,*(undefined8 *)puVar4);
      local_80 = plVar10;
      if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar9 = *param_4;
      *(undefined8 *)(local_88 + 0x24) = param_4[1];
      *(undefined8 *)(local_88 + 0x1c) = uVar9;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_066f3de0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar3,0);
LAB_066f3de0:
      (*(code *)*puVar11)(plVar10,param_4,2,puVar11[1]);
      lVar12 = local_88;
      local_74 = 2;
      auVar17 = FUN_066480cc(param_2,lVar8 + 0xd8,&local_74,0);
      plVar10 = local_80;
      lVar8 = local_88;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      *(undefined1 (*) [12])(lVar12 + 0x10) = auVar17;
      if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *local_80;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_066f3e80;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(local_80,*(long *)puVar3,9);
LAB_066f3e80:
      (*(code *)*puVar11)(plVar10,lVar8 + 0x10,puVar11[1]);
      plVar10 = local_80;
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar8 = *(long *)puVar5;
      }
      puVar11 = *(undefined8 **)(lVar8 + 0xb8);
      lVar12 = puVar11[4];
      if (lVar12 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar11 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar9 = *puVar11;
        lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)OVRMixedReality_TypeInfo);
        FUN_04a59a40(lVar12,uVar9,
                     *(undefined8 *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo,0);
        *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20) = lVar12;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar8 = *plVar10;
      lVar15 = *(long *)OVRNativeBuffer_TypeInfo;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar15 + 0x20)) {
            lVar8 = lVar8 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 + 0x138;
            goto LAB_066f3f64;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar8 = FUN_031c0d08(plVar10);
LAB_066f3f64:
      lVar8 = thunk_FUN_031a5ef4(*(undefined8 *)(lVar8 + 8),lVar15);
      (**(code **)(lVar8 + 8))(plVar10,lVar12,lVar8);
      plVar10 = local_80;
      if (local_80 != (long *)0x0) {
        lVar8 = *local_80;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_066f3fe0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar11 = (undefined8 *)FUN_031c0d08(local_80,*(long *)puVar2,0);
LAB_066f3fe0:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


