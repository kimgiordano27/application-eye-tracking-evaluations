/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryGeometry
ENTRY_POINT: 090cc294
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_8
*/


long OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryGeometry(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long unaff_x19;
  ulong uVar9;
  long *plVar10;
  
  lVar4 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac205d8,*(undefined4 *)(unaff_x19 + 0x18));
  puVar3 = PTR_DAT_0ac0ee48;
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (0 < (int)uVar1) {
    uVar9 = 0;
    do {
      if (uVar1 <= uVar9) {
OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar10 = (long *)(unaff_x19 + uVar9 * 8 + 0x20);
      lVar5 = *plVar10;
      if (lVar5 == 0) goto LAB_090cc3b4;
      lVar5 = FUN_04947fd0(*(undefined8 *)puVar3,*(undefined4 *)(lVar5 + 0x18));
      if (*(uint *)(unaff_x19 + 0x18) <= uVar9) goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
      lVar6 = *plVar10;
      if (lVar6 == 0) {
LAB_090cc3b4:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar7 = 0;
        do {
          if (uVar1 == uVar7) goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
          if (param_1 == 0) goto LAB_090cc3b4;
          lVar8 = (long)(int)uVar7;
          uVar2 = *(uint *)(lVar6 + lVar8 * 4 + 0x20);
          if (*(uint *)(param_1 + 0x18) <= uVar2)
          goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
          if (lVar5 == 0) goto LAB_090cc3b4;
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(lVar5 + lVar8 * 4 + 0x20) =
               *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x20);
        } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar7);
      }
      if (lVar4 == 0) goto LAB_090cc3b4;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
      *(long *)(lVar4 + uVar9 * 8 + 0x20) = lVar5;
      thunk_FUN_049ee3d8(lVar4 + 0x20 + uVar9 * 8);
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  return lVar4;
}


