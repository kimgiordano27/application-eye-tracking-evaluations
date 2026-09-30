/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetTiledMultiResLevel
ENTRY_POINT: 05168e10
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


void OVRPlugin_OVRP_1_21_0__ovrp_GetTiledMultiResLevel(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long in_x9;
  int *piVar8;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  int iVar9;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar8 + 7) * 0x10 + 0x138);
        goto LAB_05168e58;
      }
      in_x9 = in_x9 + -1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05168e58:
  (*(code *)*puVar4)();
  if (unaff_x24 != (long *)0x0) {
    uVar5 = (**(code **)(*unaff_x24 + 0x288))();
    iVar9 = 0;
    while (((uVar5 & 1) != 0 && (iVar3 = (**(code **)(*unaff_x24 + 0x238))(), iVar3 != 0xe))) {
      FUN_0516780c();
      iVar9 = iVar9 + 1;
      uVar5 = (**(code **)(*unaff_x24 + 0x288))();
    }
    if (*(char *)(unaff_x22 + 0x18) != '\0') {
      FUN_0516a2e4();
    }
    if ((iVar9 != 1) || (*(char *)(unaff_x22 + 0x18) == '\0')) {
      return;
    }
    if (unaff_x21 != (long *)0x0) {
      lVar7 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_05168f54;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05168f54:
      lVar7 = (*(code *)*puVar4)();
      if (lVar7 != 0) {
        FUN_03aaceb0(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_06782520);
        puVar2 = PTR_DAT_06782540;
        puVar1 = PTR_DAT_06782510;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        do {
          do {
            uVar5 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar1);
            if ((uVar5 & 1) == 0) goto LAB_05169034;
            plVar6 = (long *)thunk_FUN_02d9d438(in_stack_00000030,*(undefined8 *)puVar2);
          } while (plVar6 == (long *)0x0);
          lVar7 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_0516900c;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x26,1);
LAB_0516900c:
          (*(code *)*puVar4)(plVar6,puVar4[1]);
          uVar5 = thunk_FUN_04e8bd3c();
        } while ((uVar5 & 1) == 0);
        FUN_0516a2e4(uVar5,plVar6);
LAB_05169034:
        FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


