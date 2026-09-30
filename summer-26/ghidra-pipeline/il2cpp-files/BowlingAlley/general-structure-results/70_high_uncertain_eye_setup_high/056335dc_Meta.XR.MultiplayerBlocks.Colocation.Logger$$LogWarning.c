/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogWarning
ENTRY_POINT: 056335dc
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


undefined8 Meta_XR_MultiplayerBlocks_Colocation_Logger__LogWarning(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long in_x9;
  ulong uVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *plVar12;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  do {
    if (*(int *)(in_x9 + 0x20) == unaff_w21) {
      lVar8 = unaff_x24 + (unaff_x27 & 0xffffffff) * unaff_x28;
      uVar13 = *(undefined8 *)(lVar8 + 0x40);
      uVar5 = *(undefined8 *)(lVar8 + 0x38);
      uVar17 = *(undefined8 *)(lVar8 + 0x30);
      uVar15 = *(undefined8 *)(lVar8 + 0x28);
      plVar12 = *(long **)(unaff_x19 + 0x30);
      uVar18 = unaff_x20[1];
      uVar16 = *unaff_x20;
      uVar14 = unaff_x20[3];
      uVar6 = unaff_x20[2];
      if (plVar12 == (long *)0x0) goto LAB_05633884;
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_032934b8(lVar8);
      }
      lVar9 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05633684;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar12,lVar8,0);
LAB_05633684:
      in_stack_000000b0 = uVar16;
      in_stack_000000b8 = uVar18;
      in_stack_000000c0 = uVar6;
      in_stack_000000c8 = uVar14;
      in_stack_000000d0 = uVar15;
      in_stack_000000d8 = uVar17;
      in_stack_000000e0 = uVar5;
      in_stack_000000e8 = uVar13;
      uVar11 = (*(code *)*puVar4)(plVar12,&stack0x000000d0,&stack0x000000b0,puVar4[1]);
      if ((uVar11 & 1) != 0) {
        return 0;
      }
      param_1 = *(undefined8 *)(unaff_x24 + 0x18);
    }
    uVar7 = (uint)param_1;
    if ((int)uVar7 <= unaff_w26) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar5 = thunk_FUN_032a56a0();
      uVar6 = thunk_FUN_032e1da0(PTR_DAT_07282490);
      FUN_0592371c(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar5);
    }
    if (uVar7 <= (uint)unaff_x27) goto LAB_05633844;
    uVar1 = *(uint *)(unaff_x24 + (unaff_x27 & 0xffffffff) * unaff_x28 + 0x24);
    unaff_x27 = (ulong)uVar1;
    unaff_w26 = unaff_w26 + 1;
    if ((int)uVar1 < 0) {
      uVar7 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar7 < 0) {
        if (unaff_x24 == 0) goto LAB_05633884;
        uVar7 = *(uint *)(unaff_x19 + 0x24);
        if (uVar7 == *(uint *)(unaff_x24 + 0x18)) {
          FUN_05633324();
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05633884;
          uVar7 = *(uint *)(unaff_x19 + 0x24);
          unaff_x24 = *(long *)(unaff_x19 + 0x18);
          iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          *(uint *)(unaff_x19 + 0x24) = uVar7 + 1;
          if (unaff_x24 == 0) goto LAB_05633884;
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = unaff_w21 / iVar2;
          }
          unaff_w25 = unaff_w21 - iVar3 * iVar2;
        }
        else {
          *(uint *)(unaff_x19 + 0x24) = uVar7 + 1;
        }
      }
      else {
        if (unaff_x24 == 0) goto LAB_05633884;
        if (*(uint *)(unaff_x24 + 0x18) <= uVar7) goto LAB_05633844;
        *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x24 + (ulong)uVar7 * 0x28 + 0x24);
      }
      if (uVar7 < *(uint *)(unaff_x24 + 0x18)) {
        *(int *)(unaff_x24 + (long)(int)uVar7 * 0x28 + 0x20) = unaff_w21;
        in_stack_000000d8 = unaff_x20[1];
        in_stack_000000d0 = *unaff_x20;
        in_stack_000000e8 = unaff_x20[3];
        in_stack_000000e0 = unaff_x20[2];
        if (uVar7 < *(uint *)(unaff_x24 + 0x18)) {
          lVar9 = (long)(int)uVar7;
          lVar8 = unaff_x24 + lVar9 * 0x28;
          *(undefined8 *)(lVar8 + 0x40) = in_stack_000000e8;
          *(undefined8 *)(lVar8 + 0x38) = in_stack_000000e0;
          *(undefined8 *)(lVar8 + 0x30) = in_stack_000000d8;
          *(undefined8 *)(lVar8 + 0x28) = in_stack_000000d0;
          if (uVar7 < *(uint *)(unaff_x24 + 0x18)) {
            thunk_FUN_0333a630(unaff_x24 + lVar9 * 0x28 + 0x40,0);
            lVar8 = *(long *)(unaff_x19 + 0x10);
            if (lVar8 == 0) {
LAB_05633884:
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if ((unaff_w25 < *(uint *)(lVar8 + 0x18)) && (uVar7 < *(uint *)(unaff_x24 + 0x18))) {
              piVar10 = (int *)(lVar8 + (long)(int)unaff_w25 * 4 + 0x20);
              *(int *)(unaff_x24 + lVar9 * 0x28 + 0x24) = *piVar10 + -1;
              *piVar10 = uVar7 + 1;
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
    }
    if (uVar7 <= uVar1) goto LAB_05633844;
    in_x9 = unaff_x24 + unaff_x27 * (unaff_x28 & 0xffffffff);
  } while( true );
}


