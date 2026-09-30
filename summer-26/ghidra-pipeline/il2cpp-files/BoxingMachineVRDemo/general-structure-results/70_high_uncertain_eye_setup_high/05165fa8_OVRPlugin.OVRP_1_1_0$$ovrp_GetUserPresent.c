/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserPresent
ENTRY_POINT: 05165fa8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool OVRPlugin_OVRP_1_1_0__ovrp_GetUserPresent(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *in_x10;
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
  
  lVar4 = (**(code **)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138))();
  puVar2 = PTR_DAT_06782510;
  puVar1 = PTR_DAT_06782508;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03aaceb0(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_06782520);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    uVar5 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar2);
    plVar3 = in_stack_00000030;
    if ((uVar5 & 1) == 0) {
      iVar10 = 5;
      goto OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *in_stack_00000030;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_05166064;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x22,1);
LAB_05166064:
    uVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_051660c4;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_051660c4:
    uVar8 = (*(code *)*puVar6)();
    uVar5 = FUN_04e8c024(uVar7,uVar8,0);
  } while ((uVar5 & 1) == 0);
  iVar10 = 4;
OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth:
  FUN_04a7a49c(&stack0x00000020,*(undefined8 *)puVar1);
  return iVar10 != 4;
}


