/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_in_delayed_playback_get
ENTRY_POINT: 0854cb70
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0854d184) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_in_delayed_playback_get
               (ulong param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar13;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_0932e430);
    FUN_04077588(PTR_DAT_0932c838);
    FUN_04077588(PTR_DAT_0932c8c0);
    FUN_04077588(PTR_DAT_09285d70);
    FUN_04077588(PTR_DAT_09327080);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_0932e438);
    FUN_04077588(PTR_DAT_09327ed0);
    FUN_04077588(PTR_DAT_0932e440);
    FUN_04077588(PTR_DAT_0932e448);
    FUN_04077588(PTR_DAT_0932e428);
    FUN_04077588(PTR_DAT_0932e450);
    FUN_04077588(PTR_DAT_0932e458);
    FUN_04077588(PTR_DAT_0932e460);
    FUN_04077588(PTR_DAT_0932e468);
    *(undefined1 *)(unaff_x22 + 0x9e5) = 1;
  }
  lVar5 = thunk_FUN_040b4efc(*unaff_x20);
  FUN_076bca34(lVar5,0);
  if (lVar5 == 0) {
LAB_0854d17c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(long *)(lVar5 + 0x10) = param_2;
  thunk_FUN_040ec700((long *)(lVar5 + 0x10),param_2);
  if (unaff_x23 == 0) goto LAB_0854d17c;
  lVar6 = FUN_084f7088();
  lVar7 = FUN_084f7088();
  puVar2 = PTR_DAT_09285d70;
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x1a0) == 0)) goto LAB_0854d17c;
  uVar8 = FUN_083e3844(*(long *)(lVar7 + 0x1a0),0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar7 + 0x1a0) == 0) goto LAB_0854d17c;
    uVar8 = FUN_083e3974(*(long *)(lVar7 + 0x1a0),0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar7 + 0x1a0) == 0) goto LAB_0854d17c;
      if (*(char *)(*(long *)(lVar7 + 0x1a0) + 0x21) != '\0') {
        FUN_0854c7f4(param_2,param_3,lVar7);
        lVar13 = *(long *)(lVar7 + 0xd8);
        if (lVar13 != 0) {
          uVar4 = FUN_08979340(lVar13,0);
          FUN_089793f4(lVar13,uVar4 | 5,0);
          uVar9 = FUN_084f8008(param_2,0);
          if (param_3 != 0) {
            plVar10 = (long *)FUN_05189b28(param_3,*(undefined8 *)PTR_DAT_0932e458,lVar5 + 0x18,
                                           uVar9,*(undefined8 *)PTR_DAT_0932e460,0xc1,
                                           *(undefined8 *)PTR_DAT_0932e440);
            if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar4 = FUN_083e7714(*(long *)(lVar7 + 0x1a0),0);
            puVar2 = PTR_DAT_09327080;
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar13 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09327080) {
                  puVar11 = (undefined8 *)(lVar13 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                  goto LAB_0854ce3c;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_09327080,0xd);
LAB_0854ce3c:
            (*(code *)*puVar11)(plVar10,uVar4 & 1,puVar11[1]);
            puVar3 = PTR_DAT_09327ed0;
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar13 = *plVar10;
            uVar9 = *(undefined8 *)(param_2 + 200);
            uVar1 = *(undefined8 *)(param_2 + 0xd0);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09327ed0) {
                  puVar11 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0854ceac;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_09327ed0,0);
LAB_0854ceac:
            (*(code *)*puVar11)(plVar10,uVar9,uVar1,0,2,puVar11[1]);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar13 = *plVar10;
            uVar9 = *(undefined8 *)(param_2 + 0xe0);
            uVar1 = *(undefined8 *)(param_2 + 0xe8);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar11 = (undefined8 *)(lVar13 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                  goto LAB_0854cf24;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar3,4);
LAB_0854cf24:
            uVar9 = (*(code *)*puVar11)(plVar10,uVar9,uVar1,2,puVar11[1]);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            FUN_0854c57c(uVar9,lVar5 + 0x18,lVar6 + 0x18,param_3,*(undefined8 *)(lVar7 + 0xd8));
            lVar6 = *(long *)(lVar5 + 0x18);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar13 = *plVar10;
            lVar7 = *(long *)puVar2;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar11 = (undefined8 *)(lVar13 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                  goto LAB_0854cfb4;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_040b1e00(plVar10,lVar7,9);
LAB_0854cfb4:
            (*(code *)*puVar11)(plVar10,lVar6 + 0x10,puVar11[1]);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar7 = *plVar10;
            lVar6 = *(long *)puVar2;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar6) {
                  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                  goto LAB_0854d01c;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,0xc);
LAB_0854d01c:
            (*(code *)*puVar11)(plVar10,1,puVar11[1]);
            FUN_0854c798(param_2,lVar5 + 0x18);
            uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e430);
            FUN_06ac88dc(uVar9,lVar5,*(undefined8 *)PTR_DAT_0932e448,0);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar5 = *plVar10;
            lVar6 = *(long *)PTR_DAT_0932e438;
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar6 + 0x20)) {
                  lVar5 = lVar5 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_0854d0c8;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            lVar5 = FUN_040b1e00(plVar10);
LAB_0854d0c8:
            lVar5 = thunk_FUN_04096bb4(*(undefined8 *)(lVar5 + 8),lVar6);
            (**(code **)(lVar5 + 8))(plVar10,uVar9,lVar5);
            if (plVar10 != (long *)0x0) {
              lVar5 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar8 != 0) {
                piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
                    puVar11 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0854d14c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092860c0,0);
LAB_0854d14c:
              (*(code *)*puVar11)(plVar10,puVar11[1]);
            }
            return;
          }
        }
        goto LAB_0854d17c;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar9 = *(undefined8 *)PTR_DAT_0932e468;
      goto LAB_0854cde8;
    }
  }
  puVar3 = PTR_DAT_0932e450;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar9 = *(undefined8 *)puVar3;
LAB_0854cde8:
  FUN_08978b08(uVar9,0);
  return;
}


