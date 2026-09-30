/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.TrackingSpacePoseSetter$$Invoke
ENTRY_POINT: 04a6e0e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_TrackingSpacePoseSetter__Invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_066c6aa9 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322b98);
    FUN_02b3c81c(PTR_DAT_06322688);
    FUN_02b3c81c(PTR_DAT_06322ba0);
    FUN_02b3c81c(PTR_DAT_06320978);
    DAT_066c6aa9 = 1;
  }
  puVar2 = PTR_DAT_06322688;
  if (param_2 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar6 = thunk_FUN_02b79644();
    uVar7 = thunk_FUN_02ba3594(PTR_DAT_06320980);
    FUN_04cee07c(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6,param_5);
  }
  FUN_04c8c8f4(param_2,*(undefined8 *)PTR_DAT_06320978,*(undefined4 *)(param_1 + 0x38),0);
  puVar1 = PTR_DAT_06312310;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xf0);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar3 = PTR_DAT_06322ba0;
  uVar7 = FUN_04d8a7b0(uVar7,0);
  FUN_04c8b20c(param_2,*(undefined8 *)puVar2,uVar6,uVar7,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  FUN_04c8c8f4(param_2,*(undefined8 *)puVar3,uVar5,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xf8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    puVar2 = PTR_DAT_06322b98;
    uVar6 = FUN_02b3c908(lVar4,uVar5);
    FUN_04a6f648(param_1,uVar6,0,*(undefined4 *)(param_1 + 0x20),
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x100
                                                ) + 0x20) + 0xc0) + 200));
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_04d8a7b0(uVar7,0);
    FUN_04c8b20c(param_2,*(undefined8 *)puVar2,uVar6,uVar7,0);
    return;
  }
  return;
}


