/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogInfo
ENTRY_POINT: 05633538
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_Logger__LogInfo(long param_1,undefined8 *param_2,long param_3)

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
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0563324c(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70));
  }
  in_stack_000000d8 = param_2[1];
  in_stack_000000d0 = *param_2;
  in_stack_000000e8 = param_2[3];
  in_stack_000000e0 = param_2[2];
  iVar2 = FUN_05635774(param_1,&stack0x000000d0,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) goto LAB_05633884;
  uVar14 = *(uint *)(lVar5 + 0x18);
  iVar13 = 0;
  if (uVar14 != 0) {
    iVar13 = iVar2 / (int)uVar14;
  }
  uVar12 = iVar2 - iVar13 * uVar14;
  if (uVar12 < uVar14) {
    lVar11 = *(long *)(param_1 + 0x18);
    uVar14 = *(int *)(lVar5 + (long)(int)uVar12 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      if (lVar11 == 0) goto LAB_05633884;
      uVar6 = *(undefined8 *)(lVar11 + 0x18);
      iVar13 = 0;
      do {
        if ((uint)uVar6 <= uVar14) goto LAB_05633844;
        if (*(int *)(lVar11 + (ulong)uVar14 * 0x28 + 0x20) == iVar2) {
          lVar5 = lVar11 + (ulong)uVar14 * 0x28;
          uVar15 = *(undefined8 *)(lVar5 + 0x40);
          uVar6 = *(undefined8 *)(lVar5 + 0x38);
          uVar19 = *(undefined8 *)(lVar5 + 0x30);
          uVar17 = *(undefined8 *)(lVar5 + 0x28);
          plVar10 = *(long **)(param_1 + 0x30);
          uVar20 = param_2[1];
          uVar18 = *param_2;
          uVar16 = param_2[3];
          uVar4 = param_2[2];
          if (plVar10 == (long *)0x0) goto LAB_05633884;
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
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
                goto LAB_05633684;
              }
              uVar9 = uVar9 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_032937ac(plVar10,lVar5,0);
LAB_05633684:
          in_stack_000000b0 = uVar18;
          in_stack_000000b8 = uVar20;
          in_stack_000000c0 = uVar4;
          in_stack_000000c8 = uVar16;
          in_stack_000000d0 = uVar17;
          in_stack_000000d8 = uVar19;
          in_stack_000000e0 = uVar6;
          in_stack_000000e8 = uVar15;
          uVar9 = (*(code *)*puVar3)(plVar10,&stack0x000000d0,&stack0x000000b0,puVar3[1]);
          if ((uVar9 & 1) != 0) {
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
          FUN_032d5dbc(uVar6,param_3);
        }
        if ((uint)uVar6 <= uVar14) goto LAB_05633844;
        uVar14 = *(uint *)(lVar11 + (ulong)uVar14 * 0x28 + 0x24);
        iVar13 = iVar13 + 1;
      } while (-1 < (int)uVar14);
    }
    uVar14 = *(uint *)(param_1 + 0x28);
    if ((int)uVar14 < 0) {
      if (lVar11 == 0) goto LAB_05633884;
      uVar14 = *(uint *)(param_1 + 0x24);
      if (uVar14 == *(uint *)(lVar11 + 0x18)) {
        FUN_05633324(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1a8));
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_05633884;
        uVar14 = *(uint *)(param_1 + 0x24);
        lVar11 = *(long *)(param_1 + 0x18);
        iVar13 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
        *(uint *)(param_1 + 0x24) = uVar14 + 1;
        if (lVar11 == 0) goto LAB_05633884;
        iVar1 = 0;
        if (iVar13 != 0) {
          iVar1 = iVar2 / iVar13;
        }
        uVar12 = iVar2 - iVar1 * iVar13;
      }
      else {
        *(uint *)(param_1 + 0x24) = uVar14 + 1;
      }
    }
    else {
      if (lVar11 == 0) goto LAB_05633884;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_05633844;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar11 + (ulong)uVar14 * 0x28 + 0x24);
    }
    if (uVar14 < *(uint *)(lVar11 + 0x18)) {
      *(int *)(lVar11 + (long)(int)uVar14 * 0x28 + 0x20) = iVar2;
      in_stack_000000d8 = param_2[1];
      in_stack_000000d0 = *param_2;
      in_stack_000000e8 = param_2[3];
      in_stack_000000e0 = param_2[2];
      if (uVar14 < *(uint *)(lVar11 + 0x18)) {
        lVar7 = (long)(int)uVar14;
        lVar5 = lVar11 + lVar7 * 0x28;
        *(undefined8 *)(lVar5 + 0x40) = in_stack_000000e8;
        *(undefined8 *)(lVar5 + 0x38) = in_stack_000000e0;
        *(undefined8 *)(lVar5 + 0x30) = in_stack_000000d8;
        *(undefined8 *)(lVar5 + 0x28) = in_stack_000000d0;
        if (uVar14 < *(uint *)(lVar11 + 0x18)) {
          thunk_FUN_0333a630(lVar11 + lVar7 * 0x28 + 0x40,0);
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 == 0) {
LAB_05633884:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if ((uVar12 < *(uint *)(lVar5 + 0x18)) && (uVar14 < *(uint *)(lVar11 + 0x18))) {
            piVar8 = (int *)(lVar5 + (long)(int)uVar12 * 4 + 0x20);
            *(int *)(lVar11 + lVar7 * 0x28 + 0x24) = *piVar8 + -1;
            *piVar8 = uVar14 + 1;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
            return 1;
          }
        }
      }
    }
  }
LAB_05633844:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


