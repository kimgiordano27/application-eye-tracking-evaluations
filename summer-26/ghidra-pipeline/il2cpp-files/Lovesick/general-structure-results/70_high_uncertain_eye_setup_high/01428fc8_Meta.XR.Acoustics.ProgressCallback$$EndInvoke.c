/*
FUNCTION_NAME: Meta.XR.Acoustics.ProgressCallback$$EndInvoke
ENTRY_POINT: 01428fc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_ProgressCallback__EndInvoke
               (undefined8 param_1,ulong param_2,undefined4 param_3,undefined4 param_4,ulong param_5
               )

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  uint *puVar9;
  byte unaff_w21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  uint uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 unaff_s9;
  float fVar16;
  float fVar17;
  int unaff_s13;
  undefined4 in_s17;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  int iStack0000000000000048;
  int iStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  while (uStack0000000000000014 = param_1, uStack000000000000001c = in_s17,
        uStack0000000000000070 = FUN_014465d0(param_2,param_5,0), uStack000000000000007c = unaff_s9,
        uStack0000000000000078 = param_4, uStack0000000000000074 = param_3, unaff_x27 != 0) {
    uVar3 = *(uint *)(unaff_x27 + 0x18);
    if (0 < (int)uVar3) {
      uVar10 = 0;
      do {
        if (uVar3 <= uVar10) goto LAB_014291fc;
        uVar3 = *(uint *)(unaff_x27 + (long)(int)uVar10 * 4 + 0x20);
        if (*(uint *)(unaff_x24 + 0x18) <= uVar3) goto LAB_014291fc;
        puVar9 = (uint *)(unaff_x24 + (long)(int)uVar3 * 4 + 0x20);
        if (*puVar9 == 0xffffffff) {
          *puVar9 = (uint)unaff_x25;
          pfVar1 = (float *)(unaff_x23 + (long)(int)uVar3 * 8);
          fVar16 = *pfVar1;
          fVar17 = pfVar1[1];
          fVar12 = (float)FUN_02688390(&stack0x00000070,0);
          fVar13 = (float)FUN_026884c4(&stack0x00000070,0);
          fVar14 = (float)FUN_026883a0(&stack0x00000070,0);
          fVar15 = (float)FUN_026884d4(&stack0x00000070,0);
          in_stack_00000050 = CONCAT44(fVar14 + fVar17 * fVar15,fVar12 + fVar16 * fVar13);
          FUN_013444d4(&stack0x00000090,uVar3 + iStack000000000000004c,&stack0x00000050,
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverExited__
                      );
          if (unaff_w26 == 1) {
            in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,(float)unaff_s13);
            FUN_013444d4(&stack0x00000080,uVar3 + iStack000000000000004c,&stack0x00000050,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<LocomotionVignetteProvider>__ctor__
                        );
          }
        }
        if (*(uint *)(unaff_x24 + 0x18) <= uVar3) goto LAB_014291fc;
        uVar3 = *(uint *)(unaff_x27 + 0x18);
        uVar10 = uVar10 + 1;
        unaff_w21 = unaff_w21 | unaff_x25 != *puVar9;
      } while ((int)uVar10 < (int)uVar3);
    }
    unaff_x25 = unaff_x25 + 1;
    if (*(long *)(unaff_x19 + 0x80) == 0) break;
    if ((long)*(int *)(*(long *)(unaff_x19 + 0x80) + 0x18) <= (long)unaff_x25) {
      if ((1 < iStack0000000000000048) && (((unaff_w21 ^ 1) & 1) == 0)) {
        uVar4 = FUN_015f5b28(*(undefined8 *)(unaff_x19 + 0x20),
                             *(undefined8 *)
                              Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__
                             ,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar4,0);
      }
      if (4 < iStack0000000000000048) {
        in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,in_stack_00000030);
        uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000050);
        uVar4 = FUN_015f6780(*(undefined8 *)PTR_DAT_033f3cc0,uVar4,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar4,0);
      }
      return;
    }
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    if (lVar6 == 0) {
      if (in_stack_00000038 == 0) break;
      unaff_x27 = FUN_0266dc74(in_stack_00000038,unaff_x25 & 0xffffffff,0);
    }
    else {
      if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_014291fc;
      lVar6 = *(long *)(lVar6 + unaff_x25 * 8 + 0x20);
      if (lVar6 == 0) break;
      unaff_x27 = *(long *)(lVar6 + 0x10);
    }
    lVar6 = *(long *)(unaff_x19 + 0xa8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x25) {
LAB_014291fc:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar7 = *(long *)(unaff_x19 + 0x80);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x25) goto LAB_014291fc;
    unaff_s13 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
    uVar2 = *(undefined4 *)(lVar7 + unaff_x25 * 4 + 0x20);
    if (4 < iStack0000000000000048) {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
      in_stack_00000068._4_4_ = (undefined4)unaff_x25;
      uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,(long)&stack0x00000068 + 4);
      lVar6 = *(long *)(unaff_x19 + 0x90);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_014291fc;
      lVar6 = lVar6 + unaff_x25 * 0x10;
      in_stack_00000058 = *(undefined8 *)(lVar6 + 0x28);
      in_stack_00000050 = *(undefined8 *)(lVar6 + 0x20);
      uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<GSTU_Cell>_get_Count__,
                                 &stack0x00000050);
      uVar4 = FUN_01600ba0(*(undefined8 *)StringLiteral_5674,uVar11,uVar4,uVar5,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar4,0);
    }
    lVar6 = *(long *)(unaff_x19 + 0xb0);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_014291fc;
    if (in_stack_00000040 == 0) break;
    uVar3 = FUN_013e8198(in_stack_00000040,uVar2,*(undefined8 *)(lVar6 + unaff_x25 * 8 + 0x20),0);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_014291fc;
    lVar6 = lVar6 + unaff_x25 * 0x10;
    param_2 = (ulong)*(uint *)(lVar6 + 0x20);
    param_3 = *(undefined4 *)(lVar6 + 0x24);
    param_4 = *(undefined4 *)(lVar6 + 0x28);
    unaff_s9 = *(undefined4 *)(lVar6 + 0x2c);
    if ((*(long *)(unaff_x19 + 0xa0) == 0) ||
       (uVar8 = *(ulong *)(*(long *)(unaff_x19 + 0xa0) + 0x18), uVar8 == 0)) {
      in_stack_00000050 = 0;
      in_stack_00000058 = 0;
      FUN_0268834c(0,0,&stack0x00000050,0);
    }
    else if ((uVar8 & 0xffffffff) <= unaff_x25) goto LAB_014291fc;
    if (*(long *)(unaff_x19 + 0x98) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= unaff_x25) goto LAB_014291fc;
    lVar6 = *(long *)(unaff_x19 + 0x90);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_014291fc;
    lVar6 = lVar6 + unaff_x25 * 0x10;
    param_1 = *(undefined8 *)(lVar6 + 0x24);
    in_s17 = *(undefined4 *)(lVar6 + 0x2c);
    param_5 = (ulong)(uVar3 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


