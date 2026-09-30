/*
FUNCTION_NAME: Meta.Voice.Net.WebSockets.Requests.WitWebSocketTranscribeRequest$$.ctor
ENTRY_POINT: 06cf56fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06cf60cc) */
/* WARNING: Removing unreachable block (ram,0x06cf5768) */
/* WARNING: Removing unreachable block (ram,0x06cf576c) */
/* WARNING: Removing unreachable block (ram,0x06cf5cb8) */
/* WARNING: Removing unreachable block (ram,0x06cf5cbc) */
/* WARNING: Removing unreachable block (ram,0x06cf5de0) */
/* WARNING: Removing unreachable block (ram,0x06cf60b8) */

long Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest___ctor
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 *unaff_x19;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar21;
  undefined8 *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *plVar22;
  long unaff_x26;
  long in_stack_00000010;
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
  
  do {
    FUN_06f7465c(unaff_x24,param_2,param_1,0);
    FUN_0695a18c(unaff_x26,in_stack_00000078._4_4_,*unaff_x22);
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e380();
    while (uVar9 = FUN_04a5ca98(&stack0x00000080,*unaff_x23), (uVar9 & 1) == 0) {
      FUN_04a5ca94(&stack0x00000080,*(undefined8 *)PTR_DAT_08e8c300);
      uVar9 = FUN_04aa6868(&stack0x000000a0,*unaff_x21);
      unaff_x24 = in_stack_000000b0;
      if ((uVar9 & 1) == 0) {
        FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
        lVar8 = unaff_x25;
        if (*(char *)(in_stack_00000010 + 0x11) == '\0') goto LAB_06cf5e14;
        lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c2f0);
        FUN_06a4d5c4(lVar8,*(undefined8 *)PTR_DAT_08e8c2c0);
        if ((unaff_x25 == 0) || (lVar10 = FUN_06a4e060(), lVar10 == 0)) goto LAB_06cf60d8;
        FUN_05012e28(&stack0x00000038,lVar10,*(undefined8 *)PTR_DAT_08e8c328);
        in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
        in_stack_000000a8 = in_stack_00000040;
        in_stack_000000b0 = in_stack_00000048;
        goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream;
      }
      uVar7 = FUN_06a4e300();
      unaff_x26 = Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__HandleDownloadBegin
                            (uVar7,uVar7);
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar8 = FUN_06959eec(unaff_x26,*(undefined8 *)PTR_DAT_08e8c2e8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_04ffccdc(&stack0x00000038,lVar8,*(undefined8 *)PTR_DAT_08e8c330);
      in_stack_00000080 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      in_stack_00000088 = in_stack_00000040;
      _uStack0000000000000090 = in_stack_00000048;
    }
    in_stack_00000078._4_4_ = uStack0000000000000090;
    param_1 = FUN_070fde54((long)&stack0x00000078 + 4,0);
    param_2 = *unaff_x19;
  } while( true );
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream:
  uVar9 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c310);
  lVar10 = in_stack_000000b0;
  if ((uVar9 & 1) != 0) {
    lVar11 = FUN_06a4e300(unaff_x25,in_stack_000000b0,*(undefined8 *)PTR_DAT_08e8c2d8);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05213710(&stack0x00000038,lVar11,*(undefined8 *)PTR_DAT_08e6caf0);
    in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    in_stack_00000068 = in_stack_00000040;
    in_stack_00000070 = in_stack_00000048;
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents:
    do {
      uVar9 = FUN_049dc4d0(&stack0x00000060,*(undefined8 *)PTR_DAT_08e6cae0);
      if ((uVar9 & 1) == 0) goto LAB_06cf5c8c;
      lVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c358);
      FUN_07145224(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar22 = (long *)(lVar11 + 0x10);
      *plVar22 = in_stack_00000070;
      thunk_FUN_03d233cc(plVar22);
      lVar18 = *plVar22;
      if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar9 = FUN_085dfaac(lVar18,0,0);
      if ((uVar9 & 1) == 0) {
        if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar18 = FUN_045e15fc(*plVar22,*(undefined8 *)PTR_DAT_08e89060);
        if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar9 = FUN_085decd4(lVar18,0,0);
        if ((uVar9 & 1) != 0) {
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar18 = FUN_085ba364(lVar18,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if (0 < (int)*(ulong *)(lVar18 + 0x18)) {
            bVar3 = false;
            uVar9 = 0;
            plVar1 = (long *)(lVar11 + 0x18);
            uVar14 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
            puVar21 = (undefined8 *)(lVar18 + 0x28);
            do {
              if (uVar14 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              lVar19 = *plVar1;
              uVar7 = *puVar21;
              if (lVar19 == 0) {
                lVar19 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c348);
                FUN_05822d7c(lVar19,lVar11,*(undefined8 *)PTR_DAT_08e8c350,0);
                *plVar1 = lVar19;
                thunk_FUN_03d233cc(plVar1,lVar19);
              }
              uVar7 = FUN_0493c698(uVar7,lVar19,*(undefined8 *)PTR_DAT_08e8c2a8);
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar14 = FUN_085decd4(uVar7,0,0);
              if ((uVar14 & 1) != 0) {
                uStack0000000000000038 = (undefined4)uVar9;
                uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000038);
                uVar7 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8c368,lVar10,uVar7,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                uVar14 = FUN_06a4feb4(lVar8,uVar7,&stack0x00000058,*(undefined8 *)PTR_DAT_08e8c2b8);
                if ((uVar14 & 1) == 0) {
                  lVar19 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
                  FUN_052124c0(lVar19,*(undefined8 *)PTR_DAT_08e6cb08);
                  in_stack_00000058 = lVar19;
                  FUN_06a4e380(lVar8,uVar7,lVar19,*(undefined8 *)PTR_DAT_08e8c2b0);
                }
                if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                uVar14 = FUN_05213084(in_stack_00000058,*plVar22,*(undefined8 *)PTR_DAT_08e8c340);
                if ((uVar14 & 1) == 0) {
                  if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  lVar19 = *plVar22;
                  lVar15 = *(long *)(in_stack_00000058 + 0x10);
                  lVar17 = *(long *)PTR_DAT_08e7a470;
                  *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar2 = *(uint *)(in_stack_00000058 + 0x18);
                  if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(in_stack_00000058 + 0x18) = uVar2 + 1;
                    plVar16 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar16 = lVar19;
                    thunk_FUN_03d233cc(plVar16);
                  }
                  else {
                    FUN_05212cf4(in_stack_00000058,lVar19,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                bVar3 = true;
              }
              uVar14 = (ulong)*(uint *)(lVar18 + 0x18);
              uVar9 = uVar9 + 1;
              puVar21 = puVar21 + 2;
            } while ((long)uVar9 < (long)(int)*(uint *)(lVar18 + 0x18));
            if (bVar3)
            goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents;
          }
        }
        uVar7 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8c370,lVar10,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar9 = FUN_06a4feb4(lVar8,uVar7,&stack0x00000050,*(undefined8 *)PTR_DAT_08e8c2b8);
        if ((uVar9 & 1) == 0) {
          lVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
          FUN_052124c0(lVar11,*(undefined8 *)PTR_DAT_08e6cb08);
          in_stack_00000050 = lVar11;
          FUN_06a4e380(lVar8,uVar7,lVar11,*(undefined8 *)PTR_DAT_08e8c2b0);
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar9 = FUN_05213084(in_stack_00000050,*plVar22,*(undefined8 *)PTR_DAT_08e8c340);
        if ((uVar9 & 1) == 0) {
          if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar11 = *plVar22;
          lVar18 = *(long *)(in_stack_00000050 + 0x10);
          lVar19 = *(long *)PTR_DAT_08e7a470;
          *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar2 = *(uint *)(in_stack_00000050 + 0x18);
          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(in_stack_00000050 + 0x18) = uVar2 + 1;
            plVar22 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
            *plVar22 = lVar11;
            thunk_FUN_03d233cc(plVar22);
          }
          else {
            FUN_05212cf4(in_stack_00000050,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    } while( true );
  }
  goto LAB_06cf5dfc;
LAB_06cf5c8c:
  FUN_049dc4cc(&stack0x00000060,*(undefined8 *)PTR_DAT_08e6cad8);
  goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream;
LAB_06cf5dfc:
  FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
LAB_06cf5e14:
  if ((lVar8 == 0) || (lVar10 = FUN_06a4e060(lVar8,*(undefined8 *)PTR_DAT_08e8c2e0), lVar10 == 0)) {
LAB_06cf60d8:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_05012e28(&stack0x00000038,lVar10,*(undefined8 *)PTR_DAT_08e8c328);
  puVar6 = PTR_DAT_08e8c338;
  puVar5 = PTR_DAT_08e8c310;
  puVar4 = PTR_DAT_08e8c2d8;
  in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  in_stack_000000a8 = in_stack_00000040;
  in_stack_000000b0 = in_stack_00000048;
  iVar20 = 0;
  do {
    while( true ) {
      uVar9 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)puVar5);
      lVar10 = in_stack_000000b0;
      if ((uVar9 & 1) == 0) {
        FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
        puVar5 = PTR_DAT_08e8c2c8;
        uStack0000000000000038 = FUN_06a4e050(lVar8,*(undefined8 *)PTR_DAT_08e8c2c8);
        puVar4 = PTR_DAT_08e699d0;
        uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000038);
        iStack0000000000000034 = iVar20;
        uVar12 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&stack0x00000034);
        in_stack_00000030 = FUN_06a4e050(lVar8,*(undefined8 *)puVar5);
        in_stack_00000030 = in_stack_00000030 - iVar20;
        uVar13 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&stack0x00000030);
        uVar7 = FUN_06f75284(*(undefined8 *)PTR_DAT_08e8c380,uVar7,uVar12,uVar13,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
        FUN_085a3c50(uVar7,0);
        return in_stack_00000020;
      }
      lVar11 = FUN_06a4e300(lVar8,in_stack_000000b0,*(undefined8 *)puVar4);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar11 + 0x18) < 2) break;
LAB_06cf5ebc:
      uVar7 = FUN_06cf64d0(lVar11,in_stack_00000028,in_stack_00000018,lVar10);
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar10 = *(long *)(in_stack_00000020 + 0x10);
      lVar11 = *(long *)puVar6;
      *(int *)(in_stack_00000020 + 0x1c) = *(int *)(in_stack_00000020 + 0x1c) + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(in_stack_00000020 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(in_stack_00000020 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(in_stack_00000020,uVar7,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (*(long *)(in_stack_00000028 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(char *)(*(long *)(in_stack_00000028 + 0x38) + 0x41) != '\0') goto LAB_06cf5ebc;
    iVar20 = iVar20 + 1;
  } while( true );
}


