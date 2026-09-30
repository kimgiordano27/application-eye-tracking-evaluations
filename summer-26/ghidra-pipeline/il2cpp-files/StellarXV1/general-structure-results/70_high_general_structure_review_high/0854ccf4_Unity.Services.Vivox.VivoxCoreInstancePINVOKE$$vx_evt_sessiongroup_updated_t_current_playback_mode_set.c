/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_current_playback_mode_set
ENTRY_POINT: 0854ccf4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0854d184) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_current_playback_mode_set
               (void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  FUN_08979340();
  FUN_089793f4();
  FUN_084f8008();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar5 = (long *)FUN_05189b28();
  if (*(long *)(unaff_x23 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar4 = FUN_083e7714(*(long *)(unaff_x23 + 0x1a0),0);
  puVar2 = PTR_DAT_09327080;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09327080) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
        goto LAB_0854ce3c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09327080,0xd);
LAB_0854ce3c:
  (*(code *)*puVar6)(plVar5,uVar4 & 1,puVar6[1]);
  puVar3 = PTR_DAT_09327ed0;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *plVar5;
  uVar7 = *(undefined8 *)(unaff_x19 + 200);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xd0);
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09327ed0) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0854ceac;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09327ed0,0);
LAB_0854ceac:
  (*(code *)*puVar6)(plVar5,uVar7,uVar1,0,2,puVar6[1]);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *plVar5;
  uVar7 = *(undefined8 *)(unaff_x19 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xe8);
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
        goto LAB_0854cf24;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar3,4);
LAB_0854cf24:
  uVar7 = (*(code *)*puVar6)(plVar5,uVar7,uVar1,2,puVar6[1]);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_0854c57c(uVar7,unaff_x20 + 0x18,unaff_x22 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar10 = *plVar5;
  lVar8 = *(long *)puVar2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
        goto LAB_0854cfb4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,9);
LAB_0854cfb4:
  (*(code *)*puVar6)(plVar5,lVar9 + 0x10,puVar6[1]);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *plVar5;
  lVar9 = *(long *)puVar2;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto LAB_0854d01c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar9,0xc);
LAB_0854d01c:
  (*(code *)*puVar6)(plVar5,1,puVar6[1]);
  FUN_0854c798();
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e430);
  FUN_06ac88dc();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *plVar5;
  lVar8 = *(long *)PTR_DAT_0932e438;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar9 = lVar9 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_0854d0c8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  lVar9 = FUN_040b1e00(plVar5);
LAB_0854d0c8:
  lVar9 = thunk_FUN_04096bb4(*(undefined8 *)(lVar9 + 8),lVar8);
  (**(code **)(lVar9 + 8))(plVar5,uVar7,lVar9);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0854d14c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092860c0,0);
LAB_0854d14c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


