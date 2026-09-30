/*
FUNCTION_NAME: FUN_063ac864
ENTRY_POINT: 063ac864
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_063ac864(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_0825c6b1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db6d18);
    FUN_0373b518(PTR_DAT_07db6d20);
    FUN_0373b518(PTR_DAT_07db6d28);
    FUN_0373b518(PTR_DAT_07db6d50);
    FUN_0373b518(PTR_DAT_07db6c00);
    FUN_0373b518(PTR_DAT_07db6d30);
    DAT_0825c6b1 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uVar4 = FUN_0632ed40(param_4,0);
  plVar5 = (long *)FUN_063adc4c(param_1,param_4,param_3,uVar4,param_6);
  puVar1 = PTR_DAT_07db6c00;
  if (param_5 != (long *)0x0) {
    lVar7 = *param_5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto OVRPlugin_Ktx__TranscodeKtxTexture;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(param_5,*(long *)PTR_DAT_07db6c00,7);
OVRPlugin_Ktx__TranscodeKtxTexture:
    (*(code *)*puVar6)(param_5,plVar5,puVar6[1]);
    if (param_2 != (long *)0x0) {
      uVar9 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      iVar11 = 0;
      while (((uVar9 & 1) != 0 &&
             (uVar9 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
             (int)uVar9 != 0xe))) {
        FUN_063ab330(param_1,param_2,param_3,param_6,param_4,plVar5);
        iVar11 = iVar11 + 1;
        uVar9 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      }
      if (*(char *)(param_1 + 0x18) != '\0') {
        FUN_063ade08(uVar9,plVar5,param_3);
      }
      if ((iVar11 != 1) || (*(char *)(param_1 + 0x18) == '\0')) {
        return;
      }
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        lVar7 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_063aca78;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar5,lVar7,2);
LAB_063aca78:
        lVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (lVar7 != 0) {
          FUN_049cf910(&local_88,lVar7,*(undefined8 *)PTR_DAT_07db6d30);
          puVar3 = PTR_DAT_07db6d50;
          puVar2 = PTR_DAT_07db6d20;
          uStack_68 = uStack_80;
          local_70 = local_88;
          local_60 = local_78;
          do {
            do {
              uVar9 = FUN_05d64e98(&local_70,*(undefined8 *)puVar2);
              if ((uVar9 & 1) == 0) goto LAB_063acb58;
              plVar5 = (long *)thunk_FUN_037787d0(local_60,*(undefined8 *)puVar3);
            } while (plVar5 == (long *)0x0);
            lVar8 = *plVar5;
            lVar7 = *(long *)puVar1;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_063acb30;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar5,lVar7,1);
LAB_063acb30:
            uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar4,param_4,0);
          } while ((uVar9 & 1) == 0);
          FUN_063ade08(uVar9,plVar5,param_3);
LAB_063acb58:
          FUN_05d64e94(&local_70,*(undefined8 *)PTR_DAT_07db6d18);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


