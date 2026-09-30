/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilSupported
ENTRY_POINT: 05168f08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilSupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_05168f54;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05168f54:
  lVar4 = (*(code *)*puVar3)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03aaceb0(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_06782520);
  puVar2 = PTR_DAT_06782540;
  puVar1 = PTR_DAT_06782510;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    do {
      uVar6 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar1);
      if ((uVar6 & 1) == 0) goto LAB_05169034;
      plVar5 = (long *)thunk_FUN_02d9d438(in_stack_00000030,*(undefined8 *)puVar2);
    } while (plVar5 == (long *)0x0);
    lVar4 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0516900c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x26,1);
LAB_0516900c:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
    uVar6 = thunk_FUN_04e8bd3c();
  } while ((uVar6 & 1) == 0);
  FUN_0516a2e4(uVar6,plVar5);
LAB_05169034:
  FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
  return;
}


