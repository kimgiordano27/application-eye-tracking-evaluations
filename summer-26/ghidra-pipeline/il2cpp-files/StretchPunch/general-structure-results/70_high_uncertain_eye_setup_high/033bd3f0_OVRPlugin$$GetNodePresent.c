/*
FUNCTION_NAME: OVRPlugin$$GetNodePresent
ENTRY_POINT: 033bd3f0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePresent(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long *unaff_x23;
  
  puVar2 = StringLiteral_8777;
  uVar6 = *(undefined8 *)StringLiteral_8777;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033a87c8(uVar6,0);
  if (unaff_x19 != (long *)0x0) {
    uVar4 = (**(code **)(*unaff_x19 + 0x278))();
    if ((uVar4 & 1) == 0) {
      uVar6 = *(undefined8 *)puVar2;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033a87c8(uVar6,0);
      uVar4 = FUN_033ab18c();
      if ((uVar4 & 1) != 0) {
        uVar6 = thunk_FUN_01dd295c(StringLiteral_8781);
        uVar6 = FUN_033d6e4c(uVar6,0);
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar5 = thunk_FUN_01de27b8();
        FUN_0328dba4(uVar5,uVar6,0);
        uVar6 = thunk_FUN_01dd295c(StringLiteral_8783);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar5,uVar6);
      }
    }
    if (unaff_x20 != (long *)0x0) {
      iVar3 = (**(code **)(*unaff_x20 + 0x198))();
      if (iVar3 == 2) {
        bVar1 = *(byte *)(*(long *)StringLiteral_6058 + 0x130);
        if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
           (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)StringLiteral_6058)) {
          FUN_033bcd94();
          return;
        }
      }
      else {
        if (iVar3 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x033bd55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x20 + 0x1e8))();
          return;
        }
        bVar1 = *(byte *)(*(long *)StringLiteral_1681 + 0x130);
        if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
           (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)StringLiteral_1681)) {
          FUN_033bcd24();
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


