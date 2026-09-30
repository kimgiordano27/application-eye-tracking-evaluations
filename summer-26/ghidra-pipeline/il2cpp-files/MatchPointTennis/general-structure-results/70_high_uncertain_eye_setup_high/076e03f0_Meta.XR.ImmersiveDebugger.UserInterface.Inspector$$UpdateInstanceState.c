/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$UpdateInstanceState
ENTRY_POINT: 076e03f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Inspector__UpdateInstanceState(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  int iVar9;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xf68));
  *(undefined1 *)(unaff_x20 + 0xe63) = 1;
  uVar5 = FUN_078b4450();
  puVar1 = PTR_DAT_09f259c8;
  if ((uVar5 & 1) == 0) {
    lVar6 = *(long *)PTR_DAT_09f259c8;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar6 = *(long *)puVar1;
    }
    puVar3 = PTR_DAT_09f2ef68;
    puVar2 = PTR_DAT_09f2ef58;
    if (**(long **)(lVar6 + 0xb8) == 0) {
LAB_076e0500:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar9 = *(int *)(**(long **)(lVar6 + 0xb8) + 0x18);
    if (-1 < iVar9 + -1) {
      iVar9 = iVar9 + -2;
      while( true ) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar6 = *(long *)puVar1;
        }
        lVar7 = **(long **)(lVar6 + 0xb8);
        if (lVar7 == 0) goto LAB_076e0500;
        plVar8 = (long *)(*(long **)(lVar6 + 0xb8))[6];
        lVar6 = FUN_05badb74(lVar7,iVar9 + 1,*(undefined8 *)puVar3);
        if ((lVar6 == 0) || (plVar8 == (long *)0x0)) goto LAB_076e0500;
        iVar4 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(lVar6 + 0x28));
        if (iVar4 == 0) {
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar6 = *(long *)puVar1;
          }
          if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_076e0500;
          FUN_05baf638(**(long **)(lVar6 + 0xb8),iVar9 + 1,*(undefined8 *)puVar2);
        }
        if (iVar9 < 0) break;
        lVar6 = *(long *)puVar1;
        iVar9 = iVar9 + -1;
      }
    }
  }
  return;
}


