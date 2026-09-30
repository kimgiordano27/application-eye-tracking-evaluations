/*
FUNCTION_NAME: FUN_090cc224
ENTRY_POINT: 090cc224
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_6
*/


long FUN_090cc224(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  puVar3 = PTR_DAT_0ac76fb8;
  if ((DAT_0b330506 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac76fb8);
    FUN_04947ee4(PTR_DAT_0ac205d8);
    FUN_04947ee4(PTR_DAT_0ac0ee48);
    DAT_0b330506 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar4 = FUN_090cc06c();
  lVar5 = FUN_090cbef8();
  if (lVar4 != 0) {
    lVar6 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac205d8,*(undefined4 *)(lVar4 + 0x18));
    puVar3 = PTR_DAT_0ac0ee48;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        plVar12 = (long *)(lVar4 + uVar11 * 8 + 0x20);
        lVar7 = *plVar12;
        if (lVar7 == 0) goto LAB_090cc3b4;
        lVar7 = FUN_04947fd0(*(undefined8 *)puVar3,*(undefined4 *)(lVar7 + 0x18));
        if (*(uint *)(lVar4 + 0x18) <= uVar11) goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
        lVar8 = *plVar12;
        if (lVar8 == 0) goto LAB_090cc3b4;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar9 = 0;
          do {
            if (uVar1 == uVar9) goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
            if (lVar5 == 0) goto LAB_090cc3b4;
            lVar10 = (long)(int)uVar9;
            uVar2 = *(uint *)(lVar8 + lVar10 * 4 + 0x20);
            if (*(uint *)(lVar5 + 0x18) <= uVar2)
            goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
            if (lVar7 == 0) goto LAB_090cc3b4;
            if (*(uint *)(lVar7 + 0x18) <= uVar9)
            goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
            uVar9 = uVar9 + 1;
            *(undefined4 *)(lVar7 + lVar10 * 4 + 0x20) =
                 *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
          } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar9);
        }
        if (lVar6 == 0) goto LAB_090cc3b4;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
        *(long *)(lVar6 + uVar11 * 8 + 0x20) = lVar7;
        thunk_FUN_049ee3d8(lVar6 + 0x20 + uVar11 * 8);
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
    return lVar6;
  }
LAB_090cc3b4:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


