/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 051661d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  byte bVar12;
  long unaff_x19;
  long unaff_x20;
  int iVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x510));
  FUN_02d6084c(PTR_DAT_06782518);
  FUN_02d6084c(PTR_DAT_067823f0);
  FUN_02d6084c(PTR_DAT_06782520);
  FUN_02d6084c(PTR_DAT_06782550);
  FUN_02d6084c(PTR_DAT_0676bc98);
  *(undefined1 *)(unaff_x20 + 0xe7b) = 1;
  puVar5 = PTR_DAT_06782550;
  puVar4 = PTR_DAT_06782510;
  puVar3 = PTR_DAT_06782508;
  puVar2 = PTR_DAT_067823f0;
  puVar1 = PTR_DAT_0676bc98;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03aaceb0(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    do {
      uVar7 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar4);
      plVar6 = in_stack_00000030;
      if ((uVar7 & 1) == 0) {
        bVar12 = 0;
        iVar13 = 6;
        goto LAB_051663e8;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar10 = *in_stack_00000030;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_051662e0;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*(long *)puVar2,8);
LAB_051662e0:
      uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      uVar7 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)puVar5,0);
    } while ((uVar7 & 1) != 0);
    lVar10 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_0516634c;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,8);
LAB_0516634c:
    uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    uVar7 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)puVar1,0);
    if ((uVar7 & 1) == 0) break;
    lVar10 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_051663b8;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,5);
LAB_051663b8:
    uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    uVar7 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)puVar5,0);
  } while ((uVar7 & 1) != 0);
  bVar12 = 1;
  iVar13 = 5;
LAB_051663e8:
  FUN_04a7a49c(&stack0x00000020,*(undefined8 *)puVar3);
  return bVar12 & iVar13 == 5;
}


