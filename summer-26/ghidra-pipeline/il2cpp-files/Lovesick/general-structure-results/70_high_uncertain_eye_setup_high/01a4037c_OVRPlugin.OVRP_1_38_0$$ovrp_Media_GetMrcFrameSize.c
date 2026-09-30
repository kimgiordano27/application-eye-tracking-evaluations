/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameSize
ENTRY_POINT: 01a4037c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
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
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Type_MakeArrayType__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    thunk_FUN_00d48444(StringLiteral_13710);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xc30) = 1;
  }
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(uVar11,0,0);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(unaff_x20 + 0x78) != 0) && (unaff_x19 != 0)) {
    fVar30 = *(float *)(*(long *)(unaff_x20 + 0x78) + 0x3c);
    uVar32 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar22 = (ulong)*(uint *)(unaff_x19 + 0x1c);
    uVar31 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar19 = (ulong)*(uint *)(unaff_x19 + 0x24);
    uVar23 = (ulong)*(uint *)(unaff_x19 + 0x28);
    uVar25 = (ulong)*(uint *)(unaff_x19 + 0x2c);
    uVar12 = *(undefined8 *)(unaff_x20 + 0xa0);
    uVar11 = FUN_010dfe04(*(undefined8 *)(unaff_x19 + 0x38),
                          *(undefined8 *)Method_System_Type_MakeArrayType__);
    FUN_01a3b898(uVar12,uVar11,0);
    plVar13 = *(long **)(unaff_x20 + 0x88);
    if (plVar13 != (long *)0x0) {
      lVar5 = *plVar13;
      fVar30 = 1.0 / fVar30;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_13710) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_01a404a4;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_13710,2);
LAB_01a404a4:
      uVar11 = (*(code *)*puVar4)(uVar32,uVar3,uVar22,fVar30,plVar13,puVar4[1]);
      puVar1 = System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo;
      plVar13 = *(long **)(unaff_x20 + 0x80);
      if (plVar13 != (long *)0x0) {
        lVar5 = *plVar13;
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
        puVar4 = (undefined8 *)
                 FUN_00d59724(plVar13,*(long *)
                                       System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo
                              ,2);
LAB_01a4052c:
        uVar12 = (*(code *)*puVar4)(uVar31,uVar19,uVar23,uVar25,fVar30,plVar13,puVar4[1]);
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        in_stack_00000020 = 0;
        in_stack_00000038 = 0;
        FUN_02666aac(uVar11,uVar3,uVar22,uVar12,uVar19,uVar23,uVar25,&stack0x00000020,0);
        *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
        puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
        lVar5 = *(long *)(unaff_x20 + 0xa0);
        if (lVar5 != 0) {
          uVar10 = 0;
          do {
            if (uVar10 == 0x1a) {
              FUN_01a3b388(lVar5,1);
              puVar1 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
              lVar14 = 0;
              lVar15 = 0;
              uVar3 = 0;
              *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar5 + 0x18);
              goto LAB_01a406f4;
            }
            FUN_01a3b1a4(&stack0x00000020,lVar5,uVar10);
            uVar31 = uStack000000000000002c;
            in_stack_00000040 = in_stack_00000020;
            in_stack_00000048 = uStack0000000000000028;
            lVar5 = *(long *)(unaff_x20 + 0x98);
            if (lVar5 == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_01a4087c;
            plVar13 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar13 == (long *)0x0) break;
            lVar5 = *plVar13;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar3 != 0) {
              piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_01a40654;
                }
                uVar3 = uVar3 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,2);
LAB_01a40654:
            (*(code *)*puVar4)(uVar31,plVar13,puVar4[1]);
            in_stack_00000020 = in_stack_00000040;
            uStack0000000000000028 = in_stack_00000048;
            if (*(long *)(unaff_x20 + 0xa0) == 0) break;
            FUN_01a3b1e4(*(long *)(unaff_x20 + 0xa0),uVar10);
            lVar5 = *(long *)(unaff_x20 + 0xa0);
            uVar10 = uVar10 + 1;
          } while (lVar5 != 0);
        }
      }
    }
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
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_01a4087c;
  uVar10 = *(uint *)(lVar5 + lVar15 + 0x20);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar10 < 0) {
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(puVar1);
      DAT_03774f00 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar30 = *pfVar6;
    fVar18 = pfVar6[1];
    fVar21 = pfVar6[2];
    fVar16 = pfVar6[3];
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
    fVar20 = *(float *)(lVar8 + 0x34);
    fVar24 = *(float *)(lVar8 + 0x38);
    fVar16 = (float)FUN_02698858(*(undefined4 *)(lVar8 + 0x2c),0);
    lVar8 = *(long *)(unaff_x19 + 0x38);
    if (lVar8 == 0) goto LAB_01a40878;
    if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_01a4087c;
    lVar8 = lVar8 + lVar14;
    fVar26 = *(float *)(lVar8 + 0x2c);
    fVar29 = *(float *)(lVar8 + 0x30);
    fVar28 = *(float *)(lVar8 + 0x34);
    fVar27 = *(float *)(lVar8 + 0x38);
    fVar30 = (fVar17 * fVar28 + fVar24 * fVar26 + fVar16 * fVar27) - fVar20 * fVar29;
    fVar18 = (fVar20 * fVar26 + fVar24 * fVar29 + fVar17 * fVar27) - fVar16 * fVar28;
    fVar21 = (fVar16 * fVar29 + fVar24 * fVar28 + fVar20 * fVar27) - fVar17 * fVar26;
    fVar16 = ((fVar24 * fVar27 - fVar16 * fVar26) - fVar17 * fVar29) - fVar20 * fVar28;
  }
  if (lVar5 == 0) goto LAB_01a40878;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_01a4087c;
  lVar5 = lVar5 + lVar15 * 4;
  lVar15 = lVar15 + 4;
  uVar3 = uVar3 + 1;
  lVar14 = lVar14 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar30;
  *(float *)(lVar5 + 0x24) = fVar18;
  *(float *)(lVar5 + 0x28) = fVar21;
  *(float *)(lVar5 + 0x2c) = fVar16;
  if (lVar15 == 0x68) {
    return 1;
  }
  goto LAB_01a406f4;
}


