/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 07c63bd0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticUpdateMixedRealityCapture
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  float *unaff_x20;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined8 in_stack_000000c8;
  
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar13 = unaff_x20[1];
    in_stack_000000c8._4_4_ = unaff_x20[2];
    fVar15 = *unaff_x20;
                    /* try { // try from 07c63bec to 07d63c13 has its CatchHandler @ 07c63ccc */
    fVar8 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x128),0);
    if (DAT_0a51bf40 == '\0') {
                    /* try { // try from 07c63c18 to 07d63c2b has its CatchHandler @ 07c63cc8 */
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf40 = '\x01';
    }
    puVar1 = PTR_DAT_09f1e740;
                    /* try { // try from 07c63c2c to 07d63cb7 has its CatchHandler @ 07c63a0c */
    lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar14 = *(float *)(lVar3 + 0x18);
    fVar17 = *(float *)(lVar3 + 0x1c);
    fVar16 = *(float *)(lVar3 + 0x20);
    if (DAT_0a5233ad == '\0') {
      FUN_04447ba8(PTR_DAT_09f1f580);
      DAT_0a5233ad = '\x01';
    }
    fVar9 = fVar16 * fVar16 + fVar14 * fVar14 + fVar17 * fVar17;
    fVar15 = fVar15 - fVar8;
    fVar13 = fVar13 - param_2;
    param_3 = in_stack_000000c8._4_4_ - param_3;
    if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar9) {
      fVar8 = param_3 * fVar16 + fVar15 * fVar14 + fVar13 * fVar17;
                    /* try { // try from 07c63cb8 to 07d63cbb has its CatchHandler @ 07c63cc4 */
                    /* try { // try from 07c63cbc to 07d63ce7 has its CatchHandler @ 07c63a0c */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c63cb8 with catch @ 07c63cc4
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c63c18 with catch @ 07c63cc8
                        */
      fVar15 = fVar15 - (fVar14 * fVar8) / fVar9;
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c63bec with catch @ 07c63ccc
                        */
      fVar13 = fVar13 - (fVar17 * fVar8) / fVar9;
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c63b90 with catch @ 07c63cd0
                        */
      param_3 = param_3 - (fVar16 * fVar8) / fVar9;
    }
    if (DAT_0a51bf42 == '\0') {
                    /* try { // try from 07c63ce8 to 07d63ceb has its CatchHandler @ 07c63cf8 */
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
                    /* catch() { ... } // from try @ 07c63ce8 with catch @ 07c63cf8 */
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar8 = SQRT(param_3 * param_3 + fVar15 * fVar15 + fVar13 * fVar13);
                    /* try { // try from 07c63d30 to 07d63d57 has its CatchHandler @ 07c63d6c */
    if (fVar8 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
                    /* try { // try from 07c63d58 to 07d63d63 has its CatchHandler @ 07c63a0c */
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
                    /* try { // try from 07c63d64 to 07d63d6b has its CatchHandler @ 07c63d6c */
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07c63d30 with catch @ 07c63d6c
                       catch(type#2 @ 00000000) { ... } // from try @ 07c63d64 with catch @ 07c63d6c
                        */
      fVar15 = *pfVar4;
      fVar13 = pfVar4[1];
      param_3 = pfVar4[2];
    }
    else {
      fVar15 = fVar15 / fVar8;
      fVar13 = fVar13 / fVar8;
      param_3 = param_3 / fVar8;
    }
    uVar11 = (ulong)(uint)param_3;
    uVar5 = (ulong)(uint)fVar13;
    if (DAT_0a51bf40 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf40 = '\x01';
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar12 = (ulong)*(uint *)(lVar3 + 0x18);
    uVar10 = FUN_09516bac(fVar15,uVar5,uVar11,uVar12,*(undefined4 *)(lVar3 + 0x1c),
                          *(undefined4 *)(lVar3 + 0x20),0);
    plVar7 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_09537b20(*unaff_x20,unaff_x20[1],unaff_x20[2],uVar10,uVar5,uVar11,uVar12,&stack0x00000040,0)
    ;
    uStack0000000000000068 = uStack0000000000000048;
    uStack0000000000000060 = in_stack_00000040;
    uStack0000000000000074 = uStack0000000000000054;
    uStack0000000000000078 = in_stack_00000058;
    uStack000000000000006c = uStack000000000000004c;
    uStack0000000000000070 = uStack0000000000000050;
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f4d938) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_07c63e64;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f4d938,2);
LAB_07c63e64:
      (*(code *)*puVar2)(plVar7,&stack0x00000060,puVar2[1]);
      *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
      *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


