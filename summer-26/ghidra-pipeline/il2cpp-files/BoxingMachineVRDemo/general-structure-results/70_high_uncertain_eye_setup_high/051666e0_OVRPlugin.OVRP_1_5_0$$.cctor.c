/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$.cctor
ENTRY_POINT: 051666e0
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


long * OVRPlugin_OVRP_1_5_0___cctor(ulong param_1)

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
  
  if ((param_1 & 1) == 0) {
LAB_05166790:
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677d928);
    FUN_0552f608(lVar3,0);
    plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067824b0);
    FUN_0504920c(plVar4,0);
    plVar4[2] = lVar3;
    thunk_FUN_02dd37b4(plVar4 + 2,lVar3);
    puVar7 = PTR_DAT_06782678;
    uVar10 = *(undefined8 *)PTR_DAT_06782678;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar5 = (long *)FUN_05015c2c(uVar10,0);
    if (plVar5 == (long *)0x0) goto LAB_05166c70;
    uVar2 = (**(code **)(*plVar5 + 0x298))();
    if ((uVar2 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_0677d910;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar10,0);
      uVar2 = FUN_0501fa14();
      if ((uVar2 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_06782670;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar10,0);
        uVar2 = FUN_0501fa14();
        if ((uVar2 & 1) != 0) {
          uVar10 = *(undefined8 *)puVar7;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05015c2c(uVar10,0);
          uVar2 = FUN_0501fa14();
          puVar7 = PTR_DAT_06782698;
          if ((uVar2 & 1) != 0) goto LAB_05166c7c;
        }
      }
      plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677d918);
      FUN_0564df30(plVar5,0);
      if (plVar5 == (long *)0x0) goto LAB_05166c70;
      (**(code **)(*plVar5 + 0x518))(plVar5,0,*(undefined8 *)(*plVar5 + 0x520));
      plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782668);
      FUN_0515e4cc(plVar4,plVar5);
    }
    if (plVar4 != (long *)0x0) {
      uVar2 = FUN_050f0eb8(*(undefined8 *)(unaff_x21 + 0x10),0);
      if ((uVar2 & 1) == 0) {
        FUN_05166d0c();
      }
      else {
        FUN_0509917c();
        FUN_05167054();
      }
      uVar10 = *(undefined8 *)PTR_DAT_06782650;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar10,0);
      uVar2 = FUN_0501ed54();
      if ((uVar2 & 1) == 0) {
        uVar10 = *(undefined8 *)PTR_DAT_06782670;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar10,0);
        uVar2 = FUN_0501ed54();
        if ((uVar2 & 1) == 0) {
          lVar3 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067823f0) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                goto LAB_05166c34;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_067823f0,9);
LAB_05166c34:
          UNRECOVERED_JUMPTABLE = (code *)*puVar6;
          uVar10 = puVar6[1];
        }
        else {
          lVar3 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06782640) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
                goto LAB_05166bc8;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_06782640,0xc);
LAB_05166bc8:
          plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
          if (plVar4 == (long *)0x0) goto LAB_05166c70;
          lVar3 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067823f0) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                goto LAB_05166c50;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_067823f0,9);
LAB_05166c50:
          UNRECOVERED_JUMPTABLE = (code *)*puVar6;
          uVar10 = puVar6[1];
        }
                    /* WARNING: Could not recover jumptable at 0x05166c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar4,uVar10);
        return plVar4;
      }
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06782640) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
            goto LAB_05166adc;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_06782640,0xc);
LAB_05166adc:
      plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 9) * 0x10 + 0x138);
              goto LAB_05166b48;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_067823f0,9);
LAB_05166b48:
        plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
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
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782688);
    if (unaff_x19 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*unaff_x19 + 0x168))();
    }
    FUN_04e83184(uVar10,uVar8,0);
  }
  else {
    uVar10 = *(undefined8 *)PTR_DAT_06782650;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar10,0);
    uVar2 = FUN_0501fa14();
    if ((uVar2 & 1) == 0) goto LAB_05166790;
    uVar10 = *(undefined8 *)PTR_DAT_06782658;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar10,0);
    uVar2 = FUN_0501fa14();
    if ((uVar2 & 1) == 0) goto LAB_05166790;
    uVar10 = *unaff_x24;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar10,0);
    uVar2 = FUN_0501fa14();
    puVar7 = PTR_DAT_067826a0;
    if ((uVar2 & 1) == 0) goto LAB_05166790;
LAB_05166c7c:
    thunk_FUN_02dc61f4(puVar7);
  }
  uVar10 = FUN_050924a8();
  uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06782690);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar10,uVar8);
}


