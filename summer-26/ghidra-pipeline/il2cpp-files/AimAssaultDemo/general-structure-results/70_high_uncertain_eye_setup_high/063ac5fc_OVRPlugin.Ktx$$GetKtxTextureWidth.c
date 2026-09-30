/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureWidth
ENTRY_POINT: 063ac5fc
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


void OVRPlugin_Ktx__GetKtxTextureWidth(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
code_r0x063ac5fc:
  Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_063ab8e0();
  lVar7 = *unaff_x21;
LAB_063ac5c0:
  do {
    uVar3 = (**(code **)(lVar7 + 0x288))();
    if (((uVar3 & 1) == 0) || (iVar1 = (**(code **)(*unaff_x21 + 0x238))(), iVar1 == 0xd)) {
      if (unaff_x24 == 0) {
        thunk_FUN_037a15ac(PTR_DAT_07db6ee0);
LAB_063ac7e0:
        uVar5 = FUN_062d5fcc();
        uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6ee8);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,uVar6);
      }
      if (unaff_x20 == (long *)0x0) goto LAB_063ac7d0;
      lVar7 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 == 0) goto LAB_063ac70c;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
    if (plVar2 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_063ac7d0;
      uVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    }
    uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar5,*unaff_x28,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar5,*(undefined8 *)PTR_DAT_07db6da0,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar5,*(undefined8 *)PTR_DAT_07db6d80,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar5,*(undefined8 *)PTR_DAT_07db6d78,0);
          if ((uVar3 & 1) == 0) {
            plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
            uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6ed8);
            if (plVar2 == (long *)0x0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
            }
            System_Convert__ToInt32(uVar5,uVar6,0);
            goto LAB_063ac7e0;
          }
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_063ab8e0();
          lVar7 = *unaff_x21;
        }
        else {
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_063ab8e0();
          lVar7 = *unaff_x21;
        }
        goto LAB_063ac5c0;
      }
      goto code_r0x063ac5fc;
    }
    Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    unaff_x24 = FUN_063ab8e0();
    lVar7 = *unaff_x21;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6e20) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 6) * 0x10 + 0x138);
      goto LAB_063ac72c;
    }
  }
LAB_063ac70c:
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ac72c:
  (*(code *)*puVar4)();
  if (unaff_x19 == (long *)0x0) {
LAB_063ac7d0:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6c00) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 7) * 0x10 + 0x138);
        goto LAB_063ac7a8;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ac7a8:
                    /* WARNING: Could not recover jumptable at 0x063ac7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)();
  return;
}


