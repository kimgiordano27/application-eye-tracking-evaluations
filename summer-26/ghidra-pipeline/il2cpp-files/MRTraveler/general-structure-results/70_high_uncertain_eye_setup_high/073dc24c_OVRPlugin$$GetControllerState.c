/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 073dc24c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetControllerState
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  ulong *unaff_x19;
  float *unaff_x22;
  long unaff_x23;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  if (*(char *)(unaff_x23 + 0xefb) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x23 + 0xefb) = 1;
  }
  puVar1 = PTR_DAT_08e68e18;
                    /* try { // try from 073dc280 to 074dc283 has its CatchHandler @ 073dc438 */
  lVar2 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
                    /* try { // try from 073dc2a0 to 074dc2b7 has its CatchHandler @ 073dc42c */
  fVar4 = (float)FUN_085d2bd4(param_1,param_2,param_3,param_4,*(undefined4 *)(lVar2 + 0x18),
                              *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  fVar21 = (float)param_3;
  fVar16 = (float)param_2;
  fVar7 = fVar16;
  fVar9 = fVar21;
  lVar2 = FUN_085dbb5c();
  if (lVar2 != 0) {
    fVar5 = (float)FUN_085eb198(lVar2,0);
    if (DAT_094100b4 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b4 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar6 = SQRT(fVar21 * fVar21 + fVar4 * fVar4 + fVar16 * fVar16);
    if (fVar6 <= DAT_018b0528) {
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar4 = *pfVar3;
      fVar16 = pfVar3[1];
      fVar21 = pfVar3[2];
    }
    else {
      fVar4 = fVar4 / fVar6;
      fVar16 = fVar16 / fVar6;
      fVar21 = fVar21 / fVar6;
    }
    puVar1 = PTR_DAT_08e78410;
    fVar6 = *unaff_x22;
    fVar8 = unaff_x22[1];
    fVar10 = unaff_x22[2];
    fVar11 = unaff_x22[3];
    fVar12 = unaff_x22[4];
    fVar13 = unaff_x22[5];
    fVar14 = fVar4 * fVar6;
    fVar17 = fVar16 * fVar8;
    fVar22 = fVar21 * fVar10;
    fVar20 = fVar21 * fVar13 + fVar4 * fVar11 + fVar16 * fVar12;
    if (DAT_094108d2 == '\0') {
      FUN_03c8f898(PTR_DAT_08e722b0);
      DAT_094108d2 = '\x01';
      fVar6 = *unaff_x22;
      fVar8 = unaff_x22[1];
      fVar10 = unaff_x22[2];
      fVar11 = unaff_x22[3];
      fVar12 = unaff_x22[4];
      fVar13 = unaff_x22[5];
    }
    fVar18 = ABS(fVar20);
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    fVar19 = **(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) * 8.0;
    fVar15 = fVar18 * DAT_018b0840;
    if (fVar18 * DAT_018b0840 <= fVar19) {
      fVar15 = fVar19;
    }
    fVar18 = 0.0;
    if (fVar15 <= ABS(0.0 - fVar20)) {
      fVar18 = ((fVar9 * fVar21 + fVar5 * fVar4 + fVar7 * fVar16) - (fVar22 + fVar14 + fVar17)) /
               fVar20;
    }
    FUN_073dc704(fVar6 + fVar11 * fVar18,fVar8 + fVar12 * fVar18,fVar10 + fVar18 * fVar13);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_085e9668(0,0,0,&stack0x00000040,0);
    FUN_073dc554();
    unaff_x19[1] = in_stack_00000008;
    *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


