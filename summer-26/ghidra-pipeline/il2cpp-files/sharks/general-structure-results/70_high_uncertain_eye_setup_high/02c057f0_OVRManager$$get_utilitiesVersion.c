/*
FUNCTION_NAME: OVRManager$$get_utilitiesVersion
ENTRY_POINT: 02c057f0
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__get_utilitiesVersion(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_03a25df4 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03803f98);
    DAT_03a25df4 = 1;
  }
  plVar5 = (long *)(param_1 + 0x68);
  if (*plVar5 != 0) {
LAB_02c05828:
    return *plVar5;
  }
  plVar2 = (long *)thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803f98);
  FUN_02b9d3ec(plVar2,param_1,1,0);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    if (iVar1 < 1) goto LAB_02c05828;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x188))(plVar2,0,*(undefined8 *)(*plVar2 + 400));
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      uVar3 = FUN_02b0f09c(plVar2,0,0);
      if ((uVar3 & 1) == 0) goto LAB_02c05828;
      if (plVar2 != (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        if (plVar2 != (long *)0x0) {
          plVar2 = (long *)(**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(*plVar2 + 0x2e0));
          if (plVar2 != (long *)0x0) {
            lVar4 = (**(code **)(*plVar2 + 0x288))(plVar2,*(undefined8 *)(*plVar2 + 0x290));
            if (lVar4 != 0) {
              *plVar5 = *(long *)(lVar4 + 0x10);
              thunk_FUN_0188fd20(plVar5);
              goto LAB_02c05828;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


