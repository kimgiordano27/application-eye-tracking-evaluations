/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcAudioSampleRate
ENTRY_POINT: 01a40608
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


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcAudioSampleRate(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long lVar8;
  long *unaff_x23;
  long *unaff_x24;
  long lVar9;
  long lVar10;
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
  ulong unaff_d12;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  uint uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(param_1 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_01a40654;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(unaff_x22,*unaff_x24,2);
LAB_01a40654:
    (*(code *)*puVar3)(unaff_d12,unaff_x22,puVar3[1]);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000028 = in_stack_00000048;
    if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_01a40878;
    FUN_01a3b1e4(*(long *)(unaff_x20 + 0xa0),unaff_w21);
    lVar8 = *(long *)(unaff_x20 + 0xa0);
    unaff_w21 = unaff_w21 + 1;
    if (lVar8 == 0) goto LAB_01a40878;
    if (unaff_w21 == 0x1a) {
      FUN_01a3b388(lVar8,1);
      puVar2 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
      lVar9 = 0;
      lVar10 = 0;
      uVar5 = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar8 + 0x18);
      break;
    }
    FUN_01a3b1a4(&stack0x00000020,lVar8,unaff_w21);
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = uStack0000000000000028;
    lVar8 = *(long *)(unaff_x20 + 0x98);
    if (lVar8 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_01a4087c;
    unaff_x22 = *(long **)(lVar8 + (long)(int)unaff_w21 * 8 + 0x20);
    if (unaff_x22 == (long *)0x0) goto LAB_01a40878;
    param_1 = *unaff_x22;
    unaff_d12 = (ulong)uStack000000000000002c;
  } while( true );
LAB_01a406f4:
  lVar8 = *unaff_x23;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *unaff_x23;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar8 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_01a4087c;
  uVar1 = *(uint *)(lVar8 + lVar10 + 0x20);
  lVar8 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 0) {
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(puVar2);
      DAT_03774f00 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar16 = pfVar4[2];
    fVar11 = pfVar4[3];
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0x38);
    if (lVar6 == 0) {
LAB_01a40878:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_01a4087c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar6 = lVar6 + (long)(int)uVar1 * 0x1c;
    fVar13 = *(float *)(lVar6 + 0x30);
    fVar15 = *(float *)(lVar6 + 0x34);
    fVar17 = *(float *)(lVar6 + 0x38);
    fVar11 = (float)FUN_02698858(*(undefined4 *)(lVar6 + 0x2c),0);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    if (lVar6 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01a4087c;
    lVar6 = lVar6 + lVar9;
    fVar18 = *(float *)(lVar6 + 0x2c);
    fVar21 = *(float *)(lVar6 + 0x30);
    fVar20 = *(float *)(lVar6 + 0x34);
    fVar19 = *(float *)(lVar6 + 0x38);
    fVar12 = (fVar13 * fVar20 + fVar17 * fVar18 + fVar11 * fVar19) - fVar15 * fVar21;
    fVar14 = (fVar15 * fVar18 + fVar17 * fVar21 + fVar13 * fVar19) - fVar11 * fVar20;
    fVar16 = (fVar11 * fVar21 + fVar17 * fVar20 + fVar15 * fVar19) - fVar13 * fVar18;
    fVar11 = ((fVar17 * fVar19 - fVar11 * fVar18) - fVar13 * fVar21) - fVar15 * fVar20;
  }
  if (lVar8 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_01a4087c;
  lVar8 = lVar8 + lVar10 * 4;
  lVar10 = lVar10 + 4;
  uVar5 = uVar5 + 1;
  lVar9 = lVar9 + 0x1c;
  *(float *)(lVar8 + 0x20) = fVar12;
  *(float *)(lVar8 + 0x24) = fVar14;
  *(float *)(lVar8 + 0x28) = fVar16;
  *(float *)(lVar8 + 0x2c) = fVar11;
  if (lVar10 == 0x68) {
    return 1;
  }
  goto LAB_01a406f4;
}


