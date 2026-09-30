/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$Start
ENTRY_POINT: 05188688
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_Samples_SampleMetadata__Start(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((DAT_06a71177 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608090);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608098);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066080a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608100);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066080d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066080b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066080b8);
    DAT_06a71177 = 1;
  }
  puVar4 = PTR_DAT_066080d8;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_066080a0) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0518875c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02ce0a7c(param_2,*(long *)PTR_DAT_066080a0,0);
LAB_0518875c:
  uVar5 = (*(code *)*puVar6)(param_2,puVar6[1]);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_066080b8;
  puVar2 = PTR_DAT_066080b0;
  puVar1 = PTR_DAT_06608090;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608098);
    FUN_04a4f054(lVar11,uVar12,*(undefined8 *)PTR_DAT_06608100,0);
    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar11;
  }
  uVar12 = FUN_033efc10(param_2,lVar11,*(undefined8 *)puVar1);
  uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  UnityEngine_UIElements_BaseField<object>__AlignLabel(uVar7,uVar5,uVar12,*(undefined8 *)puVar2);
  return uVar7;
}


