/*
FUNCTION_NAME: OVRManager$$OnDisable
ENTRY_POINT: 0530e864
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnDisable(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  undefined4 uVar8;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined1 *)(unaff_x20 + 0x194) = in_w8;
  uVar8 = FUN_03f5c860();
  plVar7 = *(long **)(unaff_x21 + 0x158);
  *(undefined8 *)(unaff_x21 + 0x180) = 0;
  *(undefined4 *)(unaff_x21 + 0x178) = 0;
  puVar1 = System_Reflection_MethodInfo___TypeInfo;
  if (plVar7 == (long *)0x0) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    _uStack0000000000000018 = 0;
    _uStack0000000000000010 = 0;
    in_stack_00000028 = 0;
    _uStack0000000000000020 = 0;
    in_stack_00000030 = 0;
    FUN_052ca09c(&stack0x00000010,0,0);
  }
  else {
    if (unaff_x19 == 0) goto LAB_0530e9a0;
    uVar2 = FUN_060ed7ac();
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0530e95c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar1,0);
LAB_0530e95c:
    (*(code *)*puVar3)(&stack0x00000010,plVar7,uVar2,puVar3[1]);
  }
  uVar8 = uStack0000000000000010;
  if (unaff_x19 != 0) {
    FUN_0530c9f8(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                 uStack000000000000001c,uStack0000000000000020,uStack0000000000000024);
    return;
  }
LAB_0530e9a0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8(uVar8);
}


