/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$ovrp_GetSystemRegion
ENTRY_POINT: 0603a4d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_5_0__ovrp_GetSystemRegion
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  
  do {
                    /* try { // try from 0603a4e8 to 0613a4ef has its CatchHandler @ 0603a6e4 */
                    /* try { // try from 0603a4f4 to 0613a4ff has its CatchHandler @ 0603a6d8 */
                    /* try { // try from 0603a50c to 0613a523 has its CatchHandler @ 0603a6e0 */
    fVar4 = (in_s18 + in_s16 + in_s17) - in_s19;
    fVar5 = (in_s22 + in_s20 + in_s21) - in_s23;
    fVar6 = (param_1 * param_8 + param_4 * param_7 + param_3 * param_6) - param_2 * param_5;
    fVar7 = ((param_4 * param_6 - param_1 * param_5) - param_2 * param_8) - param_3 * param_7;
    while( true ) {
      if (unaff_x29 == 0) goto LAB_0603a3e4;
      if (*(uint *)(unaff_x29 + 0x18) <= unaff_x25) goto LAB_0603a5b0;
      lVar2 = unaff_x29 + unaff_x24 * 4;
      unaff_x24 = unaff_x24 + 4;
      unaff_x25 = unaff_x25 + 1;
      unaff_x23 = unaff_x23 + 0x1c;
      *(float *)(lVar2 + 0x20) = fVar4;
      *(float *)(lVar2 + 0x24) = fVar5;
      *(float *)(lVar2 + 0x28) = fVar6;
      *(float *)(lVar2 + 0x2c) = fVar7;
      if (unaff_x24 == 0x68) {
        return 1;
      }
      lVar2 = *unaff_x26;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar2 = *unaff_x26;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_0603a3e4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_0603a5b0;
      uVar1 = *(uint *)(lVar2 + unaff_x24 + 0x20);
      unaff_x29 = *(long *)(unaff_x19 + 0x48);
      if (-1 < (int)uVar1) break;
      if (*(char *)(unaff_x27 + 0x53c) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x27 + 0x53c) = unaff_w22;
      }
      pfVar3 = *(float **)(*unaff_x21 + 0xb8);
      fVar4 = *pfVar3;
      fVar5 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar7 = pfVar3[3];
    }
    lVar2 = *unaff_x20;
    if (lVar2 == 0) {
LAB_0603a3e4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
LAB_0603a5b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar2 = lVar2 + (ulong)uVar1 * unaff_x28;
    param_2 = *(float *)(lVar2 + 0x30);
    param_3 = *(float *)(lVar2 + 0x34);
    param_4 = *(float *)(lVar2 + 0x38);
    param_1 = (float)FUN_06e45c00(*(undefined4 *)(lVar2 + 0x2c),0);
    lVar2 = *unaff_x20;
    if (lVar2 == 0) goto LAB_0603a3e4;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_0603a5b0;
    lVar2 = lVar2 + unaff_x23;
    param_5 = *(float *)(lVar2 + 0x2c);
    param_8 = *(float *)(lVar2 + 0x30);
    param_7 = *(float *)(lVar2 + 0x34);
    param_6 = *(float *)(lVar2 + 0x38);
    in_s16 = param_4 * param_5;
    in_s17 = param_1 * param_6;
    in_s18 = param_2 * param_7;
    in_s19 = param_3 * param_8;
    in_s20 = param_4 * param_8;
    in_s21 = param_2 * param_6;
    in_s22 = param_3 * param_5;
    in_s23 = param_1 * param_7;
  } while( true );
}


