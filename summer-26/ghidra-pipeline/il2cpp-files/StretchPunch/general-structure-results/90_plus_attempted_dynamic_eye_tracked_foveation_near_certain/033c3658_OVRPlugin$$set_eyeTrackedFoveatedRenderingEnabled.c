/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 033c3658
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 164
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
                    /* try { // try from 033c3660 to 034c3667 has its CatchHandler @ 033c39a0 */
  if ((unaff_x19 == 0) || (param_1 == 0)) {
LAB_033c3750:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar8 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
  if (uVar8 == *(uint *)(param_1 + 0x18)) {
    if (0 < (int)uVar8) {
                    /* try { // try from 033c367c to 034c367f has its CatchHandler @ 033c399c */
      if (uVar8 != 0) {
        lVar7 = 0;
                    /* try { // try from 033c368c to 034c3697 has its CatchHandler @ 033c39b0 */
        uVar9 = 1;
        do {
          plVar4 = *(long **)(unaff_x19 + lVar7 * 8 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_033c3750;
                    /* try { // try from 033c36a4 to 034c36a7 has its CatchHandler @ 033c39ac */
          uVar5 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          if (*(uint *)(param_1 + 0x18) <= uVar9 - 1) break;
          plVar4 = *(long **)(param_1 + lVar7 * 8 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_033c3750;
          uVar6 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 033c36e8 to 034c3717 has its CatchHandler @ 033c39a8 */
            thunk_FUN_01dc4f30(*(long *)puVar1);
          }
          uVar3 = FUN_033ab18c(uVar5,uVar6,0);
          if (((uVar3 & 1) != 0) || (uVar8 == uVar9)) {
            uVar3 = uVar3 ^ 1;
            goto LAB_033c3738;
          }
          lVar7 = (long)(int)uVar9;
          bVar2 = uVar9 < *(uint *)(unaff_x19 + 0x18);
          uVar9 = uVar9 + 1;
        } while (bVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
LAB_033c3738:
  return uVar3 & 1;
}


