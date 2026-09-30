/*
FUNCTION_NAME: Meta.XR.Acoustics.Spectrum.<>c$$<get_Item>b__11_1
ENTRY_POINT: 01428e30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_Spectrum_<>c__<get_Item>b__11_1
               (undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  uint *puVar8;
  byte unaff_w21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  undefined4 unaff_w28;
  uint uVar9;
  undefined8 unaff_x29;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  int unaff_s13;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  int iStack0000000000000048;
  int iStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  while( true ) {
    uStack000000000000006c = (undefined4)unaff_x25;
    uVar3 = thunk_FUN_00d61fa0(*param_1,param_3);
    lVar5 = *(long *)(unaff_x19 + 0x90);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) {
LAB_014291fc:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar5 = lVar5 + unaff_x25 * 0x10;
    in_stack_00000058 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000050 = *(undefined8 *)(lVar5 + 0x20);
    uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_List<GSTU_Cell>_get_Count__,
                               &stack0x00000050);
    uVar3 = FUN_01600ba0(*(undefined8 *)StringLiteral_5674,unaff_x29,uVar3,uVar4,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar3,0);
    do {
      lVar5 = *(long *)(unaff_x19 + 0xb0);
      if (lVar5 == 0) goto LAB_01429104;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_014291fc;
      if (in_stack_00000040 == 0) goto LAB_01429104;
      uVar2 = FUN_013e8198(in_stack_00000040,unaff_w28,*(undefined8 *)(lVar5 + unaff_x25 * 8 + 0x20)
                           ,0);
      lVar5 = *(long *)(unaff_x19 + 0x88);
      if (lVar5 == 0) goto LAB_01429104;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_014291fc;
      lVar5 = lVar5 + unaff_x25 * 0x10;
      uVar18 = *(undefined4 *)(lVar5 + 0x20);
      uVar16 = *(undefined4 *)(lVar5 + 0x24);
      uVar15 = *(undefined4 *)(lVar5 + 0x28);
      uVar14 = *(undefined4 *)(lVar5 + 0x2c);
      if ((*(long *)(unaff_x19 + 0xa0) == 0) ||
         (uVar7 = *(ulong *)(*(long *)(unaff_x19 + 0xa0) + 0x18), uVar7 == 0)) {
        in_stack_00000050 = 0;
        in_stack_00000058 = 0;
        FUN_0268834c(0,0,&stack0x00000050,0);
      }
      else if ((uVar7 & 0xffffffff) <= unaff_x25) goto LAB_014291fc;
      if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_01429104;
      if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= unaff_x25) goto LAB_014291fc;
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_01429104;
      if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= unaff_x25) goto LAB_014291fc;
      uStack0000000000000070 = FUN_014465d0(uVar18,uVar2 & 1,0);
      uStack000000000000007c = uVar14;
      uStack0000000000000078 = uVar15;
      uStack0000000000000074 = uVar16;
      if (unaff_x27 == 0) goto LAB_01429104;
      uVar2 = *(uint *)(unaff_x27 + 0x18);
      if (0 < (int)uVar2) {
        uVar9 = 0;
        do {
          if (uVar2 <= uVar9) goto LAB_014291fc;
          uVar2 = *(uint *)(unaff_x27 + (long)(int)uVar9 * 4 + 0x20);
          if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto LAB_014291fc;
          puVar8 = (uint *)(unaff_x24 + (long)(int)uVar2 * 4 + 0x20);
          if (*puVar8 == 0xffffffff) {
            *puVar8 = (uint)unaff_x25;
            pfVar1 = (float *)(unaff_x23 + (long)(int)uVar2 * 8);
            fVar17 = *pfVar1;
            fVar19 = pfVar1[1];
            fVar10 = (float)FUN_02688390(&stack0x00000070,0);
            fVar11 = (float)FUN_026884c4(&stack0x00000070,0);
            fVar12 = (float)FUN_026883a0(&stack0x00000070,0);
            fVar13 = (float)FUN_026884d4(&stack0x00000070,0);
            in_stack_00000050 = CONCAT44(fVar12 + fVar19 * fVar13,fVar10 + fVar17 * fVar11);
            FUN_013444d4(&stack0x00000090,uVar2 + iStack000000000000004c,&stack0x00000050,
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverExited__
                        );
            if (unaff_w26 == 1) {
              in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,(float)unaff_s13);
              FUN_013444d4(&stack0x00000080,uVar2 + iStack000000000000004c,&stack0x00000050,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<LocomotionVignetteProvider>__ctor__
                          );
            }
          }
          if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto LAB_014291fc;
          uVar2 = *(uint *)(unaff_x27 + 0x18);
          uVar9 = uVar9 + 1;
          unaff_w21 = unaff_w21 | unaff_x25 != *puVar8;
        } while ((int)uVar9 < (int)uVar2);
      }
      unaff_x25 = unaff_x25 + 1;
      if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_01429104;
      if ((long)*(int *)(*(long *)(unaff_x19 + 0x80) + 0x18) <= (long)unaff_x25) {
        if ((1 < iStack0000000000000048) && (((unaff_w21 ^ 1) & 1) == 0)) {
          uVar3 = FUN_015f5b28(*(undefined8 *)(unaff_x19 + 0x20),
                               *(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__
                               ,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar3,0);
        }
        if (4 < iStack0000000000000048) {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,in_stack_00000030);
          uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,&stack0x00000050);
          uVar3 = FUN_015f6780(*(undefined8 *)PTR_DAT_033f3cc0,uVar3,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar3,0);
        }
        return;
      }
      lVar5 = *(long *)(unaff_x19 + 0xd0);
      if (lVar5 == 0) {
        if (in_stack_00000038 == 0) goto LAB_01429104;
        unaff_x27 = FUN_0266dc74(in_stack_00000038,unaff_x25 & 0xffffffff,0);
      }
      else {
        if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_014291fc;
        lVar5 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_01429104;
        unaff_x27 = *(long *)(lVar5 + 0x10);
      }
      lVar5 = *(long *)(unaff_x19 + 0xa8);
      if (lVar5 == 0) goto LAB_01429104;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_014291fc;
      lVar6 = *(long *)(unaff_x19 + 0x80);
      if (lVar6 == 0) goto LAB_01429104;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_014291fc;
      unaff_s13 = *(int *)(lVar5 + unaff_x25 * 4 + 0x20);
      unaff_w28 = *(undefined4 *)(lVar6 + unaff_x25 * 4 + 0x20);
    } while (iStack0000000000000048 < 5);
    unaff_x29 = *(undefined8 *)(unaff_x19 + 0x20);
    param_3 = (undefined1 *)&stack0x0000006c;
    param_1 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  }
LAB_01429104:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


