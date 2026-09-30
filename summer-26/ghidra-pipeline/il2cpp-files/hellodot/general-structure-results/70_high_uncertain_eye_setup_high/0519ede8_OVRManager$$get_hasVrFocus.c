/*
FUNCTION_NAME: OVRManager$$get_hasVrFocus
ENTRY_POINT: 0519ede8
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_hasVrFocus
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  if ((*(byte *)(unaff_x21 + 0x21a) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608400);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608498);
    *(undefined1 *)(unaff_x21 + 0x21a) = 1;
  }
  FUN_0519e3e8(&stack0x00000020,param_4);
  puVar1 = PTR_DAT_06608400;
  in_stack_00000048 = uStack0000000000000028;
  in_stack_00000040 = in_stack_00000020;
  uStack0000000000000054 = uStack0000000000000034;
  in_stack_00000050 = uStack0000000000000030;
  plVar9 = *(long **)(param_4 + 0x128);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06608400) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          fVar12 = fStack000000000000002c;
          goto LAB_0519ee94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_06608400,1);
    fVar12 = fStack000000000000002c;
LAB_0519ee94:
    fVar10 = (float)(*(code *)*puVar4)(plVar9,0,puVar4[1]);
    plVar9 = *(long **)(param_4 + 0x128);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      fVar14 = param_3;
      fVar13 = fVar12;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0519ef04;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar5,0);
LAB_0519ef04:
      iVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0519ef64;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar5,1);
LAB_0519ef64:
      fVar11 = (float)(*(code *)*puVar4)(plVar9,iVar2 + -1,puVar4[1]);
      uStack0000000000000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000030 = in_stack_00000050;
      if (param_5 != 0) {
        uStack0000000000000014 = uStack0000000000000054;
        uVar7 = FUN_0519de2c((param_3 - fVar14) * (param_3 - fVar14) +
                             (fVar10 - fVar11) * (fVar10 - fVar11) +
                             (fVar12 - fVar13) * (fVar12 - fVar13),param_5);
        if ((uVar7 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_036c49a0(param_4,param_5,*(undefined8 *)PTR_DAT_06608498);
        }
        return uVar3 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


