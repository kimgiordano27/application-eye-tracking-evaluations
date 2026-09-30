/*
FUNCTION_NAME: System.Collections.Generic.List<ComputedTransitionProperty>$$ToArray
ENTRY_POINT: 0303a914
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Collections_Generic_List<ComputedTransitionProperty>__ToArray(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  
  if (param_1 < unaff_w19) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar2 = FUN_033aadfc();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_02a459bc(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar2 - unaff_w19) < iVar3) {
      FUN_033b2d60(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      FUN_01dde7f8(lVar8);
    }
    lVar8 = thunk_FUN_01de26bc();
    if (lVar8 != 0) {
      FUN_0303a654();
      return;
    }
                    /* try { // try from 0303a9d0 to 0313a9f7 has its CatchHandler @ 0303ab34 */
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    lVar8 = *(long *)(unaff_x21 + 0x10);
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar1) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar9 = 0;
        lVar10 = lVar8 + 0x28;
        do {
                    /* try { // try from 0303aa14 to 0313aa73 has its CatchHandler @ 0303ab38 */
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < *(int *)(lVar10 + -8)) {
            lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar5;
            thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x30;
                    /* try { // try from 0303aa88 to 0313aa97 has its CatchHandler @ 0303ab30 */
        } while (uVar1 != uVar9);
      }
                    /* try { // try from 0303aa98 to 0313ab1f has its CatchHandler @ 0303a8c8 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


