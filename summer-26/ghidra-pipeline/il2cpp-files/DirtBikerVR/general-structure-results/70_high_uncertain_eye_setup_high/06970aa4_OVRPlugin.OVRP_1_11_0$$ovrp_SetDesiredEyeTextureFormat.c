/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$ovrp_SetDesiredEyeTextureFormat
ENTRY_POINT: 06970aa4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_11_0__ovrp_SetDesiredEyeTextureFormat(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  int iVar4;
  
  FUN_0697110c();
  FUN_06971364();
  FUN_0697110c();
  FUN_06971364();
  FUN_0697110c();
  puVar1 = PTR_DAT_084b5da8;
  plVar2 = *(long **)(unaff_x20 + 0xe0);
  if (plVar2 != (long *)0x0) {
    iVar4 = 0;
    while( true ) {
      lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return;
      }
      plVar2 = *(long **)(unaff_x20 + 0xe0);
      if (plVar2 == (long *)0x0) break;
      lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (((lVar3 == 0) || (lVar3 = FUN_04de82e0(lVar3,iVar4,*(undefined8 *)puVar1), lVar3 == 0)) ||
         (plVar2 = (long *)thunk_FUN_03a9a6e8(lVar3,0), plVar2 == (long *)0x0)) break;
      (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      FUN_0697110c();
      plVar2 = *(long **)(unaff_x20 + 0xe0);
      if (plVar2 == (long *)0x0) break;
      lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (lVar3 == 0) break;
      FUN_04de82e0(lVar3,iVar4,*(undefined8 *)puVar1);
      FUN_06971364();
      plVar2 = *(long **)(unaff_x20 + 0xe0);
      iVar4 = iVar4 + 1;
      if (plVar2 == (long *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


