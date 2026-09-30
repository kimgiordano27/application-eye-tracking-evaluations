/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProvider$$Meta.XR.EnvironmentDepth.IDepthProvider.SetDepthEnabled
ENTRY_POINT: 06d74b24
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProvider__Meta_XR_EnvironmentDepth_IDepthProvider_SetDepthEnabled
               (long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_094199af & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8f358);
    DAT_094199af = 1;
  }
  puVar2 = PTR_DAT_08e8f358;
  lVar5 = *(long *)(param_1 + 0xd0);
  if (lVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x1d0);
    if (*plVar1 == *(long *)(lVar5 + 0x10)) {
      return;
    }
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      if (lVar5 == 0) goto LAB_06d74c28;
      plVar8 = *(long **)(param_1 + 0x1c0);
      lVar5 = FUN_045d697c(*(undefined8 *)(lVar5 + 0x10),uVar6 & 0xffffffff,0,*(undefined8 *)puVar2)
      ;
      if (plVar8 == (long *)0x0) goto LAB_06d74c28;
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar4,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar8[uVar6 + 4] = lVar5;
      thunk_FUN_03d233cc((long)plVar8 + lVar7,lVar5);
      lVar5 = *(long *)(param_1 + 0xd0);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar6 != 0x37);
    if (lVar5 != 0) {
      *plVar1 = *(long *)(lVar5 + 0x10);
      thunk_FUN_03d233cc(plVar1);
      return;
    }
  }
LAB_06d74c28:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


