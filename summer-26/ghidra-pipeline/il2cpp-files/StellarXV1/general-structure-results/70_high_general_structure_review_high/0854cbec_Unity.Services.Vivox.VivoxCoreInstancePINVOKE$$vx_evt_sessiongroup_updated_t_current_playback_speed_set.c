/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_current_playback_speed_set
ENTRY_POINT: 0854cbec
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_current_playback_speed_set
               (long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar13;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x448));
  FUN_04077588(PTR_DAT_0932e428);
  FUN_04077588(PTR_DAT_0932e450);
  FUN_04077588(PTR_DAT_0932e458);
  FUN_04077588(PTR_DAT_0932e460);
  FUN_04077588(PTR_DAT_0932e468);
  *(undefined1 *)(unaff_x22 + 0x9e5) = 1;
  lVar5 = thunk_FUN_040b4efc(*unaff_x20);
  FUN_076bca34(lVar5,0);
  if (lVar5 == 0) {
LAB_0854d17c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(long *)(lVar5 + 0x10) = unaff_x19;
  thunk_FUN_040ec700();
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
        FUN_0854c7f4();
        lVar13 = *(long *)(lVar7 + 0xd8);
        if (lVar13 != 0) {
          uVar4 = FUN_08979340(lVar13,0);
          FUN_089793f4(lVar13,uVar4 | 5,0);
          FUN_084f8008();
          if (unaff_x21 != 0) {
            plVar9 = (long *)FUN_05189b28();
            if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar4 = FUN_083e7714(*(long *)(lVar7 + 0x1a0),0);
            puVar2 = PTR_DAT_09327080;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar7 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09327080) {
                  puVar10 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                  goto LAB_0854ce3c;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09327080,0xd);
LAB_0854ce3c:
            (*(code *)*puVar10)(plVar9,uVar4 & 1,puVar10[1]);
            puVar3 = PTR_DAT_09327ed0;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar7 = *plVar9;
            uVar11 = *(undefined8 *)(unaff_x19 + 200);
            uVar1 = *(undefined8 *)(unaff_x19 + 0xd0);
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09327ed0) {
                  puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0854ceac;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09327ed0,0);
LAB_0854ceac:
            (*(code *)*puVar10)(plVar9,uVar11,uVar1,0,2,puVar10[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar7 = *plVar9;
            uVar11 = *(undefined8 *)(unaff_x19 + 0xe0);
            uVar1 = *(undefined8 *)(unaff_x19 + 0xe8);
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar7 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                  goto LAB_0854cf24;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar3,4);
LAB_0854cf24:
            uVar11 = (*(code *)*puVar10)(plVar9,uVar11,uVar1,2,puVar10[1]);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            FUN_0854c57c(uVar11,lVar5 + 0x18,lVar6 + 0x18);
            lVar6 = *(long *)(lVar5 + 0x18);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar13 = *plVar9;
            lVar7 = *(long *)puVar2;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                  goto LAB_0854cfb4;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_040b1e00(plVar9,lVar7,9);
LAB_0854cfb4:
            (*(code *)*puVar10)(plVar9,lVar6 + 0x10,puVar10[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar7 = *plVar9;
            lVar6 = *(long *)puVar2;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar6) {
                  puVar10 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                  goto LAB_0854d01c;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_040b1e00(plVar9,lVar6,0xc);
LAB_0854d01c:
            (*(code *)*puVar10)(plVar9,1,puVar10[1]);
            FUN_0854c798();
            uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e430);
            FUN_06ac88dc(uVar11,lVar5,*(undefined8 *)PTR_DAT_0932e448,0);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar5 = *plVar9;
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
            lVar5 = FUN_040b1e00(plVar9);
LAB_0854d0c8:
            lVar5 = thunk_FUN_04096bb4(*(undefined8 *)(lVar5 + 8),lVar6);
            (**(code **)(lVar5 + 8))(plVar9,uVar11,lVar5);
            if (plVar9 != (long *)0x0) {
              lVar5 = *plVar9;
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar8 != 0) {
                piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
                    puVar10 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0854d14c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092860c0,0);
LAB_0854d14c:
              (*(code *)*puVar10)(plVar9,puVar10[1]);
            }
            return;
          }
        }
        goto LAB_0854d17c;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar11 = *(undefined8 *)PTR_DAT_0932e468;
      goto LAB_0854cde8;
    }
  }
  puVar3 = PTR_DAT_0932e450;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar11 = *(undefined8 *)puVar3;
LAB_0854cde8:
  FUN_08978b08(uVar11,0);
  return;
}


