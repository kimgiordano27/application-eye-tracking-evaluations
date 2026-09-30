/*
FUNCTION_NAME: FUN_068670ac
ENTRY_POINT: 068670ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_8;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


void FUN_068670ac(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  
  puVar1 = PTR_DAT_070c1b68;
  if ((DAT_07558e2e & 1) == 0) {
    FUN_03188a78(OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo);
    DAT_07558e2e = 1;
  }
  lVar8 = param_4[4];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = FUN_069d69b8(lVar8,0,0);
  if ((uVar2 & 1) == 0) {
    FUN_069d32d4(param_4,0,0);
    uVar3 = FUN_057b5e54(*(undefined8 *)OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo,
                         param_4,0);
    if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
    }
    FUN_0698f53c(uVar3,param_4,0);
    return;
  }
  if (param_4[4] != 0) {
    uVar11 = FUN_069e6528(param_4[4],0);
    puVar1 = OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo;
    lVar8 = param_4[9];
    lVar9 = param_4[10];
    *(undefined4 *)(param_4 + 0xb) = uVar11;
    *(undefined4 *)((long)param_4 + 0x5c) = param_2;
    uVar3 = *(undefined8 *)puVar1;
    *(undefined4 *)(param_4 + 0xc) = param_3;
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
    FUN_05114100(uVar3,param_4,*(undefined8 *)(*param_4 + 0x180),0);
    if ((lVar8 != 0) &&
       (uVar3 = FUN_04b04b38(lVar8,uVar3,
                             *(undefined8 *)OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo),
       lVar9 != 0)) {
      FUN_06831a88(lVar9,uVar3,0);
      plVar10 = (long *)param_4[8];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)param_4[7];
        if (plVar10 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar10;
        lVar9 = param_4[10];
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_068673c8;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_031c0d08(plVar10,*(long *)
                                       OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo,0);
LAB_068673c8:
        plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo);
        FUN_05111088(uVar3,param_4,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo,0);
        if (plVar10 == (long *)0x0) goto LAB_06867494;
        lVar8 = *plVar10;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        lVar5 = *(long *)OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo;
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar5) {
              lVar8 = lVar8 + (long)(*piVar7 + 1) * 0x10;
              goto LAB_06867460;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        uVar6 = 1;
      }
      else {
        lVar9 = param_4[10];
        uVar3 = FUN_069d3a80(param_4,0);
        lVar8 = *plVar10;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06867314;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_031c0d08(plVar10,*(long *)
                                       OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo,0);
LAB_06867314:
        plVar10 = (long *)(*(code *)*puVar4)(plVar10,uVar3,puVar4[1]);
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo);
        FUN_05111088(uVar3,param_4,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo,0);
        if (plVar10 == (long *)0x0) goto LAB_06867494;
        lVar8 = *plVar10;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        lVar5 = *(long *)OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo;
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
LAB_0686737c:
          if (*(long *)(piVar7 + -2) != lVar5) goto code_r0x06867388;
          lVar8 = lVar8 + (long)*piVar7 * 0x10;
LAB_06867460:
          puVar4 = (undefined8 *)(lVar8 + 0x138);
          goto LAB_06867464;
        }
LAB_06867394:
        uVar6 = 0;
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar10,lVar5,uVar6);
LAB_06867464:
      uVar3 = (*(code *)*puVar4)(plVar10,uVar3,puVar4[1]);
      if (lVar9 != 0) {
        FUN_06831a88(lVar9,uVar3,0);
        return;
      }
    }
  }
LAB_06867494:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
code_r0x06867388:
  uVar2 = uVar2 - 1;
  piVar7 = piVar7 + 4;
  if (uVar2 == 0) goto LAB_06867394;
  goto LAB_0686737c;
}


