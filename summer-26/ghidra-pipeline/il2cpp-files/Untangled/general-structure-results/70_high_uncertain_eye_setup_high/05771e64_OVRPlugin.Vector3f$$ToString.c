/*
FUNCTION_NAME: OVRPlugin.Vector3f$$ToString
ENTRY_POINT: 05771e64
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector3f__ToString(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if (*(float *)(param_1 + 0xcb0) < *(float *)(unaff_x19 + 0x28)) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_066bfb3c(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05771fc0;
      FUN_06686b00(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05771fc0;
  uVar1 = FUN_06686cc0(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_05771ed8:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_066bfb3c(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_05771ed8;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_06686cc0(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_06693dbc(*(undefined8 *)PTR_DAT_06d59fe0,0);
      }
    }
    else {
                    /* try { // try from 05771ef4 to 05871f77 has its CatchHandler @ 05771ef4
                       catch() { ... } // from try @ 05771ef4 with catch @ 05771ef4
                       catch() { ... } // from try @ 05771fd4 with catch @ 05771ef4
                       catch() { ... } // from try @ 0577220c with catch @ 05771ef4
                       catch() { ... } // from try @ 05772288 with catch @ 05771ef4
                       catch() { ... } // from try @ 057722ac with catch @ 05771ef4
                       catch() { ... } // from try @ 05772358 with catch @ 05771ef4
                       catch() { ... } // from try @ 057723d0 with catch @ 05771ef4 */
      if (*(int *)(*(long *)PTR_DAT_06d023f0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      in_stack_00000008 = FUN_055e2a4c(0);
      uVar2 = FUN_055e392c(&stack0x00000008,0);
      uVar2 = FUN_05458458(*(undefined8 *)PTR_DAT_06d59fd8,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
      }
      FUN_06693690(uVar2,0);
      FUN_05771da4();
    }
    return;
  }
LAB_05771fc0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05771fc0 to 05871fc3 has its CatchHandler @ 057722c0 */
  FUN_02f080c0();
}


