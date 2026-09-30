/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppLatencyTimings
ENTRY_POINT: 07a64f3c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppLatencyTimings(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_0928fcb8);
  FUN_04077588(PTR_DAT_09285978);
  *(undefined1 *)(unaff_x20 + 0x561) = 1;
  puVar1 = PTR_DAT_09285bb0;
                    /* try { // try from 07a64f60 to 07b64f67 has its CatchHandler @ 07a651a8 */
  plVar5 = *(long **)(unaff_x19 + 0x20);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 07a64f70 to 07b64f77 has its CatchHandler @ 07a651a0 */
                    /* try { // try from 07a64f78 to 07b6508b has its CatchHandler @ 07a64828 */
    iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
    if (*(int *)(unaff_x19 + 0x28) < iVar3) {
      OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth();
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar6 = FUN_089ca704(uVar8,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0x30);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x5e8))
                (plVar5,*(undefined8 *)PTR_DAT_09285978,*(undefined8 *)(*plVar5 + 0x5f0));
      puVar2 = PTR_DAT_0928fcb8;
      puVar1 = PTR_DAT_09285980;
      plVar5 = *(long **)(unaff_x19 + 0x20);
      if (plVar5 != (long *)0x0) {
        iVar3 = 0;
        do {
          iVar4 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
          if (iVar4 <= iVar3) {
            return;
          }
          plVar5 = *(long **)(unaff_x19 + 0x30);
          if (plVar5 == (long *)0x0) break;
          uVar8 = (**(code **)(*plVar5 + 0x5d8))(plVar5,*(undefined8 *)(*plVar5 + 0x5e0));
          plVar7 = *(long **)(unaff_x19 + 0x20);
          if (plVar7 == (long *)0x0) break;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x2e8))
                                     (plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x2f0));
          if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(puVar1 + 0x90))) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar7);
          }
          uVar8 = FUN_074d875c(uVar8,plVar7,0);
          (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x5f0));
          plVar5 = *(long **)(unaff_x19 + 0x30);
          if (plVar5 == (long *)0x0) break;
          uVar8 = (**(code **)(*plVar5 + 0x5d8))(plVar5,*(undefined8 *)(*plVar5 + 0x5e0));
          uVar8 = FUN_074d875c(uVar8,*(undefined8 *)puVar2,0);
          (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x5f0));
          plVar5 = *(long **)(unaff_x19 + 0x20);
          iVar3 = iVar3 + 1;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


