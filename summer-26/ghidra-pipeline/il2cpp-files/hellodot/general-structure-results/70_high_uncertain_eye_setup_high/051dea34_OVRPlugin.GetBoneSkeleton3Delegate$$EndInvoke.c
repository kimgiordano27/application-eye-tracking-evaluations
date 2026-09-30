/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$EndInvoke
ENTRY_POINT: 051dea34
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton3Delegate__EndInvoke(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x23;
  
  puVar5 = PTR_DAT_066091b0;
  puVar4 = PTR_DAT_066091a8;
  puVar3 = PTR_DAT_066091a0;
  puVar2 = PTR_DAT_06609198;
  puVar1 = PTR_DAT_06609190;
  if (*param_1 != 0) {
    lVar6 = *(long *)PTR_DAT_066091b0;
    uVar8 = *(undefined8 *)(*param_1 + 0x10);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_04a50c34(uVar7,uVar9,*(undefined8 *)puVar4,0);
    uVar8 = FUN_033e7fdc(uVar8,uVar7,*(undefined8 *)puVar1);
    uVar8 = FUN_033f6b80(uVar8,*(undefined8 *)puVar2);
    if (unaff_x19 != 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = uVar8;
      *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x19;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


