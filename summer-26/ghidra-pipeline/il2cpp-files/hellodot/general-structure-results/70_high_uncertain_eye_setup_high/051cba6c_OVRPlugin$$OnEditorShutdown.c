/*
FUNCTION_NAME: OVRPlugin$$OnEditorShutdown
ENTRY_POINT: 051cba6c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OnEditorShutdown(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  long *unaff_x23;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000060 [16];
  
  puVar1 = (undefined8 *)FUN_02ce0a7c();
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) != 0) {
    lVar3 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
          goto LAB_051cbae8;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051cbae8:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x18);
      uStack0000000000000034 = in_stack_00000060._4_8_;
      lVar3 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_051cbb60;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051cbb60:
      (*(code *)*puVar1)();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uStack0000000000000014 = uStack0000000000000034;
      FUN_051cbbc8(lVar5,in_stack_00000048);
      uVar2 = (ulong)*(uint *)(unaff_x19 + 0x10);
      if (*(uint *)(unaff_x19 + 0x10) == 0xffffffff) {
        uVar2 = FUN_051cb218();
        *(int *)(unaff_x19 + 0x10) = (int)uVar2;
      }
      FUN_051cb280(uVar2,*(undefined8 *)(unaff_x19 + 0x18));
    }
  }
  return;
}


