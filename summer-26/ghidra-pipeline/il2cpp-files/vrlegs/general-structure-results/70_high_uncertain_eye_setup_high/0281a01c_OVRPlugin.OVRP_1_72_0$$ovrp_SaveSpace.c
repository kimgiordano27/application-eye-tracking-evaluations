/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SaveSpace
ENTRY_POINT: 0281a01c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_SaveSpace(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  uint unaff_w21;
  long unaff_x22;
  undefined8 uVar12;
  
  lVar5 = FUN_0281a21c();
  puVar2 = PTR_DAT_03cd85f0;
  if (lVar5 != 0) {
    uVar12 = *(undefined8 *)PTR_DAT_03cd85f0;
    lVar6 = thunk_FUN_01a89d6c(lVar5,uVar12);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar5,uVar12);
    }
    uVar12 = *(undefined8 *)puVar2;
    lVar6 = *(long *)PTR_DAT_03ccbd08;
    plVar7 = (long *)thunk_FUN_01a89d6c(lVar5,uVar12);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar5,uVar12);
    }
    lVar5 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0281a0c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,lVar6,1);
LAB_0281a0c0:
    iVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (iVar3 != param_1) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar12 = thunk_FUN_01a89e68();
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cfe5f8);
      FUN_027a794c(uVar12,uVar9,0);
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cfe600);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar12,uVar9);
    }
    lVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,unaff_w21 + 1);
    if (0 < (int)unaff_w21) {
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      uVar10 = 0;
      do {
        if (uVar1 == uVar10) goto LAB_0281a1b4;
        if (lVar5 == 0) goto LAB_0281a1b8;
        if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_0281a1b4;
        *(undefined4 *)(lVar5 + 0x20 + uVar10 * 4) = *(undefined4 *)(unaff_x22 + 0x20 + uVar10 * 4);
        uVar10 = uVar10 + 1;
      } while (unaff_w21 != uVar10);
    }
    iVar3 = thunk_FUN_01a5d2c8();
    if (0 < iVar3) {
      if (lVar5 == 0) goto LAB_0281a1b8;
      iVar3 = 0;
      do {
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) {
LAB_0281a1b4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(int *)(lVar5 + ((long)((ulong)unaff_w21 << 0x20) >> 0x1e) + 0x20) = iVar3;
        FUN_02819f60();
        iVar3 = iVar3 + 1;
        iVar4 = thunk_FUN_01a5d2c8();
      } while (iVar3 < iVar4);
    }
    return;
  }
LAB_0281a1b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


