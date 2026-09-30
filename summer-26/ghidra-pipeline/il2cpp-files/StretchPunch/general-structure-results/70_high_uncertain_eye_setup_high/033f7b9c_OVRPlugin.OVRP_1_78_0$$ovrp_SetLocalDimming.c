/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetLocalDimming
ENTRY_POINT: 033f7b9c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f7dac) */

undefined8 OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x24;
  char cStack000000000000000c;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  cStack000000000000000c = '\0';
  FUN_033f4894(uVar3,&stack0x0000000c);
  iVar1 = *(int *)(unaff_x20 + 0x10);
  thunk_FUN_01da0934();
  puVar2 = StringLiteral_6721;
  if (iVar1 < 1) {
    if (unaff_w22 == 0) {
      lVar4 = *(long *)StringLiteral_6721;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar4 = *(long *)puVar2;
      }
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
    }
    else {
      uVar5 = FUN_033f7f68();
      if (unaff_w22 == -1) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (unaff_x21 == 0) goto LAB_033f7cf0;
      }
      uVar5 = FUN_033f8018();
    }
  }
  else {
    iVar1 = *(int *)(unaff_x20 + 0x10);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    lVar4 = *(long *)(unaff_x20 + 0x28);
    *(int *)(unaff_x20 + 0x10) = iVar1 + -1;
    thunk_FUN_01da0934();
    if ((lVar4 != 0) && (iVar1 = *(int *)(unaff_x20 + 0x10), thunk_FUN_01da0934(), iVar1 == 0)) {
      lVar4 = *(long *)(unaff_x20 + 0x28);
      thunk_FUN_01da0934();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033f7f00(lVar4);
    }
    puVar2 = StringLiteral_6721;
    lVar4 = *(long *)StringLiteral_6721;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar4 = *(long *)puVar2;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
  }
LAB_033f7cf0:
  if (cStack000000000000000c != '\0') {
    FUN_01dccd6c(uVar3);
  }
  return uVar5;
}


