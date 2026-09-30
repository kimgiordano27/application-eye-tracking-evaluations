/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 02c00b64
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_SpaceQueryComplete(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint in_w9;
  long in_x10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong uVar3;
  
  while (in_x10 != 0) {
    do {
      if (in_w9 <= unaff_w24) goto LAB_02c00c70;
      uVar3 = *(ulong *)(unaff_x23 + (ulong)unaff_w24 * 8 + 0x20);
      if ((uVar3 & (unaff_x25 ^ 0xffffffffffffffff)) == 0) {
        if ((param_1 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) goto LAB_02c00c74;
          FUN_02a5b0d4();
        }
        if (unaff_x22 == 0) goto LAB_02c00c74;
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_w24) goto LAB_02c00c70;
        if (unaff_x21 == (long *)0x0) goto LAB_02c00c74;
        unaff_x25 = unaff_x25 - uVar3;
        FUN_02a5b0d4();
        param_1 = 0;
      }
      unaff_w24 = unaff_w24 - 1;
      if ((int)unaff_w24 < 0) goto LAB_02c00bdc;
      in_w9 = *(uint *)(unaff_x23 + 0x18);
    } while (unaff_w24 != 0);
    if (in_w9 == 0) goto LAB_02c00c70;
    in_x10 = *(long *)(unaff_x23 + 0x20);
  }
LAB_02c00bdc:
  if (unaff_x25 == 0) {
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x23 + 0x18) == 0) {
LAB_02c00c34:
        return *(undefined8 *)PTR_DAT_037f3088;
      }
      if ((int)*(long *)(unaff_x23 + 0x18) != 0) {
        if (*(long *)(unaff_x23 + 0x20) != 0) goto LAB_02c00c34;
        if (unaff_x22 == 0) goto LAB_02c00c74;
        if (*(int *)(unaff_x22 + 0x18) != 0) {
          return *(undefined8 *)(unaff_x22 + 0x20);
        }
      }
LAB_02c00c70:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if (unaff_x21 != (long *)0x0) {
      lVar2 = *unaff_x21;
      goto LAB_02c00c00;
    }
  }
  else if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
LAB_02c00c00:
                    /* WARNING: Could not recover jumptable at 0x02c00c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(lVar2 + 0x168))();
    return uVar1;
  }
LAB_02c00c74:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


