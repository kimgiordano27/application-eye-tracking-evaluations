/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcAudioSampleRate
ENTRY_POINT: 01a40544
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__GetMrcAudioSampleRate(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x24;
  long lVar12;
  long lVar13;
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
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  (*param_1)();
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  FUN_02666aac(&stack0x00000020,0);
  *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
  *(ulong *)(unaff_x19 + 0x20) = CONCAT44(in_stack_00000030,uStack000000000000002c);
  *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,in_stack_00000028);
  *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
  lVar10 = *(long *)(unaff_x20 + 0xa0);
  if (lVar10 != 0) {
    uVar9 = 0;
    do {
      if (uVar9 == 0x1a) {
        FUN_01a3b388(lVar10,1);
        puVar1 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
        lVar12 = 0;
        lVar13 = 0;
        uVar6 = 0;
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar10 + 0x18);
        goto LAB_01a406f4;
      }
      FUN_01a3b1a4(&stack0x00000020,lVar10,uVar9);
      uVar3 = uStack000000000000002c;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = in_stack_00000028;
      lVar10 = *(long *)(unaff_x20 + 0x98);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_01a4087c;
      plVar11 = *(long **)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
      if (plVar11 == (long *)0x0) break;
      lVar10 = *plVar11;
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
      puVar4 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x24,2);
LAB_01a40654:
      (*(code *)*puVar4)(uVar3,plVar11,puVar4[1]);
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000028 = in_stack_00000048;
      if (*(long *)(unaff_x20 + 0xa0) == 0) break;
      FUN_01a3b1e4(*(long *)(unaff_x20 + 0xa0),uVar9);
      lVar10 = *(long *)(unaff_x20 + 0xa0);
      uVar9 = uVar9 + 1;
    } while (lVar10 != 0);
  }
LAB_01a40878:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_01a406f4:
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar2;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_01a4087c;
  uVar9 = *(uint *)(lVar10 + lVar13 + 0x20);
  lVar10 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar9 < 0) {
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(puVar1);
      DAT_03774f00 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar5;
    fVar17 = pfVar5[1];
    fVar19 = pfVar5[2];
    fVar14 = pfVar5[3];
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x38);
    if (lVar7 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar7 + 0x18) <= uVar9) {
LAB_01a4087c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar7 = lVar7 + (long)(int)uVar9 * 0x1c;
    fVar16 = *(float *)(lVar7 + 0x30);
    fVar18 = *(float *)(lVar7 + 0x34);
    fVar20 = *(float *)(lVar7 + 0x38);
    fVar14 = (float)FUN_02698858(*(undefined4 *)(lVar7 + 0x2c),0);
    lVar7 = *(long *)(unaff_x19 + 0x38);
    if (lVar7 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_01a4087c;
    lVar7 = lVar7 + lVar12;
    fVar21 = *(float *)(lVar7 + 0x2c);
    fVar24 = *(float *)(lVar7 + 0x30);
    fVar23 = *(float *)(lVar7 + 0x34);
    fVar22 = *(float *)(lVar7 + 0x38);
    fVar15 = (fVar16 * fVar23 + fVar20 * fVar21 + fVar14 * fVar22) - fVar18 * fVar24;
    fVar17 = (fVar18 * fVar21 + fVar20 * fVar24 + fVar16 * fVar22) - fVar14 * fVar23;
    fVar19 = (fVar14 * fVar24 + fVar20 * fVar23 + fVar18 * fVar22) - fVar16 * fVar21;
    fVar14 = ((fVar20 * fVar22 - fVar14 * fVar21) - fVar16 * fVar24) - fVar18 * fVar23;
  }
  if (lVar10 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_01a4087c;
  lVar10 = lVar10 + lVar13 * 4;
  lVar13 = lVar13 + 4;
  uVar6 = uVar6 + 1;
  lVar12 = lVar12 + 0x1c;
  *(float *)(lVar10 + 0x20) = fVar15;
  *(float *)(lVar10 + 0x24) = fVar17;
  *(float *)(lVar10 + 0x28) = fVar19;
  *(float *)(lVar10 + 0x2c) = fVar14;
  if (lVar13 == 0x68) {
    return 1;
  }
  goto LAB_01a406f4;
}


