/*
FUNCTION_NAME: OVRPlugin.Media$$UseMrcDebugCamera
ENTRY_POINT: 063aa19c
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


long * OVRPlugin_Media__UseMrcDebugCamera(undefined8 *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar9;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  uVar10 = *param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_062519f8(uVar10,0);
  uVar2 = FUN_0625b9c4();
  if ((uVar2 & 1) == 0) {
LAB_063aa2b4:
    lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db21b8);
    FUN_068cf06c(lVar3,0);
    plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6cc0);
    FUN_062855bc(plVar4,0);
    plVar4[2] = lVar3;
    thunk_FUN_037aeb94(plVar4 + 2,lVar3);
    puVar7 = PTR_DAT_07db6e58;
    uVar10 = *(undefined8 *)PTR_DAT_07db6e58;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar5 = (long *)FUN_062519f8(uVar10,0);
    if (plVar5 == (long *)0x0) goto LAB_063aa794;
    uVar2 = (**(code **)(*plVar5 + 0x2a8))();
    if ((uVar2 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_07db21a0;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar10,0);
      uVar2 = FUN_0625b9c4();
      if ((uVar2 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_07db6e50;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_062519f8(uVar10,0);
        uVar2 = FUN_0625b9c4();
        if ((uVar2 & 1) != 0) {
          uVar10 = *(undefined8 *)puVar7;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_062519f8(uVar10,0);
          uVar2 = FUN_0625b9c4();
          puVar7 = PTR_DAT_07db6e78;
          if ((uVar2 & 1) != 0) goto LAB_063aa7a0;
        }
      }
      plVar5 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db21a8);
      FUN_069ed994(plVar5,0);
      if (plVar5 == (long *)0x0) goto LAB_063aa794;
      (**(code **)(*plVar5 + 0x518))(plVar5,0,*(undefined8 *)(*plVar5 + 0x520));
      plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6e48);
      FUN_063a1ff0(plVar4,plVar5);
    }
    if (plVar4 != (long *)0x0) {
      uVar2 = FUN_063349dc(*(undefined8 *)(unaff_x21 + 0x10),0);
      if ((uVar2 & 1) == 0) {
        OVRPlugin_Media__SetMrcAudioSampleRate();
      }
      else {
        Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
        FUN_063aab78();
      }
      uVar10 = *(undefined8 *)PTR_DAT_07db6e30;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar10,0);
      uVar2 = FUN_0625ad04();
      if ((uVar2 & 1) == 0) {
        uVar10 = *(undefined8 *)PTR_DAT_07db6e50;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_062519f8(uVar10,0);
        uVar2 = FUN_0625ad04();
        if ((uVar2 & 1) == 0) {
          lVar3 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db6c00) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                goto LAB_063aa758;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa758:
          UNRECOVERED_JUMPTABLE = (code *)*puVar6;
          uVar10 = puVar6[1];
        }
        else {
          lVar3 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db6e20) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
                goto LAB_063aa6ec;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa6ec:
          plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
          if (plVar4 == (long *)0x0) goto LAB_063aa794;
          lVar3 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db6c00) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                goto LAB_063aa774;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa774:
          UNRECOVERED_JUMPTABLE = (code *)*puVar6;
          uVar10 = puVar6[1];
        }
                    /* WARNING: Could not recover jumptable at 0x063aa790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar4,uVar10);
        return plVar4;
      }
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db6e20) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
            goto LAB_063aa600;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aa600:
      plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db6c00) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 9) * 0x10 + 0x138);
              goto LAB_063aa66c;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa66c:
        plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
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
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6e68);
    if (unaff_x19 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*unaff_x19 + 0x168))();
    }
    System_Convert__ToInt32(uVar10,uVar8,0);
  }
  else {
    uVar10 = *(undefined8 *)PTR_DAT_07db21b0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar10,0);
    uVar2 = FUN_0625b9c4();
    if ((uVar2 & 1) == 0) goto LAB_063aa2b4;
    uVar10 = *(undefined8 *)PTR_DAT_07db6e30;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar10,0);
    uVar2 = FUN_0625b9c4();
    if ((uVar2 & 1) == 0) goto LAB_063aa2b4;
    uVar10 = *(undefined8 *)PTR_DAT_07db6e38;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar10,0);
    uVar2 = FUN_0625b9c4();
    if ((uVar2 & 1) == 0) goto LAB_063aa2b4;
    uVar10 = *unaff_x24;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar10,0);
    uVar2 = FUN_0625b9c4();
    puVar7 = PTR_DAT_07db6e80;
    if ((uVar2 & 1) == 0) goto LAB_063aa2b4;
LAB_063aa7a0:
    thunk_FUN_037a15ac(puVar7);
  }
  uVar10 = FUN_062d5fcc();
  uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6e70);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar10,uVar8);
}


