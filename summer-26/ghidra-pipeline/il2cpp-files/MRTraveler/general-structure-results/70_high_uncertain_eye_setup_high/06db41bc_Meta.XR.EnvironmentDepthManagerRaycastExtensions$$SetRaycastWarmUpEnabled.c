/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$SetRaycastWarmUpEnabled
ENTRY_POINT: 06db41bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthManagerRaycastExtensions__SetRaycastWarmUpEnabled(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  
  uVar2 = FUN_05213084();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar3 = FUN_04e4bd24(*(long *)(unaff_x19 + 0x38));
    if (((uVar2 | uVar3) & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_06db46e4;
      System_Array_InternalEnumerator<MaterialPropertyVector>__MoveNext();
      puVar1 = PTR_DAT_08e901d8;
      uVar4 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e901d8);
      uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e695a0);
      FUN_071396dc(uVar5,uVar4,0);
      FUN_06db48c4();
      uVar4 = FUN_06f7465c(*(undefined8 *)puVar1);
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
      }
      FUN_06dfde00(uVar4,0,0);
    }
    return 0;
  }
LAB_06db46e4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


