/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 076de0e0
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


uint OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,float param_5
               )

{
  char cVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 unaff_d10;
  float unaff_s11;
  float unaff_s12;
  undefined8 unaff_d13;
  float fVar15;
  undefined8 in_stack_00000000;
  ulong uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  
  fVar5 = param_5;
  if (in_ZR || in_NG != in_OV) {
    fVar5 = param_2;
  }
  fVar15 = (float)((ulong)unaff_d13 >> 0x20);
  fVar11 = unaff_s11 + unaff_s12 * param_4;
  uVar3 = CONCAT44((float)((ulong)unaff_d10 >> 0x20) + fVar15 * (float)((ulong)param_3 >> 0x20),
                   (float)unaff_d10 + (float)unaff_d13 * (float)param_3);
  do {
    uStack0000000000000018 = 0;
    uStack0000000000000010 = uVar3;
    uVar3 = FUN_084f21e0(uVar3,uVar3 >> 0x20,fVar11,param_5 + SQRT(fVar5 * fVar5 + fVar5 * fVar5),
                         &stack0x00000040,*(undefined4 *)(unaff_x20 + 0x34),0);
    fVar8 = in_stack_00000048;
    uVar4 = in_stack_00000040;
    if ((uVar3 & 1) != 0) {
      if (*(char *)(unaff_x27 + 0xe19) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x27 + 0xe19) = unaff_w28;
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar7 = (float)uVar4 - (float)uStack0000000000000010;
      fVar10 = (float)((ulong)uVar4 >> 0x20) - (float)(uStack0000000000000010 >> 0x20);
      fVar8 = SQRT((fVar8 - fVar11) * (fVar8 - fVar11) + fVar7 * fVar7 + fVar10 * fVar10);
      if (*(float *)(unaff_x19 + 3) <= fVar8) break;
      *(float *)(unaff_x19 + 3) = fVar8;
      cVar1 = *(char *)(unaff_x24 + 0xe16);
      *unaff_x19 = in_stack_00000040;
      *(float *)(unaff_x19 + 1) = in_stack_00000048;
      if (cVar1 == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x24 + 0xe16) = unaff_w28;
      }
      unaff_x26 = 1;
      uVar6 = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *(undefined8 *)((long)unaff_x19 + 0xc) = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *(undefined4 *)((long)unaff_x19 + 0x14) = uVar6;
    }
    uVar3 = CONCAT44(fVar15 + (float)(uStack0000000000000010 >> 0x20),
                     (float)unaff_d13 + (float)uStack0000000000000010);
    fVar11 = unaff_s12 + fVar11;
    unaff_w25 = unaff_w25 + -1;
  } while (unaff_w25 != 0);
  if ((unaff_x26 & 1) != 0) {
    uVar12 = *(undefined4 *)unaff_x19;
    uVar13 = *(undefined4 *)((long)unaff_x19 + 4);
    uVar14 = *(undefined4 *)(unaff_x19 + 1);
    uVar6 = uVar13;
    uVar9 = uVar14;
    uVar4 = FUN_076de290(uVar12,uVar13,uVar14);
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    in_stack_00000030 = unaff_x21[2];
    uVar3 = FUN_076de3d0(uVar12,uVar13,uVar14,extraout_s0,uVar6,uVar9,in_stack_00000000,uVar4,
                         &stack0x00000020);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_076de5c8(uVar12,uVar13,uVar14);
      goto LAB_076de25c;
    }
  }
  uVar2 = 0;
LAB_076de25c:
  return uVar2 & 1;
}


