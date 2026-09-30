/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryConfigured
ENTRY_POINT: 090cc0f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryConfigured(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x22;
  long lVar9;
  
  puVar3 = PTR_DAT_0ac79638;
  puVar2 = PTR_DAT_0ac76fc0;
  if (*param_1 == 0) {
LAB_090cc21c:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac77e30,*(undefined4 *)(*param_1 + 0x18));
  uVar8 = 0;
  lVar9 = 0x20;
  while( true ) {
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar5 = *unaff_x22;
    }
    lVar7 = **(long **)(lVar5 + 0xb8);
    if (lVar7 == 0) goto LAB_090cc21c;
    if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar8) {
      return lVar4;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar7 == 0) goto LAB_090cc21c;
    }
    lVar5 = FUN_06b7fba4(lVar7,uVar8 & 0xffffffff,*(undefined8 *)puVar3);
    if (lVar5 == 0) goto LAB_090cc21c;
    iVar1 = *(int *)(lVar5 + 0x18) + -1;
    uVar6 = FUN_04947fd0(*(undefined8 *)puVar2,iVar1);
    if (lVar4 == 0) goto LAB_090cc21c;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) break;
    lVar5 = lVar4 + uVar8 * 8;
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    thunk_FUN_049ee3d8(lVar4 + lVar9,uVar6);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_090cc21c;
    uVar6 = FUN_06b7fba4(**(long **)(*unaff_x22 + 0xb8),uVar8 & 0xffffffff,*(undefined8 *)puVar3);
    if (*(uint *)(lVar4 + 0x18) <= uVar8) break;
    FUN_08da0170(uVar6,*(undefined8 *)(lVar5 + 0x20),iVar1,0);
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


