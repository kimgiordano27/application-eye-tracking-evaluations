/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 051667d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  undefined8 uVar9;
  long unaff_x25;
  
  thunk_FUN_02dd37b4();
  puVar2 = PTR_DAT_06782678;
  uVar9 = *(undefined8 *)PTR_DAT_06782678;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  plVar3 = (long *)FUN_05015c2c(uVar9,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x298))();
    if ((uVar4 & 1) != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_0677d910;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar9,0);
      uVar4 = FUN_0501fa14();
      if ((uVar4 & 1) != 0) {
        uVar9 = *(undefined8 *)PTR_DAT_06782670;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(uVar9,0);
        uVar4 = FUN_0501fa14();
        if ((uVar4 & 1) != 0) {
          uVar9 = *(undefined8 *)puVar2;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05015c2c(uVar9,0);
          uVar4 = FUN_0501fa14();
          if ((uVar4 & 1) != 0) {
            thunk_FUN_02dc61f4(PTR_DAT_06782698);
            goto LAB_05166cc8;
          }
        }
      }
      plVar3 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677d918);
      FUN_0564df30(plVar3,0);
      if (plVar3 == (long *)0x0) goto LAB_05166c70;
      (**(code **)(*plVar3 + 0x518))(plVar3,0,*(undefined8 *)(*plVar3 + 0x520));
      unaff_x23 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782668);
      FUN_0515e4cc(unaff_x23,plVar3);
    }
    if (unaff_x23 == (long *)0x0) {
      uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06782688);
      if (unaff_x19 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*unaff_x19 + 0x168))();
      }
      FUN_04e83184(uVar9,uVar6,0);
LAB_05166cc8:
      uVar9 = FUN_050924a8();
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06782690);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar9,uVar6);
    }
    uVar4 = FUN_050f0eb8(*(undefined8 *)(unaff_x21 + 0x10),0);
    if ((uVar4 & 1) == 0) {
      FUN_05166d0c();
    }
    else {
      FUN_0509917c();
      FUN_05167054();
    }
    uVar9 = *(undefined8 *)PTR_DAT_06782650;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar9,0);
    uVar4 = FUN_0501ed54();
    if ((uVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)PTR_DAT_06782670;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(uVar9,0);
      uVar4 = FUN_0501ed54();
      if ((uVar4 & 1) == 0) {
        lVar7 = *unaff_x23;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_05166c34;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)PTR_DAT_067823f0,9);
LAB_05166c34:
        UNRECOVERED_JUMPTABLE = (code *)*puVar5;
        uVar9 = puVar5[1];
      }
      else {
        lVar7 = *unaff_x23;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06782640) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
              goto LAB_05166bc8;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)PTR_DAT_06782640,0xc);
LAB_05166bc8:
        unaff_x23 = (long *)(*(code *)*puVar5)(unaff_x23,puVar5[1]);
        if (unaff_x23 == (long *)0x0) goto LAB_05166c70;
        lVar7 = *unaff_x23;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_05166c50;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)PTR_DAT_067823f0,9);
LAB_05166c50:
        UNRECOVERED_JUMPTABLE = (code *)*puVar5;
        uVar9 = puVar5[1];
      }
                    /* WARNING: Could not recover jumptable at 0x05166c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar3 = (long *)(*UNRECOVERED_JUMPTABLE)(unaff_x23,uVar9);
      return plVar3;
    }
    lVar7 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06782640) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
          goto LAB_05166adc;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)PTR_DAT_06782640,0xc);
LAB_05166adc:
    plVar3 = (long *)(*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067823f0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_05166b48;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_067823f0,9);
LAB_05166b48:
      plVar3 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06782478 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06782478
           )) {
          FUN_055327c0(plVar3,0);
          return plVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar3);
      }
    }
  }
LAB_05166c70:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


