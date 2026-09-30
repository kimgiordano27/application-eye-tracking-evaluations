/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_application_stanza_body_set
ENTRY_POINT: 078c0610
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_body_set
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000030;
  
  while( true ) {
    uVar1 = FUN_04de8c4c(unaff_x22,unaff_x23,param_3);
    if ((uVar1 & 1) == 0) {
      if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = *(long *)(unaff_x19 + 0x48);
      uVar4 = *(undefined8 *)(*unaff_x20 + 0x10);
                    /* catch() { ... } // from try @ 078c05f0 with catch @ 078c063c
                       try { // try from 078c063c to 079c06b7 has its CatchHandler @ 078c02f8 */
                    /* catch() { ... } // from try @ 078c05ac with catch @ 078c0640 */
      if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 078c0538 with catch @ 078c0644 */
        thunk_FUN_03ae8be4();
      }
                    /* catch() { ... } // from try @ 078c05ec with catch @ 078c0648 */
                    /* catch() { ... } // from try @ 078c05b0 with catch @ 078c064c */
      uVar2 = FUN_067318c0(0);
                    /* catch() { ... } // from try @ 078c0594 with catch @ 078c0650 */
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
                    /* catch() { ... } // from try @ 078c0584 with catch @ 078c0654 */
                    /* catch() { ... } // from try @ 078c054c with catch @ 078c0658 */
                    /* catch() { ... } // from try @ 078c04e0 with catch @ 078c065c */
                    /* catch() { ... } // from try @ 078c04cc with catch @ 078c0660 */
                    /* catch() { ... } // from try @ 078c059c with catch @ 078c0664 */
      FUN_05f8761c(lVar3,uVar4,uVar2,*unaff_x29);
                    /* catch() { ... } // from try @ 078c0448 with catch @ 078c0668 */
    }
    uVar1 = FUN_061c1964(&stack0x00000020,*unaff_x24);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 078c0434 with catch @ 078c066c */
                    /* catch() { ... } // from try @ 078c0428 with catch @ 078c0670 */
                    /* catch() { ... } // from try @ 078c03b4 with catch @ 078c0674 */
                    /* catch() { ... } // from try @ 078c0588 with catch @ 078c0678 */
                    /* catch() { ... } // from try @ 078c0394 with catch @ 078c067c */
      FUN_061c1960(&stack0x00000020,
                   *(undefined8 *)
                    System_Collections_Generic_List<NetworkAnimatorStateChangeHandler_ParameterUpdate>_TypeInfo
                  );
                    /* catch() { ... } // from try @ 078c04f8 with catch @ 078c0688 */
                    /* catch() { ... } // from try @ 078c0418 with catch @ 078c068c
                       catch() { ... } // from try @ 078c0598 with catch @ 078c068c */
                    /* catch() { ... } // from try @ 078c03f8 with catch @ 078c0690 */
                    /* catch() { ... } // from try @ 078c048c with catch @ 078c0694
                       catch() { ... } // from try @ 078c05a0 with catch @ 078c0694 */
      return;
    }
    lVar3 = thunk_FUN_03ac74bc(*unaff_x25);
    FUN_0679343c(lVar3,0);
    if (lVar3 == 0) break;
    unaff_x20 = (long *)(lVar3 + 0x10);
    *unaff_x20 = in_stack_00000030;
    thunk_FUN_03afed3c(unaff_x20);
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    unaff_x22 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
    unaff_x23 = thunk_FUN_03ac74bc(*unaff_x26);
    FUN_053f151c(unaff_x23,lVar3,*unaff_x27,0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_3 = *unaff_x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


