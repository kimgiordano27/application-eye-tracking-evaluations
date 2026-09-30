/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$OnDestroy
ENTRY_POINT: 04a94148
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKRoom__OnDestroy(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *plVar13;
  uint unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  int unaff_w27;
  long unaff_x28;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  while (unaff_w27 = unaff_w27 + 1, -1 < (int)unaff_w26) {
    if ((uint)param_1 <= unaff_w26) goto LAB_04a9427c;
    lVar12 = unaff_x28 + (ulong)unaff_w26 * 0x20;
    if (*(int *)(unaff_x28 + (ulong)unaff_w26 * 0x20) == unaff_w21) {
      uVar10 = *(undefined8 *)(lVar12 + 0x18);
      uVar15 = *(undefined8 *)(lVar12 + 0x10);
      uVar14 = *(undefined8 *)(lVar12 + 8);
      uVar17 = unaff_x20[1];
      uVar16 = *unaff_x20;
      plVar13 = *(long **)(unaff_x19 + 0x30);
      uVar5 = unaff_x20[2];
      if (plVar13 == (long *)0x0) goto LAB_04a942bc;
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      lVar6 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a940f4;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar13,lVar3,0);
LAB_04a940f4:
      in_stack_00000040 = uVar16;
      in_stack_00000048 = uVar17;
      in_stack_00000050 = uVar5;
      in_stack_00000060 = uVar14;
      in_stack_00000068 = uVar15;
      in_stack_00000070 = uVar10;
      uVar9 = (*(code *)*puVar2)(plVar13,&stack0x00000060,&stack0x00000040,puVar2[1]);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      param_1 = *(undefined8 *)(unaff_x25 + 0x18);
    }
    if ((int)(uint)param_1 <= unaff_w27) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar10 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar10,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar10);
    }
    if ((uint)param_1 <= unaff_w26) goto LAB_04a9427c;
    unaff_w26 = *(uint *)(lVar12 + 4);
  }
  uVar4 = *(uint *)(unaff_x19 + 0x28);
  if ((int)uVar4 < 0) {
    if (unaff_x25 == 0) goto LAB_04a942bc;
    uVar4 = *(uint *)(unaff_x19 + 0x24);
    uVar8 = *(uint *)(unaff_x25 + 0x18);
    if (uVar4 == uVar8) {
      FUN_04a93d8c();
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a942bc;
      uVar4 = *(uint *)(unaff_x19 + 0x24);
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
      if (unaff_x25 == 0) goto LAB_04a942bc;
      iVar1 = 0;
      iVar7 = (int)uVar10;
      if (iVar7 != 0) {
        iVar1 = unaff_w21 / iVar7;
      }
      unaff_w24 = unaff_w21 - iVar1 * iVar7;
      uVar8 = *(uint *)(unaff_x25 + 0x18);
    }
    else {
      *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_04a942bc;
    uVar8 = *(uint *)(unaff_x25 + 0x18);
    if (uVar8 <= uVar4) goto LAB_04a9427c;
    *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar4 * 0x20 + 0x24);
  }
  if (uVar4 < uVar8) {
    piVar11 = (int *)(unaff_x25 + 0x20 + (long)(int)uVar4 * 0x20);
    *piVar11 = unaff_w21;
    uVar5 = unaff_x20[1];
    uVar10 = *unaff_x20;
    *(undefined8 *)(piVar11 + 6) = unaff_x20[2];
    *(undefined8 *)(piVar11 + 4) = uVar5;
    *(undefined8 *)(piVar11 + 2) = uVar10;
    lVar12 = *(long *)(unaff_x19 + 0x10);
    if (lVar12 == 0) {
LAB_04a942bc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((unaff_w24 < *(uint *)(lVar12 + 0x18)) && (uVar4 < *(uint *)(unaff_x25 + 0x18))) {
      lVar12 = lVar12 + (ulong)unaff_w24 * 4;
      piVar11[1] = *(int *)(lVar12 + 0x20) + -1;
      *(uint *)(lVar12 + 0x20) = uVar4 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a9427c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


