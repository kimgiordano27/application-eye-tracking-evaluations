/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 05104f34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MetaXRFeature__OnSessionStateChange(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 uVar7;
  
  plVar2 = (long *)FUN_05105228();
  iVar1 = (**(code **)(*unaff_x20 + 0x238))();
  if ((iVar1 != 0) || (uVar3 = FUN_05099224(), (uVar3 & 1) != 0)) {
    if ((plVar2 == (long *)0x0) ||
       (uVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0)),
       (uVar3 & 1) == 0)) {
      uVar4 = FUN_051056a8();
    }
    else {
      uVar4 = FUN_05105294();
    }
    if ((unaff_x22 & 1) != 0) {
      while (uVar3 = (**(code **)(*unaff_x20 + 0x288))(), (uVar3 & 1) != 0) {
        iVar1 = (**(code **)(*unaff_x20 + 0x238))();
        if (iVar1 != 5) {
          thunk_FUN_02dc61f4(PTR_DAT_0677d8f0);
          uVar4 = FUN_050924a8();
          uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067803f0);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar4,uVar5);
        }
      }
    }
    return uVar4;
  }
  if ((unaff_x21 != 0) && (*(char *)(unaff_x21 + 0x10) == '\0')) {
    lVar6 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f8e414(0);
    uVar7 = *(undefined8 *)(unaff_x21 + 0x60);
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067803f8);
    FUN_050f0ec0(uVar5,uVar4,uVar7);
    uVar4 = FUN_050924a8();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067803f0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar5);
  }
  return 0;
}


