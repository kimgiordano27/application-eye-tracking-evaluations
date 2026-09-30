/*
FUNCTION_NAME: Unity.Networking.Transport.UDPNetworkInterface.FlushSendJob$$ProcessSendRequests
ENTRY_POINT: 07fb89a0
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


void Unity_Networking_Transport_UDPNetworkInterface_FlushSendJob__ProcessSendRequests
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  
  lVar2 = thunk_FUN_03d2ee44(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar2 != 0) {
    if (1 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[5] = unaff_x23;
      thunk_FUN_03d1023c();
      lVar2 = FUN_0715fc04(unaff_x22 + 0x30);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_07fb8ce8;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar2;
        thunk_FUN_03d1023c(unaff_x19 + 6,lVar2);
        lVar2 = FUN_0715fc04(unaff_x22 + 0x48);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_07fb8ce8;
        if (3 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[7] = lVar2;
          thunk_FUN_03d1023c(unaff_x19 + 7,lVar2);
          lVar2 = FUN_0715fc04(unaff_x22 + 8);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_07fb8ce8;
          if (4 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[8] = lVar2;
            thunk_FUN_03d1023c(unaff_x19 + 8,lVar2);
            lVar2 = FUN_0715fc04(unaff_x22 + 0x20);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
            goto LAB_07fb8ce8;
            if (5 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[9] = lVar2;
              thunk_FUN_03d1023c(unaff_x19 + 9,lVar2);
              lVar2 = FUN_0715fc04(unaff_x22 + 0x38);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
              goto LAB_07fb8ce8;
              if (6 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[10] = lVar2;
                thunk_FUN_03d1023c(unaff_x19 + 10,lVar2);
                lVar2 = FUN_0715fc04(unaff_x22 + 0x50);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0
                   )) goto LAB_07fb8ce8;
                if (7 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xb] = lVar2;
                  thunk_FUN_03d1023c(unaff_x19 + 0xb,lVar2);
                  lVar2 = FUN_0715fc04(unaff_x22 + 0x10);
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar3 == 0)) goto LAB_07fb8ce8;
                  if (8 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0xc] = lVar2;
                    thunk_FUN_03d1023c(unaff_x19 + 0xc,lVar2);
                    lVar2 = FUN_0715fc04(unaff_x22 + 0x28);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar3 == 0)) goto LAB_07fb8ce8;
                    if (9 < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0xd] = lVar2;
                      thunk_FUN_03d1023c(unaff_x19 + 0xd,lVar2);
                      lVar2 = FUN_0715fc04(unaff_x22 + 0x40);
                      if ((lVar2 != 0) &&
                         (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar3 == 0)) goto LAB_07fb8ce8;
                      if (10 < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0xe] = lVar2;
                        thunk_FUN_03d1023c(unaff_x19 + 0xe,lVar2);
                        lVar2 = FUN_0715fc04(unaff_x22 + 0x58);
                        if ((lVar2 != 0) &&
                           (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar3 == 0)) goto LAB_07fb8ce8;
                        puVar1 = PTR_DAT_09261400;
                        if (0xb < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0xf] = lVar2;
                          thunk_FUN_03d1023c(unaff_x19 + 0xf,lVar2);
                          FUN_06fd2920(*(undefined8 *)puVar1);
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
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
LAB_07fb8ce8:
  uVar4 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar4,0);
}


