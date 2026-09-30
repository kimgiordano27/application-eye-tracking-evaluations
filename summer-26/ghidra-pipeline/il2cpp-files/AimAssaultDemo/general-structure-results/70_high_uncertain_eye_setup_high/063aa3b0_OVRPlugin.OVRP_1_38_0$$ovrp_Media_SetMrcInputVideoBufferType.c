/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcInputVideoBufferType
ENTRY_POINT: 063aa3b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcInputVideoBufferType(void)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar9;
  long unaff_x25;
  undefined8 *unaff_x26;
  
  uVar2 = FUN_0625b9c4();
  if ((uVar2 & 1) != 0) {
    uVar9 = *unaff_x26;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar9,0);
    uVar2 = FUN_0625b9c4();
    if ((uVar2 & 1) != 0) {
      thunk_FUN_037a15ac(PTR_DAT_07db6e78);
      goto LAB_063aa7ec;
    }
  }
  plVar3 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db21a8);
  FUN_069ed994(plVar3,0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x518))(plVar3,0,*(undefined8 *)(*plVar3 + 0x520));
    plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6e48);
    FUN_063a1ff0(plVar4,plVar3);
    if (plVar4 == (long *)0x0) {
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6e68);
      if (unaff_x19 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*unaff_x19 + 0x168))();
      }
      System_Convert__ToInt32(uVar9,uVar6,0);
LAB_063aa7ec:
      uVar9 = FUN_062d5fcc();
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6e70);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar9,uVar6);
    }
    uVar2 = FUN_063349dc(*(undefined8 *)(unaff_x21 + 0x10),0);
    if ((uVar2 & 1) == 0) {
      OVRPlugin_Media__SetMrcAudioSampleRate();
    }
    else {
      Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
      FUN_063aab78();
    }
    uVar9 = *(undefined8 *)PTR_DAT_07db6e30;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar9,0);
    uVar2 = FUN_0625ad04();
    if ((uVar2 & 1) == 0) {
      uVar9 = *(undefined8 *)PTR_DAT_07db6e50;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar9,0);
      uVar2 = FUN_0625ad04();
      if ((uVar2 & 1) == 0) {
        lVar7 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6c00) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_063aa758;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa758:
        UNRECOVERED_JUMPTABLE = (code *)*puVar5;
        uVar9 = puVar5[1];
      }
      else {
        lVar7 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6e20) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
              goto LAB_063aa6ec;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa6ec:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 == (long *)0x0) goto LAB_063aa794;
        lVar7 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6c00) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_063aa774;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa774:
        UNRECOVERED_JUMPTABLE = (code *)*puVar5;
        uVar9 = puVar5[1];
      }
                    /* WARNING: Could not recover jumptable at 0x063aa790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar3 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar4,uVar9);
      return plVar3;
    }
    lVar7 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
          goto LAB_063aa600;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa600:
    plVar3 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6c00) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_063aa66c;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa66c:
      plVar3 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07db6c88 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07db6c88
           )) {
          FUN_068d2224(plVar3,0);
          return plVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar3);
      }
    }
  }
LAB_063aa794:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


