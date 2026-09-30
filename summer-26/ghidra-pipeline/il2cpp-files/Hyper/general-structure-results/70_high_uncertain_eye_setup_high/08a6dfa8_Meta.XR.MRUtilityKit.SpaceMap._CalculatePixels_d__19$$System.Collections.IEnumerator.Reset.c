/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap.<CalculatePixels>d__19$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 08a6dfa8
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap_<CalculatePixels>d__19__System_Collections_IEnumerator_Reset
               (long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  long unaff_x22;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  puVar2 = PTR_DAT_0ac09758;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) <= in_stack_00000020._4_4_) {
      uVar6 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x0000002c);
      uVar11 = thunk_FUN_049ae08c(PTR_DAT_0ac54100);
      uVar6 = FUN_08bc9f74(uVar11,uVar6,0);
      lVar3 = *(long *)(unaff_x19 + 0xe0);
      FUN_04338ac4(lVar3);
      thunk_FUN_049ae08c(PTR_DAT_0ac540d0);
      in_stack_00000028 = *(undefined4 *)(lVar3 + 0x18);
      uVar11 = thunk_FUN_04983b98(*(undefined8 *)(puVar2 + 0x48),&stack0x00000028);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      FUN_04338ac4(lVar3);
      uVar13 = *(undefined8 *)(lVar3 + 0x20);
      uVar12 = thunk_FUN_049ae08c(PTR_DAT_0ac54108);
      uVar11 = FUN_08bda628(uVar12,uVar11,uVar13,0);
      uVar6 = FUN_08bcc3c0(uVar6,uVar11,0);
      thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
      uVar11 = thunk_FUN_04983f60();
      uVar12 = thunk_FUN_049ae08c(PTR_DAT_0ac37660);
      FUN_08cc1128(uVar11,uVar12,uVar6,0);
      uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac54110);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar11,uVar6);
    }
    iVar10 = 0;
    do {
      if (*(int *)(param_1 + 0x18) <= iVar10) {
        return;
      }
      if ((in_stack_00000020._4_4_ == -1) || (iVar10 == in_stack_00000020._4_4_)) {
        lVar3 = FUN_06b7fba4(param_1,iVar10,*(undefined8 *)PTR_DAT_0ac540e0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar1 = *(long **)(unaff_x19 + 0xb8);
        uVar6 = *(undefined8 *)(unaff_x19 + 0xc0);
        uVar11 = *(undefined8 *)(lVar3 + 0x14);
        lVar9 = *(long *)(unaff_x22 + 0x20);
        uVar12 = *(undefined8 *)(lVar3 + 0x1c);
        uVar13 = *(undefined8 *)(lVar3 + 0x24);
        uVar14 = *(undefined8 *)(lVar3 + 0x2c);
        if (lVar9 == 0) {
          lVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09ce8);
          FUN_06052aa8();
          *(long *)(unaff_x22 + 0x20) = lVar9;
          thunk_FUN_049ee3d8(unaff_x22 + 0x20,lVar9);
        }
        if (*(long *)(unaff_x22 + 0x28) == 0) {
          uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac524a0);
          FUN_089c54f8();
          *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
          thunk_FUN_049ee3d8(unaff_x22 + 0x28,uVar4);
        }
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar3 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac524b0) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x17) * 0x10 + 0x138);
              goto LAB_08a6e0f4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar1,*(long *)PTR_DAT_0ac524b0,0x17);
LAB_08a6e0f4:
        (*(code *)*puVar5)(plVar1,uVar6,uVar11,uVar12,uVar13,uVar14,in_stack_00000018,lVar9);
      }
      param_1 = *(long *)(unaff_x19 + 0xe0);
      iVar10 = iVar10 + 1;
    } while (param_1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


