/*
FUNCTION_NAME: Unity.Networking.Transport.UDPNetworkInterface.FlushSendJob$$ProcessSendRequests
ENTRY_POINT: 08b3e5b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Networking_Transport_UDPNetworkInterface_FlushSendJob__ProcessSendRequests(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x22;
  
  thunk_FUN_044bb4b4();
  lVar2 = FUN_07a509ac(unaff_x22 + 0x14);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_08b3e848:
    uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,0);
  }
  if (4 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[8] = lVar2;
    thunk_FUN_044bb4b4(unaff_x19 + 8,lVar2);
    lVar2 = FUN_07a509ac(unaff_x22 + 0x24);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_08b3e848;
    if (5 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[9] = lVar2;
      thunk_FUN_044bb4b4(unaff_x19 + 9,lVar2);
      lVar2 = FUN_07a509ac(unaff_x22 + 8);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_08b3e848;
      if (6 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[10] = lVar2;
        thunk_FUN_044bb4b4(unaff_x19 + 10,lVar2);
        lVar2 = FUN_07a509ac(unaff_x22 + 0x18);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_08b3e848;
        if (7 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0xb] = lVar2;
          thunk_FUN_044bb4b4(unaff_x19 + 0xb,lVar2);
          lVar2 = FUN_07a509ac(unaff_x22 + 0x28);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_08b3e848;
          if (8 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0xc] = lVar2;
            thunk_FUN_044bb4b4(unaff_x19 + 0xc,lVar2);
            lVar2 = FUN_07a509ac(unaff_x22 + 0xc);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
            goto LAB_08b3e848;
            if (9 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0xd] = lVar2;
              thunk_FUN_044bb4b4(unaff_x19 + 0xd,lVar2);
              lVar2 = FUN_07a509ac(unaff_x22 + 0x1c);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
              goto LAB_08b3e848;
              if (10 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0xe] = lVar2;
                thunk_FUN_044bb4b4(unaff_x19 + 0xe,lVar2);
                lVar2 = FUN_07a509ac(unaff_x22 + 0x2c);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0
                   )) goto LAB_08b3e848;
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
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


