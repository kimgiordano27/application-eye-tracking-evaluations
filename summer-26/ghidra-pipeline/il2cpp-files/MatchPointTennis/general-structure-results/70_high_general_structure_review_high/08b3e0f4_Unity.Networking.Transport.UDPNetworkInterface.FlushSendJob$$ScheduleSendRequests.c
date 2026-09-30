/*
FUNCTION_NAME: Unity.Networking.Transport.UDPNetworkInterface.FlushSendJob$$ScheduleSendRequests
ENTRY_POINT: 08b3e0f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Networking_Transport_UDPNetworkInterface_FlushSendJob__ScheduleSendRequests(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  thunk_FUN_044bb4b4();
  uStack000000000000002c = *(undefined4 *)(unaff_x20 + 0x20);
  lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),&stack0x0000002c);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_08b3e424:
    uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,0);
  }
  if (2 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[6] = lVar2;
    thunk_FUN_044bb4b4(unaff_x19 + 6,lVar2);
    in_stack_00000028 = *(undefined4 *)(unaff_x20 + 4);
    lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),&stack0x00000028);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_08b3e424;
    if (3 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[7] = lVar2;
      thunk_FUN_044bb4b4(unaff_x19 + 7,lVar2);
      uStack0000000000000024 = *(undefined4 *)(unaff_x20 + 0x14);
      lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),(long)&stack0x00000020 + 4);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_08b3e424;
      if (4 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[8] = lVar2;
        thunk_FUN_044bb4b4(unaff_x19 + 8,lVar2);
        uStack0000000000000020 = *(undefined4 *)(unaff_x20 + 0x24);
        lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),&stack0x00000020);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_08b3e424;
        if (5 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[9] = lVar2;
          thunk_FUN_044bb4b4(unaff_x19 + 9,lVar2);
          uStack000000000000001c = *(undefined4 *)(unaff_x20 + 8);
          lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),(long)&stack0x00000018 + 4);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_08b3e424;
          if (6 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[10] = lVar2;
            thunk_FUN_044bb4b4(unaff_x19 + 10,lVar2);
            uStack0000000000000018 = *(undefined4 *)(unaff_x20 + 0x18);
            lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),&stack0x00000018);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
            goto LAB_08b3e424;
            if (7 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0xb] = lVar2;
              thunk_FUN_044bb4b4(unaff_x19 + 0xb,lVar2);
              uStack0000000000000014 = *(undefined4 *)(unaff_x20 + 0x28);
              lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),
                                         (long)&stack0x00000010 + 4);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
              goto LAB_08b3e424;
              if (8 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0xc] = lVar2;
                thunk_FUN_044bb4b4(unaff_x19 + 0xc,lVar2);
                uStack0000000000000010 = *(undefined4 *)(unaff_x20 + 0xc);
                lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),&stack0x00000010);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0
                   )) goto LAB_08b3e424;
                if (9 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xd] = lVar2;
                  thunk_FUN_044bb4b4(unaff_x19 + 0xd,lVar2);
                  uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x1c);
                  lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),
                                             (long)&stack0x00000008 + 4);
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar3 == 0)) goto LAB_08b3e424;
                  if (10 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0xe] = lVar2;
                    thunk_FUN_044bb4b4(unaff_x19 + 0xe,lVar2);
                    uStack0000000000000008 = *(undefined4 *)(unaff_x20 + 0x2c);
                    lVar2 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x22 + 0x78),&stack0x00000008);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar3 == 0)) goto LAB_08b3e424;
                    puVar1 = PTR_DAT_09fa0958;
                    if (0xb < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0xf] = lVar2;
                      thunk_FUN_044bb4b4(unaff_x19 + 0xf,lVar2);
                      FUN_078b5b84(*(undefined8 *)puVar1);
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
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


