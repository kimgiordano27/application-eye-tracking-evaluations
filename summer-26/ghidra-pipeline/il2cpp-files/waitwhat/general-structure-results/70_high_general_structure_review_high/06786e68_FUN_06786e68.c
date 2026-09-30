/*
FUNCTION_NAME: FUN_06786e68
ENTRY_POINT: 06786e68
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_06786e68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  
  if ((DAT_07558679 & 1) == 0) {
    FUN_03188a78(TMPro_TMP_MeshInfo_TypeInfo);
    FUN_03188a78(Fusion_Async_TaskManager_TypeInfo);
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_TeleTrust_TeleTrusTObjectIdentifiers_TypeInfo
                );
    FUN_03188a78(Meta_XR_ImmersiveDebugger_Telemetry_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Locomotion_TeleportArcGravity_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Locomotion_TeleportHit_TypeInfo);
    FUN_03188a78(Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettings_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettingsDatumProperty_TypeInfo
                );
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_TypeInfo);
    DAT_07558679 = 1;
  }
  puVar1 = TMPro_TMP_MeshInfo_TypeInfo;
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar11 = *(undefined8 *)
              UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettingsDatumProperty_TypeInfo
    ;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)TMPro_TMP_MeshInfo_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06786f74;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 06786f5c to 06886f8b has its CatchHandler @ 06787228 */
    puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)TMPro_TMP_MeshInfo_TypeInfo,0);
LAB_06786f74:
    (*(code *)*puVar4)(plVar10,uVar11,1,puVar4[1]);
    FUN_06785680(param_1,param_2);
    puVar2 = Fusion_Async_TaskManager_TypeInfo;
    plVar10 = *(long **)(param_1 + 0x20);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      plVar9 = *(long **)(param_1 + 0x10);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)Fusion_Async_TaskManager_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06786ff4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)Fusion_Async_TaskManager_TypeInfo,0);
LAB_06786ff4:
      uVar11 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        uVar12 = *(undefined8 *)Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_TypeInfo;
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_06787064;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,3);
LAB_06787064:
        (*(code *)*puVar4)(plVar9,uVar12,uVar11,puVar4[1]);
        plVar10 = *(long **)(param_1 + 0x20);
        if (plVar10 != (long *)0x0) {
          lVar5 = *plVar10;
          plVar9 = *(long **)(param_1 + 0x10);
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_067870d4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,1);
LAB_067870d4:
          uVar11 = (*(code *)*puVar4)(plVar10,puVar4[1]);
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            uVar12 = *(undefined8 *)Meta_XR_ImmersiveDebugger_Telemetry_TypeInfo;
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                  goto LAB_06787144;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,3);
LAB_06787144:
            (*(code *)*puVar4)(plVar9,uVar12,uVar11,puVar4[1]);
            plVar10 = *(long **)(param_1 + 0x20);
            if (plVar10 != (long *)0x0) {
              lVar5 = *plVar10;
              plVar9 = *(long **)(param_1 + 0x10);
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                    goto LAB_067871b4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,2);
LAB_067871b4:
              iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
              if (plVar9 != (long *)0x0) {
                lVar5 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                uVar11 = *(undefined8 *)Oculus_Interaction_Locomotion_TeleportArcGravity_TypeInfo;
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                      puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                      goto LAB_06787224;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,4);
LAB_06787224:
                (*(code *)*puVar4)(plVar9,uVar11,(long)iVar3,puVar4[1]);
                plVar10 = *(long **)(param_1 + 0x20);
                if (plVar10 != (long *)0x0) {
                  lVar5 = *plVar10;
                  plVar9 = *(long **)(param_1 + 0x10);
                  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                        goto LAB_06787294;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,3);
LAB_06787294:
                  iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                  if (plVar9 != (long *)0x0) {
                    lVar5 = *plVar9;
                    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    uVar11 = *(undefined8 *)
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_TeleTrust_TeleTrusTObjectIdentifiers_TypeInfo
                    ;
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                          goto LAB_06787304;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,4);
LAB_06787304:
                    (*(code *)*puVar4)(plVar9,uVar11,(long)iVar3,puVar4[1]);
                    plVar10 = *(long **)(param_1 + 0x20);
                    if (plVar10 != (long *)0x0) {
                      lVar5 = *plVar10;
                      plVar9 = *(long **)(param_1 + 0x10);
                      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar7 != 0) {
                        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                            goto LAB_06787374;
                          }
                          uVar7 = uVar7 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,4);
LAB_06787374:
                      iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                      if (plVar9 != (long *)0x0) {
                        lVar5 = *plVar9;
                        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                        uVar11 = *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettings_TypeInfo
                        ;
                        if (uVar7 != 0) {
                          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                              goto LAB_067873e4;
                            }
                            uVar7 = uVar7 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar7 != 0);
                        }
                        puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,4);
LAB_067873e4:
                        (*(code *)*puVar4)(plVar9,uVar11,(long)iVar3,puVar4[1]);
                        plVar10 = *(long **)(param_1 + 0x20);
                        if (plVar10 != (long *)0x0) {
                          lVar5 = *plVar10;
                          plVar9 = *(long **)(param_1 + 0x10);
                          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar7 != 0) {
                            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
                                goto FUN_06787454;
                              }
                              uVar7 = uVar7 - 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar7 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,5);
FUN_06787454:
                          iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                          if (plVar9 != (long *)0x0) {
                            lVar5 = *plVar9;
                            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                            uVar11 = *(undefined8 *)
                                      Oculus_Interaction_Locomotion_TeleportHit_TypeInfo;
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                                  puVar4 = (undefined8 *)
                                           (lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                                  goto LAB_067874c4;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,4);
LAB_067874c4:
                            (*(code *)*puVar4)(plVar9,uVar11,(long)iVar3,puVar4[1]);
                            plVar10 = *(long **)(param_1 + 0x20);
                            if (plVar10 != (long *)0x0) {
                              lVar5 = *plVar10;
                              plVar9 = *(long **)(param_1 + 0x10);
                              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                              if (uVar7 != 0) {
                                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                                    puVar4 = (undefined8 *)
                                             (lVar5 + (long)(*piVar8 + 6) * 0x10 + 0x138);
                                    goto LAB_06787534;
                                  }
                                  uVar7 = uVar7 - 1;
                                  piVar8 = piVar8 + 4;
                                } while (uVar7 != 0);
                              }
                              puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,6);
LAB_06787534:
                              fVar13 = (float)(*(code *)*puVar4)(plVar10,puVar4[1]);
                              if (plVar9 != (long *)0x0) {
                                lVar6 = *plVar9;
                                uVar11 = *(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_TypeInfo
                                ;
                                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                lVar5 = -0x80000000;
                                if (fVar13 != INFINITY) {
                                  lVar5 = (long)(int)fVar13;
                                }
                                if (uVar7 != 0) {
                                  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                                      goto LAB_067875bc;
                                    }
                                    uVar7 = uVar7 - 1;
                                    piVar8 = piVar8 + 4;
                                  } while (uVar7 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,4);
LAB_067875bc:
                                (*(code *)*puVar4)(plVar9,uVar11,lVar5,puVar4[1]);
                                plVar10 = *(long **)(param_1 + 0x10);
                                if (plVar10 != (long *)0x0) {
                                  lVar5 = *plVar10;
                                  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                  if (uVar7 != 0) {
                                    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                                        puVar4 = (undefined8 *)
                                                 (lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                                        goto LAB_06787628;
                                      }
                                      uVar7 = uVar7 - 1;
                                      piVar8 = piVar8 + 4;
                                    } while (uVar7 != 0);
                                  }
                                  puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar1,1);
LAB_06787628:
                    /* WARNING: Could not recover jumptable at 0x06787640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                  (*(code *)*puVar4)(plVar10,puVar4[1]);
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


