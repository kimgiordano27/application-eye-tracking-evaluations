/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeObjectArray
ENTRY_POINT: 05c99718
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__SerializeObjectArray(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 in_x11;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  *(undefined8 *)(param_1 + 0x58) = in_x11;
  uVar5 = FUN_03188b1c();
  uVar7 = *unaff_x23;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x60) = uVar5;
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_042e4268(lVar6,*unaff_x22);
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x20);
  FUN_05ca14d0(uVar5,0);
  puVar3 = PTR_DAT_0711af00;
  if (lVar6 != 0) {
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)PTR_DAT_0711af00;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    puVar4 = PTR_DAT_0711af30;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
      }
      else {
        FUN_042e4a64(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar4);
      FUN_05c9f7f0();
      iVar1 = *(int *)(lVar6 + 0x1c);
      lVar9 = *(long *)(lVar6 + 0x10);
      *(undefined4 *)(lVar8 + 0x10) = 3;
      lVar10 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = iVar1 + 1;
      puVar4 = PTR_DAT_0711af18;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
        }
        else {
          FUN_042e4a64(lVar6,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)puVar4);
        FUN_05c9f7f0();
        iVar1 = *(int *)(lVar6 + 0x1c);
        lVar9 = *(long *)(lVar6 + 0x10);
        *(undefined4 *)(lVar8 + 0x10) = 1;
        lVar10 = *(long *)puVar3;
        *(int *)(lVar6 + 0x1c) = iVar1 + 1;
        puVar4 = PTR_DAT_0711af28;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
          }
          else {
            FUN_042e4a64(lVar6,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar4);
          FUN_05c9f7f0();
          iVar1 = *(int *)(lVar6 + 0x1c);
          lVar9 = *(long *)(lVar6 + 0x10);
          *(undefined4 *)(lVar8 + 0x10) = 2;
          lVar10 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = iVar1 + 1;
          puVar4 = PTR_DAT_0711af08;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
            }
            else {
              FUN_042e4a64(lVar6,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)puVar4);
            FUN_05c9f7f0();
            iVar1 = *(int *)(lVar6 + 0x1c);
            lVar9 = *(long *)(lVar6 + 0x10);
            *(undefined4 *)(lVar8 + 0x10) = 0x60;
            lVar10 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = iVar1 + 1;
            puVar4 = PTR_DAT_0711af10;
            if (lVar9 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
              }
              else {
                FUN_042e4a64(lVar6,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)puVar4);
              FUN_05c9f7f0();
              iVar1 = *(int *)(lVar6 + 0x1c);
              lVar9 = *(long *)(lVar6 + 0x10);
              *(undefined4 *)(lVar8 + 0x10) = 0x20;
              lVar10 = *(long *)puVar3;
              *(int *)(lVar6 + 0x1c) = iVar1 + 1;
              puVar4 = PTR_DAT_0711af20;
              if (lVar9 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                }
                else {
                  FUN_042e4a64(lVar6,lVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)puVar4);
                FUN_05c9f7f0();
                iVar1 = *(int *)(lVar6 + 0x1c);
                lVar9 = *(long *)(lVar6 + 0x10);
                *(undefined4 *)(lVar8 + 0x10) = 0x40;
                lVar10 = *(long *)puVar3;
                *(int *)(lVar6 + 0x1c) = iVar1 + 1;
                if (lVar9 != 0) {
                  uVar2 = *(uint *)(lVar6 + 0x18);
                  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                  }
                  else {
                    FUN_042e4a64(lVar6,lVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = lVar6;
                  FUN_05c99b44();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


