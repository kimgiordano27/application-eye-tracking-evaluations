/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.ShareAndLocalizeParams$$ToString
ENTRY_POINT: 056343c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MultiplayerBlocks_Colocation_ShareAndLocalizeParams__ToString
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
               undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  
  uStack00000000000000c8 = param_3._8_8_;
  uStack00000000000000c0 = param_3._0_8_;
  uStack00000000000000d8 = param_2._8_8_;
  uStack00000000000000d0 = param_2._0_8_;
  iVar3 = FUN_05635774(param_4,param_5,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xb0));
  lVar6 = *(long *)(param_4 + 0x10);
  if (lVar6 == 0) {
LAB_0563458c:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  iVar13 = 0;
  if (uVar1 != 0) {
    iVar13 = iVar3 / (int)uVar1;
  }
  uVar2 = iVar3 - iVar13 * uVar1;
  if (uVar1 <= uVar2) {
LAB_0563454c:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  uVar1 = *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar1) {
    lVar6 = *(long *)(param_4 + 0x18);
    if (lVar6 == 0) goto LAB_0563458c;
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    iVar13 = 0;
    do {
      if ((uint)uVar7 <= uVar1) goto LAB_0563454c;
      if (*(int *)(lVar6 + (ulong)uVar1 * 0x28 + 0x20) == iVar3) {
        lVar8 = lVar6 + (ulong)uVar1 * 0x28;
        uVar14 = *(undefined8 *)(lVar8 + 0x40);
        uVar7 = *(undefined8 *)(lVar8 + 0x38);
        uVar18 = *(undefined8 *)(lVar8 + 0x30);
        uVar16 = *(undefined8 *)(lVar8 + 0x28);
        plVar12 = *(long **)(param_4 + 0x30);
        uVar19 = unaff_x20[1];
        uVar17 = *unaff_x20;
        uVar15 = unaff_x20[3];
        uVar5 = unaff_x20[2];
        if (plVar12 == (long *)0x0) goto LAB_0563458c;
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_032934b8(lVar8);
        }
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_056344d4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac(plVar12,lVar8,0);
LAB_056344d4:
        in_stack_000000a0 = uVar17;
        in_stack_000000a8 = uVar19;
        in_stack_000000b0 = uVar5;
        in_stack_000000b8 = uVar15;
        uStack00000000000000c0 = uVar16;
        uStack00000000000000c8 = uVar18;
        uStack00000000000000d0 = uVar7;
        uStack00000000000000d8 = uVar14;
        uVar10 = (*(code *)*puVar4)(plVar12,&stack0x000000c0,&stack0x000000a0,puVar4[1]);
        if ((uVar10 & 1) != 0) {
          return uVar1;
        }
        uVar7 = *(undefined8 *)(lVar6 + 0x18);
      }
      if ((int)(uint)uVar7 <= iVar13) {
        thunk_FUN_032e1da0(PTR_DAT_07279578);
        uVar7 = thunk_FUN_032a56a0();
        uVar5 = thunk_FUN_032e1da0(PTR_DAT_07282490);
        FUN_0592371c(uVar7,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar7);
      }
      if ((uint)uVar7 <= uVar1) goto LAB_0563454c;
      uVar1 = *(uint *)(lVar6 + (ulong)uVar1 * 0x28 + 0x24);
      iVar13 = iVar13 + 1;
    } while (-1 < (int)uVar1);
  }
  return 0xffffffff;
}


