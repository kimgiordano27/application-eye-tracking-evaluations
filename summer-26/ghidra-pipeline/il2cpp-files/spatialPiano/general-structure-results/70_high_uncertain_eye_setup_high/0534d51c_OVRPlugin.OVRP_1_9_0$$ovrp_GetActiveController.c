/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetActiveController
ENTRY_POINT: 0534d51c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetActiveController(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint in_w8;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x23;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  
                    /* catch() { ... } // from try @ 0534d500 with catch @ 0534d51c */
  uStack0000000000000000 = param_1._0_8_;
                    /* try { // try from 0534d520 to 0544d527 has its CatchHandler @ 0534d530 */
  uStack000000000000000c = param_2._0_4_;
  uStack0000000000000010 = param_2._4_4_;
                    /* try { // try from 0534d528 to 0544d533 has its CatchHandler @ 0534d330 */
  if (in_w8 < 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0534d520 with catch @ 0534d530
                        */
  *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
  *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000000c,param_1._8_4_);
  *(undefined8 *)(unaff_x20 + 0x360) = uStack0000000000000000;
                    /* try { // try from 0534d544 to 0544d607 has its CatchHandler @ 0534d544
                       catch() { ... } // from try @ 0534d544 with catch @ 0534d544
                       catch() { ... } // from try @ 0534d624 with catch @ 0534d544
                       catch() { ... } // from try @ 0534d64c with catch @ 0534d544
                       catch() { ... } // from try @ 0534d678 with catch @ 0534d544
                       catch() { ... } // from try @ 0534d69c with catch @ 0534d544 */
  *(long *)(unaff_x20 + 0x374) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x36c) = param_2._0_8_;
  *(undefined4 *)(unaff_x20 + 0x37c) = 0;
  if (unaff_x19 != 0) {
    lVar8 = *unaff_x23;
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    **(long **)(lVar8 + 0xb8) = unaff_x19;
    lVar8 = thunk_FUN_02f45270(*unaff_x23);
    FUN_0534c790();
    puVar5 = Unity_Collections_FixedString512Bytes_TypeInfo;
    puVar4 = Unity_Collections_FixedString4096Bytes_TypeInfo;
    puVar3 = Unity_Collections_FixedString32Bytes_TypeInfo;
    puVar2 = Unity_Collections_FixedString128Bytes_TypeInfo;
    puVar1 = System_Net_FixedSizeReadStream_TypeInfo;
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      lVar6 = *(long *)Unity_Collections_FixedString512Bytes_TypeInfo;
      uVar9 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar6 = *(long *)puVar5;
      }
      uVar10 = **(undefined8 **)(lVar6 + 0xb8);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_04dfeddc(uVar7,uVar10,*(undefined8 *)puVar4,0);
      uVar9 = FUN_0339a72c(uVar9,uVar7,*(undefined8 *)puVar1);
      uVar9 = FUN_033a4348(uVar9,*(undefined8 *)puVar2);
      if (lVar8 != 0) {
        lVar6 = *unaff_x23;
        *(undefined8 *)(lVar8 + 0x10) = uVar9;
        *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


