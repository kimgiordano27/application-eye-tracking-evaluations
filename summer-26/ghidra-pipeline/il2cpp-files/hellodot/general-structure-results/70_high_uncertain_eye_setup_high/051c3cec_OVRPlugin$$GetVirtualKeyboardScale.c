/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 051c3cec
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetVirtualKeyboardScale(void)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  float fStack000000000000004c;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d20);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d28);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d30);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d38);
  *(undefined1 *)(unaff_x20 + 0x3ab) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  fStack000000000000004c = 0.0;
  uVar6 = FUN_05ef2278();
  if ((uVar6 & 1) == 0) {
    return false;
  }
  cVar1 = *(char *)(unaff_x19 + 0x61);
  *(undefined1 *)(unaff_x19 + 0x61) = 1;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_03968dbc(&stack0x00000008,*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_06608d38);
    puVar4 = PTR_DAT_06608d28;
    puVar3 = PTR_DAT_06608d18;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar6 = FUN_0481f4e4(&stack0x00000020,*(undefined8 *)puVar4), lVar7 = in_stack_00000030,
          (uVar6 & 1) != 0) {
      if (cVar1 == '\0') {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        fVar9 = *(float *)(in_stack_00000030 + 0x14);
        fVar8 = *(float *)(in_stack_00000030 + 0x18) * -0.5;
      }
      else {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        fVar9 = *(float *)(in_stack_00000030 + 0x14);
        fVar8 = *(float *)(in_stack_00000030 + 0x18) * 0.5;
      }
      bVar5 = FUN_051c3f48();
      fVar10 = ABS(fStack000000000000004c);
      if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_046bf4a0(fStack000000000000004c,fVar9 + fVar8,*(long *)(unaff_x19 + 0x58),lVar7,
                   *(undefined8 *)puVar3);
      *(byte *)(unaff_x19 + 0x61) = *(byte *)(unaff_x19 + 0x61) & bVar5 & fVar10 <= fVar9 + fVar8;
    }
    FUN_0481f4e0(&stack0x00000020,*(undefined8 *)PTR_DAT_06608d20);
    lVar7 = *(long *)(unaff_x19 + 0x50);
    if (lVar7 != 0) {
      fVar8 = (float)(**(code **)(lVar7 + 0x18))
                               (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      cVar2 = *(char *)(unaff_x19 + 0x61);
      if (cVar1 == cVar2) {
        fVar9 = *(float *)(unaff_x19 + 100);
      }
      else {
        *(float *)(unaff_x19 + 100) = fVar8;
        fVar9 = fVar8;
      }
      if (*(float *)(unaff_x19 + 0x48) <= fVar8 - fVar9) {
        *(char *)(unaff_x19 + 0x60) = cVar2;
      }
      else {
        cVar2 = *(char *)(unaff_x19 + 0x60);
      }
      return cVar2 != '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


