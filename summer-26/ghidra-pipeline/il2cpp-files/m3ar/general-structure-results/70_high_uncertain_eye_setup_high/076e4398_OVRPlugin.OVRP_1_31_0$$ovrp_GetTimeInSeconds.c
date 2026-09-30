/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_GetTimeInSeconds
ENTRY_POINT: 076e4398
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_31_0__ovrp_GetTimeInSeconds
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
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  float in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  float fStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  if ((DAT_095482be & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fae348);
    FUN_0403162c(PTR_DAT_08fae380);
    DAT_095482be = 1;
  }
  FUN_076e3c48(&stack0x00000020 + 4,param_4);
  puVar1 = PTR_DAT_08fae348;
  plVar9 = *(long **)(param_4 + 0x138);
  in_stack_00000040 = in_stack_00000020._4_8_;
  uStack0000000000000054 = in_stack_00000038;
  fStack000000000000004c = in_stack_00000030;
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    fVar12 = in_stack_00000030;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fae348) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_076e4448;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08fae348,1);
LAB_076e4448:
    fVar10 = (float)(*(code *)*puVar4)(plVar9,0,puVar4[1]);
    plVar9 = *(long **)(param_4 + 0x138);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      fVar13 = fVar12;
      fVar14 = param_3;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076e44b8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar9,lVar5,0);
LAB_076e44b8:
      iVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_076e4518;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar9,lVar5,1);
LAB_076e4518:
      fVar11 = (float)(*(code *)*puVar4)(plVar9,iVar2 + -1,puVar4[1]);
      if (param_5 != 0) {
        uStack0000000000000014 = uStack0000000000000054;
        fStack000000000000000c = fStack000000000000004c;
        uVar7 = FUN_076e33fc((param_3 - fVar14) * (param_3 - fVar14) +
                             (fVar10 - fVar11) * (fVar10 - fVar11) +
                             (fVar12 - fVar13) * (fVar12 - fVar13),param_5);
        if ((uVar7 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_054b609c(param_4,param_5,*(undefined8 *)PTR_DAT_08fae380);
        }
        return uVar3 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


