/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Copy
ENTRY_POINT: 01daea0c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl_Annotation_Builder__Copy(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long lVar5;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_01c8abe0(&stack0x00000008,0);
  lVar5 = 0;
  if ((uVar2 & 1) != 0) {
    in_stack_00000008 = FUN_01daeb78(&stack0x00000018);
    lVar5 = FUN_01c8abf0(&stack0x00000008,0);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x38);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (((unaff_w22 >> 1 & 1) != 0) && (unaff_x19 == 0)) {
    if (lVar5 == 0) {
      unaff_x19 = 0;
      lVar5 = 0;
      uVar3 = uVar2;
      if (lVar1 != 0) goto LAB_01daeaa4;
    }
    else {
      uVar3 = FUN_01c7b208(lVar5,0);
      unaff_x19 = 0;
      if ((lVar1 != 0) || (uVar2 != 0)) goto LAB_01daeaa4;
      uVar3 = uVar3 & 1;
    }
    unaff_x19 = 0;
    if (uVar3 == 0) {
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar5 = *unaff_x24;
      }
      return **(long **)(lVar5 + 0xb8);
    }
  }
LAB_01daeaa4:
  lVar4 = thunk_FUN_010400dc(*unaff_x24);
  FUN_01d8c630(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = unaff_x19;
    thunk_FUN_0106e12c((long *)(lVar4 + 0x10),unaff_x19);
    *(long *)(lVar4 + 0x20) = lVar5;
    thunk_FUN_0106e12c((long *)(lVar4 + 0x20),lVar5);
    *(ulong *)(lVar4 + 0x38) = uVar2;
    thunk_FUN_0106e12c((ulong *)(lVar4 + 0x38),uVar2);
    *(long *)(lVar4 + 0x40) = lVar1;
    thunk_FUN_0106e12c((long *)(lVar4 + 0x40),lVar1);
    *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 1;
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


