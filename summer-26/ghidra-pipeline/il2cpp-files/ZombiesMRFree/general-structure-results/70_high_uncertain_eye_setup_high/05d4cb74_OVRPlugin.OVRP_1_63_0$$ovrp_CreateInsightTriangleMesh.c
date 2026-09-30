/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_CreateInsightTriangleMesh
ENTRY_POINT: 05d4cb74
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_63_0__ovrp_CreateInsightTriangleMesh(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  
  FUN_043b7bec();
  lVar5 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 05d4cb8c to 05e4ccc3 has its CatchHandler @ 05d4cb8c
                       catch() { ... } // from try @ 05d4cb8c with catch @ 05d4cb8c
                       catch() { ... } // from try @ 05d4cdf4 with catch @ 05d4cb8c
                       catch() { ... } // from try @ 05d4ce68 with catch @ 05d4cb8c
                       catch() { ... } // from try @ 05d4ce9c with catch @ 05d4cb8c
                       catch() { ... } // from try @ 05d4cecc with catch @ 05d4cb8c */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_043b7bec();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
    }
    puVar2 = PTR_DAT_06fb9320;
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 5;
    }
    else {
      FUN_043b7bec();
    }
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
    thunk_FUN_03048534();
    uVar3 = FUN_02fe9340(*unaff_x22,5);
    FUN_05a1740c(uVar3,*(undefined8 *)puVar2,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
    *puVar4 = uVar3;
    thunk_FUN_03048534(puVar4,uVar3);
    return;
  }
OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


