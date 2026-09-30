/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 0726e20c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_x9;
  long in_x10;
  long in_x11;
  int in_w12;
  uint uVar3;
  uint in_w13;
  undefined4 unaff_w19;
  long unaff_x20;
  
  while (uVar3 = (int)param_1 + in_w12, uVar3 < in_w13) {
    if (*(char *)(in_x10 + param_1) != *(char *)(in_x11 + (int)uVar3 + 0x20)) {
      thunk_FUN_040dedf8(PTR_DAT_09285a20);
      uVar1 = thunk_FUN_040b4efc();
      uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c1050);
      FUN_076b16a0(uVar1,uVar2,0);
      uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c1058);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar1,uVar2);
    }
    param_1 = param_1 + 1;
    if (param_1 == 10) {
      *(undefined8 *)(unaff_x20 + 0x88) = 0;
      thunk_FUN_040ec700(unaff_x20 + 0x88,0);
      return unaff_w19;
    }
    if (in_x9 == param_1) break;
    in_x11 = *(long *)(unaff_x20 + 0x88);
    if (in_x11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_w13 = *(uint *)(in_x11 + 0x18);
    in_w12 = *(int *)(unaff_x20 + 0x90);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


