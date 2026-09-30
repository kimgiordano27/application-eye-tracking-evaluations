/*
FUNCTION_NAME: OVRPlugin.OVRP_1_101_0$$.cctor
ENTRY_POINT: 090d757c
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_101_0___cctor(long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  *(long *)(unaff_x22 + 0x2c) = param_2._8_8_;
  *(long *)(unaff_x22 + 0x24) = param_2._0_8_;
  *(long *)(unaff_x22 + 0x38) = param_3._8_8_;
  *(long *)(unaff_x22 + 0x30) = param_3._0_8_;
  uVar12 = *(undefined4 *)(param_1 + 0xfac);
  uVar13 = *(undefined4 *)(in_x9 + 0xfb0);
  uVar14 = *(undefined4 *)(in_x10 + 0x1e4);
                    /* try { // try from 090d7598 to 091d759f has its CatchHandler @ 090d799c */
  *(undefined4 *)(unaff_x20 + 0x358) = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  FUN_0a188128(uVar12,uVar13,uVar14,&stack0x00000020,0);
                    /* try { // try from 090d75b4 to 091d75b7 has its CatchHandler @ 090d7970 */
  uStack0000000000000014 = CONCAT44(uStack0000000000000038,uStack0000000000000034);
                    /* try { // try from 090d75b8 to 091d75c3 has its CatchHandler @ 090d7998 */
  uStack000000000000000c = uStack000000000000002c;
                    /* try { // try from 090d75c4 to 091d75d3 has its CatchHandler @ 090d7990 */
  if (*(uint *)(unaff_x20 + 0x18) < 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
                    /* try { // try from 090d75d4 to 091d75df has its CatchHandler @ 090d7994 */
  *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
  *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  *(undefined8 *)(unaff_x20 + 0x360) = uStack0000000000000020;
  *(undefined8 *)(unaff_x20 + 0x374) = uStack0000000000000014;
  *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
  *(undefined4 *)(unaff_x20 + 0x37c) = 0;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    thunk_FUN_049ee3d8();
    **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
    thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x23 + 0xb8));
    lVar6 = thunk_FUN_04983f60(*unaff_x23);
    FUN_090d6824();
    puVar5 = PTR_DAT_0ac79958;
    puVar4 = PTR_DAT_0ac79950;
    puVar3 = PTR_DAT_0ac79948;
    puVar2 = PTR_DAT_0ac79940;
    puVar1 = PTR_DAT_0ac79938;
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      lVar7 = *(long *)PTR_DAT_0ac79958;
      uVar10 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar7 = *(long *)puVar5;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_063e13b4(uVar8,uVar11,*(undefined8 *)puVar4,0);
      uVar10 = FUN_05b76c98(uVar10,uVar8,*(undefined8 *)puVar1);
      uVar10 = FUN_05b85be0(uVar10,*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x10) = uVar10;
        thunk_FUN_049ee3d8();
        plVar9 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        *plVar9 = lVar6;
        thunk_FUN_049ee3d8(plVar9,lVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


