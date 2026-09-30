/*
FUNCTION_NAME: Unity.Networking.Transport.UDPNetworkInterface.FlushSendJob$$ScheduleSendRequests
ENTRY_POINT: 07fb84dc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Networking_Transport_UDPNetworkInterface_FlushSendJob__ScheduleSendRequests(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_09261400);
  *(undefined1 *)(unaff_x19 + 0xc23) = 1;
  plVar2 = (long *)FUN_03d2d394(*unaff_x21,0xc);
  in_stack_00000068 = *unaff_x20;
  lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000068);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_07fb88c4:
    uVar5 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_03d1023c(plVar2 + 4,lVar3);
    in_stack_00000058 = unaff_x20[3];
    lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000058);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_07fb88c4;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_03d1023c(plVar2 + 5,lVar3);
      in_stack_00000050 = unaff_x20[6];
      lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000050);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_07fb88c4;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_03d1023c(plVar2 + 6,lVar3);
        in_stack_00000048 = unaff_x20[9];
        lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000048);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_07fb88c4;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          thunk_FUN_03d1023c(plVar2 + 7,lVar3);
          in_stack_00000040 = unaff_x20[1];
          lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000040);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_07fb88c4;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_03d1023c(plVar2 + 8,lVar3);
            in_stack_00000038 = unaff_x20[4];
            lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000038);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_07fb88c4;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              thunk_FUN_03d1023c(plVar2 + 9,lVar3);
              in_stack_00000030 = unaff_x20[7];
              lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000030);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_07fb88c4;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar3;
                thunk_FUN_03d1023c(plVar2 + 10,lVar3);
                in_stack_00000028 = unaff_x20[10];
                lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000028);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_07fb88c4;
                if (7 < *(uint *)(plVar2 + 3)) {
                  plVar2[0xb] = lVar3;
                  thunk_FUN_03d1023c(plVar2 + 0xb,lVar3);
                  in_stack_00000020 = unaff_x20[2];
                  lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000020);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto LAB_07fb88c4;
                  if (8 < *(uint *)(plVar2 + 3)) {
                    plVar2[0xc] = lVar3;
                    thunk_FUN_03d1023c(plVar2 + 0xc,lVar3);
                    in_stack_00000018 = unaff_x20[5];
                    lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000018);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar4 == 0)) goto LAB_07fb88c4;
                    if (9 < *(uint *)(plVar2 + 3)) {
                      plVar2[0xd] = lVar3;
                      thunk_FUN_03d1023c(plVar2 + 0xd,lVar3);
                      in_stack_00000010 = unaff_x20[8];
                      lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000010);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                         lVar4 == 0)) goto LAB_07fb88c4;
                      if (10 < *(uint *)(plVar2 + 3)) {
                        plVar2[0xe] = lVar3;
                        thunk_FUN_03d1023c(plVar2 + 0xe,lVar3);
                        in_stack_00000008 = unaff_x20[0xb];
                        lVar3 = thunk_FUN_03d2eb70(*unaff_x22,&stack0x00000008);
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                           lVar4 == 0)) goto LAB_07fb88c4;
                        puVar1 = PTR_DAT_09261400;
                        if (0xb < *(uint *)(plVar2 + 3)) {
                          plVar2[0xf] = lVar3;
                          thunk_FUN_03d1023c(plVar2 + 0xf,lVar3);
                          FUN_06fd2920(*(undefined8 *)puVar1,plVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


