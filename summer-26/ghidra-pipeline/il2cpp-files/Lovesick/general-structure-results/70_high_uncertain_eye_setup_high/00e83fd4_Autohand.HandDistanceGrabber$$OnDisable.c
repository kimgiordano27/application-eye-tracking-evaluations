/*
FUNCTION_NAME: Autohand.HandDistanceGrabber$$OnDisable
ENTRY_POINT: 00e83fd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Autohand_HandDistanceGrabber__OnDisable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0xb0) != 0) {
                    /* try { // try from 00e83fdc to 00f8408f has its CatchHandler @ 00e83fdc
                       catch() { ... } // from try @ 00e83fdc with catch @ 00e83fdc
                       catch() { ... } // from try @ 00e8414c with catch @ 00e83fdc */
    uVar4 = FUN_0268fd4c(*(long *)(unaff_x20 + 0xb0),0);
    FUN_0268c114(uVar4,0);
    puVar3 = StringLiteral_13673;
    puVar2 = Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__;
    puVar1 = Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__;
    if (*(long *)(unaff_x20 + 0xb8) != 0) {
      FUN_01323390(*(long *)(unaff_x20 + 0xb8),&stack0x00000008,
                   *(undefined8 *)
                    Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                  );
      while( true ) {
        uVar5 = FUN_012b894c(&stack0x00000008,*(undefined8 *)puVar1);
        if ((uVar5 & 1) == 0) {
          FUN_012b8948(&stack0x00000008,*(undefined8 *)puVar2);
          return 0;
        }
        lVar6 = FUN_00ac2e08(&stack0x00000008,*(undefined8 *)puVar3);
        if (lVar6 == 0) break;
        *(undefined1 *)(lVar6 + 0x5c) = 1;
        FUN_00fde460(lVar6,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


