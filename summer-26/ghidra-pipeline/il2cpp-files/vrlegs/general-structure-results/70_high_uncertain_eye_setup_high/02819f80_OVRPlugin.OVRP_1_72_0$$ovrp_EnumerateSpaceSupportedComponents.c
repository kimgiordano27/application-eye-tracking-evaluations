/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EnumerateSpaceSupportedComponents
ENTRY_POINT: 02819f80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_EnumerateSpaceSupportedComponents
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long unaff_x21;
  ulong uVar14;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ccbd08);
    FUN_01ab69ac(PTR_DAT_03cd85f0);
    FUN_01ab69ac(PTR_DAT_03cbe888);
    *(undefined1 *)(unaff_x21 + 0x393) = 1;
  }
  if ((unaff_x22 != 0) && (param_3 != 0)) {
    uVar14 = *(ulong *)(unaff_x22 + 0x18);
    uVar2 = thunk_FUN_01a5d350(param_3,0);
    uVar13 = (uint)uVar14;
    if (uVar2 == uVar13) {
      uVar5 = FUN_0281a21c(param_2);
      thunk_FUN_01a5d4fc(param_3,uVar5);
      return;
    }
    iVar3 = thunk_FUN_01a5d2c8(param_3,uVar14 & 0xffffffff,0);
    lVar6 = FUN_0281a21c(param_2);
    puVar1 = PTR_DAT_03cd85f0;
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)PTR_DAT_03cd85f0;
      lVar7 = thunk_FUN_01a89d6c(lVar6,uVar5);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar6,uVar5);
      }
      uVar5 = *(undefined8 *)puVar1;
      lVar7 = *(long *)PTR_DAT_03ccbd08;
      plVar8 = (long *)thunk_FUN_01a89d6c(lVar6,uVar5);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar6,uVar5);
      }
      lVar6 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0281a0c0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,1);
LAB_0281a0c0:
      iVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (iVar4 != iVar3) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar5 = thunk_FUN_01a89e68();
        uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfe5f8);
        FUN_027a794c(uVar5,uVar10,0);
        uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfe600);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar10);
      }
      lVar6 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,uVar13 + 1);
      if (0 < (int)uVar13) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        uVar11 = 0;
        do {
          if (uVar2 == uVar11) goto LAB_0281a1b4;
          if (lVar6 == 0) goto LAB_0281a1b8;
          if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_0281a1b4;
          *(undefined4 *)(lVar6 + 0x20 + uVar11 * 4) =
               *(undefined4 *)(unaff_x22 + 0x20 + uVar11 * 4);
          uVar11 = uVar11 + 1;
        } while ((uVar14 & 0xffffffff) != uVar11);
      }
      iVar3 = thunk_FUN_01a5d2c8(param_3,uVar14 & 0xffffffff,0);
      if (0 < iVar3) {
        if (lVar6 == 0) goto LAB_0281a1b8;
        iVar3 = 0;
        do {
          if (*(uint *)(lVar6 + 0x18) <= uVar13) {
LAB_0281a1b4:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(int *)(lVar6 + ((long)(uVar14 << 0x20) >> 0x1e) + 0x20) = iVar3;
          FUN_02819f60(param_2,param_3,lVar6);
          iVar3 = iVar3 + 1;
          iVar4 = thunk_FUN_01a5d2c8(param_3,uVar14 & 0xffffffff,0);
        } while (iVar3 < iVar4);
      }
      return;
    }
  }
LAB_0281a1b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


