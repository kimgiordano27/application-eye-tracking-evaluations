/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 051665f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_3_0___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  
  uVar3 = thunk_FUN_02d9d534();
  FUN_05661238(uVar3,0);
  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067824e8);
  FUN_05678d4c(uVar4,uVar3,0);
  puVar10 = PTR_DAT_06782660;
  puVar2 = PTR_DAT_0675e258;
  uVar3 = *(undefined8 *)PTR_DAT_06782660;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  plVar5 = (long *)FUN_05015c2c(uVar3,0);
  if (plVar5 == (long *)0x0) goto LAB_05166c70;
  uVar6 = (**(code **)(*plVar5 + 0x298))();
  if ((uVar6 & 1) == 0) {
    plVar5 = (long *)0x0;
LAB_051667e0:
    puVar10 = PTR_DAT_06782678;
    uVar3 = *(undefined8 *)PTR_DAT_06782678;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar8 = (long *)FUN_05015c2c(uVar3,0);
    if (plVar8 == (long *)0x0) goto LAB_05166c70;
    uVar6 = (**(code **)(*plVar8 + 0x298))();
    if ((uVar6 & 1) != 0) {
      uVar3 = *(undefined8 *)PTR_DAT_0677d910;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar3,0);
      uVar6 = FUN_0501fa14();
      if ((uVar6 & 1) != 0) {
        uVar3 = *(undefined8 *)PTR_DAT_06782670;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar3,0);
        uVar6 = FUN_0501fa14();
        if ((uVar6 & 1) != 0) {
          uVar3 = *(undefined8 *)puVar10;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05015c2c(uVar3,0);
          uVar6 = FUN_0501fa14();
          puVar10 = PTR_DAT_06782698;
          if ((uVar6 & 1) != 0) goto LAB_05166c7c;
        }
      }
      plVar8 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677d918);
      FUN_0564df30(plVar8,0);
      if (plVar8 == (long *)0x0) goto LAB_05166c70;
      (**(code **)(*plVar8 + 0x518))(plVar8,0,*(undefined8 *)(*plVar8 + 0x520));
      plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782668);
      FUN_0515e4cc(plVar5,plVar8);
    }
    if (plVar5 != (long *)0x0) {
      uVar6 = FUN_050f0eb8(*(undefined8 *)(unaff_x21 + 0x10),0);
      if ((uVar6 & 1) == 0) {
        FUN_05166d0c();
      }
      else {
        FUN_0509917c();
        FUN_05167054();
      }
      uVar3 = *(undefined8 *)PTR_DAT_06782650;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar3,0);
      uVar6 = FUN_0501ed54();
      if ((uVar6 & 1) == 0) {
        uVar3 = *(undefined8 *)PTR_DAT_06782670;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar3,0);
        uVar6 = FUN_0501ed54();
        if ((uVar6 & 1) == 0) {
          lVar7 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067823f0) {
                puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                goto LAB_05166c34;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_067823f0,9);
LAB_05166c34:
          UNRECOVERED_JUMPTABLE = (code *)*puVar9;
          uVar3 = puVar9[1];
        }
        else {
          lVar7 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06782640) {
                puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
                goto LAB_05166bc8;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_06782640,0xc);
LAB_05166bc8:
          plVar5 = (long *)(*(code *)*puVar9)(plVar5,puVar9[1]);
          if (plVar5 == (long *)0x0) goto LAB_05166c70;
          lVar7 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067823f0) {
                puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                goto LAB_05166c50;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_067823f0,9);
LAB_05166c50:
          UNRECOVERED_JUMPTABLE = (code *)*puVar9;
          uVar3 = puVar9[1];
        }
                    /* WARNING: Could not recover jumptable at 0x05166c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar5 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar5,uVar3);
        return plVar5;
      }
      lVar7 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06782640) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
            goto LAB_05166adc;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_06782640,0xc);
LAB_05166adc:
      plVar5 = (long *)(*(code *)*puVar9)(plVar5,puVar9[1]);
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 9) * 0x10 + 0x138);
              goto LAB_05166b48;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_067823f0,9);
LAB_05166b48:
        plVar5 = (long *)(*(code *)*puVar9)(plVar5,puVar9[1]);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06782478 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_06782478)) {
            FUN_055327c0(plVar5,0);
            return plVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar5);
        }
      }
LAB_05166c70:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06782688);
    if (unaff_x19 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*unaff_x19 + 0x168))();
    }
    FUN_04e83184(uVar3,uVar4,0);
  }
  else {
    uVar3 = *(undefined8 *)PTR_DAT_06782648;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar3,0);
    uVar6 = FUN_0501fa14();
    if ((uVar6 & 1) == 0) {
LAB_05166790:
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677d928);
      FUN_0552f608(lVar7,0);
      plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067824b0);
      FUN_0504920c(plVar5,0);
      plVar5[2] = lVar7;
      thunk_FUN_02dd37b4(plVar5 + 2,lVar7);
      goto LAB_051667e0;
    }
    uVar3 = *(undefined8 *)PTR_DAT_0677d920;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar3,0);
    uVar6 = FUN_0501fa14();
    if ((uVar6 & 1) == 0) goto LAB_05166790;
    uVar3 = *(undefined8 *)PTR_DAT_06782650;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar3,0);
    uVar6 = FUN_0501fa14();
    if ((uVar6 & 1) == 0) goto LAB_05166790;
    uVar3 = *(undefined8 *)PTR_DAT_06782658;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar3,0);
    uVar6 = FUN_0501fa14();
    if ((uVar6 & 1) == 0) goto LAB_05166790;
    uVar3 = *(undefined8 *)puVar10;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar3,0);
    uVar6 = FUN_0501fa14();
    puVar10 = PTR_DAT_067826a0;
    if ((uVar6 & 1) == 0) goto LAB_05166790;
LAB_05166c7c:
    thunk_FUN_02dc61f4(puVar10);
  }
  uVar3 = FUN_050924a8();
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06782690);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar3,uVar4);
}


