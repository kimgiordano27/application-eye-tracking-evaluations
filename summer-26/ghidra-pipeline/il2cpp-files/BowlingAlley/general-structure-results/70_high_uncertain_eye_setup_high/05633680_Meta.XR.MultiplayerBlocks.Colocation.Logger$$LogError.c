/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogError
ENTRY_POINT: 05633680
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MultiplayerBlocks_Colocation_Logger__LogError(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar11;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  
code_r0x05633680:
  puVar4 = (undefined8 *)(param_1 + 0x138);
LAB_05633684:
  uStack00000000000000d8 = in_stack_00000038;
  uStack00000000000000d0 = in_stack_00000030;
  uStack00000000000000e8 = in_stack_00000048;
  uStack00000000000000e0 = in_stack_00000040;
  uStack00000000000000b8 = in_stack_00000018;
  uStack00000000000000b0 = in_stack_00000010;
  uStack00000000000000c8 = in_stack_00000028;
  uStack00000000000000c0 = in_stack_00000020;
  uVar5 = (*(code *)*puVar4)(unaff_x23,&stack0x000000d0,&stack0x000000b0,puVar4[1]);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
LAB_056336b4:
  uVar8 = (uint)*(undefined8 *)(unaff_x24 + 0x18);
  if ((int)uVar8 <= unaff_w26) {
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar6 = thunk_FUN_032a56a0();
    uVar7 = thunk_FUN_032e1da0(PTR_DAT_07282490);
    FUN_0592371c(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar6);
  }
  if ((uint)unaff_x27 < uVar8) {
    uVar1 = *(uint *)(unaff_x24 + unaff_x29 * unaff_x28 + 0x24);
    unaff_x27 = (ulong)uVar1;
    unaff_w26 = unaff_w26 + 1;
    if (-1 < (int)uVar1) {
      if (uVar8 <= uVar1) goto LAB_05633844;
      unaff_x29 = unaff_x27;
      if (*(int *)(unaff_x24 + unaff_x27 * (unaff_x28 & 0xffffffff) + 0x20) == unaff_w21)
      goto code_r0x056335ec;
      goto LAB_056336b4;
    }
    uVar8 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar8 < 0) {
      if (unaff_x24 == 0) goto LAB_05633884;
      uVar8 = *(uint *)(unaff_x19 + 0x24);
      if (uVar8 == *(uint *)(unaff_x24 + 0x18)) {
        FUN_05633324();
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05633884;
        uVar8 = *(uint *)(unaff_x19 + 0x24);
        unaff_x24 = *(long *)(unaff_x19 + 0x18);
        iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar8 + 1;
        if (unaff_x24 == 0) goto LAB_05633884;
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = unaff_w21 / iVar2;
        }
        unaff_w25 = unaff_w21 - iVar3 * iVar2;
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar8 + 1;
      }
    }
    else {
      if (unaff_x24 == 0) goto LAB_05633884;
      if (*(uint *)(unaff_x24 + 0x18) <= uVar8) goto LAB_05633844;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x24 + (ulong)uVar8 * 0x28 + 0x24);
    }
    if (*(uint *)(unaff_x24 + 0x18) <= uVar8) goto LAB_05633844;
    *(int *)(unaff_x24 + (long)(int)uVar8 * 0x28 + 0x20) = unaff_w21;
    uStack00000000000000d8 = unaff_x20[1];
    uStack00000000000000d0 = *unaff_x20;
    uStack00000000000000e8 = unaff_x20[3];
    uStack00000000000000e0 = unaff_x20[2];
    if (uVar8 < *(uint *)(unaff_x24 + 0x18)) {
      lVar11 = (long)(int)uVar8;
      lVar9 = unaff_x24 + lVar11 * 0x28;
      *(undefined8 *)(lVar9 + 0x40) = uStack00000000000000e8;
      *(undefined8 *)(lVar9 + 0x38) = uStack00000000000000e0;
      *(undefined8 *)(lVar9 + 0x30) = uStack00000000000000d8;
      *(undefined8 *)(lVar9 + 0x28) = uStack00000000000000d0;
      if (uVar8 < *(uint *)(unaff_x24 + 0x18)) {
        thunk_FUN_0333a630(unaff_x24 + lVar11 * 0x28 + 0x40,0);
        lVar9 = *(long *)(unaff_x19 + 0x10);
        if (lVar9 == 0) goto LAB_05633884;
        if ((unaff_w25 < *(uint *)(lVar9 + 0x18)) && (uVar8 < *(uint *)(unaff_x24 + 0x18))) {
          piVar10 = (int *)(lVar9 + (long)(int)unaff_w25 * 4 + 0x20);
          *(int *)(unaff_x24 + lVar11 * 0x28 + 0x24) = *piVar10 + -1;
          *piVar10 = uVar8 + 1;
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
          *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
          return 1;
        }
      }
    }
  }
LAB_05633844:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
code_r0x056335ec:
  lVar9 = unaff_x24 + unaff_x27 * unaff_x28;
  in_stack_00000048 = *(undefined8 *)(lVar9 + 0x40);
  in_stack_00000040 = *(undefined8 *)(lVar9 + 0x38);
  in_stack_00000038 = *(undefined8 *)(lVar9 + 0x30);
  in_stack_00000030 = *(undefined8 *)(lVar9 + 0x28);
  unaff_x23 = *(long **)(unaff_x19 + 0x30);
  in_stack_00000018 = unaff_x20[1];
  in_stack_00000010 = *unaff_x20;
  in_stack_00000028 = unaff_x20[3];
  in_stack_00000020 = unaff_x20[2];
  if (unaff_x23 == (long *)0x0) {
LAB_05633884:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_032934b8(lVar9);
  }
  param_1 = *unaff_x23;
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar9) {
        param_1 = param_1 + (long)*piVar10 * 0x10;
        goto code_r0x05633680;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_032937ac(unaff_x23,lVar9,0);
  goto LAB_05633684;
}


