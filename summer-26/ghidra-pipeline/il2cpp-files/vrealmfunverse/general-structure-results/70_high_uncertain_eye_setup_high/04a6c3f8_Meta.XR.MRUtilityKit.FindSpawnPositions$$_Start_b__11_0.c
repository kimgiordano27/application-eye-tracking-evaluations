/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.FindSpawnPositions$$<Start>b__11_0
ENTRY_POINT: 04a6c3f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_FindSpawnPositions__<Start>b__11_0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ushort in_w8;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x04a6c3f8:
  if ((in_w8 & 1) == 0) {
    param_2 = FUN_02b76218(param_2);
  }
  lVar5 = *unaff_x23;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_2) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04a6c450;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,param_2,0);
LAB_04a6c450:
  uVar8 = (*(code *)*puVar2)(unaff_x23,unaff_x24);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
LAB_04a6c46c:
  uVar4 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
  if ((int)uVar4 <= unaff_w28) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar9 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar9,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9);
  }
  if ((uint)unaff_x27 < uVar4) {
    uVar7 = *(uint *)(unaff_x25 + 4);
    unaff_x27 = (ulong)uVar7;
    unaff_w28 = unaff_w28 + 1;
    if (-1 < (int)uVar7) {
      if (uVar4 <= uVar7) goto LAB_04a6c5b8;
      unaff_x25 = unaff_x29 + unaff_x27 * 0x10;
      if (*(int *)(unaff_x29 + unaff_x27 * 0x10) == unaff_w21) goto code_r0x04a6c3d8;
      goto LAB_04a6c46c;
    }
    uVar4 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar4 < 0) {
      if (unaff_x26 == 0) goto LAB_04a6c5f8;
      uVar4 = *(uint *)(unaff_x19 + 0x24);
      uVar7 = *(uint *)(unaff_x26 + 0x18);
      if (uVar4 == uVar7) {
        FUN_04a6c110();
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a6c5f8;
        uVar4 = *(uint *)(unaff_x19 + 0x24);
        unaff_x26 = *(long *)(unaff_x19 + 0x18);
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
        if (unaff_x26 == 0) goto LAB_04a6c5f8;
        iVar1 = 0;
        iVar6 = (int)uVar9;
        if (iVar6 != 0) {
          iVar1 = unaff_w21 / iVar6;
        }
        in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar6;
        uVar7 = *(uint *)(unaff_x26 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_04a6c5f8;
      uVar7 = *(uint *)(unaff_x26 + 0x18);
      if (uVar7 <= uVar4) goto LAB_04a6c5b8;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x26 + (ulong)uVar4 * 0x10 + 0x24);
    }
    if (uVar7 <= uVar4) goto LAB_04a6c5b8;
    piVar10 = (int *)(unaff_x26 + 0x20 + (long)(int)uVar4 * 0x10);
    *(undefined8 *)(piVar10 + 2) = unaff_x20;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    *piVar10 = unaff_w21;
    if (lVar5 == 0) goto LAB_04a6c5f8;
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar5 + 0x18)) && (uVar4 < *(uint *)(unaff_x26 + 0x18))
       ) {
      lVar5 = lVar5 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(unaff_x26 + 0x20 + (long)(int)uVar4 * 0x10 + 4) = *(int *)(lVar5 + 0x20) + -1;
      *(uint *)(lVar5 + 0x20) = uVar4 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a6c5b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
code_r0x04a6c3d8:
  unaff_x23 = *(long **)(unaff_x19 + 0x30);
  if (unaff_x23 == (long *)0x0) {
LAB_04a6c5f8:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  unaff_x24 = *(undefined8 *)(unaff_x25 + 8);
  param_2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  in_w8 = *(ushort *)(param_2 + 0x135);
  goto code_r0x04a6c3f8;
}


