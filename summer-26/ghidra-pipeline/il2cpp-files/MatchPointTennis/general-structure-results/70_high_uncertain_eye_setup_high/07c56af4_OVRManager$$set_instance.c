/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 07c56af4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_instance
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  ulong in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  
  if ((DAT_0a526603 & 1) == 0) {
                    /* try { // try from 07c56b18 to 07d56b1b has its CatchHandler @ 07c56bec */
    FUN_04447ba8(PTR_DAT_09f25358);
                    /* try { // try from 07c56b1c to 07d56b1f has its CatchHandler @ 07c55c5c */
                    /* try { // try from 07c56b20 to 07d56b23 has its CatchHandler @ 07c56b3c */
    DAT_0a526603 = 1;
  }
                    /* try { // try from 07c56b24 to 07d56b2b has its CatchHandler @ 07c55c5c */
  if (*(long *)(param_4 + 0x20) != 0) {
                    /* try { // try from 07c56b2c to 07d56b2f has its CatchHandler @ 07c56b38 */
                    /* try { // try from 07c56b30 to 07d56b5f has its CatchHandler @ 07c55c5c */
    FUN_07c4f804(&stack0x00000030,*(long *)(param_4 + 0x20),0);
    uVar6 = uStack0000000000000044;
    uVar5 = uStack0000000000000040;
    uVar4 = uStack0000000000000038;
    uVar2 = in_stack_00000030;
                    /* catch() { ... } // from try @ 07c56b2c with catch @ 07c56b38 */
    uVar3 = in_stack_00000030._4_4_;
                    /* catch() { ... } // from try @ 07c56b20 with catch @ 07c56b3c */
                    /* catch() { ... } // from try @ 07c56a40 with catch @ 07c56b40 */
                    /* catch() { ... } // from try @ 07c56a14 with catch @ 07c56b44 */
                    /* catch() { ... } // from try @ 07c569b8 with catch @ 07c56b48 */
    uVar7 = uStack0000000000000044._4_4_;
    fVar11 = (float)uStack0000000000000040;
    fVar8 = (float)FUN_07c55f14(param_4);
    if (*(long *)(param_4 + 0x28) != 0) {
      fVar14 = param_3;
      fVar12 = fVar11;
      fVar9 = (float)FUN_09539d64(*(long *)(param_4 + 0x28),0);
      fVar15 = fVar14;
      fVar13 = fVar12;
      fVar10 = (float)FUN_07c56a74(param_4);
      puVar1 = PTR_DAT_09f25358;
      if (*(long *)(param_4 + 0x28) != 0) {
        FUN_09539e3c(fVar8 + (fVar9 - fVar10),fVar11 + (fVar12 - fVar13),param_3 + (fVar14 - fVar15)
                     ,*(long *)(param_4 + 0x28),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_095381c0(&stack0x00000010,0);
        uStack0000000000000044 = uStack0000000000000024;
        uStack0000000000000040 = uStack0000000000000020;
        uStack0000000000000038 = uStack0000000000000018;
        in_stack_00000030 = in_stack_00000010;
        *(ulong *)(param_4 + 0x58) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        *(ulong *)(param_4 + 0x50) = in_stack_00000010;
        *(undefined8 *)(param_4 + 100) = uStack0000000000000024;
        *(ulong *)(param_4 + 0x5c) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
        if (*(long *)(param_4 + 0x20) != 0) {
          FUN_07c50578(uVar2 & 0xffffffff,uVar3,uVar4,*(long *)(param_4 + 0x20),0);
          if (*(long *)(param_4 + 0x20) != 0) {
            FUN_07c50514(uStack000000000000003c,uVar5,uVar6 & 0xffffffff,uVar7,
                         *(long *)(param_4 + 0x20),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


