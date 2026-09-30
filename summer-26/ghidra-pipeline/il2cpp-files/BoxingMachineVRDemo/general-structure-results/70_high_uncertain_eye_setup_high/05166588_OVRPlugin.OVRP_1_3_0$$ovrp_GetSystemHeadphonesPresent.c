/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetSystemHeadphonesPresent
ENTRY_POINT: 05166588
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_3_0__ovrp_GetSystemHeadphonesPresent(void)

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
  
  FUN_02d6084c(PTR_DAT_06782670);
  FUN_02d6084c(PTR_DAT_067824e8);
  FUN_02d6084c(PTR_DAT_06782678);
  *(undefined1 *)(unaff_x22 + 0xe6d) = 1;
  if (unaff_x20 == (long *)0x0) goto LAB_05166c70;
  iVar3 = (**(code **)(*unaff_x20 + 0x238))();
  if (iVar3 == 1) {
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067824e0);
    FUN_05661238(uVar10,0);
    uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067824e8);
    FUN_05678d4c(uVar11,uVar10,0);
    puVar9 = PTR_DAT_06782660;
    puVar2 = PTR_DAT_0675e258;
    uVar10 = *(undefined8 *)PTR_DAT_06782660;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar4 = (long *)FUN_05015c2c(uVar10,0);
    if (plVar4 == (long *)0x0) goto LAB_05166c70;
    uVar5 = (**(code **)(*plVar4 + 0x298))();
    if ((uVar5 & 1) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      uVar10 = *(undefined8 *)PTR_DAT_06782648;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar10,0);
      uVar5 = FUN_0501fa14();
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_0677d920;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar10,0);
        uVar5 = FUN_0501fa14();
        if ((uVar5 & 1) != 0) {
          uVar10 = *(undefined8 *)PTR_DAT_06782650;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05015c2c(uVar10,0);
          uVar5 = FUN_0501fa14();
          if ((uVar5 & 1) != 0) {
            uVar10 = *(undefined8 *)PTR_DAT_06782658;
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05015c2c(uVar10,0);
            uVar5 = FUN_0501fa14();
            if ((uVar5 & 1) != 0) {
              uVar10 = *(undefined8 *)puVar9;
              if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05015c2c(uVar10,0);
              uVar5 = FUN_0501fa14();
              puVar9 = PTR_DAT_067826a0;
              if ((uVar5 & 1) != 0) goto LAB_05166c7c;
            }
          }
        }
      }
      lVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677d928);
      FUN_0552f608(lVar6,0);
      plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067824b0);
      FUN_0504920c(plVar4,0);
      plVar4[2] = lVar6;
      thunk_FUN_02dd37b4(plVar4 + 2,lVar6);
    }
    puVar9 = PTR_DAT_06782678;
    uVar10 = *(undefined8 *)PTR_DAT_06782678;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar7 = (long *)FUN_05015c2c(uVar10,0);
    if (plVar7 == (long *)0x0) goto LAB_05166c70;
    uVar5 = (**(code **)(*plVar7 + 0x298))();
    if ((uVar5 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_0677d910;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar10,0);
      uVar5 = FUN_0501fa14();
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_06782670;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar10,0);
        uVar5 = FUN_0501fa14();
        if ((uVar5 & 1) != 0) {
          uVar10 = *(undefined8 *)puVar9;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05015c2c(uVar10,0);
          uVar5 = FUN_0501fa14();
          puVar9 = PTR_DAT_06782698;
          if ((uVar5 & 1) != 0) goto LAB_05166c7c;
        }
      }
      plVar7 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677d918);
      FUN_0564df30(plVar7,0);
      if (plVar7 == (long *)0x0) goto LAB_05166c70;
      (**(code **)(*plVar7 + 0x518))(plVar7,0,*(undefined8 *)(*plVar7 + 0x520));
      plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782668);
      FUN_0515e4cc(plVar4,plVar7);
    }
    if (plVar4 != (long *)0x0) {
      uVar5 = FUN_050f0eb8(*(undefined8 *)(unaff_x21 + 0x10),0);
      if ((uVar5 & 1) == 0) {
        FUN_05166d0c();
      }
      else {
        FUN_0509917c();
        FUN_05167054();
      }
      uVar10 = *(undefined8 *)PTR_DAT_06782650;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar10,0);
      uVar5 = FUN_0501ed54();
      if ((uVar5 & 1) != 0) {
        lVar6 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06782640) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
              goto LAB_05166adc;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_06782640,0xc);
LAB_05166adc:
        plVar4 = (long *)(*(code *)*puVar8)(plVar4,puVar8[1]);
        if (plVar4 != (long *)0x0) {
          lVar6 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067823f0) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                goto LAB_05166b48;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_067823f0,9);
LAB_05166b48:
          plVar4 = (long *)(*(code *)*puVar8)(plVar4,puVar8[1]);
          if (plVar4 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06782478 + 0x130);
            if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_06782478)) {
              FUN_055327c0(plVar4,0);
              return plVar4;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar4);
          }
        }
LAB_05166c70:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar10 = *(undefined8 *)PTR_DAT_06782670;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar10,0);
      uVar5 = FUN_0501ed54();
      if ((uVar5 & 1) == 0) {
        lVar6 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_05166c34;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_067823f0,9);
LAB_05166c34:
        UNRECOVERED_JUMPTABLE = (code *)*puVar8;
        uVar10 = puVar8[1];
      }
      else {
        lVar6 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06782640) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
              goto LAB_05166bc8;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_06782640,0xc);
LAB_05166bc8:
        plVar4 = (long *)(*(code *)*puVar8)(plVar4,puVar8[1]);
        if (plVar4 == (long *)0x0) goto LAB_05166c70;
        lVar6 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_05166c50;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_067823f0,9);
LAB_05166c50:
        UNRECOVERED_JUMPTABLE = (code *)*puVar8;
        uVar10 = puVar8[1];
      }
                    /* WARNING: Could not recover jumptable at 0x05166c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar4,uVar10);
      return plVar4;
    }
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782688);
    if (unaff_x19 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*unaff_x19 + 0x168))();
    }
    FUN_04e83184(uVar10,uVar11,0);
  }
  else {
    puVar9 = PTR_DAT_06782680;
    if (iVar3 == 0xb) {
      return (long *)0x0;
    }
LAB_05166c7c:
    thunk_FUN_02dc61f4(puVar9);
  }
  uVar10 = FUN_050924a8();
  uVar11 = thunk_FUN_02dc61f4(PTR_DAT_06782690);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar10,uVar11);
}


