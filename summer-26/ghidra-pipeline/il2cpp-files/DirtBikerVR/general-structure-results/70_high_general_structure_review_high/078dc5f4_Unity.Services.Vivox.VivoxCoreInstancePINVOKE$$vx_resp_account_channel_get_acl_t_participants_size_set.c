/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_channel_get_acl_t_participants_size_set
ENTRY_POINT: 078dc5f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_channel_get_acl_t_participants_size_set
               (void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  
                    /* catch() { ... } // from try @ 078dc5d4 with catch @ 078dc5f4
                       try { // try from 078dc5f4 to 079dc63f has its CatchHandler @ 078dc420 */
                    /* catch() { ... } // from try @ 078dc5c0 with catch @ 078dc5f8 */
                    /* catch() { ... } // from try @ 078dc570 with catch @ 078dc5fc */
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
                    /* catch() { ... } // from try @ 078dc55c with catch @ 078dc600 */
  thunk_FUN_03afed3c();
                    /* catch() { ... } // from try @ 078dc5a0 with catch @ 078dc604 */
                    /* catch() { ... } // from try @ 078dc594 with catch @ 078dc608 */
                    /* catch() { ... } // from try @ 078dc538 with catch @ 078dc60c */
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21;
                    /* catch() { ... } // from try @ 078dc52c with catch @ 078dc610 */
  thunk_FUN_03afed3c();
                    /* catch() { ... } // from try @ 078dc584 with catch @ 078dc614
                       catch() { ... } // from try @ 078dc5f0 with catch @ 078dc614 */
                    /* catch() { ... } // from try @ 078dc51c with catch @ 078dc618
                       catch() { ... } // from try @ 078dc5ec with catch @ 078dc618 */
                    /* catch() { ... } // from try @ 078dc5e8 with catch @ 078dc61c */
  lVar1 = FUN_03a8a804(*unaff_x22,5);
                    /* catch() { ... } // from try @ 078dc4b8 with catch @ 078dc620 */
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* catch() { ... } // from try @ 078dc490 with catch @ 078dc624 */
                    /* catch() { ... } // from try @ 078dc480 with catch @ 078dc628
                       catch() { ... } // from try @ 078dc4a8 with catch @ 078dc628
                       catch() { ... } // from try @ 078dc4f0 with catch @ 078dc628 */
  if (*(int *)(lVar1 + 0x18) != 0) {
                    /* try { // try from 078dc640 to 079dc657 has its CatchHandler @ 078dc6b8 */
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)Oculus_Platform_Request<User>_TypeInfo;
    thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x20));
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 078dc658 to 079dc6a7 has its CatchHandler @ 078dc420 */
      *(undefined8 *)(lVar1 + 0x28) = unaff_x21;
      thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) =
             *(undefined8 *)Oculus_Platform_Request<UserAccountAgeCategory>_TypeInfo;
        thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x30));
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar1 + 0x38) = unaff_x20;
          thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) =
                 *(undefined8 *)Oculus_Platform_Request<SystemVoipState>_TypeInfo;
            thunk_FUN_03afed3c();
            uVar2 = FUN_065ce45c(lVar1,0);
            *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
            thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20),uVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


