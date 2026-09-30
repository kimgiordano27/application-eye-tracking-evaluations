/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 0574c424
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_tiledMultiResSupported(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xa08) = 1;
  puVar1 = PTR_DAT_06d4a6a8;
  uVar4 = 0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    plVar2 = (long *)thunk_FUN_02ef170c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_06d4a6a8)
    ;
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0574c4a8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar2,*(long *)puVar1,0);
LAB_0574c4a8:
                    /* WARNING: Could not recover jumptable at 0x0574c4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar4;
    }
    uVar4 = 1;
  }
  return uVar4;
}


