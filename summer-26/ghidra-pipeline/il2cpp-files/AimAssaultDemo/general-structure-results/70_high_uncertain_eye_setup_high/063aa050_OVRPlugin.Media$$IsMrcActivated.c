/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcActivated
ENTRY_POINT: 063aa050
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * OVRPlugin_Media__IsMrcActivated(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x1b8));
  FUN_0373b518(PTR_DAT_07db6e30);
  FUN_0373b518(PTR_DAT_07db6c88);
  FUN_0373b518(PTR_DAT_07db6e38);
  FUN_0373b518(PTR_DAT_07db6e40);
  FUN_0373b518(PTR_DAT_07db6e48);
  FUN_0373b518(PTR_DAT_07db21a0);
  FUN_0373b518(PTR_DAT_07db21a8);
  FUN_0373b518(PTR_DAT_07db6e50);
  FUN_0373b518(PTR_DAT_07db6cf8);
  FUN_0373b518(PTR_DAT_07db6e58);
  *(undefined1 *)(unaff_x22 + 0x6ab) = 1;
  if (unaff_x20 == (long *)0x0) goto LAB_063aa794;
  iVar3 = (**(code **)(*unaff_x20 + 0x238))();
  if (iVar3 == 1) {
    uVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6cf0);
    FUN_06a00c9c(uVar10,0);
    uVar11 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6cf8);
    FUN_06a187c8(uVar11,uVar10,0);
    puVar9 = PTR_DAT_07db6e40;
    puVar2 = PTR_DAT_07d86548;
    uVar10 = *(undefined8 *)PTR_DAT_07db6e40;
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar4 = (long *)FUN_062519f8(uVar10,0);
    if (plVar4 == (long *)0x0) goto LAB_063aa794;
    uVar5 = (**(code **)(*plVar4 + 0x2a8))();
    if ((uVar5 & 1) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      uVar10 = *(undefined8 *)PTR_DAT_07db6e28;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar10,0);
      uVar5 = FUN_0625b9c4();
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_07db21b0;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_062519f8(uVar10,0);
        uVar5 = FUN_0625b9c4();
        if ((uVar5 & 1) != 0) {
          uVar10 = *(undefined8 *)PTR_DAT_07db6e30;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_062519f8(uVar10,0);
          uVar5 = FUN_0625b9c4();
          if ((uVar5 & 1) != 0) {
            uVar10 = *(undefined8 *)PTR_DAT_07db6e38;
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_062519f8(uVar10,0);
            uVar5 = FUN_0625b9c4();
            if ((uVar5 & 1) != 0) {
              uVar10 = *(undefined8 *)puVar9;
              if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_062519f8(uVar10,0);
              uVar5 = FUN_0625b9c4();
              puVar9 = PTR_DAT_07db6e80;
              if ((uVar5 & 1) != 0) goto LAB_063aa7a0;
            }
          }
        }
      }
      lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db21b8);
      FUN_068cf06c(lVar6,0);
      plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6cc0);
      FUN_062855bc(plVar4,0);
      plVar4[2] = lVar6;
      thunk_FUN_037aeb94(plVar4 + 2,lVar6);
    }
    puVar9 = PTR_DAT_07db6e58;
    uVar10 = *(undefined8 *)PTR_DAT_07db6e58;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar7 = (long *)FUN_062519f8(uVar10,0);
    if (plVar7 == (long *)0x0) goto LAB_063aa794;
    uVar5 = (**(code **)(*plVar7 + 0x2a8))();
    if ((uVar5 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_07db21a0;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar10,0);
      uVar5 = FUN_0625b9c4();
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_07db6e50;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_062519f8(uVar10,0);
        uVar5 = FUN_0625b9c4();
        if ((uVar5 & 1) != 0) {
          uVar10 = *(undefined8 *)puVar9;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_062519f8(uVar10,0);
          uVar5 = FUN_0625b9c4();
          puVar9 = PTR_DAT_07db6e78;
          if ((uVar5 & 1) != 0) goto LAB_063aa7a0;
        }
      }
      plVar7 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db21a8);
      FUN_069ed994(plVar7,0);
      if (plVar7 == (long *)0x0) goto LAB_063aa794;
      (**(code **)(*plVar7 + 0x518))(plVar7,0,*(undefined8 *)(*plVar7 + 0x520));
      plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6e48);
      FUN_063a1ff0(plVar4,plVar7);
    }
    if (plVar4 != (long *)0x0) {
      uVar5 = FUN_063349dc(*(undefined8 *)(unaff_x21 + 0x10),0);
      if ((uVar5 & 1) == 0) {
        OVRPlugin_Media__SetMrcAudioSampleRate();
      }
      else {
        Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
        FUN_063aab78();
      }
      uVar10 = *(undefined8 *)PTR_DAT_07db6e30;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar10,0);
      uVar5 = FUN_0625ad04();
      if ((uVar5 & 1) != 0) {
        lVar6 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db6e20) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
              goto LAB_063aa600;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa600:
        plVar4 = (long *)(*(code *)*puVar8)(plVar4,puVar8[1]);
        if (plVar4 != (long *)0x0) {
          lVar6 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db6c00) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                goto LAB_063aa66c;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa66c:
          plVar4 = (long *)(*(code *)*puVar8)(plVar4,puVar8[1]);
          if (plVar4 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07db6c88 + 0x130);
            if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_07db6c88)) {
              FUN_068d2224(plVar4,0);
              return plVar4;
            }
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar4);
          }
        }
LAB_063aa794:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar10 = *(undefined8 *)PTR_DAT_07db6e50;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar10,0);
      uVar5 = FUN_0625ad04();
      if ((uVar5 & 1) == 0) {
        lVar6 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db6c00) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_063aa758;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa758:
        UNRECOVERED_JUMPTABLE = (code *)*puVar8;
        uVar10 = puVar8[1];
      }
      else {
        lVar6 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db6e20) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
              goto LAB_063aa6ec;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa6ec:
        plVar4 = (long *)(*(code *)*puVar8)(plVar4,puVar8[1]);
        if (plVar4 == (long *)0x0) goto LAB_063aa794;
        lVar6 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db6c00) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_063aa774;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa774:
        UNRECOVERED_JUMPTABLE = (code *)*puVar8;
        uVar10 = puVar8[1];
      }
                    /* WARNING: Could not recover jumptable at 0x063aa790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar4,uVar10);
      return plVar4;
    }
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6e68);
    if (unaff_x19 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*unaff_x19 + 0x168))();
    }
    System_Convert__ToInt32(uVar10,uVar11,0);
  }
  else {
    puVar9 = PTR_DAT_07db6e60;
    if (iVar3 == 0xb) {
      return (long *)0x0;
    }
LAB_063aa7a0:
    thunk_FUN_037a15ac(puVar9);
  }
  uVar10 = FUN_062d5fcc();
  uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6e70);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar10,uVar11);
}


