/*
FUNCTION_NAME: Meta.Voice.Net.WebSockets.Requests.WitWebSocketSubscriptionRequest$$ToString
ENTRY_POINT: 06cf55d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_14;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06cf60b8) */
/* WARNING: Removing unreachable block (ram,0x06cf5768) */
/* WARNING: Removing unreachable block (ram,0x06cf576c) */
/* WARNING: Removing unreachable block (ram,0x06cf60cc) */
/* WARNING: Removing unreachable block (ram,0x06cf5cb8) */
/* WARNING: Removing unreachable block (ram,0x06cf5cbc) */

long Meta_Voice_Net_WebSockets_Requests_WitWebSocketSubscriptionRequest__ToString(long param_1)

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
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 *puVar23;
  long unaff_x24;
  long *plVar24;
  long unaff_x27;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
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
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  
  FUN_06a4d5c4(param_1,*(undefined8 *)PTR_DAT_08e8c2c0);
  if ((unaff_x27 != 0) && (lVar9 = FUN_06a4e060(), lVar9 != 0)) {
    FUN_05012e28(&stack0x00000038,lVar9,*(undefined8 *)PTR_DAT_08e8c328);
    puVar8 = PTR_DAT_08e8c378;
    puVar7 = PTR_DAT_08e8c310;
    puVar6 = PTR_DAT_08e8c308;
    puVar5 = PTR_DAT_08e8c2d0;
    puVar4 = PTR_DAT_08e8c2b0;
    in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    in_stack_000000a8 = in_stack_00000040;
    in_stack_000000b0 = in_stack_00000048;
    while (uVar10 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)puVar7), lVar9 = in_stack_000000b0,
          (uVar10 & 1) != 0) {
      uVar11 = FUN_06a4e300(unaff_x27,in_stack_000000b0,*(undefined8 *)PTR_DAT_08e8c2d8);
      lVar12 = Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__HandleDownloadBegin
                         (uVar11,uVar11);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar13 = FUN_06959eec(lVar12,*(undefined8 *)PTR_DAT_08e8c2e8);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_04ffccdc(&stack0x00000038,lVar13,*(undefined8 *)PTR_DAT_08e8c330);
      in_stack_00000080 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      in_stack_00000088 = in_stack_00000040;
      _uStack0000000000000090 = in_stack_00000048;
      while (uVar10 = FUN_04a5ca98(&stack0x00000080,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        in_stack_00000078._4_4_ = uStack0000000000000090;
        uVar11 = FUN_070fde54((long)&stack0x00000078 + 4,0);
        uVar11 = FUN_06f7465c(lVar9,*(undefined8 *)puVar8,uVar11,0);
        uVar14 = FUN_0695a18c(lVar12,in_stack_00000078._4_4_,*(undefined8 *)puVar5);
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06a4e380(param_1,uVar11,uVar14,*(undefined8 *)puVar4);
      }
      FUN_04a5ca94(&stack0x00000080,*(undefined8 *)PTR_DAT_08e8c300);
    }
    FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
    lVar9 = param_1;
    if (*(char *)(unaff_x24 + 0x11) == '\0') {
LAB_06cf5e14:
      if ((lVar9 != 0) &&
         (lVar12 = FUN_06a4e060(lVar9,*(undefined8 *)PTR_DAT_08e8c2e0), lVar12 != 0)) {
        FUN_05012e28(&stack0x00000038,lVar12,*(undefined8 *)PTR_DAT_08e8c328);
        puVar6 = PTR_DAT_08e8c338;
        puVar5 = PTR_DAT_08e8c310;
        puVar4 = PTR_DAT_08e8c2d8;
        in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
        in_stack_000000a8 = in_stack_00000040;
        in_stack_000000b0 = in_stack_00000048;
        iVar22 = 0;
        do {
          while( true ) {
            uVar10 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)puVar5);
            lVar12 = in_stack_000000b0;
            if ((uVar10 & 1) == 0) {
              FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
              puVar5 = PTR_DAT_08e8c2c8;
              uStack0000000000000038 = FUN_06a4e050(lVar9,*(undefined8 *)PTR_DAT_08e8c2c8);
              puVar4 = PTR_DAT_08e699d0;
              uVar11 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000038);
              iStack0000000000000034 = iVar22;
              uVar14 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&stack0x00000034);
              in_stack_00000030 = FUN_06a4e050(lVar9,*(undefined8 *)puVar5);
              in_stack_00000030 = in_stack_00000030 - iVar22;
              uVar15 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&stack0x00000030);
              uVar11 = FUN_06f75284(*(undefined8 *)PTR_DAT_08e8c380,uVar11,uVar14,uVar15,0);
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
              }
              FUN_085a3c50(uVar11,0);
              return in_stack_00000020;
            }
            lVar13 = FUN_06a4e300(lVar9,in_stack_000000b0,*(undefined8 *)puVar4);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(int *)(lVar13 + 0x18) < 2) break;
LAB_06cf5ebc:
            uVar11 = FUN_06cf64d0(lVar13,in_stack_00000028,in_stack_00000018,lVar12);
            if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar12 = *(long *)(in_stack_00000020 + 0x10);
            lVar13 = *(long *)puVar6;
            *(int *)(in_stack_00000020 + 0x1c) = *(int *)(in_stack_00000020 + 0x1c) + 1;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar2 = *(uint *)(in_stack_00000020 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(in_stack_00000020 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
              thunk_FUN_03d233cc();
            }
            else {
              FUN_05212cf4(in_stack_00000020,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (*(long *)(in_stack_00000028 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if (*(char *)(*(long *)(in_stack_00000028 + 0x38) + 0x41) != '\0') goto LAB_06cf5ebc;
          iVar22 = iVar22 + 1;
        } while( true );
      }
    }
    else {
      lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c2f0);
      FUN_06a4d5c4(lVar9,*(undefined8 *)PTR_DAT_08e8c2c0);
      if ((param_1 != 0) &&
         (lVar12 = FUN_06a4e060(param_1,*(undefined8 *)PTR_DAT_08e8c2e0), lVar12 != 0)) {
        FUN_05012e28(&stack0x00000038,lVar12,*(undefined8 *)PTR_DAT_08e8c328);
        in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
        in_stack_000000a8 = in_stack_00000040;
        in_stack_000000b0 = in_stack_00000048;
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream:
        uVar10 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c310);
        lVar12 = in_stack_000000b0;
        if ((uVar10 & 1) != 0) {
          lVar13 = FUN_06a4e300(param_1,in_stack_000000b0,*(undefined8 *)PTR_DAT_08e8c2d8);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_05213710(&stack0x00000038,lVar13,*(undefined8 *)PTR_DAT_08e6caf0);
          in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
          in_stack_00000068 = in_stack_00000040;
          in_stack_00000070 = in_stack_00000048;
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents:
          do {
            uVar10 = FUN_049dc4d0(&stack0x00000060,*(undefined8 *)PTR_DAT_08e6cae0);
            if ((uVar10 & 1) == 0) goto LAB_06cf5c8c;
            lVar13 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c358);
            FUN_07145224(lVar13,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            plVar24 = (long *)(lVar13 + 0x10);
            *plVar24 = in_stack_00000070;
            thunk_FUN_03d233cc(plVar24);
            lVar20 = *plVar24;
            if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar10 = FUN_085dfaac(lVar20,0,0);
            if ((uVar10 & 1) == 0) {
              if (*plVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar20 = FUN_045e15fc(*plVar24,*(undefined8 *)PTR_DAT_08e89060);
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar10 = FUN_085decd4(lVar20,0,0);
              if ((uVar10 & 1) != 0) {
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                lVar20 = FUN_085ba364(lVar20,0);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                  bVar3 = false;
                  uVar10 = 0;
                  plVar1 = (long *)(lVar13 + 0x18);
                  uVar16 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
                  puVar23 = (undefined8 *)(lVar20 + 0x28);
                  do {
                    if (uVar16 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb38();
                    }
                    lVar21 = *plVar1;
                    uVar11 = *puVar23;
                    if (lVar21 == 0) {
                      lVar21 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c348);
                      FUN_05822d7c(lVar21,lVar13,*(undefined8 *)PTR_DAT_08e8c350,0);
                      *plVar1 = lVar21;
                      thunk_FUN_03d233cc(plVar1,lVar21);
                    }
                    uVar11 = FUN_0493c698(uVar11,lVar21,*(undefined8 *)PTR_DAT_08e8c2a8);
                    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                      thunk_FUN_03cd7500();
                    }
                    uVar16 = FUN_085decd4(uVar11,0,0);
                    if ((uVar16 & 1) != 0) {
                      uStack0000000000000038 = (undefined4)uVar10;
                      uVar11 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000038);
                      uVar11 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8c368,lVar12,uVar11,0);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03c8fb30();
                      }
                      uVar16 = FUN_06a4feb4(lVar9,uVar11,&stack0x00000058,
                                            *(undefined8 *)PTR_DAT_08e8c2b8);
                      if ((uVar16 & 1) == 0) {
                        lVar21 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
                        FUN_052124c0(lVar21,*(undefined8 *)PTR_DAT_08e6cb08);
                        in_stack_00000058 = lVar21;
                        FUN_06a4e380(lVar9,uVar11,lVar21,*(undefined8 *)PTR_DAT_08e8c2b0);
                      }
                      if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03c8fb30();
                      }
                      uVar16 = FUN_05213084(in_stack_00000058,*plVar24,
                                            *(undefined8 *)PTR_DAT_08e8c340);
                      if ((uVar16 & 1) == 0) {
                        if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03c8fb30();
                        }
                        lVar21 = *plVar24;
                        lVar17 = *(long *)(in_stack_00000058 + 0x10);
                        lVar19 = *(long *)PTR_DAT_08e7a470;
                        *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03c8fb30();
                        }
                        uVar2 = *(uint *)(in_stack_00000058 + 0x18);
                        if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                          *(uint *)(in_stack_00000058 + 0x18) = uVar2 + 1;
                          plVar18 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar18 = lVar21;
                          thunk_FUN_03d233cc(plVar18);
                        }
                        else {
                          FUN_05212cf4(in_stack_00000058,lVar21,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      bVar3 = true;
                    }
                    uVar16 = (ulong)*(uint *)(lVar20 + 0x18);
                    uVar10 = uVar10 + 1;
                    puVar23 = puVar23 + 2;
                  } while ((long)uVar10 < (long)(int)*(uint *)(lVar20 + 0x18));
                  if (bVar3)
                  goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents;
                }
              }
              uVar11 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8c370,lVar12,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar10 = FUN_06a4feb4(lVar9,uVar11,&stack0x00000050,*(undefined8 *)PTR_DAT_08e8c2b8);
              if ((uVar10 & 1) == 0) {
                lVar13 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
                FUN_052124c0(lVar13,*(undefined8 *)PTR_DAT_08e6cb08);
                in_stack_00000050 = lVar13;
                FUN_06a4e380(lVar9,uVar11,lVar13,*(undefined8 *)PTR_DAT_08e8c2b0);
              }
              if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar10 = FUN_05213084(in_stack_00000050,*plVar24,*(undefined8 *)PTR_DAT_08e8c340);
              if ((uVar10 & 1) == 0) {
                if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                lVar13 = *plVar24;
                lVar20 = *(long *)(in_stack_00000050 + 0x10);
                lVar21 = *(long *)PTR_DAT_08e7a470;
                *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                uVar2 = *(uint *)(in_stack_00000050 + 0x18);
                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(in_stack_00000050 + 0x18) = uVar2 + 1;
                  plVar24 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar24 = lVar13;
                  thunk_FUN_03d233cc(plVar24);
                }
                else {
                  FUN_05212cf4(in_stack_00000050,lVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06cf5c8c:
  FUN_049dc4cc(&stack0x00000060,*(undefined8 *)PTR_DAT_08e6cad8);
  goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream;
}


