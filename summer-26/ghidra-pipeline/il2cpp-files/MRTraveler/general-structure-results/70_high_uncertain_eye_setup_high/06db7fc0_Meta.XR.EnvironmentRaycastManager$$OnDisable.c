/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDisable
ENTRY_POINT: 06db7fc0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnDisable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int in_w8;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_09419c01 == '\0') {
    FUN_03c8f898(PTR_DAT_08e902c0);
    DAT_09419c01 = '\x01';
  }
  puVar4 = PTR_DAT_08e90468;
  puVar3 = PTR_DAT_08e90460;
  puVar2 = PTR_DAT_08e902e8;
  puVar1 = PTR_DAT_08e902d0;
  lVar5 = *unaff_x21;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *unaff_x21;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
  FUN_06a4d5f0(uVar6,uVar7,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x40),uVar6);
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_06a4d5c4(uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48),uVar6);
  FUN_07145224();
  return;
}


