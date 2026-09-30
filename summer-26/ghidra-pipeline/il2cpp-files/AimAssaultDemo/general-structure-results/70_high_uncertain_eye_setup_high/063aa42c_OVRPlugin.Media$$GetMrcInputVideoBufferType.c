/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcInputVideoBufferType
ENTRY_POINT: 063aa42c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * OVRPlugin_Media__GetMrcInputVideoBufferType(void)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 uVar8;
  long unaff_x21;
  long unaff_x25;
  
  plVar2 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6e48);
  FUN_063a1ff0();
  if (plVar2 == (long *)0x0) {
    uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6e68);
    if (unaff_x19 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*unaff_x19 + 0x168))();
    }
    System_Convert__ToInt32(uVar8,uVar5,0);
    uVar8 = FUN_062d5fcc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6e70);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar8,uVar5);
  }
  uVar3 = FUN_063349dc(*(undefined8 *)(unaff_x21 + 0x10),0);
  if ((uVar3 & 1) == 0) {
    OVRPlugin_Media__SetMrcAudioSampleRate();
  }
  else {
    Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
    FUN_063aab78();
  }
  uVar8 = *(undefined8 *)PTR_DAT_07db6e30;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_062519f8(uVar8,0);
  uVar3 = FUN_0625ad04();
  if ((uVar3 & 1) != 0) {
    lVar6 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
          goto LAB_063aa600;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar2,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa600:
    plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db6c00) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
            goto LAB_063aa66c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar2,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa66c:
      plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
      if (plVar2 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07db6c88 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07db6c88
           )) {
          FUN_068d2224(plVar2,0);
          return plVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar2);
      }
    }
LAB_063aa794:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar8 = *(undefined8 *)PTR_DAT_07db6e50;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_062519f8(uVar8,0);
  uVar3 = FUN_0625ad04();
  if ((uVar3 & 1) == 0) {
    lVar6 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_063aa758;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar2,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa758:
    UNRECOVERED_JUMPTABLE = (code *)*puVar4;
    uVar8 = puVar4[1];
  }
  else {
    lVar6 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
          goto LAB_063aa6ec;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar2,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa6ec:
    plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
    if (plVar2 == (long *)0x0) goto LAB_063aa794;
    lVar6 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_063aa774;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar2,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa774:
    UNRECOVERED_JUMPTABLE = (code *)*puVar4;
    uVar8 = puVar4[1];
  }
                    /* WARNING: Could not recover jumptable at 0x063aa790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar2 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar2,uVar8);
  return plVar2;
}


