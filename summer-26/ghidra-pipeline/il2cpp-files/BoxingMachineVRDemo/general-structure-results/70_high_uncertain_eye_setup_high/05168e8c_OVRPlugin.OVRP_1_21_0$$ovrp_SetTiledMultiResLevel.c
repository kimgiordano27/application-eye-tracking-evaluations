/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_SetTiledMultiResLevel
ENTRY_POINT: 05168e8c
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


void OVRPlugin_OVRP_1_21_0__ovrp_SetTiledMultiResLevel(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while (iVar3 = (**(code **)(param_1 + 0x238))(), iVar3 != 0xe) {
    FUN_0516780c();
    unaff_w25 = unaff_w25 + 1;
    uVar4 = (**(code **)(*unaff_x24 + 0x288))();
    if ((uVar4 & 1) == 0) break;
    param_1 = *unaff_x24;
  }
  if (*(char *)(unaff_x22 + 0x18) != '\0') {
    FUN_0516a2e4();
  }
  if ((unaff_w25 != 1) || (*(char *)(unaff_x22 + 0x18) == '\0')) {
    return;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar7 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_05168f54;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05168f54:
    lVar7 = (*(code *)*puVar5)();
    if (lVar7 != 0) {
      FUN_03aaceb0(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_06782520);
      puVar2 = PTR_DAT_06782540;
      puVar1 = PTR_DAT_06782510;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        do {
          uVar4 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar1);
          if ((uVar4 & 1) == 0) goto LAB_05169034;
          plVar6 = (long *)thunk_FUN_02d9d438(in_stack_00000030,*(undefined8 *)puVar2);
        } while (plVar6 == (long *)0x0);
        lVar7 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0516900c;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x26,1);
LAB_0516900c:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
        uVar4 = thunk_FUN_04e8bd3c();
      } while ((uVar4 & 1) == 0);
      FUN_0516a2e4(uVar4,plVar6);
LAB_05169034:
      FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


