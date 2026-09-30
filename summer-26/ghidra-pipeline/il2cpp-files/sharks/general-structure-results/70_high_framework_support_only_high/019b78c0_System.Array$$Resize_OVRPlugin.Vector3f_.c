/*
FUNCTION_NAME: System.Array$$Resize<OVRPlugin.Vector3f>
ENTRY_POINT: 019b78c0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Resize<OVRPlugin_Vector3f>(code *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint uVar10;
  uint unaff_w24;
  float in_s3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  
  iVar4 = (*param_1)();
  if (iVar4 < (int)unaff_w24) {
    lVar6 = *unaff_x22;
    if (lVar6 == 0) goto LAB_019b7b74;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_019b7b78;
    uVar15 = *(undefined4 *)(lVar6 + 0x20);
    uVar11 = *(undefined4 *)(lVar6 + 0x24);
    uVar13 = *(undefined4 *)(lVar6 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_037f7590 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    in_s3 = unaff_s8;
                    /* try { // try from 019b7914 to 01ab7917 has its CatchHandler @ 019b7ad0 */
    uVar5 = FUN_019cb3dc(uVar15,uVar11,uVar13,0);
    if ((uVar5 & 1) == 0) goto LAB_019b7928;
                    /* try { // try from 019b7920 to 01ab792b has its CatchHandler @ 019b7af4 */
    uVar10 = 0;
  }
  else {
LAB_019b7928:
    uVar10 = 1;
  }
                    /* try { // try from 019b792c to 01ab794b has its CatchHandler @ 019b7ae0 */
  if (*(char *)(unaff_x19 + 0x150) == '\0') {
LAB_019b7a08:
    bVar3 = false;
    uVar2 = uVar10;
  }
  else {
    lVar6 = *unaff_x22;
    if (lVar6 == 0) goto LAB_019b7b74;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w24 - 1) goto LAB_019b7b78;
                    /* try { // try from 019b7958 to 01ab796b has its CatchHandler @ 019b7adc */
    lVar8 = lVar6 + (long)(int)(unaff_w24 - 1) * 0xc;
    fVar12 = *(float *)(lVar8 + 0x20);
    fVar14 = *(float *)(lVar8 + 0x24);
    fVar16 = *(float *)(lVar8 + 0x28);
    if (*(int *)(unaff_x21 + 0x20) == 2) {
      if ((int)unaff_w24 < 3) {
        if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        FUN_033bd548(*(undefined8 *)PTR_DAT_037f8110,0);
      }
      else {
        if (*(uint *)(lVar6 + 0x18) <= (uint)((long)(int)unaff_w24 + -3)) goto LAB_019b7b78;
        lVar6 = lVar6 + ((long)(int)unaff_w24 + -3) * 0xc;
        fVar12 = *(float *)(lVar6 + 0x20);
        fVar14 = *(float *)(lVar6 + 0x24);
        fVar16 = *(float *)(lVar6 + 0x28);
      }
    }
                    /* try { // try from 019b79d4 to 01ab79e7 has its CatchHandler @ 019b7ab8 */
    in_s3 = DAT_009a6238;
    if ((fVar16 - unaff_s10) * (fVar16 - unaff_s10) +
        (fVar12 - unaff_s8) * (fVar12 - unaff_s8) + (fVar14 - unaff_s9) * (fVar14 - unaff_s9) <
        DAT_009a6238) goto LAB_019b7a08;
    bVar3 = true;
    uVar2 = uVar10 + 1;
  }
  lVar6 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5108,uVar2 + unaff_w24);
  if (uVar10 != 0) {
    if (lVar6 == 0) goto LAB_019b7b74;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_019b7b78;
    *(float *)(lVar6 + 0x20) = unaff_s8;
    *(float *)(lVar6 + 0x24) = unaff_s9;
    *(float *)(lVar6 + 0x28) = unaff_s10;
  }
  if (0 < (int)unaff_w24) {
    uVar5 = 0;
    lVar8 = 0x20;
    do {
      lVar9 = *unaff_x22;
      if (lVar9 == 0) goto LAB_019b7b74;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_019b7b78;
      if (lVar6 == 0) goto LAB_019b7b74;
      if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar10 + uVar5) goto LAB_019b7b78;
      puVar7 = (undefined8 *)(lVar9 + lVar8);
      uVar11 = *(undefined4 *)(puVar7 + 1);
      uVar5 = uVar5 + 1;
      puVar1 = (undefined8 *)(lVar6 + (ulong)uVar10 * 0xc + lVar8);
      lVar8 = lVar8 + 0xc;
      *puVar1 = *puVar7;
      *(undefined4 *)(puVar1 + 1) = uVar11;
    } while (unaff_w24 != uVar5);
  }
  if (bVar3) {
    if (lVar6 == 0) goto LAB_019b7b74;
    iVar4 = (int)*(undefined8 *)(lVar6 + 0x18);
    if (iVar4 == 0) {
LAB_019b7b78:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar11 = *(undefined4 *)(lVar6 + 0x28);
    puVar7 = (undefined8 *)(lVar6 + 0x20 + (long)(iVar4 + -1) * 0xc);
    *puVar7 = *(undefined8 *)(lVar6 + 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar11;
  }
  *(long *)(unaff_x21 + 0x18) = lVar6;
  thunk_FUN_0188fd20();
  *(char *)(unaff_x21 + 0x54) = (char)uVar10;
  *(bool *)(unaff_x21 + 0x55) = bVar3;
  FUN_019b7ba0();
  if (unaff_x20 != 0) {
    uVar11 = FUN_033f174c();
    *(undefined4 *)(unaff_x19 + 0x194) = uVar11;
    *(float *)(unaff_x19 + 0x198) = unaff_s9;
    *(float *)(unaff_x19 + 0x19c) = unaff_s10;
    *(float *)(unaff_x19 + 0x1a0) = in_s3;
    FUN_033f2fc0();
    *(float *)(unaff_x19 + 0x1a4) = unaff_s10;
    *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0x130);
    thunk_FUN_0188fd20(unaff_x19 + 0x138);
    return;
  }
LAB_019b7b74:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


