/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeHeight
ENTRY_POINT: 05166234
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeHeight(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  byte bVar11;
  int iVar12;
  long unaff_x21;
  undefined8 *puVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  puVar4 = PTR_DAT_06782550;
  puVar3 = PTR_DAT_06782508;
  puVar2 = PTR_DAT_067823f0;
  puVar1 = PTR_DAT_0676bc98;
  puVar13 = *(undefined8 **)(unaff_x21 + 0x510);
  FUN_03aaceb0(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    do {
      uVar6 = FUN_04a7a4a0(&stack0x00000020,*puVar13);
      plVar5 = in_stack_00000030;
      if ((uVar6 & 1) == 0) {
        bVar11 = 0;
        iVar12 = 6;
        goto LAB_051663e8;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar9 = *in_stack_00000030;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 8) * 0x10 + 0x138);
            goto LAB_051662e0;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*(long *)puVar2,8);
LAB_051662e0:
      uVar8 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      uVar6 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)puVar4,0);
    } while ((uVar6 & 1) != 0);
    lVar9 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_0516634c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,8);
LAB_0516634c:
    uVar8 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    uVar6 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)puVar1,0);
    if ((uVar6 & 1) == 0) break;
    lVar9 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_051663b8;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,5);
LAB_051663b8:
    uVar8 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    uVar6 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)puVar4,0);
  } while ((uVar6 & 1) != 0);
  bVar11 = 1;
  iVar12 = 5;
LAB_051663e8:
  FUN_04a7a49c(&stack0x00000020,*(undefined8 *)puVar3);
  return bVar11 & iVar12 == 5;
}


