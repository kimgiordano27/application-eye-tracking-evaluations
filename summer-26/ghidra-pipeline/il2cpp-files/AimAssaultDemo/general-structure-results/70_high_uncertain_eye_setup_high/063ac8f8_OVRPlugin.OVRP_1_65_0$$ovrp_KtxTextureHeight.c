/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureHeight
ENTRY_POINT: 063ac8f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureHeight(void)

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
  long unaff_x22;
  long *unaff_x24;
  int iVar10;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  FUN_0632ed40();
  plVar4 = (long *)FUN_063adc4c();
  puVar1 = PTR_DAT_07db6c00;
  if (unaff_x25 != (long *)0x0) {
    lVar6 = *unaff_x25;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto OVRPlugin_Ktx__TranscodeKtxTexture;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
OVRPlugin_Ktx__TranscodeKtxTexture:
    (*(code *)*puVar5)();
    if (unaff_x24 != (long *)0x0) {
      uVar8 = (**(code **)(*unaff_x24 + 0x288))();
      iVar10 = 0;
      while (((uVar8 & 1) != 0 && (uVar8 = (**(code **)(*unaff_x24 + 0x238))(), (int)uVar8 != 0xe)))
      {
        FUN_063ab330();
        iVar10 = iVar10 + 1;
        uVar8 = (**(code **)(*unaff_x24 + 0x288))();
      }
      if (*(char *)(unaff_x22 + 0x18) != '\0') {
        FUN_063ade08(uVar8,plVar4);
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
              goto LAB_063aca78;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar4,lVar6,2);
LAB_063aca78:
        lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (lVar6 != 0) {
          FUN_049cf910(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_07db6d30);
          puVar3 = PTR_DAT_07db6d50;
          puVar2 = PTR_DAT_07db6d20;
          uStack0000000000000028 = in_stack_00000010;
          uStack0000000000000020 = in_stack_00000008;
          uStack0000000000000030 = in_stack_00000018;
          do {
            do {
              uVar8 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar2);
              if ((uVar8 & 1) == 0) goto LAB_063acb58;
              plVar4 = (long *)thunk_FUN_037787d0(uStack0000000000000030,*(undefined8 *)puVar3);
            } while (plVar4 == (long *)0x0);
            lVar7 = *plVar4;
            lVar6 = *(long *)puVar1;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_063acb30;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar4,lVar6,1);
LAB_063acb30:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            uVar8 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
          } while ((uVar8 & 1) == 0);
          FUN_063ade08(uVar8,plVar4);
LAB_063acb58:
          FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


