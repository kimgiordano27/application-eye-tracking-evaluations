/*
FUNCTION_NAME: Unity.Networking.Transport.UDPNetworkInterface.FlushSendJob$$ProcessSendRequests
ENTRY_POINT: 07245eec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Networking_Transport_UDPNetworkInterface_FlushSendJob__ProcessSendRequests
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  lVar1 = thunk_FUN_03ac70f4(param_1,&stack0x0000001c);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0)) {
LAB_07246128:
    uVar3 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,0);
  }
  if (2 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[6] = lVar1;
    thunk_FUN_03afed3c(unaff_x19 + 6,lVar1);
    in_stack_00000018 = *(undefined4 *)(unaff_x20 + 4);
    lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48),&stack0x00000018);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
    goto LAB_07246128;
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffffc) != 0) {
      unaff_x19[7] = lVar1;
      thunk_FUN_03afed3c(unaff_x19 + 7,lVar1);
      uStack0000000000000014 = *(undefined4 *)(unaff_x20 + 0x10);
      lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48),(long)&stack0x00000010 + 4);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
      goto LAB_07246128;
      if (4 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[8] = lVar1;
        thunk_FUN_03afed3c(unaff_x19 + 8,lVar1);
        uStack0000000000000010 = *(undefined4 *)(unaff_x20 + 0x1c);
        lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48),&stack0x00000010);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
        goto LAB_07246128;
        if (5 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[9] = lVar1;
          thunk_FUN_03afed3c(unaff_x19 + 9,lVar1);
          uStack000000000000000c = *(undefined4 *)(unaff_x20 + 8);
          lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48),(long)&stack0x00000008 + 4);
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
          goto LAB_07246128;
          if (6 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[10] = lVar1;
            thunk_FUN_03afed3c(unaff_x19 + 10,lVar1);
            uStack0000000000000008 = *(undefined4 *)(unaff_x20 + 0x14);
            lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48),&stack0x00000008);
            if ((lVar1 != 0) &&
               (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
            goto LAB_07246128;
            if ((*(uint *)(unaff_x19 + 3) & 0xfffffff8) != 0) {
              unaff_x19[0xb] = lVar1;
              thunk_FUN_03afed3c(unaff_x19 + 0xb,lVar1);
              in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x20 + 0x20);
              lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48),
                                         (long)&stack0x00000000 + 4);
              if ((lVar1 != 0) &&
                 (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
              goto LAB_07246128;
              if (8 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0xc] = lVar1;
                thunk_FUN_03afed3c(unaff_x19 + 0xc,lVar1);
                FUN_065ce7dc(*(undefined8 *)PTR_DAT_084e6718);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


