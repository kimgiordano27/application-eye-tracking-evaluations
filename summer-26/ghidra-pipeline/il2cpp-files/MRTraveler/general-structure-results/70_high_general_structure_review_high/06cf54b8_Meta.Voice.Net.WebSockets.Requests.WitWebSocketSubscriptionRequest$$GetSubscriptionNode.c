/*
FUNCTION_NAME: Meta.Voice.Net.WebSockets.Requests.WitWebSocketSubscriptionRequest$$GetSubscriptionNode
ENTRY_POINT: 06cf54b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x06cf60b8) */
/* WARNING: Removing unreachable block (ram,0x06cf5768) */
/* WARNING: Removing unreachable block (ram,0x06cf576c) */
/* WARNING: Removing unreachable block (ram,0x06cf60cc) */
/* WARNING: Removing unreachable block (ram,0x06cf5cb8) */
/* WARNING: Removing unreachable block (ram,0x06cf5cbc) */

long Meta_Voice_Net_WebSockets_Requests_WitWebSocketSubscriptionRequest__GetSubscriptionNode(void)

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
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar23;
  int iVar24;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *puVar25;
  long *unaff_x23;
  long unaff_x24;
  long *plVar26;
  long in_stack_00000028;
  int in_stack_00000030;
  int iStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  
  FUN_03c8f898(PTR_DAT_08e8c370);
  FUN_03c8f898(PTR_DAT_08e8c378);
  FUN_03c8f898(PTR_DAT_08e8c380);
  *(undefined1 *)(unaff_x21 + 0x632) = 1;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  _uStack0000000000000090 = 0;
  uStack000000000000007c = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  lVar9 = thunk_FUN_03cf5234(*unaff_x20);
  FUN_052124c0(lVar9,*unaff_x19);
  if (in_stack_00000028 != 0) {
    if ((*(char *)(in_stack_00000028 + 0x60) != '\0') ||
       (*(char *)(in_stack_00000028 + 0x61) != '\0')) {
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
    if (unaff_x23 != (long *)0x0) {
      (**(code **)(*unaff_x23 + 0x198))();
      lVar11 = (**(code **)(*unaff_x22 + 0x178))();
      if (unaff_x24 != 0) {
        lVar12 = lVar11;
        if (*(char *)(unaff_x24 + 0x10) != '\0') {
          lVar12 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c2f0);
          FUN_06a4d5c4(lVar12,*(undefined8 *)PTR_DAT_08e8c2c0);
          if ((lVar11 == 0) ||
             (lVar13 = FUN_06a4e060(lVar11,*(undefined8 *)PTR_DAT_08e8c2e0), lVar13 == 0))
          goto LAB_06cf60d8;
          FUN_05012e28(&stack0x00000038,lVar13,*(undefined8 *)PTR_DAT_08e8c328);
          puVar8 = PTR_DAT_08e8c378;
          puVar7 = PTR_DAT_08e8c310;
          puVar6 = PTR_DAT_08e8c308;
          puVar5 = PTR_DAT_08e8c2d0;
          puVar4 = PTR_DAT_08e8c2b0;
          in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
          in_stack_000000a8 = in_stack_00000040;
          in_stack_000000b0 = in_stack_00000048;
          while (uVar10 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)puVar7),
                lVar13 = in_stack_000000b0, (uVar10 & 1) != 0) {
            uVar14 = FUN_06a4e300(lVar11,in_stack_000000b0,*(undefined8 *)PTR_DAT_08e8c2d8);
            lVar15 = Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__HandleDownloadBegin
                               (uVar14,uVar14);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar16 = FUN_06959eec(lVar15,*(undefined8 *)PTR_DAT_08e8c2e8);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_04ffccdc(&stack0x00000038,lVar16,*(undefined8 *)PTR_DAT_08e8c330);
            in_stack_00000080 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
            in_stack_00000088 = in_stack_00000040;
            _uStack0000000000000090 = in_stack_00000048;
            while (uVar10 = FUN_04a5ca98(&stack0x00000080,*(undefined8 *)puVar6), (uVar10 & 1) != 0)
            {
              uStack000000000000007c = uStack0000000000000090;
              uVar14 = FUN_070fde54(&stack0x0000007c,0);
              uVar14 = FUN_06f7465c(lVar13,*(undefined8 *)puVar8,uVar14,0);
              uVar17 = FUN_0695a18c(lVar15,uStack000000000000007c,*(undefined8 *)puVar5);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              FUN_06a4e380(lVar12,uVar14,uVar17,*(undefined8 *)puVar4);
            }
            FUN_04a5ca94(&stack0x00000080,*(undefined8 *)PTR_DAT_08e8c300);
          }
          FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
        }
        lVar11 = lVar12;
        if (*(char *)(unaff_x24 + 0x11) == '\0') {
LAB_06cf5e14:
          if ((lVar11 != 0) &&
             (lVar12 = FUN_06a4e060(lVar11,*(undefined8 *)PTR_DAT_08e8c2e0), lVar12 != 0)) {
            FUN_05012e28(&stack0x00000038,lVar12,*(undefined8 *)PTR_DAT_08e8c328);
            puVar6 = PTR_DAT_08e8c338;
            puVar5 = PTR_DAT_08e8c310;
            puVar4 = PTR_DAT_08e8c2d8;
            in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
            in_stack_000000a8 = in_stack_00000040;
            in_stack_000000b0 = in_stack_00000048;
            iVar24 = 0;
            do {
              while( true ) {
                uVar10 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)puVar5);
                lVar12 = in_stack_000000b0;
                if ((uVar10 & 1) == 0) {
                  FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
                  puVar5 = PTR_DAT_08e8c2c8;
                  uStack0000000000000038 = FUN_06a4e050(lVar11,*(undefined8 *)PTR_DAT_08e8c2c8);
                  puVar4 = PTR_DAT_08e699d0;
                  uVar14 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000038);
                  iStack0000000000000034 = iVar24;
                  uVar17 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&stack0x00000034);
                  in_stack_00000030 = FUN_06a4e050(lVar11,*(undefined8 *)puVar5);
                  in_stack_00000030 = in_stack_00000030 - iVar24;
                  uVar18 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&stack0x00000030);
                  uVar14 = FUN_06f75284(*(undefined8 *)PTR_DAT_08e8c380,uVar14,uVar17,uVar18,0);
                  if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                  }
                  FUN_085a3c50(uVar14,0);
                  return lVar9;
                }
                lVar13 = FUN_06a4e300(lVar11,in_stack_000000b0,*(undefined8 *)puVar4);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                if (*(int *)(lVar13 + 0x18) < 2) break;
LAB_06cf5ebc:
                uVar14 = FUN_06cf64d0(lVar13,in_stack_00000028,unaff_x23,lVar12);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                lVar12 = *(long *)(lVar9 + 0x10);
                lVar13 = *(long *)puVar6;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                uVar2 = *(uint *)(lVar9 + 0x18);
                if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar14;
                  thunk_FUN_03d233cc();
                }
                else {
                  FUN_05212cf4(lVar9,uVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
              }
              if (*(long *)(in_stack_00000028 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if (*(char *)(*(long *)(in_stack_00000028 + 0x38) + 0x41) != '\0') goto LAB_06cf5ebc;
              iVar24 = iVar24 + 1;
            } while( true );
          }
        }
        else {
          lVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c2f0);
          FUN_06a4d5c4(lVar11,*(undefined8 *)PTR_DAT_08e8c2c0);
          if ((lVar12 != 0) &&
             (lVar13 = FUN_06a4e060(lVar12,*(undefined8 *)PTR_DAT_08e8c2e0), lVar13 != 0)) {
            FUN_05012e28(&stack0x00000038,lVar13,*(undefined8 *)PTR_DAT_08e8c328);
            in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
            in_stack_000000a8 = in_stack_00000040;
            in_stack_000000b0 = in_stack_00000048;
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream:
            uVar10 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c310);
            lVar13 = in_stack_000000b0;
            if ((uVar10 & 1) != 0) {
              lVar15 = FUN_06a4e300(lVar12,in_stack_000000b0,*(undefined8 *)PTR_DAT_08e8c2d8);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              FUN_05213710(&stack0x00000038,lVar15,*(undefined8 *)PTR_DAT_08e6caf0);
              in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
              in_stack_00000068 = in_stack_00000040;
              in_stack_00000070 = in_stack_00000048;
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents:
              do {
                uVar10 = FUN_049dc4d0(&stack0x00000060,*(undefined8 *)PTR_DAT_08e6cae0);
                if ((uVar10 & 1) == 0) goto LAB_06cf5c8c;
                lVar15 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c358);
                FUN_07145224(lVar15,0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                plVar26 = (long *)(lVar15 + 0x10);
                *plVar26 = in_stack_00000070;
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
                        uVar14 = *puVar25;
                        if (lVar23 == 0) {
                          lVar23 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c348);
                          FUN_05822d7c(lVar23,lVar15,*(undefined8 *)PTR_DAT_08e8c350,0);
                          *plVar1 = lVar23;
                          thunk_FUN_03d233cc(plVar1,lVar23);
                        }
                        uVar14 = FUN_0493c698(uVar14,lVar23,*(undefined8 *)PTR_DAT_08e8c2a8);
                        if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                          thunk_FUN_03cd7500();
                        }
                        uVar19 = FUN_085decd4(uVar14,0,0);
                        if ((uVar19 & 1) != 0) {
                          uStack0000000000000038 = (undefined4)uVar10;
                          uVar14 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,
                                                      &stack0x00000038);
                          uVar14 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8c368,lVar13,uVar14,0);
                          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03c8fb30();
                          }
                          uVar19 = FUN_06a4feb4(lVar11,uVar14,&stack0x00000058,
                                                *(undefined8 *)PTR_DAT_08e8c2b8);
                          if ((uVar19 & 1) == 0) {
                            lVar23 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
                            FUN_052124c0(lVar23,*(undefined8 *)PTR_DAT_08e6cb08);
                            in_stack_00000058 = lVar23;
                            FUN_06a4e380(lVar11,uVar14,lVar23,*(undefined8 *)PTR_DAT_08e8c2b0);
                          }
                          if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03c8fb30();
                          }
                          uVar19 = FUN_05213084(in_stack_00000058,*plVar26,
                                                *(undefined8 *)PTR_DAT_08e8c340);
                          if ((uVar19 & 1) == 0) {
                            if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03c8fb30();
                            }
                            lVar23 = *plVar26;
                            lVar20 = *(long *)(in_stack_00000058 + 0x10);
                            lVar22 = *(long *)PTR_DAT_08e7a470;
                            *(int *)(in_stack_00000058 + 0x1c) =
                                 *(int *)(in_stack_00000058 + 0x1c) + 1;
                            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03c8fb30();
                            }
                            uVar2 = *(uint *)(in_stack_00000058 + 0x18);
                            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                              *(uint *)(in_stack_00000058 + 0x18) = uVar2 + 1;
                              plVar21 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                              *plVar21 = lVar23;
                              thunk_FUN_03d233cc(plVar21);
                            }
                            else {
                              FUN_05212cf4(in_stack_00000058,lVar23,
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
                  uVar14 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8c370,lVar13,0);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar10 = FUN_06a4feb4(lVar11,uVar14,&stack0x00000050,
                                        *(undefined8 *)PTR_DAT_08e8c2b8);
                  if ((uVar10 & 1) == 0) {
                    lVar15 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
                    FUN_052124c0(lVar15,*(undefined8 *)PTR_DAT_08e6cb08);
                    in_stack_00000050 = lVar15;
                    FUN_06a4e380(lVar11,uVar14,lVar15,*(undefined8 *)PTR_DAT_08e8c2b0);
                  }
                  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar10 = FUN_05213084(in_stack_00000050,*plVar26,*(undefined8 *)PTR_DAT_08e8c340);
                  if ((uVar10 & 1) == 0) {
                    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb30();
                    }
                    lVar15 = *plVar26;
                    lVar16 = *(long *)(in_stack_00000050 + 0x10);
                    lVar23 = *(long *)PTR_DAT_08e7a470;
                    *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb30();
                    }
                    uVar2 = *(uint *)(in_stack_00000050 + 0x18);
                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(in_stack_00000050 + 0x18) = uVar2 + 1;
                      plVar26 = (long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar26 = lVar15;
                      thunk_FUN_03d233cc(plVar26);
                    }
                    else {
                      FUN_05212cf4(in_stack_00000050,lVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
              } while( true );
            }
            FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
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
  FUN_049dc4cc(&stack0x00000060,*(undefined8 *)PTR_DAT_08e6cad8);
  goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream;
}


