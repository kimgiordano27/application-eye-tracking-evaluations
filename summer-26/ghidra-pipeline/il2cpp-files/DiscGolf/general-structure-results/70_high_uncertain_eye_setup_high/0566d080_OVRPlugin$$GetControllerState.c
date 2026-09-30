/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 0566d080
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if (*(int *)(unaff_x19 + 0x48) != 0) {
    uVar5 = 0;
    do {
      FUN_05656688();
      if (unaff_x22 == 0) goto LAB_0566d240;
      FUN_03bfff24();
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(unaff_x19 + 0x48));
  }
  if (*(long *)(unaff_x20 + 0x1f8) != 0) {
    FUN_04df8a2c(*(long *)(unaff_x20 + 0x1f8),
                 *(undefined8 *)System_Collections_Generic_List<GameObject>_TypeInfo);
    puVar1 = System_Collections_Generic_List<GlyphRect>_TypeInfo;
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000058 = in_stack_00000018;
    _uStack0000000000000050 = in_stack_00000010;
    in_stack_00000060 = in_stack_00000020;
LAB_0566d118:
    uVar3 = FUN_05219894(&stack0x00000040,*(undefined8 *)puVar1);
    if ((uVar3 & 1) != 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar2 = uStack0000000000000050;
      uVar3 = FUN_03bff3e8();
      if ((uVar3 & 1) == 0) {
        if (unaff_x21 != 0) {
          lVar4 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar5 = *(uint *)(unaff_x21 + 0x18);
            if (uVar5 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
              *(undefined4 *)(lVar4 + (long)(int)uVar5 * 4 + 0x20) = uVar2;
            }
            else {
              FUN_03fb652c();
            }
            goto LAB_0566d118;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0566d118;
    }
    FUN_052199b8(&stack0x00000040,
                 *(undefined8 *)System_Collections_Generic_List<GlyphPairAdjustmentRecord>_TypeInfo)
    ;
    if (unaff_x21 != 0) {
      FUN_03fb6fa8(&stack0x00000028);
      puVar1 = System_Collections_Generic_List<GlyphRenderMode>_TypeInfo;
      while (uVar3 = FUN_0514478c(&stack0x00000028,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
        FUN_056766b4();
      }
      FUN_05144788(&stack0x00000028,*(undefined8 *)System_Collections_Generic_List<Glyph>_TypeInfo);
      *(undefined4 *)(unaff_x20 + 0x204) = *(undefined4 *)(unaff_x19 + 0x30);
      return;
    }
  }
LAB_0566d240:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


