/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_current_playback_speed_get
ENTRY_POINT: 0854cc78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0854d184) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_current_playback_speed_get
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar12;
  
  lVar5 = FUN_084f7088(param_2,*param_1);
  lVar6 = FUN_084f7088();
  puVar2 = PTR_DAT_09285d70;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x1a0) == 0)) goto LAB_0854d17c;
  uVar7 = FUN_083e3844(*(long *)(lVar6 + 0x1a0),0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar6 + 0x1a0) == 0) goto LAB_0854d17c;
    uVar7 = FUN_083e3974(*(long *)(lVar6 + 0x1a0),0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(lVar6 + 0x1a0) == 0) {
LAB_0854d17c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(char *)(*(long *)(lVar6 + 0x1a0) + 0x21) != '\0') {
        FUN_0854c7f4();
        lVar12 = *(long *)(lVar6 + 0xd8);
        if (lVar12 != 0) {
          uVar4 = FUN_08979340(lVar12,0);
          FUN_089793f4(lVar12,uVar4 | 5,0);
          FUN_084f8008();
          if (unaff_x21 != 0) {
            plVar8 = (long *)FUN_05189b28();
            if (*(long *)(lVar6 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar4 = FUN_083e7714(*(long *)(lVar6 + 0x1a0),0);
            puVar2 = PTR_DAT_09327080;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar6 = *plVar8;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09327080) {
                  puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
                  goto LAB_0854ce3c;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09327080,0xd);
LAB_0854ce3c:
            (*(code *)*puVar9)(plVar8,uVar4 & 1,puVar9[1]);
            puVar3 = PTR_DAT_09327ed0;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar6 = *plVar8;
            uVar10 = *(undefined8 *)(unaff_x19 + 200);
            uVar1 = *(undefined8 *)(unaff_x19 + 0xd0);
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09327ed0) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0854ceac;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09327ed0,0);
LAB_0854ceac:
            (*(code *)*puVar9)(plVar8,uVar10,uVar1,0,2,puVar9[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar6 = *plVar8;
            uVar10 = *(undefined8 *)(unaff_x19 + 0xe0);
            uVar1 = *(undefined8 *)(unaff_x19 + 0xe8);
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                  goto LAB_0854cf24;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,4);
LAB_0854cf24:
            uVar10 = (*(code *)*puVar9)(plVar8,uVar10,uVar1,2,puVar9[1]);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            FUN_0854c57c(uVar10,unaff_x20 + 0x18,lVar5 + 0x18);
            lVar5 = *(long *)(unaff_x20 + 0x18);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar12 = *plVar8;
            lVar6 = *(long *)puVar2;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar9 = (undefined8 *)(lVar12 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                  goto LAB_0854cfb4;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar8,lVar6,9);
LAB_0854cfb4:
            (*(code *)*puVar9)(plVar8,lVar5 + 0x10,puVar9[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar6 = *plVar8;
            lVar5 = *(long *)puVar2;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar5) {
                  puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
                  goto LAB_0854d01c;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar8,lVar5,0xc);
LAB_0854d01c:
            (*(code *)*puVar9)(plVar8,1,puVar9[1]);
            FUN_0854c798();
            uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e430);
            FUN_06ac88dc();
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar5 = *plVar8;
            lVar6 = *(long *)PTR_DAT_0932e438;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)(lVar6 + 0x20)) {
                  lVar5 = lVar5 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_0854d0c8;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            lVar5 = FUN_040b1e00(plVar8);
LAB_0854d0c8:
            lVar5 = thunk_FUN_04096bb4(*(undefined8 *)(lVar5 + 8),lVar6);
            (**(code **)(lVar5 + 8))(plVar8,uVar10,lVar5);
            if (plVar8 != (long *)0x0) {
              lVar5 = *plVar8;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092860c0) {
                    puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0854d14c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar7 != 0);
              }
              puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092860c0,0);
LAB_0854d14c:
              (*(code *)*puVar9)(plVar8,puVar9[1]);
            }
            return;
          }
        }
        goto LAB_0854d17c;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar10 = *(undefined8 *)PTR_DAT_0932e468;
      goto LAB_0854cde8;
    }
  }
  puVar3 = PTR_DAT_0932e450;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar10 = *(undefined8 *)puVar3;
LAB_0854cde8:
  FUN_08978b08(uVar10,0);
  return;
}


