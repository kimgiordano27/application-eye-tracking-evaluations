/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameImageFlipped
ENTRY_POINT: 01a40684
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__SetMrcFrameImageFlipped(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined4 in_w9;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar9;
  long lVar10;
  long *unaff_x23;
  long *unaff_x24;
  long lVar11;
  long lVar12;
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
  float fVar23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  uStack0000000000000028 = in_w9;
  while (param_1 != 0) {
    FUN_01a3b1e4(param_1,unaff_w21);
    lVar10 = *(long *)(unaff_x20 + 0xa0);
    unaff_w21 = unaff_w21 + 1;
    if (lVar10 == 0) break;
    if (unaff_w21 == 0x1a) {
      FUN_01a3b388(lVar10,1);
      puVar2 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
      lVar11 = 0;
      lVar12 = 0;
      uVar6 = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar10 + 0x18);
      goto LAB_01a406f4;
    }
    FUN_01a3b1a4(&stack0x00000020,lVar10,unaff_w21);
    uVar3 = uStack000000000000002c;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = uStack0000000000000028;
    lVar10 = *(long *)(unaff_x20 + 0x98);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_w21) goto LAB_01a4087c;
    plVar9 = *(long **)(lVar10 + (long)(int)unaff_w21 * 8 + 0x20);
    if (plVar9 == (long *)0x0) break;
    lVar10 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_01a40654;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x24,2);
LAB_01a40654:
    (*(code *)*puVar4)(uVar3,plVar9,puVar4[1]);
    param_1 = *(long *)(unaff_x20 + 0xa0);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000028 = in_stack_00000048;
  }
LAB_01a40878:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_01a406f4:
  lVar10 = *unaff_x23;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *unaff_x23;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_01a4087c;
  uVar1 = *(uint *)(lVar10 + lVar12 + 0x20);
  lVar10 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 0) {
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(puVar2);
      DAT_03774f00 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar14 = *pfVar5;
    fVar16 = pfVar5[1];
    fVar18 = pfVar5[2];
    fVar13 = pfVar5[3];
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x38);
    if (lVar7 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) {
LAB_01a4087c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar7 = lVar7 + (long)(int)uVar1 * 0x1c;
    fVar15 = *(float *)(lVar7 + 0x30);
    fVar17 = *(float *)(lVar7 + 0x34);
    fVar19 = *(float *)(lVar7 + 0x38);
    fVar13 = (float)FUN_02698858(*(undefined4 *)(lVar7 + 0x2c),0);
    lVar7 = *(long *)(unaff_x19 + 0x38);
    if (lVar7 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_01a4087c;
    lVar7 = lVar7 + lVar11;
    fVar20 = *(float *)(lVar7 + 0x2c);
    fVar23 = *(float *)(lVar7 + 0x30);
    fVar22 = *(float *)(lVar7 + 0x34);
    fVar21 = *(float *)(lVar7 + 0x38);
    fVar14 = (fVar15 * fVar22 + fVar19 * fVar20 + fVar13 * fVar21) - fVar17 * fVar23;
    fVar16 = (fVar17 * fVar20 + fVar19 * fVar23 + fVar15 * fVar21) - fVar13 * fVar22;
    fVar18 = (fVar13 * fVar23 + fVar19 * fVar22 + fVar17 * fVar21) - fVar15 * fVar20;
    fVar13 = ((fVar19 * fVar21 - fVar13 * fVar20) - fVar15 * fVar23) - fVar17 * fVar22;
  }
  if (lVar10 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_01a4087c;
  lVar10 = lVar10 + lVar12 * 4;
  lVar12 = lVar12 + 4;
  uVar6 = uVar6 + 1;
  lVar11 = lVar11 + 0x1c;
  *(float *)(lVar10 + 0x20) = fVar14;
  *(float *)(lVar10 + 0x24) = fVar16;
  *(float *)(lVar10 + 0x28) = fVar18;
  *(float *)(lVar10 + 0x2c) = fVar13;
  if (lVar12 == 0x68) {
    return 1;
  }
  goto LAB_01a406f4;
}


