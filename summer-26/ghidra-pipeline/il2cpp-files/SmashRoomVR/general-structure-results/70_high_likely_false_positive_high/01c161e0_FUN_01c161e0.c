/*
FUNCTION_NAME: FUN_01c161e0
ENTRY_POINT: 01c161e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_01c161e0(undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4)

{
  float fVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_03fed42f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                      );
    DAT_03fed42f = 1;
  }
  uVar3 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x1b,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038ee994(0);
  }
  uVar3 = FUN_0394f7a8(1,0);
  if ((uVar3 & 1) != 0) {
    FUN_0390e2e0(1,0);
  }
  uVar3 = FUN_0394f7e4(1,0);
  if ((uVar3 & 1) != 0) {
    FUN_0390e27c(1,0);
    FUN_0390e2e0(0,0);
  }
  uVar3 = FUN_0394f76c(1,0);
  puVar2 = 
  Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__;
  if ((uVar3 & 1) != 0) {
    param_3 = (float)FUN_0394f4d8(*(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                                  ,0);
    fVar6 = (float)FUN_0394f4d8(*(undefined8 *)puVar2,0);
    fVar8 = -fVar6;
    if (*(char *)(param_4 + 0x44) != '\0') {
      fVar8 = fVar6;
    }
    lVar4 = *(long *)(param_4 + 0x38);
    if (DAT_03fed262 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed262 = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (lVar4 == 0) goto LAB_01c164b0;
                    /* try { // try from 01c16350 to 01d16363 has its CatchHandler @ 01c16350
                       catch() { ... } // from try @ 01c16350 with catch @ 01c16350
                       catch() { ... } // from try @ 01c1636c with catch @ 01c16350
                       catch() { ... } // from try @ 01c16384 with catch @ 01c16350
                       catch() { ... } // from try @ 01c1639c with catch @ 01c16350 */
    fVar6 = (float)FUN_038ee05c(SQRT(param_3 * param_3 + fVar8 * fVar8),lVar4,0);
    lVar4 = *(long *)(param_4 + 0x20);
                    /* try { // try from 01c16364 to 01d1636b has its CatchHandler @ 01c163b8 */
    if (lVar4 == 0) goto LAB_01c164b0;
                    /* try { // try from 01c1636c to 01d1637f has its CatchHandler @ 01c16350 */
    param_2 = *(undefined8 *)(lVar4 + 0x10);
    *(ulong *)(lVar4 + 0x10) =
         CONCAT44((float)((ulong)param_2 >> 0x20) + fVar8 * fVar6,(float)param_2 + param_3 * fVar6);
  }
  fVar10 = (float)param_2;
                    /* try { // try from 01c16380 to 01d16383 has its CatchHandler @ 01c163b4 */
  fVar6 = (float)FUN_01c15fb0();
  fVar8 = fVar10;
                    /* try { // try from 01c16384 to 01d16397 has its CatchHandler @ 01c16350 */
  fVar7 = (float)FUN_03925cf4(0);
                    /* try { // try from 01c16398 to 01d1639b has its CatchHandler @ 01c163b0 */
                    /* try { // try from 01c1639c to 01d163cb has its CatchHandler @ 01c16350 */
  uVar3 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0);
  fVar11 = *(float *)(param_4 + 0x30);
  FUN_0394fb64(0);
  fVar11 = fVar11 + fVar8 * DAT_00b555e0;
  *(float *)(param_4 + 0x30) = fVar11;
  fVar8 = exp2f(fVar11);
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar9 = param_3 * fVar7 * 10.0;
    fVar11 = fVar10 * fVar7 * 10.0;
    fVar1 = fVar6 * fVar7 * 10.0;
    if ((uVar3 & 1) == 0) {
      fVar9 = param_3 * fVar7;
      fVar11 = fVar10 * fVar7;
      fVar1 = fVar6 * fVar7;
    }
    FUN_01c164b4(fVar1 * fVar8,fVar11 * fVar8,fVar9 * fVar8);
    fVar11 = *(float *)(param_4 + 0x34);
    fVar6 = (float)FUN_03925cf4(0);
    fVar10 = *(float *)(param_4 + 0x40);
    fVar7 = (float)FUN_03925cf4(0);
    fVar8 = DAT_00b55334;
    lVar4 = *(long *)(param_4 + 0x28);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_4 + 0x20);
      fVar7 = expf((DAT_00b55334 / fVar10) * fVar7);
      fVar8 = expf((fVar8 / fVar11) * fVar6);
      FUN_01c16534(1.0 - fVar8,1.0 - fVar7,lVar4,uVar5);
      lVar4 = *(long *)(param_4 + 0x28);
      uVar5 = FUN_0391c27c(param_4,0);
      if (lVar4 != 0) {
        FUN_01c165a8(lVar4,uVar5);
        return;
      }
    }
  }
LAB_01c164b0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


