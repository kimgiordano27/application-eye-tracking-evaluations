/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_application_stanza_namespace_get
ENTRY_POINT: 078c057c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  undefined8 uStack0000000000000020;
  long lStack0000000000000030;
  
  puVar3 = System_Collections_Generic_List<NetworkSceneManager_DeferredObjectsMovedEvent>_TypeInfo;
  puVar2 = 
  System_Collections_Generic_List<NetworkAnimatorStateChangeHandler_AnimationUpdate>_TypeInfo;
  puVar1 = System_Collections_Generic_List<EntryPreProcessor_AllocSize>_TypeInfo;
                    /* try { // try from 078c0584 to 079c0587 has its CatchHandler @ 078c0654 */
                    /* try { // try from 078c0588 to 079c058b has its CatchHandler @ 078c0678 */
                    /* try { // try from 078c0594 to 079c0597 has its CatchHandler @ 078c0650 */
  puStack0000000000000010 = (undefined1 *)&stack0x00000020;
                    /* try { // try from 078c0598 to 079c059b has its CatchHandler @ 078c068c */
                    /* try { // try from 078c059c to 079c059f has its CatchHandler @ 078c0664 */
                    /* try { // try from 078c05a0 to 079c05a3 has its CatchHandler @ 078c0694 */
  uStack0000000000000008 = 0;
  uStack0000000000000020 = param_2;
  lStack0000000000000030 = param_1;
  while( true ) {
                    /* try { // try from 078c05ac to 079c05af has its CatchHandler @ 078c0640 */
    uVar4 = FUN_061c1964(&stack0x00000020,*unaff_x24);
                    /* try { // try from 078c05b0 to 079c05eb has its CatchHandler @ 078c064c */
    if ((uVar4 & 1) == 0) {
      FUN_061c1960(&stack0x00000020,
                   *(undefined8 *)
                    System_Collections_Generic_List<NetworkAnimatorStateChangeHandler_ParameterUpdate>_TypeInfo
                  );
      return;
    }
    lVar5 = thunk_FUN_03ac74bc(*unaff_x25);
    FUN_0679343c(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar8 = (long *)(lVar5 + 0x10);
    *plVar8 = lStack0000000000000030;
    thunk_FUN_03afed3c(plVar8);
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
                    /* try { // try from 078c05ec to 079c05ef has its CatchHandler @ 078c0648 */
                    /* try { // try from 078c05f0 to 079c063b has its CatchHandler @ 078c063c */
    uVar6 = thunk_FUN_03ac74bc(*unaff_x26);
    FUN_053f151c(uVar6,lVar5,*(undefined8 *)puVar3,0);
    if (lVar9 == 0) break;
    uVar4 = FUN_04de8c4c(lVar9,uVar6,*(undefined8 *)puVar1);
    if ((uVar4 & 1) == 0) {
      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *(long *)(unaff_x19 + 0x48);
      uVar6 = *(undefined8 *)(*plVar8 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = FUN_067318c0(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05f8761c(lVar5,uVar6,uVar7,*(undefined8 *)puVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


