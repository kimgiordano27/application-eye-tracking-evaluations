/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 060fcbb0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Update(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x23;
  
  thunk_FUN_036b7ad0();
  **(undefined8 **)(*unaff_x23 + 0xb8) = unaff_x19;
  thunk_FUN_036b7ad0(*(undefined8 *)(*unaff_x23 + 0xb8));
  lVar6 = thunk_FUN_0367fe20(*unaff_x23);
  FUN_060fbddc();
  puVar5 = PTR_DAT_07a24e18;
  puVar4 = PTR_DAT_07a24e10;
  puVar3 = PTR_DAT_07a24e08;
  puVar2 = PTR_DAT_07a24e00;
  puVar1 = PTR_DAT_07a24df8;
  if (**(long **)(*unaff_x23 + 0xb8) != 0) {
    lVar7 = *(long *)PTR_DAT_07a24e18;
    uVar10 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
    FUN_0415445c(uVar8,uVar11,*(undefined8 *)puVar4,0);
    uVar10 = FUN_03cb63f4(uVar10,uVar8,*(undefined8 *)puVar1);
    uVar10 = FUN_03cc3ac8(uVar10,*(undefined8 *)puVar2);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = uVar10;
      thunk_FUN_036b7ad0();
      plVar9 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
      *plVar9 = lVar6;
      thunk_FUN_036b7ad0(plVar9,lVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


