/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<>c__DisplayClass26_0$$<StopSharingAnchorsWithUser>b__0
ENTRY_POINT: 05634dcc
PROGRAM: BowlingAlley-libil2cpp.so
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
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass26_0__<StopSharingAnchorsWithUser>b__0
          (long *param_1,long param_2,undefined8 param_3)

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
  ulong unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar11;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  int unaff_w27;
  ulong unaff_x28;
  ulong unaff_x29;
  uint *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
code_r0x05634dcc:
  puVar4 = (undefined8 *)FUN_032937ac(param_1,param_2,param_3);
  param_1 = unaff_x24;
LAB_05634de0:
  in_stack_000000d8 = in_stack_00000038;
  in_stack_000000d0 = in_stack_00000030;
  in_stack_000000e8 = in_stack_00000048;
  in_stack_000000e0 = in_stack_00000040;
  in_stack_000000b8 = in_stack_00000018;
  in_stack_000000b0 = in_stack_00000010;
  in_stack_000000c8 = in_stack_00000028;
  in_stack_000000c0 = in_stack_00000020;
  uVar5 = (*(code *)*puVar4)(param_1,&stack0x000000d0,&stack0x000000b0,puVar4[1]);
  if ((uVar5 & 1) != 0) {
    *in_stack_00000008 = (uint)unaff_x28;
    return 0;
  }
LAB_05634e10:
  uVar8 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
  if ((int)uVar8 <= unaff_w27) {
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar6 = thunk_FUN_032a56a0();
    uVar7 = thunk_FUN_032e1da0(PTR_DAT_07282490);
    FUN_0592371c(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar6);
  }
  if ((uint)unaff_x28 < uVar8) {
    uVar1 = *(uint *)(unaff_x25 + unaff_x19 * unaff_x29 + 0x24);
    unaff_x19 = (ulong)uVar1;
    unaff_w27 = unaff_w27 + 1;
    if (-1 < (int)uVar1) {
      if (uVar8 <= uVar1) goto LAB_05634fb0;
      unaff_x28 = unaff_x19;
      if (*(int *)(unaff_x25 + unaff_x19 * (unaff_x29 & 0xffffffff) + 0x20) == unaff_w22)
      goto code_r0x05634d48;
      goto LAB_05634e10;
    }
    uVar8 = *(uint *)(unaff_x20 + 0x28);
    if ((int)uVar8 < 0) {
      if (unaff_x25 == 0) goto LAB_05634ff0;
      uVar8 = *(uint *)(unaff_x20 + 0x24);
      if (uVar8 == *(uint *)(unaff_x25 + 0x18)) {
        FUN_05633324();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_05634ff0;
        uVar8 = *(uint *)(unaff_x20 + 0x24);
        unaff_x25 = *(long *)(unaff_x20 + 0x18);
        iVar2 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
        *(uint *)(unaff_x20 + 0x24) = uVar8 + 1;
        if (unaff_x25 == 0) goto LAB_05634ff0;
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = unaff_w22 / iVar2;
        }
        unaff_w26 = unaff_w22 - iVar3 * iVar2;
      }
      else {
        *(uint *)(unaff_x20 + 0x24) = uVar8 + 1;
      }
    }
    else {
      if (unaff_x25 == 0) goto LAB_05634ff0;
      if (*(uint *)(unaff_x25 + 0x18) <= uVar8) goto LAB_05634fb0;
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar8 * 0x28 + 0x24);
    }
    if (*(uint *)(unaff_x25 + 0x18) <= uVar8) goto LAB_05634fb0;
    *(int *)(unaff_x25 + (long)(int)uVar8 * 0x28 + 0x20) = unaff_w22;
    in_stack_000000d8 = unaff_x21[1];
    in_stack_000000d0 = *unaff_x21;
    in_stack_000000e8 = unaff_x21[3];
    in_stack_000000e0 = unaff_x21[2];
    if (uVar8 < *(uint *)(unaff_x25 + 0x18)) {
      lVar11 = (long)(int)uVar8;
      lVar9 = unaff_x25 + lVar11 * 0x28;
      *(undefined8 *)(lVar9 + 0x40) = in_stack_000000e8;
      *(undefined8 *)(lVar9 + 0x38) = in_stack_000000e0;
      *(undefined8 *)(lVar9 + 0x30) = in_stack_000000d8;
      *(undefined8 *)(lVar9 + 0x28) = in_stack_000000d0;
      if (uVar8 < *(uint *)(unaff_x25 + 0x18)) {
        thunk_FUN_0333a630(unaff_x25 + lVar11 * 0x28 + 0x40,0);
        lVar9 = *(long *)(unaff_x20 + 0x10);
        if (lVar9 == 0) goto LAB_05634ff0;
        if ((unaff_w26 < *(uint *)(lVar9 + 0x18)) && (uVar8 < *(uint *)(unaff_x25 + 0x18))) {
          piVar10 = (int *)(lVar9 + (long)(int)unaff_w26 * 4 + 0x20);
          *(int *)(unaff_x25 + lVar11 * 0x28 + 0x24) = *piVar10 + -1;
          *piVar10 = uVar8 + 1;
          *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
          *in_stack_00000008 = uVar8;
          return 1;
        }
      }
    }
  }
LAB_05634fb0:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
code_r0x05634d48:
  lVar9 = unaff_x25 + unaff_x19 * unaff_x29;
  in_stack_00000048 = *(undefined8 *)(lVar9 + 0x40);
  in_stack_00000040 = *(undefined8 *)(lVar9 + 0x38);
  in_stack_00000038 = *(undefined8 *)(lVar9 + 0x30);
  in_stack_00000030 = *(undefined8 *)(lVar9 + 0x28);
  param_1 = *(long **)(unaff_x20 + 0x30);
  in_stack_00000018 = unaff_x21[1];
  in_stack_00000010 = *unaff_x21;
  in_stack_00000028 = unaff_x21[3];
  in_stack_00000020 = unaff_x21[2];
  if (param_1 == (long *)0x0) {
LAB_05634ff0:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  param_2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_032934b8(param_2);
  }
  lVar9 = *param_1;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar5 == 0) goto LAB_05634dc4;
  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
  while (*(long *)(piVar10 + -2) != param_2) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) goto LAB_05634dc4;
  }
  puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
  goto LAB_05634de0;
LAB_05634dc4:
  param_3 = 0;
  unaff_x24 = param_1;
  goto code_r0x05634dcc;
}


