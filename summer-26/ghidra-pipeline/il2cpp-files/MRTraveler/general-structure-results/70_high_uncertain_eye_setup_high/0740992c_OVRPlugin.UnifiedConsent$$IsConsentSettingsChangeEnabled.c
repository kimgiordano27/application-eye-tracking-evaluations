/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$IsConsentSettingsChangeEnabled
ENTRY_POINT: 0740992c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_UnifiedConsent__IsConsentSettingsChangeEnabled(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  long in_stack_00000068;
  
  do {
    FUN_0736ae04(&stack0x00000020,param_1,1,0);
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack0000000000000054 = uStack0000000000000034;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_07409a00(unaff_x20 & 0xffffffff,&stack0x00000068);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    uStack0000000000000028 = in_stack_00000048;
    uStack000000000000002c = uStack000000000000004c;
    uStack0000000000000030 = uStack0000000000000050;
                    /* try { // try from 07409978 to 075099b7 has its CatchHandler @ 07409648 */
    if (unaff_x19 == 0) {
LAB_074099fc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_074099f8:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined4 *)((long)unaff_x22 + -4) = uVar1;
    unaff_x20 = unaff_x20 + 1;
    *(undefined8 *)((long)unaff_x22 + 0x14) = uStack0000000000000054;
    *(ulong *)((long)unaff_x22 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    unaff_x22[1] = CONCAT44(uStack000000000000004c,in_stack_00000048);
    *unaff_x22 = in_stack_00000040;
    if (in_stack_00000068 == 0) goto LAB_074099fc;
    if ((long)(int)*(uint *)(in_stack_00000068 + 0x18) <= (long)unaff_x20) {
                    /* try { // try from 074099bc to 075099eb has its CatchHandler @ 07409648 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 074099b8 with catch @ 074099c0
                        */
      lVar2 = thunk_FUN_03cf5234(*unaff_x21);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07409774 with catch @ 074099c4
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07409884 with catch @ 074099c8
                        */
      FUN_07409afc();
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07409900 with catch @ 074099cc
                        */
      if (lVar2 != 0) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07409788 with catch @ 074099d0
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07409808 with catch @ 074099d4
                        */
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_03d233cc();
                    /* try { // try from 074099ec to 075099ef has its CatchHandler @ 07409a10 */
        return lVar2;
      }
      goto LAB_074099fc;
    }
    if (*(uint *)(in_stack_00000068 + 0x18) <= unaff_x20) goto LAB_074099f8;
    param_1 = *(undefined8 *)(in_stack_00000068 + unaff_x20 * 8 + 0x20);
    unaff_x22 = unaff_x22 + 4;
  } while( true );
}


