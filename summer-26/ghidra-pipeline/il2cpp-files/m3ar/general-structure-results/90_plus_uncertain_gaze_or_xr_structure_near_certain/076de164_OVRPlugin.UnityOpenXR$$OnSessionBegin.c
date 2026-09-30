/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 076de164
PROGRAM: m3ar-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_UnityOpenXR__OnSessionBegin(undefined8 param_1,float param_2,undefined8 param_3)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  undefined4 extraout_s0;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float unaff_s8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float unaff_s12;
  undefined8 unaff_d13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  
  while (fVar8 = (float)((ulong)param_3 >> 0x20),
        fVar8 = SQRT(param_2 + (float)param_3 * (float)param_3 + fVar8 * fVar8),
        fVar8 < *(float *)(unaff_x19 + 3)) {
    *(float *)(unaff_x19 + 3) = fVar8;
    cVar1 = *(char *)(unaff_x24 + 0xe16);
    *unaff_x19 = in_stack_00000040;
    *(float *)(unaff_x19 + 1) = in_stack_00000048;
    if (cVar1 == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x24 + 0xe16) = unaff_w28;
      param_1 = in_stack_00000010;
    }
    unaff_x26 = 1;
    uVar7 = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *(undefined8 *)((long)unaff_x19 + 0xc) = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *(undefined4 *)((long)unaff_x19 + 0x14) = uVar7;
    do {
      fVar8 = (float)unaff_d13 + (float)param_1;
      fVar6 = (float)((ulong)unaff_d13 >> 0x20) + (float)((ulong)param_1 >> 0x20);
      param_1 = CONCAT44(fVar6,fVar8);
      unaff_s8 = unaff_s12 + unaff_s8;
      unaff_w25 = unaff_w25 + -1;
      if (unaff_w25 == 0) goto LAB_076de1e0;
      uVar5 = FUN_084f21e0(param_1,fVar6,unaff_s8,&stack0x00000040,*(undefined4 *)(unaff_x20 + 0x34)
                           ,0);
      fVar2 = in_stack_00000048;
      uVar4 = in_stack_00000040;
    } while ((uVar5 & 1) == 0);
    if (*(char *)(unaff_x27 + 0xe19) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x27 + 0xe19) = unaff_w28;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    param_3 = CONCAT44((float)((ulong)uVar4 >> 0x20) - fVar6,(float)uVar4 - fVar8);
    in_stack_00000010 = param_1;
    param_2 = (fVar2 - unaff_s8) * (fVar2 - unaff_s8);
  }
LAB_076de1e0:
  if ((unaff_x26 & 1) != 0) {
    uVar10 = *(undefined4 *)unaff_x19;
    uVar11 = *(undefined4 *)((long)unaff_x19 + 4);
    uVar12 = *(undefined4 *)(unaff_x19 + 1);
    uVar7 = uVar11;
    uVar9 = uVar12;
    uVar4 = FUN_076de290(uVar10,uVar11,uVar12);
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
                    /* try { // try from 076de20c to 077de21b has its CatchHandler @ 076de26c */
    in_stack_00000030 = unaff_x21[2];
                    /* try { // try from 076de21c to 077de273 has its CatchHandler @ 076ddd2c */
    uVar5 = FUN_076de3d0(uVar10,uVar11,uVar12,extraout_s0,uVar7,uVar9,in_stack_00000000,uVar4,
                         &stack0x00000020);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_076de5c8(uVar10,uVar11,uVar12);
      goto LAB_076de25c;
    }
  }
  uVar3 = 0;
LAB_076de25c:
  return uVar3 & 1;
}


