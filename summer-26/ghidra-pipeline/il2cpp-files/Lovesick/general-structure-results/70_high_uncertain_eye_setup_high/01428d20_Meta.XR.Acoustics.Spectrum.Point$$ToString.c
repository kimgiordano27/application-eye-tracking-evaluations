/*
FUNCTION_NAME: Meta.XR.Acoustics.Spectrum.Point$$ToString
ENTRY_POINT: 01428d20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_Spectrum_Point__ToString(long param_1)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x19;
  undefined4 unaff_w20;
  uint *puVar14;
  long unaff_x23;
  long unaff_x27;
  uint uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  int iVar27;
  long in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  int in_stack_00000148;
  long in_stack_00000150;
  
  lVar5 = in_stack_00000150;
  iVar4 = in_stack_00000148;
  uVar6 = *(uint *)(param_1 + 0x18);
  if (0 < (long)((ulong)uVar6 << 0x20)) {
    uVar11 = 0;
    do {
      if (uVar6 <= uVar11) goto LAB_014291fc;
      *(undefined4 *)(param_1 + 0x20 + uVar11 * 4) = 0xffffffff;
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)uVar6);
  }
  if (((unaff_x27 != 0) && (unaff_x19 != 0)) && (lVar9 = *(long *)(unaff_x19 + 0x80), lVar9 != 0)) {
    iVar2 = *(int *)(unaff_x27 + 0x1c);
    bVar3 = 0;
    uVar11 = 0;
    do {
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar11) {
        if ((1 < iVar4) && (!(bool)(bVar3 ^ 1))) {
          uVar7 = FUN_015f5b28(*(undefined8 *)(unaff_x19 + 0x20),
                               *(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__
                               ,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar7,0);
        }
        if (4 < iVar4) {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,unaff_w20);
          uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,&stack0x00000050);
          uVar7 = FUN_015f6780(*(undefined8 *)PTR_DAT_033f3cc0,uVar7,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar7,0);
        }
        return;
      }
      lVar9 = *(long *)(unaff_x19 + 0xd0);
      if (lVar9 == 0) {
        if (in_stack_00000038 == 0) break;
        lVar9 = FUN_0266dc74(in_stack_00000038,uVar11 & 0xffffffff,0);
      }
      else {
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_014291fc:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar9 = *(long *)(lVar9 + uVar11 * 8 + 0x20);
        if (lVar9 == 0) break;
        lVar9 = *(long *)(lVar9 + 0x10);
      }
      lVar10 = *(long *)(unaff_x19 + 0xa8);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_014291fc;
      lVar12 = *(long *)(unaff_x19 + 0x80);
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_014291fc;
      iVar27 = *(int *)(lVar10 + uVar11 * 4 + 0x20);
      uVar23 = *(undefined4 *)(lVar12 + uVar11 * 4 + 0x20);
      if (4 < iVar4) {
        uVar16 = *(undefined8 *)(unaff_x19 + 0x20);
        in_stack_00000068._4_4_ = (uint)uVar11;
        uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,(long)&stack0x00000068 + 4);
        lVar10 = *(long *)(unaff_x19 + 0x90);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_014291fc;
        lVar10 = lVar10 + uVar11 * 0x10;
        in_stack_00000058 = *(undefined8 *)(lVar10 + 0x28);
        in_stack_00000050 = *(undefined8 *)(lVar10 + 0x20);
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_List<GSTU_Cell>_get_Count__,
                                   &stack0x00000050);
        uVar7 = FUN_01600ba0(*(undefined8 *)StringLiteral_5674,uVar16,uVar7,uVar8,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar7,0);
      }
      lVar10 = *(long *)(unaff_x19 + 0xb0);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_014291fc;
      if (lVar5 == 0) break;
      uVar6 = FUN_013e8198(lVar5,uVar23,*(undefined8 *)(lVar10 + uVar11 * 8 + 0x20),0);
      lVar10 = *(long *)(unaff_x19 + 0x88);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_014291fc;
      lVar10 = lVar10 + uVar11 * 0x10;
      uVar25 = *(undefined4 *)(lVar10 + 0x20);
      uVar23 = *(undefined4 *)(lVar10 + 0x24);
      uVar22 = *(undefined4 *)(lVar10 + 0x28);
      uVar21 = *(undefined4 *)(lVar10 + 0x2c);
      if ((*(long *)(unaff_x19 + 0xa0) == 0) ||
         (uVar13 = *(ulong *)(*(long *)(unaff_x19 + 0xa0) + 0x18), uVar13 == 0)) {
        in_stack_00000050 = 0;
        in_stack_00000058 = 0;
        FUN_0268834c(0,0,0x3f800000,0x3f800000,&stack0x00000050,0);
      }
      else if ((uVar13 & 0xffffffff) <= uVar11) goto LAB_014291fc;
      if (*(long *)(unaff_x19 + 0x98) == 0) break;
      if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= uVar11) goto LAB_014291fc;
      if (*(long *)(unaff_x19 + 0x90) == 0) break;
      if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= uVar11) goto LAB_014291fc;
      uStack0000000000000070 = FUN_014465d0(uVar25,uVar6 & 1,0);
      uStack000000000000007c = uVar21;
      uStack0000000000000078 = uVar22;
      uStack0000000000000074 = uVar23;
      if (lVar9 == 0) break;
      uVar6 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar6) {
        uVar15 = 0;
        do {
          if (uVar6 <= uVar15) goto LAB_014291fc;
          uVar6 = *(uint *)(lVar9 + (long)(int)uVar15 * 4 + 0x20);
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_014291fc;
          puVar14 = (uint *)(param_1 + (long)(int)uVar6 * 4 + 0x20);
          if (*puVar14 == 0xffffffff) {
            *puVar14 = (uint)uVar11;
            pfVar1 = (float *)(unaff_x23 + (long)(int)uVar6 * 8);
            fVar24 = *pfVar1;
            fVar26 = pfVar1[1];
            fVar17 = (float)FUN_02688390(&stack0x00000070,0);
            fVar18 = (float)FUN_026884c4(&stack0x00000070,0);
            fVar19 = (float)FUN_026883a0(&stack0x00000070,0);
            fVar20 = (float)FUN_026884d4(&stack0x00000070,0);
            in_stack_00000050 = CONCAT44(fVar19 + fVar26 * fVar20,fVar17 + fVar24 * fVar18);
            FUN_013444d4(&stack0x00000090,uVar6 + in_stack_00000048._4_4_,&stack0x00000050,
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverExited__
                        );
            if (iVar2 == 1) {
              in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,(float)iVar27);
              FUN_013444d4(&stack0x00000080,uVar6 + in_stack_00000048._4_4_,&stack0x00000050,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<LocomotionVignetteProvider>__ctor__
                          );
            }
          }
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_014291fc;
          uVar6 = *(uint *)(lVar9 + 0x18);
          uVar15 = uVar15 + 1;
          bVar3 = bVar3 | uVar11 != *puVar14;
        } while ((int)uVar15 < (int)uVar6);
      }
      lVar9 = *(long *)(unaff_x19 + 0x80);
      uVar11 = uVar11 + 1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


