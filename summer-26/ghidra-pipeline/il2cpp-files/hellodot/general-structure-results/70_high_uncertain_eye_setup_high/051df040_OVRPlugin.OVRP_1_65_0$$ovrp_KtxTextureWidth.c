/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureWidth
ENTRY_POINT: 051df040
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureWidth(ulong param_1,undefined8 param_2)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x23;
  float fVar2;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  
  uStack0000000000000000 = *(undefined8 *)(unaff_x20 + 0x20);
                    /* try { // try from 051df048 to 052df07f has its CatchHandler @ 051def38 */
  *(ulong *)(unaff_x20 + 0x40) = param_1 & (unaff_x23 ^ 0xffffffffffffffff);
  uStack0000000000000010 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000008 = (undefined4)*(undefined8 *)(unaff_x20 + 0x28);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x28) >> 0x20);
  uStack000000000000004c = uStack000000000000000c;
  uStack0000000000000050 = uStack0000000000000010;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uStack0000000000000040 = uStack0000000000000000;
  uStack0000000000000048 = uStack0000000000000008;
  if (lVar1 != 0) {
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + unaff_x22 * 0x1c;
                    /* try { // try from 051df080 to 052df087 has its CatchHandler @ 051df08c */
      in_stack_00000038 = *(undefined4 *)(lVar1 + 0x38);
                    /* try { // try from 051df088 to 052df0af has its CatchHandler @ 051def38 */
      in_stack_00000030 = *(undefined8 *)(lVar1 + 0x30);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051df080 with catch @ 051df08c
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051defdc with catch @ 051df090
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051df020 with catch @ 051df094
                        */
      fVar2 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar1 + 0x28);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * fVar2,
                    (float)*(undefined8 *)(lVar1 + 0x20) * fVar2);
                    /* try { // try from 051df0b0 to 052df0b3 has its CatchHandler @ 051df0dc */
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar2);
                    /* try { // try from 051df0b4 to 052df0e3 has its CatchHandler @ 051def38 */
      lVar1 = *(long *)(unaff_x20 + 0x18);
      if (lVar1 == 0) goto LAB_051df0f8;
      if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
        FUN_0515245c(&stack0x00000040,&stack0x00000020,lVar1 + unaff_x22 * 0x1c + 0x20,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_051df0f8:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


