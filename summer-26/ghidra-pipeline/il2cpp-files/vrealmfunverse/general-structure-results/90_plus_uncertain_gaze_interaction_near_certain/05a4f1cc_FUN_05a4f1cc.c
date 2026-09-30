/*
FUNCTION_NAME: FUN_05a4f1cc
ENTRY_POINT: 05a4f1cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


long FUN_05a4f1cc(long param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  
  puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__;
  puVar2 = PTR_DAT_06312cb0;
                    /* try { // try from 05a4f1f0 to 05b4f21f has its CatchHandler @ 05a4f8d4 */
  if ((DAT_066d3e5a & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    FUN_02b3c81c(PTR_DAT_06324a40);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ContextContainer_Create<UniversalCameraData>__);
    FUN_02b3c81c(PTR_DAT_06312cb0);
                    /* try { // try from 05a4f238 to 05b4f23b has its CatchHandler @ 05a4f8cc */
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                );
    DAT_066d3e5a = 1;
  }
  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    /* try { // try from 05a4f254 to 05b4f257 has its CatchHandler @ 05a4f8d8 */
  FUN_05c8d65c(lVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar6 = FUN_05a4757c();
  if (lVar5 != 0) {
                    /* try { // try from 05a4f270 to 05b4f28f has its CatchHandler @ 05a4f8d0 */
    uVar4 = 0x3d;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0x34;
    }
    FUN_05c9364c(lVar5,uVar4,0);
    lVar7 = FUN_05c8c8e0(lVar5,0);
    if ((param_1 != 0) && (uVar8 = FUN_05a1fc08(param_1,0), lVar7 != 0)) {
      FUN_05c9caa4(lVar7,uVar8,0,0);
      lVar7 = FUN_05c8c8e0(lVar5,0);
      if (lVar7 != 0) {
        FUN_05c9df1c(lVar7,0);
        lVar7 = FUN_05c89410(param_1,0);
        puVar2 = PTR_DAT_06324a40;
        if (lVar7 != 0) {
          uVar4 = FUN_05c8c9b0(lVar7,0);
          FUN_05c8ca64(lVar5,uVar4,0);
          lVar7 = FUN_031d8020(lVar5,*(undefined8 *)puVar2);
          if (DAT_066c1e96 == '\0') {
            FUN_02b3c81c(PTR_DAT_063132f8);
            DAT_066c1e96 = '\x01';
          }
          puVar2 = PTR_DAT_063132f8;
          if (lVar7 != 0) {
            FUN_05c9ace8(**(undefined4 **)(*(long *)PTR_DAT_063132f8 + 0xb8),
                         (*(undefined4 **)(*(long *)PTR_DAT_063132f8 + 0xb8))[1],lVar7,0);
            if (DAT_066c1e91 == '\0') {
              FUN_02b3c81c(PTR_DAT_063132f8);
              DAT_066c1e91 = '\x01';
            }
            lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
            FUN_05c9ae7c(*(undefined4 *)(lVar10 + 8),*(undefined4 *)(lVar10 + 0xc),lVar7,0);
            if (DAT_066c1e96 == '\0') {
              FUN_02b3c81c(PTR_DAT_063132f8);
              DAT_066c1e96 = '\x01';
            }
            puVar11 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
            FUN_05c9b1a4(*puVar11,puVar11[1],lVar7,0);
            lVar10 = FUN_05a1fca8(param_1,0);
            puVar2 = Method_OVRPlugin_PinnedArray<Guid>_Dispose__;
            if (lVar10 != 0) {
              FUN_05c9b26c(lVar10,0);
              FUN_05c9b338(lVar7,0);
              plVar9 = (long *)FUN_031d8020(lVar5,*(undefined8 *)puVar2);
              puVar2 = Method_UnityEngine_Rendering_ContextContainer_Create<UniversalCameraData>__;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x2f8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x300));
                lVar5 = FUN_031d8020(lVar5,*(undefined8 *)puVar2);
                if (lVar5 != 0) {
                  *(long *)(lVar5 + 0x118) = param_1;
                  thunk_FUN_02bb0e9c(lVar5 + 0x118,param_1);
                  *(undefined4 *)(lVar5 + 0x124) = *param_2;
                  *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(param_2 + 2);
                  thunk_FUN_02bb0e9c();
                  *(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)(param_2 + 4);
                  thunk_FUN_02bb0e9c();
                  uVar1 = *(undefined1 *)(param_1 + 0xb8);
                  *(byte *)(lVar5 + 0x108) = *(byte *)(param_2 + 8) & 1;
                  FUN_05f81b98(lVar5,uVar1,0);
                  FUN_05a4ee2c(lVar5,*(undefined8 *)(param_2 + 6));
                  return lVar5;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


