/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem$$TryRequestSceneCapture
ENTRY_POINT: 085c9d9c
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem__TryRequestSceneCapture(void)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 in_w8;
  undefined8 *puVar8;
  undefined8 *unaff_x19;
  long unaff_x23;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  ulong uVar18;
  ulong uVar20;
  float unaff_s8;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined8 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined1 *in_stack_00000040;
  long in_stack_00000058;
  
                    /* try { // try from 085c9d9c to 086c9da3 has its CatchHandler @ 085cba44 */
  *(undefined1 *)(unaff_x23 + 0x7b5) = in_w8;
  puVar4 = PTR_DAT_09198a60;
  puVar3 = PTR_DAT_09198a58;
  puVar2 = PTR_DAT_0910c4c8;
                    /* try { // try from 085c9db0 to 086c9def has its CatchHandler @ 085cbb14 */
  uVar10 = **(undefined8 **)(*(long *)PTR_DAT_0910c4c8 + 0xb8);
  uVar10 = CONCAT44((float)((ulong)uVar10 >> 0x20) * 0.5,(float)uVar10 * 0.5);
  fVar21 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_0910c4c8 + 0xb8) + 1) * 0.5;
  FUN_056b1374(&stack0x00000048);
  fVar1 = DAT_01928a50;
  in_stack_00000038 = 0;
                    /* try { // try from 085c9dfc to 086c9e3b has its CatchHandler @ 085cbb10 */
  _in_stack_00000010 = CONCAT44(in_stack_00000000,in_stack_00000010);
  in_stack_00000040 = &stack0x00000048;
  while( true ) {
    uVar7 = FUN_072070ec(&stack0x00000048,*(undefined8 *)puVar4);
    lVar6 = in_stack_00000058;
    if ((uVar7 & 1) == 0) {
      FUN_072070e8(&stack0x00000048,*(undefined8 *)puVar3);
      *(float *)(unaff_x19 + 1) = unaff_s8;
      *(undefined8 *)((long)unaff_x19 + 0xc) = uVar10;
      *unaff_x19 = _in_stack_00000010;
      *(float *)((long)unaff_x19 + 0x14) = fVar21;
      return;
    }
    if (in_stack_00000058 == 0) break;
    FUN_087a31a8(&stack0x00000020,in_stack_00000058,0);
    uVar5 = uStack0000000000000034;
    uVar13 = uStack000000000000002c;
    if (*(char *)(unaff_x23 + 0x7b5) == '\0') {
      FUN_03f13384(puVar2);
      *(undefined1 *)(unaff_x23 + 0x7b5) = 1;
    }
    fVar9 = (float)uVar13;
    fVar11 = SUB84(uVar13,4);
    puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    uVar13 = *puVar8;
    fVar9 = (fVar9 + fVar9) - (float)uVar13;
    fVar11 = (fVar11 + fVar11) - (float)((ulong)uVar13 >> 0x20);
    fVar12 = ((float)uVar5 + (float)uVar5) - *(float *)(puVar8 + 1);
    if (fVar1 <= fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11) {
      FUN_087a31a8(&stack0x00000020,lVar6,0);
      fVar12 = (float)uStack0000000000000028 - (float)uStack0000000000000034;
      fVar11 = (float)uStack0000000000000028 + (float)uStack0000000000000034;
      fVar24 = (float)in_stack_00000020 - (float)uStack000000000000002c;
      fVar16 = (float)((ulong)in_stack_00000020 >> 0x20);
      fVar25 = fVar16 - SUB84(uStack000000000000002c,4);
      fVar15 = (float)in_stack_00000020 + (float)uStack000000000000002c;
      fVar16 = fVar16 + SUB84(uStack000000000000002c,4);
      uVar7 = CONCAT44(fVar16,fVar15);
      fVar17 = (float)_in_stack_00000010 - (float)uVar10;
      fVar23 = (float)((ulong)uVar10 >> 0x20);
      fVar9 = (float)((ulong)_in_stack_00000010 >> 0x20);
      fVar19 = fVar9 - fVar23;
      uVar18 = CONCAT44(fVar19,fVar17);
      fVar22 = (float)uVar10 + (float)_in_stack_00000010;
      fVar23 = fVar23 + fVar9;
      fVar9 = unaff_s8 - fVar21;
      if (fVar12 <= unaff_s8 - fVar21) {
        fVar9 = fVar12;
      }
      fVar14 = fVar21 + unaff_s8;
      if (fVar21 + unaff_s8 <= fVar12) {
        fVar14 = fVar12;
      }
      uVar18 = uVar18 ^ (uVar18 ^ CONCAT44(fVar25,fVar24)) &
                        ~CONCAT44(-(uint)(fVar19 < fVar25),-(uint)(fVar17 < fVar24));
      uVar20 = CONCAT44(fVar25,fVar24) ^
               (CONCAT44(fVar25,fVar24) ^ CONCAT44(fVar23,fVar22)) &
               CONCAT44(-(uint)(fVar25 < fVar23),-(uint)(fVar24 < fVar22));
      fVar19 = (float)uVar18;
      fVar22 = (float)(uVar18 >> 0x20);
      fVar21 = (fVar14 - fVar9) * 0.5;
      fVar23 = ((float)uVar20 - fVar19) * 0.5;
      fVar24 = ((float)(uVar20 >> 0x20) - fVar22) * 0.5;
      fVar19 = fVar19 + fVar23;
      fVar22 = fVar22 + fVar24;
      fVar12 = (fVar9 + fVar21) - fVar21;
      fVar21 = fVar21 + fVar9 + fVar21;
      fVar9 = fVar19 - fVar23;
      fVar17 = fVar22 - fVar24;
      fVar23 = fVar23 + fVar19;
      fVar24 = fVar24 + fVar22;
      if (fVar11 <= fVar12) {
        fVar12 = fVar11;
      }
      if (fVar21 <= fVar11) {
        fVar21 = fVar11;
      }
      uVar18 = uVar7 ^ (uVar7 ^ CONCAT44(fVar17,fVar9)) &
                       CONCAT44(-(uint)(fVar17 < fVar16),-(uint)(fVar9 < fVar15));
      uVar7 = uVar7 ^ (uVar7 ^ CONCAT44(fVar24,fVar23)) &
                      CONCAT44(-(uint)(fVar16 < fVar24),-(uint)(fVar15 < fVar23));
      fVar9 = (float)uVar18;
      fVar11 = (float)(uVar18 >> 0x20);
      fVar21 = (fVar21 - fVar12) * 0.5;
      fVar15 = ((float)uVar7 - fVar9) * 0.5;
      fVar16 = ((float)(uVar7 >> 0x20) - fVar11) * 0.5;
      uVar10 = CONCAT44(fVar16,fVar15);
      unaff_s8 = fVar12 + fVar21;
      _in_stack_00000010 = CONCAT44(fVar11 + fVar16,fVar9 + fVar15);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


