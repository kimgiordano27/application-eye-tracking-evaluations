/*
FUNCTION_NAME: FUN_06cf5290
ENTRY_POINT: 06cf5290
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x06cf60b8) */
/* WARNING: Removing unreachable block (ram,0x06cf5768) */
/* WARNING: Removing unreachable block (ram,0x06cf576c) */
/* WARNING: Removing unreachable block (ram,0x06cf60cc) */
/* WARNING: Removing unreachable block (ram,0x06cf5cb8) */
/* WARNING: Removing unreachable block (ram,0x06cf5cbc) */

long FUN_06cf5290(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  undefined8 *puVar25;
  long *plVar26;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar5 = PTR_DAT_08e890d8;
  puVar4 = PTR_DAT_08e890c0;
  if ((DAT_09419632 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69810);
    FUN_03c8f898(PTR_DAT_08e8c2a8);
    FUN_03c8f898(PTR_DAT_08e89060);
    FUN_03c8f898(PTR_DAT_08e69670);
    FUN_03c8f898(PTR_DAT_08e8c2b0);
    FUN_03c8f898(PTR_DAT_08e8c2b8);
    FUN_03c8f898(PTR_DAT_08e8c2c0);
    FUN_03c8f898(PTR_DAT_08e8c2c8);
    FUN_03c8f898(PTR_DAT_08e8c2d0);
    FUN_03c8f898(PTR_DAT_08e8c2d8);
    FUN_03c8f898(PTR_DAT_08e8c2e0);
    FUN_03c8f898(PTR_DAT_08e8c2e8);
    FUN_03c8f898(PTR_DAT_08e8c2f0);
    FUN_03c8f898(PTR_DAT_08e8c2f8);
    FUN_03c8f898(PTR_DAT_08e6cad8);
    FUN_03c8f898(PTR_DAT_08e8c300);
    FUN_03c8f898(PTR_DAT_08e6cae0);
    FUN_03c8f898(PTR_DAT_08e8c308);
    FUN_03c8f898(PTR_DAT_08e8c310);
    FUN_03c8f898(PTR_DAT_08e8c318);
    FUN_03c8f898(PTR_DAT_08e8c320);
    FUN_03c8f898(PTR_DAT_08e6cae8);
    FUN_03c8f898(PTR_DAT_08e699d0);
    FUN_03c8f898(PTR_DAT_08e8c328);
    FUN_03c8f898(PTR_DAT_08e8c330);
    FUN_03c8f898(PTR_DAT_08e7a470);
    FUN_03c8f898(PTR_DAT_08e8c338);
    FUN_03c8f898(PTR_DAT_08e8c340);
    FUN_03c8f898(PTR_DAT_08e6caf0);
    FUN_03c8f898(PTR_DAT_08e6cb08);
    FUN_03c8f898(PTR_DAT_08e890c0);
    FUN_03c8f898(PTR_DAT_08e7a488);
    FUN_03c8f898(PTR_DAT_08e6cb00);
    FUN_03c8f898(PTR_DAT_08e890d8);
    FUN_03c8f898(PTR_DAT_08e68f00);
    FUN_03c8f898(PTR_DAT_08e8c348);
    FUN_03c8f898(PTR_DAT_08e8c350);
    FUN_03c8f898(PTR_DAT_08e8c358);
    FUN_03c8f898(PTR_DAT_08e8c360);
    FUN_03c8f898(PTR_DAT_08e8c368);
    FUN_03c8f898(PTR_DAT_08e8c370);
    FUN_03c8f898(PTR_DAT_08e8c378);
    FUN_03c8f898(PTR_DAT_08e8c380);
    DAT_09419632 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a4 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  lVar9 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
  FUN_052124c0(lVar9,*(undefined8 *)puVar4);
  if (param_3 != 0) {
    if ((*(char *)(param_3 + 0x60) != '\0') || (*(char *)(param_3 + 0x61) != '\0')) {
      if (*(int *)(*(long *)PTR_DAT_08e69810 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar10 = FUN_0859d3e0(0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_085a437c(*(undefined8 *)PTR_DAT_08e8c360,0);
        return lVar9;
      }
    }
    if (param_2 != (long *)0x0) {
      uVar11 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      lVar12 = (**(code **)(*param_1 + 0x178))
                         (param_1,uVar11,param_4,*(undefined8 *)(*param_1 + 0x180));
      if (param_4 != 0) {
        lVar13 = lVar12;
        if (*(char *)(param_4 + 0x10) != '\0') {
          lVar13 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c2f0);
          FUN_06a4d5c4(lVar13,*(undefined8 *)PTR_DAT_08e8c2c0);
          if ((lVar12 == 0) ||
             (lVar14 = FUN_06a4e060(lVar12,*(undefined8 *)PTR_DAT_08e8c2e0), lVar14 == 0))
          goto LAB_06cf60d8;
          FUN_05012e28(&local_e8,lVar14,*(undefined8 *)PTR_DAT_08e8c328);
          puVar8 = PTR_DAT_08e8c378;
          puVar7 = PTR_DAT_08e8c310;
          puVar6 = PTR_DAT_08e8c308;
          puVar5 = PTR_DAT_08e8c2d0;
          puVar4 = PTR_DAT_08e8c2b0;
          local_80 = CONCAT44(uStack_e4,local_e8);
          uStack_78 = uStack_e0;
          local_70 = local_d8;
          while (uVar10 = FUN_04aa6868(&local_80,*(undefined8 *)puVar7), lVar14 = local_70,
                (uVar10 & 1) != 0) {
            uVar11 = FUN_06a4e300(lVar12,local_70,*(undefined8 *)PTR_DAT_08e8c2d8);
            lVar15 = Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__HandleDownloadBegin
                               (uVar11,uVar11);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar16 = FUN_06959eec(lVar15,*(undefined8 *)PTR_DAT_08e8c2e8);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_04ffccdc(&local_e8,lVar16,*(undefined8 *)PTR_DAT_08e8c330);
            local_a0 = CONCAT44(uStack_e4,local_e8);
            uStack_98 = uStack_e0;
            local_90 = local_d8;
            while (uVar10 = FUN_04a5ca98(&local_a0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
              local_a4 = (undefined4)local_90;
              uVar11 = FUN_070fde54(&local_a4,0);
              uVar11 = FUN_06f7465c(lVar14,*(undefined8 *)puVar8,uVar11,0);
              uVar17 = FUN_0695a18c(lVar15,local_a4,*(undefined8 *)puVar5);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              FUN_06a4e380(lVar13,uVar11,uVar17,*(undefined8 *)puVar4);
            }
            FUN_04a5ca94(&local_a0,*(undefined8 *)PTR_DAT_08e8c300);
          }
          FUN_04aa6864(&local_80,*(undefined8 *)PTR_DAT_08e8c2f8);
        }
        lVar12 = lVar13;
        if (*(char *)(param_4 + 0x11) == '\0') {
LAB_06cf5e14:
          if ((lVar12 != 0) &&
             (lVar13 = FUN_06a4e060(lVar12,*(undefined8 *)PTR_DAT_08e8c2e0), lVar13 != 0)) {
            FUN_05012e28(&local_e8,lVar13,*(undefined8 *)PTR_DAT_08e8c328);
            puVar6 = PTR_DAT_08e8c338;
            puVar5 = PTR_DAT_08e8c310;
            puVar4 = PTR_DAT_08e8c2d8;
            local_80 = CONCAT44(uStack_e4,local_e8);
            uStack_78 = uStack_e0;
            local_70 = local_d8;
            iVar24 = 0;
            do {
              while( true ) {
                uVar10 = FUN_04aa6868(&local_80,*(undefined8 *)puVar5);
                lVar13 = local_70;
                if ((uVar10 & 1) == 0) {
                  FUN_04aa6864(&local_80,*(undefined8 *)PTR_DAT_08e8c2f8);
                  puVar5 = PTR_DAT_08e8c2c8;
                  local_e8 = FUN_06a4e050(lVar12,*(undefined8 *)PTR_DAT_08e8c2c8);
                  puVar4 = PTR_DAT_08e699d0;
                  uVar11 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&local_e8);
                  local_ec = iVar24;
                  uVar17 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&local_ec);
                  local_f0 = FUN_06a4e050(lVar12,*(undefined8 *)puVar5);
                  local_f0 = local_f0 - iVar24;
                  uVar18 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&local_f0);
                  uVar11 = FUN_06f75284(*(undefined8 *)PTR_DAT_08e8c380,uVar11,uVar17,uVar18,0);
                  if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                  }
                  FUN_085a3c50(uVar11,0);
                  return lVar9;
                }
                lVar14 = FUN_06a4e300(lVar12,local_70,*(undefined8 *)puVar4);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                if (*(int *)(lVar14 + 0x18) < 2) break;
LAB_06cf5ebc:
                uVar11 = FUN_06cf64d0(lVar14,param_3,param_2,lVar13);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                lVar13 = *(long *)(lVar9 + 0x10);
                lVar14 = *(long *)puVar6;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                uVar2 = *(uint *)(lVar9 + 0x18);
                if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                  thunk_FUN_03d233cc();
                }
                else {
                  FUN_05212cf4(lVar9,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              }
              if (*(long *)(param_3 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if (*(char *)(*(long *)(param_3 + 0x38) + 0x41) != '\0') goto LAB_06cf5ebc;
              iVar24 = iVar24 + 1;
            } while( true );
          }
        }
        else {
          lVar12 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c2f0);
          FUN_06a4d5c4(lVar12,*(undefined8 *)PTR_DAT_08e8c2c0);
          if ((lVar13 != 0) &&
             (lVar14 = FUN_06a4e060(lVar13,*(undefined8 *)PTR_DAT_08e8c2e0), lVar14 != 0)) {
            FUN_05012e28(&local_e8,lVar14,*(undefined8 *)PTR_DAT_08e8c328);
            local_80 = CONCAT44(uStack_e4,local_e8);
            uStack_78 = uStack_e0;
            local_70 = local_d8;
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream:
            uVar10 = FUN_04aa6868(&local_80,*(undefined8 *)PTR_DAT_08e8c310);
            lVar14 = local_70;
            if ((uVar10 & 1) != 0) {
              lVar15 = FUN_06a4e300(lVar13,local_70,*(undefined8 *)PTR_DAT_08e8c2d8);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              FUN_05213710(&local_e8,lVar15,*(undefined8 *)PTR_DAT_08e6caf0);
              local_c0 = CONCAT44(uStack_e4,local_e8);
              uStack_b8 = uStack_e0;
              local_b0 = local_d8;
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents:
              do {
                uVar10 = FUN_049dc4d0(&local_c0,*(undefined8 *)PTR_DAT_08e6cae0);
                if ((uVar10 & 1) == 0) goto LAB_06cf5c8c;
                lVar15 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c358);
                FUN_07145224(lVar15,0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                plVar26 = (long *)(lVar15 + 0x10);
                *plVar26 = local_b0;
                thunk_FUN_03d233cc(plVar26);
                lVar16 = *plVar26;
                if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar10 = FUN_085dfaac(lVar16,0,0);
                if ((uVar10 & 1) == 0) {
                  if (*plVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  lVar16 = FUN_045e15fc(*plVar26,*(undefined8 *)PTR_DAT_08e89060);
                  if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  uVar10 = FUN_085decd4(lVar16,0,0);
                  if ((uVar10 & 1) != 0) {
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb30();
                    }
                    lVar16 = FUN_085ba364(lVar16,0);
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb30();
                    }
                    if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
                      bVar3 = false;
                      uVar10 = 0;
                      plVar1 = (long *)(lVar15 + 0x18);
                      uVar19 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
                      puVar25 = (undefined8 *)(lVar16 + 0x28);
                      do {
                        if (uVar19 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                          FUN_03c8fb38();
                        }
                        lVar23 = *plVar1;
                        uVar11 = *puVar25;
                        if (lVar23 == 0) {
                          lVar23 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c348);
                          FUN_05822d7c(lVar23,lVar15,*(undefined8 *)PTR_DAT_08e8c350,0);
                          *plVar1 = lVar23;
                          thunk_FUN_03d233cc(plVar1,lVar23);
                        }
                        uVar11 = FUN_0493c698(uVar11,lVar23,*(undefined8 *)PTR_DAT_08e8c2a8);
                        if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                          thunk_FUN_03cd7500();
                        }
                        uVar19 = FUN_085decd4(uVar11,0,0);
                        if ((uVar19 & 1) != 0) {
                          local_e8 = (undefined4)uVar10;
                          uVar11 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&local_e8);
                          uVar11 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8c368,lVar14,uVar11,0);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03c8fb30();
                          }
                          uVar19 = FUN_06a4feb4(lVar12,uVar11,&local_c8,
                                                *(undefined8 *)PTR_DAT_08e8c2b8);
                          if ((uVar19 & 1) == 0) {
                            lVar23 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
                            FUN_052124c0(lVar23,*(undefined8 *)PTR_DAT_08e6cb08);
                            local_c8 = lVar23;
                            FUN_06a4e380(lVar12,uVar11,lVar23,*(undefined8 *)PTR_DAT_08e8c2b0);
                          }
                          if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03c8fb30();
                          }
                          uVar19 = FUN_05213084(local_c8,*plVar26,*(undefined8 *)PTR_DAT_08e8c340);
                          if ((uVar19 & 1) == 0) {
                            if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03c8fb30();
                            }
                            lVar23 = *plVar26;
                            lVar20 = *(long *)(local_c8 + 0x10);
                            lVar22 = *(long *)PTR_DAT_08e7a470;
                            *(int *)(local_c8 + 0x1c) = *(int *)(local_c8 + 0x1c) + 1;
                            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03c8fb30();
                            }
                            uVar2 = *(uint *)(local_c8 + 0x18);
                            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                              *(uint *)(local_c8 + 0x18) = uVar2 + 1;
                              plVar21 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                              *plVar21 = lVar23;
                              thunk_FUN_03d233cc(plVar21);
                            }
                            else {
                              FUN_05212cf4(local_c8,lVar23,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                            }
                          }
                          bVar3 = true;
                        }
                        uVar19 = (ulong)*(uint *)(lVar16 + 0x18);
                        uVar10 = uVar10 + 1;
                        puVar25 = puVar25 + 2;
                      } while ((long)uVar10 < (long)(int)*(uint *)(lVar16 + 0x18));
                      if (bVar3)
                      goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents;
                    }
                  }
                  uVar11 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8c370,lVar14,0);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar10 = FUN_06a4feb4(lVar12,uVar11,&local_d0,*(undefined8 *)PTR_DAT_08e8c2b8);
                  if ((uVar10 & 1) == 0) {
                    lVar15 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
                    FUN_052124c0(lVar15,*(undefined8 *)PTR_DAT_08e6cb08);
                    local_d0 = lVar15;
                    FUN_06a4e380(lVar12,uVar11,lVar15,*(undefined8 *)PTR_DAT_08e8c2b0);
                  }
                  if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar10 = FUN_05213084(local_d0,*plVar26,*(undefined8 *)PTR_DAT_08e8c340);
                  if ((uVar10 & 1) == 0) {
                    if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb30();
                    }
                    lVar15 = *plVar26;
                    lVar16 = *(long *)(local_d0 + 0x10);
                    lVar23 = *(long *)PTR_DAT_08e7a470;
                    *(int *)(local_d0 + 0x1c) = *(int *)(local_d0 + 0x1c) + 1;
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb30();
                    }
                    uVar2 = *(uint *)(local_d0 + 0x18);
                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(local_d0 + 0x18) = uVar2 + 1;
                      plVar26 = (long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar26 = lVar15;
                      thunk_FUN_03d233cc(plVar26);
                    }
                    else {
                      FUN_05212cf4(local_d0,lVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
              } while( true );
            }
            FUN_04aa6864(&local_80,*(undefined8 *)PTR_DAT_08e8c2f8);
            goto LAB_06cf5e14;
          }
        }
      }
    }
  }
LAB_06cf60d8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06cf5c8c:
  FUN_049dc4cc(&local_c0,*(undefined8 *)PTR_DAT_08e6cad8);
  goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream;
}


