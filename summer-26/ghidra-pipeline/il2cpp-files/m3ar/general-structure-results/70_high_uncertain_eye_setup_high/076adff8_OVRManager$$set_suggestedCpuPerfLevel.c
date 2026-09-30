/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 076adff8
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__set_suggestedCpuPerfLevel(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x21;
  
  plVar6 = *(long **)(unaff_x21 + 0x28);
  uVar1 = thunk_FUN_0406deb8(**(undefined8 **)(param_1 + 0x370));
  FUN_07449f28();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f6a1b8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x14) * 0x10 + 0x138);
        goto OVRManager__get_suggestedGpuPerfLevel;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f6a1b8,0x14);
OVRManager__get_suggestedGpuPerfLevel:
                    /* WARNING: Could not recover jumptable at 0x076ae09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return;
}


