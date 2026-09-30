/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcActivationMode
ENTRY_POINT: 06aeecc4
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcActivationMode
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 06aeeccc to 06beeccf has its CatchHandler @ 06aeed18 */
                    /* try { // try from 06aeecd0 to 06beecd3 has its CatchHandler @ 06aee77c */
                    /* try { // try from 06aeecd4 to 06beecd7 has its CatchHandler @ 06aeed14 */
                    /* try { // try from 06aeecd8 to 06beecdf has its CatchHandler @ 06aee77c */
                    /* try { // try from 06aeece0 to 06beece3 has its CatchHandler @ 06aeed0c */
  if ((DAT_086e249a & 1) == 0) {
                    /* try { // try from 06aeece4 to 06beece7 has its CatchHandler @ 06aeed04 */
                    /* try { // try from 06aeece8 to 06beeceb has its CatchHandler @ 06aeecfc */
                    /* try { // try from 06aeecec to 06beecef has its CatchHandler @ 06aeecf4 */
                    /* try { // try from 06aeecf0 to 06beecf3 has its CatchHandler @ 06aeed10 */
                    /* catch() { ... } // from try @ 06aeec40 with catch @ 06aeecf4
                       catch() { ... } // from try @ 06aeecec with catch @ 06aeecf4
                       try { // try from 06aeecf4 to 06beed37 has its CatchHandler @ 06aee77c */
    FUN_0335b6c8(&DAT_083cf7d8,1);
                    /* catch() { ... } // from try @ 06aeeb90 with catch @ 06aeecf8 */
    DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06aeece8 with catch @ 06aeecfc */
    DAT_086e249a = 1;
  }
                    /* catch() { ... } // from try @ 06aeeb74 with catch @ 06aeed00 */
                    /* catch() { ... } // from try @ 06aeece4 with catch @ 06aeed04 */
                    /* catch() { ... } // from try @ 06aeeb0c with catch @ 06aeed08 */
                    /* catch() { ... } // from try @ 06aeece0 with catch @ 06aeed0c */
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 06aeeb24 with catch @ 06aeed10
                       catch() { ... } // from try @ 06aeecf0 with catch @ 06aeed10 */
    FUN_033b9870();
  }
                    /* catch() { ... } // from try @ 06aeecd4 with catch @ 06aeed14 */
                    /* catch() { ... } // from try @ 06aeeccc with catch @ 06aeed18 */
                    /* catch() { ... } // from try @ 06aeeab4 with catch @ 06aeed1c */
                    /* catch() { ... } // from try @ 06aeea58 with catch @ 06aeed20 */
  uVar1 = FUN_07a0d2c4(param_5,0,0);
  if ((uVar1 & 1) == 0) {
LAB_06aeed90:
    lVar3 = *(long *)(param_4 + 0x48);
    if (lVar3 == 0) goto LAB_06aeeeec;
    if (DAT_086edc60 == (code *)0x0) {
      DAT_086edc60 = (code *)FUN_033d1b68("UnityEngine.Renderer::GetMaterial()");
    }
    lVar3 = (*DAT_086edc60)(lVar3);
    if (lVar3 == 0) goto LAB_06aeeeec;
    puVar4 = (undefined8 *)(param_4 + 0x58);
  }
  else {
    if (param_5 == 0) goto LAB_06aeeeec;
    puVar4 = (undefined8 *)(param_5 + 0x28);
    uVar2 = *puVar4;
                    /* try { // try from 06aeed38 to 06beed3b has its CatchHandler @ 06aeed48 */
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar1 = FUN_07a0d2c4(uVar2,0,0);
    if ((uVar1 & 1) == 0) goto LAB_06aeed90;
    lVar3 = *(long *)(param_4 + 0x48);
    if (lVar3 == 0) goto LAB_06aeeeec;
    if (DAT_086edc60 == (code *)0x0) {
      DAT_086edc60 = (code *)FUN_033d1b68("UnityEngine.Renderer::GetMaterial()");
    }
    lVar3 = (*DAT_086edc60)(lVar3);
    if (lVar3 == 0) goto LAB_06aeeeec;
  }
  FUN_079de8b8(lVar3,*puVar4,0);
  if (*(char *)(param_4 + 0x60) == '\0') {
    lVar3 = *(long *)(param_4 + 0x48);
    if (lVar3 == 0) goto LAB_06aeeeec;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar3 = (*DAT_086ef188)(lVar3);
    if (param_5 == 0) goto LAB_06aeeeec;
    fVar6 = *(float *)(param_4 + 100);
    fVar7 = *(float *)(param_4 + 0x68);
    fVar8 = *(float *)(param_4 + 0x6c);
    fVar5 = (float)FUN_06aed7c4(param_5);
    if (DAT_086d7cc9 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc9 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar3 == 0) goto LAB_06aeeeec;
    fVar5 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
    FUN_07a19820(fVar6 * fVar5,fVar7 * fVar5,fVar8 * fVar5,lVar3,0);
  }
  lVar3 = *(long *)(param_4 + 0x48);
  if (lVar3 != 0) {
    if (DAT_086edcc0 == (code *)0x0) {
      DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x06aeeee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_086edcc0)(lVar3,1);
    return;
  }
LAB_06aeeeec:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


