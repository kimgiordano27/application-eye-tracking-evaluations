/*
FUNCTION_NAME: Meta.Voice.Net.WebSockets.Requests.WitWebSocketTranscribeRequest$$CloseAudioStream
ENTRY_POINT: 06cf583c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x06cf60cc) */
/* WARNING: Removing unreachable block (ram,0x06cf5cb8) */
/* WARNING: Removing unreachable block (ram,0x06cf5cbc) */

long Meta_Voice_Net_WebSockets_Requests_WitWebSocketTranscribeRequest__CloseAudioStream(void)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  long unaff_x23;
  long *plVar18;
  undefined8 unaff_x27;
  undefined8 uVar19;
  undefined8 in_stack_00000010;
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
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  
code_r0x06cf583c:
  uVar6 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c310);
  uVar8 = in_stack_000000b0;
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_06a4e300(unaff_x27,in_stack_000000b0,*(undefined8 *)PTR_DAT_08e8c2d8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05213710(&stack0x00000038,lVar7,*(undefined8 *)PTR_DAT_08e6caf0);
    in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    in_stack_00000068 = in_stack_00000040;
    in_stack_00000070 = in_stack_00000048;
Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents:
    do {
      uVar6 = FUN_049dc4d0(&stack0x00000060,*(undefined8 *)PTR_DAT_08e6cae0);
      if ((uVar6 & 1) == 0) goto LAB_06cf5c8c;
      lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c358);
      FUN_07145224(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar18 = (long *)(lVar7 + 0x10);
      *plVar18 = in_stack_00000070;
      thunk_FUN_03d233cc(plVar18);
      lVar14 = *plVar18;
      if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar6 = FUN_085dfaac(lVar14,0,0);
      if ((uVar6 & 1) == 0) {
        if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar14 = FUN_045e15fc(*plVar18,*(undefined8 *)PTR_DAT_08e89060);
        if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar6 = FUN_085decd4(lVar14,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar14 = FUN_085ba364(lVar14,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
            bVar3 = false;
            uVar6 = 0;
            plVar1 = (long *)(lVar7 + 0x18);
            uVar10 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
            puVar17 = (undefined8 *)(lVar14 + 0x28);
            do {
              if (uVar10 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              lVar15 = *plVar1;
              uVar19 = *puVar17;
              if (lVar15 == 0) {
                lVar15 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8c348);
                FUN_05822d7c(lVar15,lVar7,*(undefined8 *)PTR_DAT_08e8c350,0);
                *plVar1 = lVar15;
                thunk_FUN_03d233cc(plVar1,lVar15);
              }
              uVar19 = FUN_0493c698(uVar19,lVar15,*(undefined8 *)PTR_DAT_08e8c2a8);
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar10 = FUN_085decd4(uVar19,0,0);
              if ((uVar10 & 1) != 0) {
                uStack0000000000000038 = (undefined4)uVar6;
                uVar19 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000038);
                FUN_06f75240(*(undefined8 *)PTR_DAT_08e8c368,uVar8,uVar19,0);
                if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                uVar10 = FUN_06a4feb4();
                if ((uVar10 & 1) == 0) {
                  lVar15 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
                  FUN_052124c0(lVar15,*(undefined8 *)PTR_DAT_08e6cb08);
                  in_stack_00000058 = lVar15;
                  FUN_06a4e380();
                }
                if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                uVar10 = FUN_05213084(in_stack_00000058,*plVar18,*(undefined8 *)PTR_DAT_08e8c340);
                if ((uVar10 & 1) == 0) {
                  if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  lVar15 = *plVar18;
                  lVar11 = *(long *)(in_stack_00000058 + 0x10);
                  lVar13 = *(long *)PTR_DAT_08e7a470;
                  *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar2 = *(uint *)(in_stack_00000058 + 0x18);
                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(in_stack_00000058 + 0x18) = uVar2 + 1;
                    plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar12 = lVar15;
                    thunk_FUN_03d233cc(plVar12);
                  }
                  else {
                    FUN_05212cf4(in_stack_00000058,lVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                bVar3 = true;
              }
              uVar10 = (ulong)*(uint *)(lVar14 + 0x18);
              uVar6 = uVar6 + 1;
              puVar17 = puVar17 + 2;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar14 + 0x18));
            if (bVar3)
            goto Meta_Voice_Net_WebSockets_Requests_WitWebSocketTtsRequest__get_UseEvents;
          }
        }
        FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8c370,uVar8,0);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar6 = FUN_06a4feb4();
        if ((uVar6 & 1) == 0) {
          lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6cb00);
          FUN_052124c0(lVar7,*(undefined8 *)PTR_DAT_08e6cb08);
          in_stack_00000050 = lVar7;
          FUN_06a4e380();
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar6 = FUN_05213084(in_stack_00000050,*plVar18,*(undefined8 *)PTR_DAT_08e8c340);
        if ((uVar6 & 1) == 0) {
          if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar7 = *plVar18;
          lVar14 = *(long *)(in_stack_00000050 + 0x10);
          lVar15 = *(long *)PTR_DAT_08e7a470;
          *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar2 = *(uint *)(in_stack_00000050 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(in_stack_00000050 + 0x18) = uVar2 + 1;
            plVar18 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
            *plVar18 = lVar7;
            thunk_FUN_03d233cc(plVar18);
          }
          else {
            FUN_05212cf4(in_stack_00000050,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    } while( true );
  }
  FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
  if ((unaff_x23 == 0) || (lVar7 = FUN_06a4e060(), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_05012e28(&stack0x00000038,lVar7,*(undefined8 *)PTR_DAT_08e8c328);
  puVar5 = PTR_DAT_08e8c338;
  puVar4 = PTR_DAT_08e8c310;
  in_stack_000000a0 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  in_stack_000000a8 = in_stack_00000040;
  in_stack_000000b0 = in_stack_00000048;
  iVar16 = 0;
  do {
    while( true ) {
      uVar6 = FUN_04aa6868(&stack0x000000a0,*(undefined8 *)puVar4);
      lVar7 = in_stack_000000b0;
      if ((uVar6 & 1) == 0) {
        FUN_04aa6864(&stack0x000000a0,*(undefined8 *)PTR_DAT_08e8c2f8);
        uStack0000000000000038 = FUN_06a4e050();
        puVar4 = PTR_DAT_08e699d0;
        uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000038);
        iStack0000000000000034 = iVar16;
        uVar19 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&stack0x00000034);
        in_stack_00000030 = FUN_06a4e050();
        in_stack_00000030 = in_stack_00000030 - iVar16;
        uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)puVar4,&stack0x00000030);
        uVar8 = FUN_06f75284(*(undefined8 *)PTR_DAT_08e8c380,uVar8,uVar19,uVar9,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
        FUN_085a3c50(uVar8,0);
        return in_stack_00000020;
      }
      lVar14 = FUN_06a4e300();
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar14 + 0x18) < 2) break;
LAB_06cf5ebc:
      uVar8 = FUN_06cf64d0(lVar14,in_stack_00000028,in_stack_00000018,lVar7);
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *(long *)(in_stack_00000020 + 0x10);
      lVar14 = *(long *)puVar5;
      *(int *)(in_stack_00000020 + 0x1c) = *(int *)(in_stack_00000020 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(in_stack_00000020 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(in_stack_00000020 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(in_stack_00000020,uVar8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (*(long *)(in_stack_00000028 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(char *)(*(long *)(in_stack_00000028 + 0x38) + 0x41) != '\0') goto LAB_06cf5ebc;
    iVar16 = iVar16 + 1;
  } while( true );
LAB_06cf5c8c:
  FUN_049dc4cc(&stack0x00000060,*(undefined8 *)PTR_DAT_08e6cad8);
  unaff_x27 = in_stack_00000010;
  goto code_r0x06cf583c;
}


