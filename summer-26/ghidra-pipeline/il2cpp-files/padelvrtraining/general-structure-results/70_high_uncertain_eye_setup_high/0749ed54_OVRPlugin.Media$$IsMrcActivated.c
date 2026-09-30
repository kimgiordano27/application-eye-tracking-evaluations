/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcActivated
ENTRY_POINT: 0749ed54
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__IsMrcActivated(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar12;
  long lVar13;
  long *unaff_x24;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  
  while( true ) {
    uVar4 = uStack000000000000002c;
    uStack0000000000000040 = in_stack_00000020;
    uStack0000000000000048 = uStack0000000000000028;
    lVar7 = *(long *)(unaff_x21 + 0xa0);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto LAB_0749f010;
                    /* try { // try from 0749ed78 to 0759ed7b has its CatchHandler @ 0749ed80 */
                    /* try { // try from 0749ed7c to 0759ed9f has its CatchHandler @ 0749eb70 */
    plVar12 = *(long **)(lVar7 + (long)(int)unaff_w22 * 8 + 0x20);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0749ed78 with catch @ 0749ed80
                        */
    if (plVar12 == (long *)0x0) break;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0749ed30 with catch @ 0749ed84
                        */
    lVar7 = *plVar12;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0749ed1c with catch @ 0749ed88
                        */
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
                    /* try { // try from 0749eda0 to 0759eda3 has its CatchHandler @ 0749edcc */
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 0749eda4 to 0759eddb has its CatchHandler @ 0749eb70 */
        if (*(long *)(piVar11 + -2) == *unaff_x24) {
                    /* catch() { ... } // from try @ 0749eda0 with catch @ 0749edcc */
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0749eddc;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x24,2);
LAB_0749eddc:
                    /* try { // try from 0749eddc to 0759ede3 has its CatchHandler @ 0749edf8 */
                    /* try { // try from 0749ede4 to 0759edef has its CatchHandler @ 0749eb70 */
                    /* try { // try from 0749edf0 to 0759edf7 has its CatchHandler @ 0749edf8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0749eddc with catch @ 0749edf8
                       catch(type#2 @ 00000000) { ... } // from try @ 0749edf0 with catch @ 0749edf8
                        */
    (*(code *)*puVar5)(uVar4,plVar12,puVar5[1]);
    in_stack_00000020 = uStack0000000000000040;
    uStack0000000000000028 = uStack0000000000000048;
    if (*(long *)(unaff_x21 + 0xa8) == 0) break;
    FUN_07499284(*(long *)(unaff_x21 + 0xa8),unaff_w22);
    lVar7 = *(long *)(unaff_x21 + 0xa8);
    unaff_w22 = unaff_w22 + 1;
    if (lVar7 == 0) break;
    if (unaff_w22 == 0x1a) {
      FUN_07499428(lVar7,1);
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar7 + 0x18);
      thunk_FUN_03d1023c();
      puVar3 = PTR_DAT_0921fad0;
      puVar2 = PTR_DAT_091a0f90;
      lVar13 = 0;
      lVar7 = 0;
      uVar9 = 0;
      goto LAB_0749ee8c;
    }
    FUN_07499244(&stack0x00000020,lVar7,unaff_w22);
  }
LAB_0749ee44:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_0749ee8c:
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar6 = *(long *)puVar3;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) goto LAB_0749ee44;
  if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0749f010;
  uVar1 = *(uint *)(lVar6 + lVar7 + 0x20);
  lVar6 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 0) {
    if (DAT_098362c8 == '\0') {
      FUN_03d2d2b0(puVar2);
      DAT_098362c8 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar15 = *pfVar8;
    fVar17 = pfVar8[1];
    fVar19 = pfVar8[2];
    fVar14 = pfVar8[3];
  }
  else {
    lVar10 = *unaff_x20;
    if (lVar10 == 0) goto LAB_0749ee44;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_0749f010:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar10 = lVar10 + (ulong)uVar1 * 0x1c;
    fVar16 = *(float *)(lVar10 + 0x30);
    fVar18 = *(float *)(lVar10 + 0x34);
    fVar20 = *(float *)(lVar10 + 0x38);
    fVar14 = (float)UnityEngine_UIElements_DoubleField_DoubleInput__StringToValue
                              (*(undefined4 *)(lVar10 + 0x2c),0);
    lVar10 = *unaff_x20;
    if (lVar10 == 0) goto LAB_0749ee44;
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0749f010;
    lVar10 = lVar10 + lVar13;
    fVar21 = *(float *)(lVar10 + 0x2c);
    fVar24 = *(float *)(lVar10 + 0x30);
    fVar23 = *(float *)(lVar10 + 0x34);
    fVar22 = *(float *)(lVar10 + 0x38);
    fVar15 = (fVar16 * fVar23 + fVar20 * fVar21 + fVar14 * fVar22) - fVar18 * fVar24;
    fVar17 = (fVar18 * fVar21 + fVar20 * fVar24 + fVar16 * fVar22) - fVar14 * fVar23;
    fVar19 = (fVar14 * fVar24 + fVar20 * fVar23 + fVar18 * fVar22) - fVar16 * fVar21;
    fVar14 = ((fVar20 * fVar22 - fVar14 * fVar21) - fVar16 * fVar24) - fVar18 * fVar23;
  }
  if (lVar6 == 0) goto LAB_0749ee44;
  if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0749f010;
  lVar6 = lVar6 + lVar7 * 4;
  lVar7 = lVar7 + 4;
  uVar9 = uVar9 + 1;
  lVar13 = lVar13 + 0x1c;
  *(float *)(lVar6 + 0x20) = fVar15;
  *(float *)(lVar6 + 0x24) = fVar17;
  *(float *)(lVar6 + 0x28) = fVar19;
  *(float *)(lVar6 + 0x2c) = fVar14;
  if (lVar7 == 0x68) {
    return 1;
  }
  goto LAB_0749ee8c;
}


