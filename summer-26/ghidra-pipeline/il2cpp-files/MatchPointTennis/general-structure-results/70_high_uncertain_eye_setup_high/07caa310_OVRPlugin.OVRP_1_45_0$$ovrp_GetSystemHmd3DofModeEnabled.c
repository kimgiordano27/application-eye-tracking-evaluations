/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 07caa310
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  float fVar7;
  float fVar8;
  
  lVar1 = thunk_FUN_0953ac24(param_1,0);
  if (lVar1 != 0) {
    fVar7 = (float)FUN_0953db60(lVar1,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar1 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0);
      plVar6 = *(long **)(unaff_x19 + 0x28);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x21) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_07caa3bc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_044822ac(plVar6,*unaff_x21,1);
LAB_07caa3bc:
        fVar8 = (float)(*(code *)*puVar2)(plVar6,puVar2[1]);
        if (DAT_0a51bf46 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e740);
          DAT_0a51bf46 = '\x01';
        }
        if (lVar1 != 0) {
          fVar8 = fVar8 / fVar7;
          lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
          FUN_0953aa9c(fVar8 * *(float *)(lVar3 + 0xc),fVar8 * *(float *)(lVar3 + 0x10),
                       fVar8 * *(float *)(lVar3 + 0x14),lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


