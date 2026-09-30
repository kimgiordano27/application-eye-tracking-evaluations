/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 04f8df60
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(undefined4 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int in_w9;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  if (in_w9 == 0) {
    thunk_FUN_02b9ad44();
    param_2 = *unaff_x21;
  }
  fVar7 = *(float *)(*(ulong **)(param_2 + 0xb8) + 1);
  uVar9 = **(ulong **)(param_2 + 0xb8);
  iVar2 = FUN_04f8cdf8();
  bVar1 = iVar2 == 0;
  fVar8 = -fVar7;
  if (!bVar1) {
    fVar8 = fVar7;
  }
  uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(-(float)(uVar9 >> 0x20),-(float)uVar9)) &
                  CONCAT44(-(uint)((int)((uint)bVar1 << 0x1f) < 0),
                           -(uint)((int)((uint)bVar1 << 0x1f) < 0));
  fVar7 = (float)FUN_04f8d130();
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  FUN_05c99d80((float)uVar9 * fVar7,(float)(uVar9 >> 0x20) * fVar7,fVar7 * fVar8,uVar3,uVar4,uVar5,
               uVar6);
  unaff_x19[1] = (ulong)uStack000000000000000c << 0x20;
  *unaff_x19 = 0;
  *(ulong *)((long)unaff_x19 + 0x14) = (ulong)uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = (ulong)uStack000000000000000c;
  return 1;
}


