/*
FUNCTION_NAME: OVRPlugin.OVRP_1_56_0$$.cctor
ENTRY_POINT: 05d4c474
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_19
*/


void OVRPlugin_OVRP_1_56_0___cctor(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  uint *puVar10;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *piVar11;
  
  *(undefined8 *)(unaff_x19 + 0xb0) = param_2;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xb0));
                    /* try { // try from 05d4c484 to 05e4c48f has its CatchHandler @ 05d4c4b8 */
  uVar4 = FUN_02fe9340(*unaff_x22,0);
                    /* try { // try from 05d4c490 to 05e4c4d3 has its CatchHandler @ 05d4c398 */
  if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xb8),uVar4);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4c484 with catch @ 05d4c4b8
                        */
    uVar4 = FUN_02fe9340(*unaff_x22,0);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4c444 with catch @ 05d4c4bc
                        */
    if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
                    /* try { // try from 05d4c4d4 to 05e4c4d7 has its CatchHandler @ 05d4c4f8 */
                    /* try { // try from 05d4c4d8 to 05e4c4ff has its CatchHandler @ 05d4c398 */
      thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xc0),uVar4);
      uVar4 = FUN_02fe9340(*unaff_x22,0);
      if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                    /* catch() { ... } // from try @ 05d4c4d4 with catch @ 05d4c4f8 */
        *(undefined8 *)(unaff_x19 + 200) = uVar4;
        thunk_FUN_03048534((undefined8 *)(unaff_x19 + 200),uVar4);
        uVar4 = FUN_02fe9340(*unaff_x22,0);
        if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
          thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xd0),uVar4);
          uVar4 = FUN_02fe9340(*unaff_x22,0);
          puVar3 = PTR_DAT_06fb92e8;
          puVar2 = PTR_DAT_06fb92e0;
          if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
            thunk_FUN_03048534();
            *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
            thunk_FUN_03048534();
            lVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
            FUN_043b7398(lVar5,*(undefined8 *)puVar2);
            puVar2 = PTR_DAT_06fb92d0;
            if (lVar5 != 0) {
              lVar8 = *(long *)PTR_DAT_06fb92d0;
              piVar11 = (int *)(lVar5 + 0x1c);
              *piVar11 = *piVar11 + 1;
              lVar9 = *(long *)(lVar5 + 0x10);
              puVar10 = (uint *)(lVar5 + 0x18);
              uVar1 = *puVar10;
              if (lVar9 != 0) {
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,6,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 7;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,7,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 8;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,8,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 9;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,9,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 10;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,10,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,0xb,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,0xc,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,0xd,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,0xe,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,0xf,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,0x10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,0x11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,0x12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 2;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,2,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 3;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,3,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                  *piVar11 = *piVar11 + 1;
                }
                else {
                  FUN_043b7bec(lVar5,4,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(lVar5 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                }
                puVar2 = PTR_DAT_06fb9320;
                uVar1 = *puVar10;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *puVar10 = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 5;
                }
                else {
                  FUN_043b7bec(lVar5,5,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
                *plVar6 = lVar5;
                thunk_FUN_03048534(plVar6,lVar5);
                uVar4 = FUN_02fe9340(*unaff_x22,5);
                FUN_05a1740c(uVar4,*(undefined8 *)puVar2,0);
                puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
                *puVar7 = uVar4;
                thunk_FUN_03048534(puVar7,uVar4);
                return;
              }
            }
OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


