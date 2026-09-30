/*
FUNCTION_NAME: Meta.XR.Acoustics.Spectrum.Point$$op_Implicit
ENTRY_POINT: 01428d18
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


void Meta_XR_Acoustics_Spectrum_Point__op_Implicit(void)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  undefined4 unaff_w20;
  uint *puVar15;
  long unaff_x23;
  long unaff_x27;
  uint uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  int iVar28;
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
  
  lVar7 = FUN_00da4fb8();
  lVar5 = in_stack_00000150;
  iVar4 = in_stack_00000148;
  if (lVar7 != 0) {
    uVar6 = *(uint *)(lVar7 + 0x18);
    if (0 < (long)((ulong)uVar6 << 0x20)) {
      uVar12 = 0;
      do {
        if (uVar6 <= uVar12) goto LAB_014291fc;
        *(undefined4 *)(lVar7 + 0x20 + uVar12 * 4) = 0xffffffff;
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)uVar6);
    }
    if (((unaff_x27 != 0) && (unaff_x19 != 0)) &&
       (lVar10 = *(long *)(unaff_x19 + 0x80), lVar10 != 0)) {
      iVar2 = *(int *)(unaff_x27 + 0x1c);
      bVar3 = 0;
      uVar12 = 0;
      do {
        if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar12) {
          if ((1 < iVar4) && (!(bool)(bVar3 ^ 1))) {
            uVar8 = FUN_015f5b28(*(undefined8 *)(unaff_x19 + 0x20),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__
                                 ,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02661754(uVar8,0);
          }
          if (4 < iVar4) {
            in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,unaff_w20);
            uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,&stack0x00000050);
            uVar8 = FUN_015f6780(*(undefined8 *)PTR_DAT_033f3cc0,uVar8,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar8,0);
          }
          return;
        }
        lVar10 = *(long *)(unaff_x19 + 0xd0);
        if (lVar10 == 0) {
          if (in_stack_00000038 == 0) break;
          lVar10 = FUN_0266dc74(in_stack_00000038,uVar12 & 0xffffffff,0);
        }
        else {
          if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_014291fc:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar10 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
          if (lVar10 == 0) break;
          lVar10 = *(long *)(lVar10 + 0x10);
        }
        lVar11 = *(long *)(unaff_x19 + 0xa8);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_014291fc;
        lVar13 = *(long *)(unaff_x19 + 0x80);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_014291fc;
        iVar28 = *(int *)(lVar11 + uVar12 * 4 + 0x20);
        uVar24 = *(undefined4 *)(lVar13 + uVar12 * 4 + 0x20);
        if (4 < iVar4) {
          uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
          in_stack_00000068._4_4_ = (uint)uVar12;
          uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,(long)&stack0x00000068 + 4);
          lVar11 = *(long *)(unaff_x19 + 0x90);
          if (lVar11 == 0) break;
          if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_014291fc;
          lVar11 = lVar11 + uVar12 * 0x10;
          in_stack_00000058 = *(undefined8 *)(lVar11 + 0x28);
          in_stack_00000050 = *(undefined8 *)(lVar11 + 0x20);
          uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_List<GSTU_Cell>_get_Count__,
                                     &stack0x00000050);
          uVar8 = FUN_01600ba0(*(undefined8 *)StringLiteral_5674,uVar17,uVar8,uVar9,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar8,0);
        }
        lVar11 = *(long *)(unaff_x19 + 0xb0);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_014291fc;
        if (lVar5 == 0) break;
        uVar6 = FUN_013e8198(lVar5,uVar24,*(undefined8 *)(lVar11 + uVar12 * 8 + 0x20),0);
        lVar11 = *(long *)(unaff_x19 + 0x88);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_014291fc;
        lVar11 = lVar11 + uVar12 * 0x10;
        uVar26 = *(undefined4 *)(lVar11 + 0x20);
        uVar24 = *(undefined4 *)(lVar11 + 0x24);
        uVar23 = *(undefined4 *)(lVar11 + 0x28);
        uVar22 = *(undefined4 *)(lVar11 + 0x2c);
        if ((*(long *)(unaff_x19 + 0xa0) == 0) ||
           (uVar14 = *(ulong *)(*(long *)(unaff_x19 + 0xa0) + 0x18), uVar14 == 0)) {
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_0268834c(0,0,0x3f800000,0x3f800000,&stack0x00000050,0);
        }
        else if ((uVar14 & 0xffffffff) <= uVar12) goto LAB_014291fc;
        if (*(long *)(unaff_x19 + 0x98) == 0) break;
        if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= uVar12) goto LAB_014291fc;
        if (*(long *)(unaff_x19 + 0x90) == 0) break;
        if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= uVar12) goto LAB_014291fc;
        uStack0000000000000070 = FUN_014465d0(uVar26,uVar6 & 1,0);
        uStack000000000000007c = uVar22;
        uStack0000000000000078 = uVar23;
        uStack0000000000000074 = uVar24;
        if (lVar10 == 0) break;
        uVar6 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar6) {
          uVar16 = 0;
          do {
            if (uVar6 <= uVar16) goto LAB_014291fc;
            uVar6 = *(uint *)(lVar10 + (long)(int)uVar16 * 4 + 0x20);
            if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_014291fc;
            puVar15 = (uint *)(lVar7 + (long)(int)uVar6 * 4 + 0x20);
            if (*puVar15 == 0xffffffff) {
              *puVar15 = (uint)uVar12;
              pfVar1 = (float *)(unaff_x23 + (long)(int)uVar6 * 8);
              fVar25 = *pfVar1;
              fVar27 = pfVar1[1];
              fVar18 = (float)FUN_02688390(&stack0x00000070,0);
              fVar19 = (float)FUN_026884c4(&stack0x00000070,0);
              fVar20 = (float)FUN_026883a0(&stack0x00000070,0);
              fVar21 = (float)FUN_026884d4(&stack0x00000070,0);
              in_stack_00000050 = CONCAT44(fVar20 + fVar27 * fVar21,fVar18 + fVar25 * fVar19);
              FUN_013444d4(&stack0x00000090,uVar6 + in_stack_00000048._4_4_,&stack0x00000050,
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverExited__
                          );
              if (iVar2 == 1) {
                in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,(float)iVar28);
                FUN_013444d4(&stack0x00000080,uVar6 + in_stack_00000048._4_4_,&stack0x00000050,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<LocomotionVignetteProvider>__ctor__
                            );
              }
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_014291fc;
            uVar6 = *(uint *)(lVar10 + 0x18);
            uVar16 = uVar16 + 1;
            bVar3 = bVar3 | uVar12 != *puVar15;
          } while ((int)uVar16 < (int)uVar6);
        }
        lVar10 = *(long *)(unaff_x19 + 0x80);
        uVar12 = uVar12 + 1;
      } while (lVar10 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


