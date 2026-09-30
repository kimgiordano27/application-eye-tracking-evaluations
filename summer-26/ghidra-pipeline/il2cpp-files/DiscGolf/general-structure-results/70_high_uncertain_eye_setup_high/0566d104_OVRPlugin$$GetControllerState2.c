/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 0566d104
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState2(undefined8 param_1,undefined1 param_2 [16],undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  
  uStack0000000000000000 = 0;
  _uStack0000000000000050 = param_3;
  uStack0000000000000060 = param_1;
  while( true ) {
    do {
      uVar4 = FUN_05219894(&stack0x00000040,*unaff_x24);
      if ((uVar4 & 1) == 0) {
        FUN_052199b8(&stack0x00000040,
                     *(undefined8 *)
                      System_Collections_Generic_List<GlyphPairAdjustmentRecord>_TypeInfo);
        if (unaff_x21 != 0) {
          FUN_03fb6fa8(&stack0x00000028);
          puVar2 = System_Collections_Generic_List<GlyphRenderMode>_TypeInfo;
          uStack0000000000000000 = 0;
          puStack0000000000000008 = &stack0x00000028;
          while (uVar4 = FUN_0514478c(&stack0x00000028,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
            FUN_056766b4();
          }
          FUN_05144788(&stack0x00000028,
                       *(undefined8 *)System_Collections_Generic_List<Glyph>_TypeInfo);
          *(undefined4 *)(unaff_x20 + 0x204) = *(undefined4 *)(unaff_x19 + 0x30);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = uStack0000000000000050;
      uVar4 = FUN_03bff3e8();
    } while ((uVar4 & 1) != 0);
    if (unaff_x21 == 0) break;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
    }
    else {
      FUN_03fb652c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


