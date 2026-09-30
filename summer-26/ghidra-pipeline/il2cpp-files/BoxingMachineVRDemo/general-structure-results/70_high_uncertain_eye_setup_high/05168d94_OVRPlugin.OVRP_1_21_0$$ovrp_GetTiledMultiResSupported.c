/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetTiledMultiResSupported
ENTRY_POINT: 05168d94
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetTiledMultiResSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  int iVar10;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_02d6084c(PTR_DAT_06782518);
  FUN_02d6084c(PTR_DAT_06782540);
  FUN_02d6084c(PTR_DAT_067823f0);
  FUN_02d6084c(PTR_DAT_06782520);
  *(undefined1 *)(unaff_x21 + 0xe73) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  FUN_050eb21c();
  plVar4 = (long *)FUN_0516a128();
  puVar1 = PTR_DAT_067823f0;
  if (unaff_x25 != (long *)0x0) {
    lVar6 = *unaff_x25;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_05168e58;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05168e58:
    (*(code *)*puVar5)();
    if (unaff_x24 != (long *)0x0) {
      uVar8 = (**(code **)(*unaff_x24 + 0x288))();
      iVar10 = 0;
      while (((uVar8 & 1) != 0 && (uVar8 = (**(code **)(*unaff_x24 + 0x238))(), (int)uVar8 != 0xe)))
      {
        FUN_0516780c();
        iVar10 = iVar10 + 1;
        uVar8 = (**(code **)(*unaff_x24 + 0x288))();
      }
      if (*(char *)(unaff_x22 + 0x18) != '\0') {
        FUN_0516a2e4(uVar8,plVar4);
      }
      if ((iVar10 != 1) || (*(char *)(unaff_x22 + 0x18) == '\0')) {
        return;
      }
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        lVar6 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_05168f54;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,lVar6,2);
LAB_05168f54:
        lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (lVar6 != 0) {
          FUN_03aaceb0(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_06782520);
          puVar3 = PTR_DAT_06782540;
          puVar2 = PTR_DAT_06782510;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          do {
            do {
              uVar8 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar2);
              if ((uVar8 & 1) == 0) goto LAB_05169034;
              plVar4 = (long *)thunk_FUN_02d9d438(in_stack_00000030,*(undefined8 *)puVar3);
            } while (plVar4 == (long *)0x0);
            lVar7 = *plVar4;
            lVar6 = *(long *)puVar1;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_0516900c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,lVar6,1);
LAB_0516900c:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            uVar8 = thunk_FUN_04e8bd3c();
          } while ((uVar8 & 1) == 0);
          FUN_0516a2e4(uVar8,plVar4);
LAB_05169034:
          FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


