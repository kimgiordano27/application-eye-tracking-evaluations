/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcActivated
ENTRY_POINT: 063aa120
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


long * OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcActivated(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar10;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar11;
  
  FUN_06a00c9c();
  thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6cf8);
  FUN_06a187c8();
  puVar8 = PTR_DAT_07db6e40;
  puVar2 = PTR_DAT_07d86548;
  uVar11 = *(undefined8 *)PTR_DAT_07db6e40;
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  plVar3 = (long *)FUN_062519f8(uVar11,0);
  if (plVar3 == (long *)0x0) goto LAB_063aa794;
  uVar4 = (**(code **)(*plVar3 + 0x2a8))();
  if ((uVar4 & 1) == 0) {
    plVar3 = (long *)0x0;
LAB_063aa304:
    puVar8 = PTR_DAT_07db6e58;
    uVar11 = *(undefined8 *)PTR_DAT_07db6e58;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar6 = (long *)FUN_062519f8(uVar11,0);
    if (plVar6 == (long *)0x0) goto LAB_063aa794;
    uVar4 = (**(code **)(*plVar6 + 0x2a8))();
    if ((uVar4 & 1) != 0) {
      uVar11 = *(undefined8 *)PTR_DAT_07db21a0;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar11,0);
      uVar4 = FUN_0625b9c4();
      if ((uVar4 & 1) != 0) {
        uVar11 = *(undefined8 *)PTR_DAT_07db6e50;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_062519f8(uVar11,0);
        uVar4 = FUN_0625b9c4();
        if ((uVar4 & 1) != 0) {
          uVar11 = *(undefined8 *)puVar8;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_062519f8(uVar11,0);
          uVar4 = FUN_0625b9c4();
          puVar8 = PTR_DAT_07db6e78;
          if ((uVar4 & 1) != 0) goto LAB_063aa7a0;
        }
      }
      plVar6 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db21a8);
      FUN_069ed994(plVar6,0);
      if (plVar6 == (long *)0x0) goto LAB_063aa794;
      (**(code **)(*plVar6 + 0x518))(plVar6,0,*(undefined8 *)(*plVar6 + 0x520));
      plVar3 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6e48);
      FUN_063a1ff0(plVar3,plVar6);
    }
    if (plVar3 != (long *)0x0) {
      uVar4 = FUN_063349dc(*(undefined8 *)(unaff_x21 + 0x10),0);
      if ((uVar4 & 1) == 0) {
        OVRPlugin_Media__SetMrcAudioSampleRate();
      }
      else {
        Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
        FUN_063aab78();
      }
      uVar11 = *(undefined8 *)PTR_DAT_07db6e30;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar11,0);
      uVar4 = FUN_0625ad04();
      if ((uVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)PTR_DAT_07db6e50;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_062519f8(uVar11,0);
        uVar4 = FUN_0625ad04();
        if ((uVar4 & 1) == 0) {
          lVar5 = *plVar3;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6c00) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                goto LAB_063aa758;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa758:
          UNRECOVERED_JUMPTABLE = (code *)*puVar7;
          uVar11 = puVar7[1];
        }
        else {
          lVar5 = *plVar3;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
                goto LAB_063aa6ec;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa6ec:
          plVar3 = (long *)(*(code *)*puVar7)(plVar3,puVar7[1]);
          if (plVar3 == (long *)0x0) goto LAB_063aa794;
          lVar5 = *plVar3;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6c00) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                goto LAB_063aa774;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa774:
          UNRECOVERED_JUMPTABLE = (code *)*puVar7;
          uVar11 = puVar7[1];
        }
                    /* WARNING: Could not recover jumptable at 0x063aa790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar3,uVar11);
        return plVar3;
      }
      lVar5 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
            goto LAB_063aa600;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa600:
      plVar3 = (long *)(*(code *)*puVar7)(plVar3,puVar7[1]);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6c00) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
              goto LAB_063aa66c;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa66c:
        plVar3 = (long *)(*(code *)*puVar7)(plVar3,puVar7[1]);
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db6c88 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_07db6c88)) {
            FUN_068d2224(plVar3,0);
            return plVar3;
          }
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar3);
        }
      }
LAB_063aa794:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6e68);
    if (unaff_x19 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*unaff_x19 + 0x168))();
    }
    System_Convert__ToInt32(uVar11,uVar9,0);
  }
  else {
    uVar11 = *(undefined8 *)PTR_DAT_07db6e28;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar11,0);
    uVar4 = FUN_0625b9c4();
    if ((uVar4 & 1) == 0) {
LAB_063aa2b4:
      lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db21b8);
      FUN_068cf06c(lVar5,0);
      plVar3 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6cc0);
      FUN_062855bc(plVar3,0);
      plVar3[2] = lVar5;
      thunk_FUN_037aeb94(plVar3 + 2,lVar5);
      goto LAB_063aa304;
    }
    uVar11 = *(undefined8 *)PTR_DAT_07db21b0;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar11,0);
    uVar4 = FUN_0625b9c4();
    if ((uVar4 & 1) == 0) goto LAB_063aa2b4;
    uVar11 = *(undefined8 *)PTR_DAT_07db6e30;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar11,0);
    uVar4 = FUN_0625b9c4();
    if ((uVar4 & 1) == 0) goto LAB_063aa2b4;
    uVar11 = *(undefined8 *)PTR_DAT_07db6e38;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar11,0);
    uVar4 = FUN_0625b9c4();
    if ((uVar4 & 1) == 0) goto LAB_063aa2b4;
    uVar11 = *(undefined8 *)puVar8;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar11,0);
    uVar4 = FUN_0625b9c4();
    puVar8 = PTR_DAT_07db6e80;
    if ((uVar4 & 1) == 0) goto LAB_063aa2b4;
LAB_063aa7a0:
    thunk_FUN_037a15ac(puVar8);
  }
  uVar11 = FUN_062d5fcc();
  uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6e70);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar11,uVar9);
}


