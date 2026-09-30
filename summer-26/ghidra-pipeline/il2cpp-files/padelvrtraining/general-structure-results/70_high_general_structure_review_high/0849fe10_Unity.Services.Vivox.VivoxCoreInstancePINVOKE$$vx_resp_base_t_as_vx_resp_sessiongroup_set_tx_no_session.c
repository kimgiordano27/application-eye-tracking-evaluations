/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_no_session
ENTRY_POINT: 0849fe10
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_no_session
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar11;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x648));
  FUN_03d2d2b0(PTR_DAT_0927f298);
  FUN_03d2d2b0(PTR_DAT_0927dd88);
  FUN_03d2d2b0(PTR_DAT_0927f288);
  FUN_03d2d2b0(PTR_DAT_0927f2a0);
  FUN_03d2d2b0(PTR_DAT_0927a6c8);
  FUN_03d2d2b0(PTR_DAT_0927f2a8);
  FUN_03d2d2b0(PTR_DAT_0927f2b0);
  FUN_03d2d2b0(PTR_DAT_091a8438);
  FUN_03d2d2b0(PTR_DAT_0927f2b8);
  FUN_03d2d2b0(PTR_DAT_091a5df0);
  FUN_03d2d2b0(PTR_DAT_0927f2c0);
  FUN_03d2d2b0(PTR_DAT_0927f2c8);
  FUN_03d2d2b0(PTR_DAT_0927f2d0);
  *(undefined1 *)(unaff_x20 + 0xfe) = 1;
  uVar2 = thunk_FUN_03d2ef40(*unaff_x21);
  FUN_084b38f0(uVar2,0);
  if (unaff_x19 != 0) {
    lVar3 = FUN_04ecc4c0();
    lVar4 = FUN_04ecc4c0();
    if (lVar4 == 0) {
      FUN_08497dac(*(undefined8 *)PTR_DAT_0927f2c0);
    }
    if (lVar3 != 0) {
      plVar5 = (long *)FUN_04ecc4c0();
      puVar1 = PTR_DAT_0927f2b0;
      if (plVar5 == (long *)0x0) goto LAB_084a01cc;
      lVar3 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar11 = *(undefined8 *)PTR_DAT_0927f2d0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0927a6c8) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0849ffac;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar5,*(long *)PTR_DAT_0927a6c8,1);
LAB_0849ffac:
      uVar11 = (*(code *)*puVar6)(plVar5,uVar11,puVar6[1]);
      uVar7 = FUN_04ecc4c0();
      uVar8 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
      FUN_084a01d0(uVar8,uVar2,uVar7,lVar4,uVar11);
      if (DAT_0985119a == '\0') {
        FUN_03d2d2b0(PTR_DAT_0927f2d8);
        DAT_0985119a = '\x01';
      }
      puVar1 = PTR_DAT_0927f2d8;
      **(undefined8 **)(*(long *)PTR_DAT_0927f2d8 + 0xb8) = uVar8;
      thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar8);
      plVar5 = (long *)FUN_04ecc4c0();
      if (plVar5 == (long *)0x0) {
        FUN_08497dac(*(undefined8 *)PTR_DAT_0927f2c8);
      }
      else {
        uVar2 = FUN_04ecc4c0();
        if (*(int *)(*(long *)PTR_DAT_091a8438 + 0xe0) == 0) {
          thunk_FUN_03db619c(*(long *)PTR_DAT_091a8438);
        }
        lVar3 = FUN_084a0338();
        uVar11 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f2b8);
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        else {
          uVar7 = *(undefined8 *)PTR_DAT_0927f2a0;
          lVar4 = thunk_FUN_03d2ee44(lVar3,uVar7);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d8e4(lVar3,uVar7);
          }
        }
        FUN_084a041c(uVar11,lVar4,uVar2);
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0927f2a8) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_084a0150;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370(plVar5,*(long *)PTR_DAT_0927f2a8,0);
LAB_084a0150:
        (*(code *)*puVar6)(plVar5,uVar11,puVar6[1]);
      }
    }
    puVar1 = PTR_DAT_091a5df0;
    if (*(int *)(*(long *)PTR_DAT_091a5df0 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (DAT_09837bb8 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a5df0);
      DAT_09837bb8 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar3 = *(long *)puVar1;
    }
    return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
  }
LAB_084a01cc:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


