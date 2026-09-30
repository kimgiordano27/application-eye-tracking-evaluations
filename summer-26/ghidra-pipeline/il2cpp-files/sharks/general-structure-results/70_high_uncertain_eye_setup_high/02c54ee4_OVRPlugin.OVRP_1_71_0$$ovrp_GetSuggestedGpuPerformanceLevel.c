/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_GetSuggestedGpuPerformanceLevel
ENTRY_POINT: 02c54ee4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_GetSuggestedGpuPerformanceLevel(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  int unaff_w20;
  long unaff_x22;
  long unaff_x23;
  
  FUN_017fc350(PTR_DAT_037f5ae8);
  *(undefined1 *)(unaff_x23 + 0x152) = 1;
  if (unaff_x22 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar4 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_03800588);
    uVar5 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar4,uVar3,uVar5,0);
  }
  else {
    if ((unaff_w20 < 0) || (unaff_w19 < 0)) {
      puVar2 = PTR_DAT_037f8970;
      if (-1 < unaff_w19) {
        puVar2 = PTR_DAT_037f86c8;
      }
      uVar3 = thunk_FUN_01851c08(puVar2);
      thunk_FUN_01851c08(PTR_DAT_037f86c0);
      uVar5 = thunk_FUN_01861bbc();
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037f8998);
      FUN_02b40444(uVar5,uVar3,uVar4,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380cc58);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar3);
    }
    if (unaff_w20 <= *(int *)(unaff_x22 + 0x18) - unaff_w19) {
      if (unaff_w20 != 0) {
        lVar1 = 0;
        if (*(int *)(unaff_x22 + 0x18) != 0) {
          lVar1 = unaff_x22 + 0x20;
        }
        uVar3 = FUN_02a56584(lVar1 + unaff_w19,unaff_w20);
        return uVar3;
      }
      return **(undefined8 **)(*(long *)PTR_DAT_037f5ae8 + 0xb8);
    }
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar4 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_03800588);
    uVar5 = thunk_FUN_01851c08(PTR_DAT_038000f0);
    FUN_02b40444(uVar4,uVar3,uVar5,0);
  }
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380cc58);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar4,uVar3);
}


