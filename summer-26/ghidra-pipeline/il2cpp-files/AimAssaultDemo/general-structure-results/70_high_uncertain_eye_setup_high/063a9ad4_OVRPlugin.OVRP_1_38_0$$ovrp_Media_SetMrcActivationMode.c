/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcActivationMode
ENTRY_POINT: 063a9ad4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcActivationMode(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w9;
  int *piVar9;
  int iVar10;
  long *unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  lVar4 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  puVar2 = PTR_DAT_07db6d20;
  puVar1 = PTR_DAT_07db6d18;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_049cf910(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_07db6d30);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    uVar5 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar2);
    plVar3 = in_stack_00000030;
    if ((uVar5 & 1) == 0) {
      iVar10 = 5;
      goto LAB_063a9c14;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar4 = *in_stack_00000030;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_063a9b88;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(in_stack_00000030,*unaff_x22,1);
LAB_063a9b88:
    uVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_063a9be8;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c();
LAB_063a9be8:
    uVar8 = (*(code *)*puVar6)();
    uVar5 = FUN_060bf954(uVar7,uVar8,0);
  } while ((uVar5 & 1) == 0);
  iVar10 = 4;
LAB_063a9c14:
  FUN_05d64e94(&stack0x00000020,*(undefined8 *)puVar1);
  return iVar10 != 4;
}


