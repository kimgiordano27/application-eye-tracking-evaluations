/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<>c__DisplayClass24_0$$<ShareAnchorsWithUser>b__0
ENTRY_POINT: 05634ce4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0__<ShareAnchorsWithUser>b__0
          (int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  uint *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  long *plVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 == 0) goto LAB_05634ff0;
  uVar13 = *(uint *)(lVar4 + 0x18);
  iVar12 = 0;
  if (uVar13 != 0) {
    iVar12 = param_1 / (int)uVar13;
  }
  uVar11 = param_1 - iVar12 * uVar13;
  if (uVar11 < uVar13) {
    lVar10 = *(long *)(unaff_x20 + 0x18);
    uVar13 = *(int *)(lVar4 + (long)(int)uVar11 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      if (lVar10 == 0) goto LAB_05634ff0;
      uVar5 = *(undefined8 *)(lVar10 + 0x18);
      iVar12 = 0;
      do {
        if ((uint)uVar5 <= uVar13) goto LAB_05634fb0;
        if (*(int *)(lVar10 + (ulong)uVar13 * 0x28 + 0x20) == param_1) {
          lVar4 = lVar10 + (ulong)uVar13 * 0x28;
          uVar14 = *(undefined8 *)(lVar4 + 0x40);
          uVar5 = *(undefined8 *)(lVar4 + 0x38);
          uVar18 = *(undefined8 *)(lVar4 + 0x30);
          uVar16 = *(undefined8 *)(lVar4 + 0x28);
          plVar9 = *(long **)(unaff_x20 + 0x30);
          uVar19 = unaff_x21[1];
          uVar17 = *unaff_x21;
          uVar15 = unaff_x21[3];
          uVar3 = unaff_x21[2];
          if (plVar9 == (long *)0x0) goto LAB_05634ff0;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_032934b8(lVar4);
          }
          lVar6 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_05634de0;
              }
              uVar8 = uVar8 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_032937ac(plVar9,lVar4,0);
LAB_05634de0:
          in_stack_000000b0 = uVar17;
          in_stack_000000b8 = uVar19;
          in_stack_000000c0 = uVar3;
          in_stack_000000c8 = uVar15;
          in_stack_000000d0 = uVar16;
          in_stack_000000d8 = uVar18;
          in_stack_000000e0 = uVar5;
          in_stack_000000e8 = uVar14;
          uVar8 = (*(code *)*puVar2)(plVar9,&stack0x000000d0,&stack0x000000b0,puVar2[1]);
          if ((uVar8 & 1) != 0) {
            *unaff_x19 = uVar13;
            return 0;
          }
          uVar5 = *(undefined8 *)(lVar10 + 0x18);
        }
        if ((int)(uint)uVar5 <= iVar12) {
          thunk_FUN_032e1da0(PTR_DAT_07279578);
          uVar5 = thunk_FUN_032a56a0();
          uVar3 = thunk_FUN_032e1da0(PTR_DAT_07282490);
          FUN_0592371c(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar5);
        }
        if ((uint)uVar5 <= uVar13) goto LAB_05634fb0;
        uVar13 = *(uint *)(lVar10 + (ulong)uVar13 * 0x28 + 0x24);
        iVar12 = iVar12 + 1;
      } while (-1 < (int)uVar13);
    }
    uVar13 = *(uint *)(unaff_x20 + 0x28);
    if ((int)uVar13 < 0) {
      if (lVar10 == 0) goto LAB_05634ff0;
      uVar13 = *(uint *)(unaff_x20 + 0x24);
      if (uVar13 == *(uint *)(lVar10 + 0x18)) {
        FUN_05633324();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_05634ff0;
        uVar13 = *(uint *)(unaff_x20 + 0x24);
        lVar10 = *(long *)(unaff_x20 + 0x18);
        iVar12 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
        *(uint *)(unaff_x20 + 0x24) = uVar13 + 1;
        if (lVar10 == 0) goto LAB_05634ff0;
        iVar1 = 0;
        if (iVar12 != 0) {
          iVar1 = param_1 / iVar12;
        }
        uVar11 = param_1 - iVar1 * iVar12;
      }
      else {
        *(uint *)(unaff_x20 + 0x24) = uVar13 + 1;
      }
    }
    else {
      if (lVar10 == 0) goto LAB_05634ff0;
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_05634fb0;
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(lVar10 + (ulong)uVar13 * 0x28 + 0x24);
    }
    if (uVar13 < *(uint *)(lVar10 + 0x18)) {
      *(int *)(lVar10 + (long)(int)uVar13 * 0x28 + 0x20) = param_1;
      in_stack_000000d8 = unaff_x21[1];
      in_stack_000000d0 = *unaff_x21;
      in_stack_000000e8 = unaff_x21[3];
      in_stack_000000e0 = unaff_x21[2];
      if (uVar13 < *(uint *)(lVar10 + 0x18)) {
        lVar6 = (long)(int)uVar13;
        lVar4 = lVar10 + lVar6 * 0x28;
        *(undefined8 *)(lVar4 + 0x40) = in_stack_000000e8;
        *(undefined8 *)(lVar4 + 0x38) = in_stack_000000e0;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_000000d8;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_000000d0;
        if (uVar13 < *(uint *)(lVar10 + 0x18)) {
          thunk_FUN_0333a630(lVar10 + lVar6 * 0x28 + 0x40,0);
          lVar4 = *(long *)(unaff_x20 + 0x10);
          if (lVar4 == 0) {
LAB_05634ff0:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if ((uVar11 < *(uint *)(lVar4 + 0x18)) && (uVar13 < *(uint *)(lVar10 + 0x18))) {
            piVar7 = (int *)(lVar4 + (long)(int)uVar11 * 4 + 0x20);
            *(int *)(lVar10 + lVar6 * 0x28 + 0x24) = *piVar7 + -1;
            *piVar7 = uVar13 + 1;
            *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
            *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
            *unaff_x19 = uVar13;
            return 1;
          }
        }
      }
    }
  }
LAB_05634fb0:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


