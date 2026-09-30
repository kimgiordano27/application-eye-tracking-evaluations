/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$get_Count
ENTRY_POINT: 05d43094
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl_Annotation_Builder__get_Count(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x21;
  uint uVar6;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar2 = FUN_05d42f2c();
  if (**(long **)(*unaff_x21 + 0xb8) == 0) {
LAB_05d43194:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar3 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6e8f0,
                       *(undefined4 *)(**(long **)(*unaff_x21 + 0xb8) + 0x18));
  lVar4 = *unaff_x21;
  uVar6 = 0;
  while( true ) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *unaff_x21;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_05d43194;
    if (*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (int)uVar6) {
      return lVar3;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *unaff_x21;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) goto LAB_05d43194;
    if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
    if (lVar2 == 0) goto LAB_05d43194;
    uVar1 = *(uint *)(lVar5 + (long)(int)uVar6 * 4 + 0x20);
    if (*(uint *)(lVar2 + 0x18) <= uVar1) break;
    if (lVar3 == 0) goto LAB_05d43194;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) break;
    lVar5 = (long)(int)uVar6;
    uVar6 = uVar6 + 1;
    *(bool *)(lVar3 + lVar5 + 0x20) =
         uVar1 != 3 && *(int *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


