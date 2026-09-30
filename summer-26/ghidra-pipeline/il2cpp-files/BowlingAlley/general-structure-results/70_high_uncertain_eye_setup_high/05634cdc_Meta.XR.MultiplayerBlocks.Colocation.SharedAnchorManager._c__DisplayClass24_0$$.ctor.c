/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<>c__DisplayClass24_0$$.ctor
ENTRY_POINT: 05634cdc
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
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0___ctor
          (undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  uint *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  
  uStack00000000000000d8 = param_2._8_8_;
  uStack00000000000000d0 = param_2._0_8_;
  uStack00000000000000e8 = param_1._8_8_;
  uStack00000000000000e0 = param_1._0_8_;
  iVar2 = FUN_05635774();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) goto LAB_05634ff0;
  uVar14 = *(uint *)(lVar5 + 0x18);
  iVar13 = 0;
  if (uVar14 != 0) {
    iVar13 = iVar2 / (int)uVar14;
  }
  uVar12 = iVar2 - iVar13 * uVar14;
  if (uVar12 < uVar14) {
    lVar11 = *(long *)(unaff_x20 + 0x18);
    uVar14 = *(int *)(lVar5 + (long)(int)uVar12 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      if (lVar11 == 0) goto LAB_05634ff0;
      uVar6 = *(undefined8 *)(lVar11 + 0x18);
      iVar13 = 0;
      do {
        if ((uint)uVar6 <= uVar14) goto LAB_05634fb0;
        if (*(int *)(lVar11 + (ulong)uVar14 * 0x28 + 0x20) == iVar2) {
          lVar5 = lVar11 + (ulong)uVar14 * 0x28;
          uVar15 = *(undefined8 *)(lVar5 + 0x40);
          uVar6 = *(undefined8 *)(lVar5 + 0x38);
          uVar19 = *(undefined8 *)(lVar5 + 0x30);
          uVar17 = *(undefined8 *)(lVar5 + 0x28);
          plVar10 = *(long **)(unaff_x20 + 0x30);
          uVar20 = unaff_x21[1];
          uVar18 = *unaff_x21;
          uVar16 = unaff_x21[3];
          uVar4 = unaff_x21[2];
          if (plVar10 == (long *)0x0) goto LAB_05634ff0;
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_032934b8(lVar5);
          }
          lVar7 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_05634de0;
              }
              uVar9 = uVar9 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_032937ac(plVar10,lVar5,0);
LAB_05634de0:
          in_stack_000000b0 = uVar18;
          in_stack_000000b8 = uVar20;
          in_stack_000000c0 = uVar4;
          in_stack_000000c8 = uVar16;
          uStack00000000000000d0 = uVar17;
          uStack00000000000000d8 = uVar19;
          uStack00000000000000e0 = uVar6;
          uStack00000000000000e8 = uVar15;
          uVar9 = (*(code *)*puVar3)(plVar10,&stack0x000000d0,&stack0x000000b0,puVar3[1]);
          if ((uVar9 & 1) != 0) {
            *unaff_x19 = uVar14;
            return 0;
          }
          uVar6 = *(undefined8 *)(lVar11 + 0x18);
        }
        if ((int)(uint)uVar6 <= iVar13) {
          thunk_FUN_032e1da0(PTR_DAT_07279578);
          uVar6 = thunk_FUN_032a56a0();
          uVar4 = thunk_FUN_032e1da0(PTR_DAT_07282490);
          FUN_0592371c(uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar6);
        }
        if ((uint)uVar6 <= uVar14) goto LAB_05634fb0;
        uVar14 = *(uint *)(lVar11 + (ulong)uVar14 * 0x28 + 0x24);
        iVar13 = iVar13 + 1;
      } while (-1 < (int)uVar14);
    }
    uVar14 = *(uint *)(unaff_x20 + 0x28);
    if ((int)uVar14 < 0) {
      if (lVar11 == 0) goto LAB_05634ff0;
      uVar14 = *(uint *)(unaff_x20 + 0x24);
      if (uVar14 == *(uint *)(lVar11 + 0x18)) {
        FUN_05633324();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_05634ff0;
        uVar14 = *(uint *)(unaff_x20 + 0x24);
        lVar11 = *(long *)(unaff_x20 + 0x18);
        iVar13 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
        *(uint *)(unaff_x20 + 0x24) = uVar14 + 1;
        if (lVar11 == 0) goto LAB_05634ff0;
        iVar1 = 0;
        if (iVar13 != 0) {
          iVar1 = iVar2 / iVar13;
        }
        uVar12 = iVar2 - iVar1 * iVar13;
      }
      else {
        *(uint *)(unaff_x20 + 0x24) = uVar14 + 1;
      }
    }
    else {
      if (lVar11 == 0) goto LAB_05634ff0;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_05634fb0;
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(lVar11 + (ulong)uVar14 * 0x28 + 0x24);
    }
    if (uVar14 < *(uint *)(lVar11 + 0x18)) {
      *(int *)(lVar11 + (long)(int)uVar14 * 0x28 + 0x20) = iVar2;
      uStack00000000000000d8 = unaff_x21[1];
      uStack00000000000000d0 = *unaff_x21;
      uStack00000000000000e8 = unaff_x21[3];
      uStack00000000000000e0 = unaff_x21[2];
      if (uVar14 < *(uint *)(lVar11 + 0x18)) {
        lVar7 = (long)(int)uVar14;
        lVar5 = lVar11 + lVar7 * 0x28;
        *(undefined8 *)(lVar5 + 0x40) = uStack00000000000000e8;
        *(undefined8 *)(lVar5 + 0x38) = uStack00000000000000e0;
        *(undefined8 *)(lVar5 + 0x30) = uStack00000000000000d8;
        *(undefined8 *)(lVar5 + 0x28) = uStack00000000000000d0;
        if (uVar14 < *(uint *)(lVar11 + 0x18)) {
          thunk_FUN_0333a630(lVar11 + lVar7 * 0x28 + 0x40,0);
          lVar5 = *(long *)(unaff_x20 + 0x10);
          if (lVar5 == 0) {
LAB_05634ff0:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if ((uVar12 < *(uint *)(lVar5 + 0x18)) && (uVar14 < *(uint *)(lVar11 + 0x18))) {
            piVar8 = (int *)(lVar5 + (long)(int)uVar12 * 4 + 0x20);
            *(int *)(lVar11 + lVar7 * 0x28 + 0x24) = *piVar8 + -1;
            *piVar8 = uVar14 + 1;
            *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
            *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
            *unaff_x19 = uVar14;
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


