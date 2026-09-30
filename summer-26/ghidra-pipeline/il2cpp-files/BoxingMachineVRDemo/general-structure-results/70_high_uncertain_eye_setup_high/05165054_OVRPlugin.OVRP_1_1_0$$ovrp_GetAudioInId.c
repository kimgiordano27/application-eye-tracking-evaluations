/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioInId
ENTRY_POINT: 05165054
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


byte OVRPlugin_OVRP_1_1_0__ovrp_GetAudioInId(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  lVar7 = (*param_1)();
  puVar4 = PTR_DAT_06782580;
  puVar3 = PTR_DAT_06782550;
  puVar2 = PTR_DAT_06782510;
  puVar1 = PTR_DAT_06782508;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03aaceb0(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_06782520);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    do {
                    /* try { // try from 051650a0 to 052650e7 has its CatchHandler @ 051650a0
                       catch() { ... } // from try @ 051650a0 with catch @ 051650a0
                       catch() { ... } // from try @ 051650f8 with catch @ 051650a0
                       catch() { ... } // from try @ 0516518c with catch @ 051650a0
                       catch() { ... } // from try @ 0516520c with catch @ 051650a0 */
      uVar8 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar2);
      plVar5 = in_stack_00000030;
      if ((uVar8 & 1) == 0) {
        bVar6 = 0;
        iVar12 = 5;
        goto LAB_05165228;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *in_stack_00000030;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x21) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_05165108;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x21,1);
LAB_05165108:
      uVar10 = (*(code *)*puVar9)(plVar5,puVar9[1]);
      uVar8 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)puVar4,0);
    } while ((uVar8 & 1) == 0);
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_05165174;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x21,8);
LAB_05165174:
    uVar10 = (*(code *)*puVar9)(plVar5,puVar9[1]);
    uVar8 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)puVar3,0);
  } while ((uVar8 & 1) == 0);
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x21) {
        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
        goto LAB_051651ec;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x21,5);
LAB_051651ec:
  uVar10 = (*(code *)*puVar9)(plVar5,puVar9[1]);
  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  bVar6 = FUN_056705b0(uVar10,0);
  iVar12 = 4;
LAB_05165228:
  FUN_04a7a49c(&stack0x00000020,*(undefined8 *)puVar1);
  return bVar6 & iVar12 == 4;
}


