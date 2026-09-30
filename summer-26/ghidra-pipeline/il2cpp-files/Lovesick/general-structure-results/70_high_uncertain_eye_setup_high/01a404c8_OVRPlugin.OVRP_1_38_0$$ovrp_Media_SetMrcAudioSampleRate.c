/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcAudioSampleRate
ENTRY_POINT: 01a404c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcAudioSampleRate
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  uint uVar10;
  long *unaff_x21;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  puVar1 = System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo;
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_01a4052c;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_01a4052c:
  uVar16 = (*(code *)*puVar4)();
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  FUN_02666aac(param_1,param_2,param_3,uVar16,unaff_d10,unaff_d11,unaff_d12,&stack0x00000020,0);
  *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
  *(ulong *)(unaff_x19 + 0x20) = CONCAT44(in_stack_00000030,uStack000000000000002c);
  *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,in_stack_00000028);
  *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
  lVar5 = *(long *)(unaff_x20 + 0xa0);
  if (lVar5 != 0) {
    uVar10 = 0;
    do {
      if (uVar10 == 0x1a) {
        FUN_01a3b388(lVar5,1);
        puVar1 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
        lVar12 = 0;
        lVar13 = 0;
        uVar7 = 0;
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar5 + 0x18);
        goto LAB_01a406f4;
      }
      FUN_01a3b1a4(&stack0x00000020,lVar5,uVar10);
      uVar3 = uStack000000000000002c;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = in_stack_00000028;
      lVar5 = *(long *)(unaff_x20 + 0x98);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_01a4087c;
      plVar11 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
      if (plVar11 == (long *)0x0) break;
      lVar5 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_01a40654;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,2);
LAB_01a40654:
      (*(code *)*puVar4)(uVar3,plVar11,puVar4[1]);
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000028 = in_stack_00000048;
      if (*(long *)(unaff_x20 + 0xa0) == 0) break;
      FUN_01a3b1e4(*(long *)(unaff_x20 + 0xa0),uVar10);
      lVar5 = *(long *)(unaff_x20 + 0xa0);
      uVar10 = uVar10 + 1;
    } while (lVar5 != 0);
  }
LAB_01a40878:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_01a406f4:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_01a4087c;
  uVar10 = *(uint *)(lVar5 + lVar13 + 0x20);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar10 < 0) {
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(puVar1);
      DAT_03774f00 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar6;
    fVar18 = pfVar6[1];
    fVar20 = pfVar6[2];
    fVar14 = pfVar6[3];
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x38);
    if (lVar8 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar8 + 0x18) <= uVar10) {
LAB_01a4087c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar8 = lVar8 + (long)(int)uVar10 * 0x1c;
    fVar17 = *(float *)(lVar8 + 0x30);
    fVar19 = *(float *)(lVar8 + 0x34);
    fVar21 = *(float *)(lVar8 + 0x38);
    fVar14 = (float)FUN_02698858(*(undefined4 *)(lVar8 + 0x2c),0);
    lVar8 = *(long *)(unaff_x19 + 0x38);
    if (lVar8 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01a4087c;
    lVar8 = lVar8 + lVar12;
    fVar22 = *(float *)(lVar8 + 0x2c);
    fVar25 = *(float *)(lVar8 + 0x30);
    fVar24 = *(float *)(lVar8 + 0x34);
    fVar23 = *(float *)(lVar8 + 0x38);
    fVar15 = (fVar17 * fVar24 + fVar21 * fVar22 + fVar14 * fVar23) - fVar19 * fVar25;
    fVar18 = (fVar19 * fVar22 + fVar21 * fVar25 + fVar17 * fVar23) - fVar14 * fVar24;
    fVar20 = (fVar14 * fVar25 + fVar21 * fVar24 + fVar19 * fVar23) - fVar17 * fVar22;
    fVar14 = ((fVar21 * fVar23 - fVar14 * fVar22) - fVar17 * fVar25) - fVar19 * fVar24;
  }
  if (lVar5 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_01a4087c;
  lVar5 = lVar5 + lVar13 * 4;
  lVar13 = lVar13 + 4;
  uVar7 = uVar7 + 1;
  lVar12 = lVar12 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar15;
  *(float *)(lVar5 + 0x24) = fVar18;
  *(float *)(lVar5 + 0x28) = fVar20;
  *(float *)(lVar5 + 0x2c) = fVar14;
  if (lVar13 == 0x68) {
    return 1;
  }
  goto LAB_01a406f4;
}


