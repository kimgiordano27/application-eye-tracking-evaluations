/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CheckBox
ENTRY_POINT: 04a5ed94
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__CheckBox(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  undefined4 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    uVar7 = (uint)unaff_x25;
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == param_2) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04a5eddc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(unaff_x23,param_2,0);
LAB_04a5eddc:
    uVar10 = (*(code *)*puVar4)(unaff_x23,unaff_x24);
    if ((uVar10 & 1) != 0) {
      if ((int)(uint)unaff_x20 < 0) {
        uVar8 = *(uint *)(in_stack_00000008 + 0x18);
        if (uVar8 <= uVar7) goto LAB_04a5eef4;
        lVar9 = *(long *)(unaff_x21 + 0x10);
        if (lVar9 == 0) {
LAB_04a5ef34:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000000) goto LAB_04a5eef4;
        *(int *)(lVar9 + in_stack_00000000 * 4 + 0x20) = unaff_x27[1] + 1;
      }
      else {
        uVar8 = *(uint *)(in_stack_00000008 + 0x18);
        if ((uVar8 <= uVar7) || (uVar8 <= (uint)unaff_x20)) goto LAB_04a5eef4;
        *(undefined4 *)(unaff_x29 + (unaff_x20 & 0xffffffff) * 0x10 + 4) = unaff_x27[1];
      }
      if (uVar7 < uVar8) {
        uVar1 = *(undefined4 *)(unaff_x21 + 0x28);
        iVar2 = *(int *)(unaff_x21 + 0x20);
        iVar3 = *(int *)(unaff_x21 + 0x38);
        *unaff_x27 = 0xffffffff;
        unaff_x27[1] = uVar1;
        iVar2 = iVar2 + -1;
        *(int *)(unaff_x21 + 0x20) = iVar2;
        *(int *)(unaff_x21 + 0x38) = iVar3 + 1;
        if (iVar2 == 0) {
          uVar7 = 0xffffffff;
          *(undefined4 *)(unaff_x21 + 0x24) = 0;
        }
        *(uint *)(unaff_x21 + 0x28) = uVar7;
        return 1;
      }
LAB_04a5eef4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar10 = unaff_x25;
    do {
      uVar7 = (uint)*(undefined8 *)(in_stack_00000008 + 0x18);
      if ((int)uVar7 <= unaff_w26) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar5 = thunk_FUN_02b79644();
        uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,unaff_x28);
      }
      if (uVar7 <= (uint)uVar10) goto LAB_04a5eef4;
      uVar8 = unaff_x27[1];
      unaff_x25 = (ulong)uVar8;
      unaff_w26 = unaff_w26 + 1;
      unaff_x20 = uVar10 & 0xffffffff;
      if ((int)uVar8 < 0) {
        return 0;
      }
      if (uVar7 <= uVar8) goto LAB_04a5eef4;
      unaff_x27 = (undefined4 *)(unaff_x29 + unaff_x25 * 0x10);
      uVar10 = unaff_x25;
    } while (*(int *)(unaff_x29 + unaff_x25 * 0x10) != unaff_w22);
    unaff_x23 = *(long **)(unaff_x21 + 0x30);
    if (unaff_x23 == (long *)0x0) goto LAB_04a5ef34;
    unaff_x24 = *(undefined8 *)(unaff_x27 + 2);
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x28 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02b76218(param_2);
    }
  } while( true );
}


