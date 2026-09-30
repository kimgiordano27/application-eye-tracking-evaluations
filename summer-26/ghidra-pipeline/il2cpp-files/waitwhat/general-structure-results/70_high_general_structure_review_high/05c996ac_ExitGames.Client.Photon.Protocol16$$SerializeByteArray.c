/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeByteArray
ENTRY_POINT: 05c996ac
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


void ExitGames_Client_Photon_Protocol16__SerializeByteArray(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long in_x10;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  uVar7 = *(undefined8 *)(in_x10 + 200);
  uVar6 = *(undefined8 *)(in_x10 + 0xc0);
  uVar5 = *unaff_x19;
  puVar8 = *(undefined8 **)(param_1 + 0xb8);
  *puVar8 = param_2;
  puVar8[3] = uVar7;
  puVar8[2] = uVar6;
  *(undefined2 *)(puVar8 + 4) = 0;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_0594e9b8(uVar6,1,9,0,0);
  uVar5 = DAT_012e1e38;
  uVar11 = *unaff_x27;
  uVar15 = *unaff_x25;
  lVar9 = *(long *)(*unaff_x21 + 0xb8);
  uVar7 = *unaff_x24;
  *(undefined4 *)(lVar9 + 0x30) = 2;
  uVar14 = *unaff_x26;
  *(undefined8 *)(lVar9 + 0x28) = uVar6;
  *(undefined8 *)(lVar9 + 0x40) = uVar5;
  *(undefined8 *)(lVar9 + 0x48) = uVar11;
  *(undefined8 *)(lVar9 + 0x50) = uVar14;
  *(undefined8 *)(lVar9 + 0x58) = uVar15;
  uVar5 = FUN_03188b1c(uVar7,2);
  uVar6 = *unaff_x23;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x60) = uVar5;
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_042e4268(lVar9,*unaff_x22);
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x20);
  FUN_05ca14d0(uVar5,0);
  puVar3 = PTR_DAT_0711af00;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)PTR_DAT_0711af00;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar4 = PTR_DAT_0711af30;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
      }
      else {
        FUN_042e4a64(lVar9,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar4);
      FUN_05c9f7f0();
      iVar1 = *(int *)(lVar9 + 0x1c);
      lVar12 = *(long *)(lVar9 + 0x10);
      *(undefined4 *)(lVar10 + 0x10) = 3;
      lVar13 = *(long *)puVar3;
      *(int *)(lVar9 + 0x1c) = iVar1 + 1;
      puVar4 = PTR_DAT_0711af18;
      if (lVar12 != 0) {
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
        }
        else {
          FUN_042e4a64(lVar9,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar4);
        FUN_05c9f7f0();
        iVar1 = *(int *)(lVar9 + 0x1c);
        lVar12 = *(long *)(lVar9 + 0x10);
        *(undefined4 *)(lVar10 + 0x10) = 1;
        lVar13 = *(long *)puVar3;
        *(int *)(lVar9 + 0x1c) = iVar1 + 1;
        puVar4 = PTR_DAT_0711af28;
        if (lVar12 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
          }
          else {
            FUN_042e4a64(lVar9,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar4);
          FUN_05c9f7f0();
          iVar1 = *(int *)(lVar9 + 0x1c);
          lVar12 = *(long *)(lVar9 + 0x10);
          *(undefined4 *)(lVar10 + 0x10) = 2;
          lVar13 = *(long *)puVar3;
          *(int *)(lVar9 + 0x1c) = iVar1 + 1;
          puVar4 = PTR_DAT_0711af08;
          if (lVar12 != 0) {
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
            }
            else {
              FUN_042e4a64(lVar9,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar4);
            FUN_05c9f7f0();
            iVar1 = *(int *)(lVar9 + 0x1c);
            lVar12 = *(long *)(lVar9 + 0x10);
            *(undefined4 *)(lVar10 + 0x10) = 0x60;
            lVar13 = *(long *)puVar3;
            *(int *)(lVar9 + 0x1c) = iVar1 + 1;
            puVar4 = PTR_DAT_0711af10;
            if (lVar12 != 0) {
              uVar2 = *(uint *)(lVar9 + 0x18);
              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
              }
              else {
                FUN_042e4a64(lVar9,lVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)puVar4);
              FUN_05c9f7f0();
              iVar1 = *(int *)(lVar9 + 0x1c);
              lVar12 = *(long *)(lVar9 + 0x10);
              *(undefined4 *)(lVar10 + 0x10) = 0x20;
              lVar13 = *(long *)puVar3;
              *(int *)(lVar9 + 0x1c) = iVar1 + 1;
              puVar4 = PTR_DAT_0711af20;
              if (lVar12 != 0) {
                uVar2 = *(uint *)(lVar9 + 0x18);
                if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                  *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                }
                else {
                  FUN_042e4a64(lVar9,lVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)puVar4);
                FUN_05c9f7f0();
                iVar1 = *(int *)(lVar9 + 0x1c);
                lVar12 = *(long *)(lVar9 + 0x10);
                *(undefined4 *)(lVar10 + 0x10) = 0x40;
                lVar13 = *(long *)puVar3;
                *(int *)(lVar9 + 0x1c) = iVar1 + 1;
                if (lVar12 != 0) {
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                  }
                  else {
                    FUN_042e4a64(lVar9,lVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = lVar9;
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


