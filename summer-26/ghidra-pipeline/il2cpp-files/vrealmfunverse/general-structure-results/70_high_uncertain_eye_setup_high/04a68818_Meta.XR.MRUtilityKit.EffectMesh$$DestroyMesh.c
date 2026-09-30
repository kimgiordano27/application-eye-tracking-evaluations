/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyMesh
ENTRY_POINT: 04a68818
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_EffectMesh__DestroyMesh(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong in_x9;
  undefined8 uVar9;
  int *in_x10;
  long lVar10;
  long in_x11;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
code_r0x04a68818:
  if (in_x11 == param_3) {
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    goto LAB_04a68848;
  }
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 == 0) {
LAB_04a6882c:
    puVar3 = (undefined8 *)FUN_02b7654c(unaff_x23,param_3,0);
LAB_04a68848:
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000068 = in_stack_00000028;
    in_stack_00000060 = in_stack_00000020;
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000050 = in_stack_00000010;
    uVar4 = (*(code *)*puVar3)(unaff_x23,&stack0x00000060,&stack0x00000040,puVar3[1]);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
LAB_04a68888:
    uVar6 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
    if ((int)uVar6 <= unaff_w27) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar9 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar9,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar9);
    }
    if ((uint)unaff_x26 < uVar6) {
      uVar8 = *(uint *)(unaff_x29 + 4);
      unaff_x26 = (ulong)uVar8;
      unaff_w27 = unaff_w27 + 1;
      if (-1 < (int)uVar8) {
        if (uVar6 <= uVar8) goto LAB_04a689d0;
        unaff_x29 = unaff_x28 + unaff_x26 * 0x20;
        if (*(int *)(unaff_x28 + unaff_x26 * 0x20) == unaff_w21) goto code_r0x04a687b4;
        goto LAB_04a68888;
      }
      uVar6 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar6 < 0) {
        if (unaff_x25 == 0) goto LAB_04a68a10;
        uVar6 = *(uint *)(unaff_x19 + 0x24);
        uVar8 = *(uint *)(unaff_x25 + 0x18);
        if (uVar6 == uVar8) {
          FUN_04a684e0();
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a68a10;
          uVar6 = *(uint *)(unaff_x19 + 0x24);
          unaff_x25 = *(long *)(unaff_x19 + 0x18);
          uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          *(uint *)(unaff_x19 + 0x24) = uVar6 + 1;
          if (unaff_x25 == 0) goto LAB_04a68a10;
          iVar2 = 0;
          iVar7 = (int)uVar9;
          if (iVar7 != 0) {
            iVar2 = unaff_w21 / iVar7;
          }
          unaff_w24 = unaff_w21 - iVar2 * iVar7;
          uVar8 = *(uint *)(unaff_x25 + 0x18);
        }
        else {
          *(uint *)(unaff_x19 + 0x24) = uVar6 + 1;
        }
      }
      else {
        if (unaff_x25 == 0) goto LAB_04a68a10;
        uVar8 = *(uint *)(unaff_x25 + 0x18);
        if (uVar8 <= uVar6) goto LAB_04a689d0;
        *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar6 * 0x20 + 0x24);
      }
      if (uVar8 <= uVar6) goto LAB_04a689d0;
      piVar1 = (int *)(unaff_x25 + 0x20 + (long)(int)uVar6 * 0x20);
      *piVar1 = unaff_w21;
      uVar5 = unaff_x20[1];
      uVar9 = *unaff_x20;
      *(undefined8 *)(piVar1 + 6) = unaff_x20[2];
      *(undefined8 *)(piVar1 + 4) = uVar5;
      *(undefined8 *)(piVar1 + 2) = uVar9;
      lVar10 = *(long *)(unaff_x19 + 0x10);
      if (lVar10 == 0) goto LAB_04a68a10;
      if ((unaff_w24 < *(uint *)(lVar10 + 0x18)) && (uVar6 < *(uint *)(unaff_x25 + 0x18))) {
        lVar10 = lVar10 + (ulong)unaff_w24 * 4;
        piVar1[1] = *(int *)(lVar10 + 0x20) + -1;
        *(uint *)(lVar10 + 0x20) = uVar6 + 1;
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
        return 1;
      }
    }
LAB_04a689d0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  goto LAB_04a68814;
code_r0x04a687b4:
  in_stack_00000030 = *(undefined8 *)(unaff_x29 + 0x18);
  in_stack_00000028 = *(undefined8 *)(unaff_x29 + 0x10);
  in_stack_00000020 = *(undefined8 *)(unaff_x29 + 8);
  in_stack_00000008 = unaff_x20[1];
  in_stack_00000000 = *unaff_x20;
  unaff_x23 = *(long **)(unaff_x19 + 0x30);
  in_stack_00000010 = unaff_x20[2];
  if (unaff_x23 == (long *)0x0) {
LAB_04a68a10:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  param_3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  param_1 = *unaff_x23;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x04a6880c;
  goto LAB_04a6882c;
code_r0x04a6880c:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04a68814:
  in_x11 = *(long *)(in_x10 + -2);
  goto code_r0x04a68818;
}


