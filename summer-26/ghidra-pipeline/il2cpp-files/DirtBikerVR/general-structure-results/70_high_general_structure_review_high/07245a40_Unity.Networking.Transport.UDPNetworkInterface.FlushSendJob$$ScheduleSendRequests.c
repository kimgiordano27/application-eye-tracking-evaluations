/*
FUNCTION_NAME: Unity.Networking.Transport.UDPNetworkInterface.FlushSendJob$$ScheduleSendRequests
ENTRY_POINT: 07245a40
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Networking_Transport_UDPNetworkInterface_FlushSendJob__ScheduleSendRequests(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  lVar1 = thunk_FUN_03ac73c0();
  if (lVar1 != 0) {
    if (2 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[6] = unaff_x21;
      thunk_FUN_03afed3c();
      in_stack_00000008 = *(undefined4 *)(unaff_x20 + 0x10);
      lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48),&stack0x00000008);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
      goto LAB_07245b80;
      if ((*(uint *)(unaff_x19 + 3) & 0xfffffffc) != 0) {
        unaff_x19[7] = lVar1;
        thunk_FUN_03afed3c(unaff_x19 + 7,lVar1);
        in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x20 + 8);
        lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48),(long)&stack0x00000000 + 4);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
        goto LAB_07245b80;
        if (4 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[8] = lVar1;
          thunk_FUN_03afed3c(unaff_x19 + 8,lVar1);
          lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x48));
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
          goto LAB_07245b80;
          if (5 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[9] = lVar1;
            thunk_FUN_03afed3c(unaff_x19 + 9,lVar1);
            FUN_065ce7dc(*(undefined8 *)PTR_DAT_084e6708);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
LAB_07245b80:
  uVar3 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,0);
}


