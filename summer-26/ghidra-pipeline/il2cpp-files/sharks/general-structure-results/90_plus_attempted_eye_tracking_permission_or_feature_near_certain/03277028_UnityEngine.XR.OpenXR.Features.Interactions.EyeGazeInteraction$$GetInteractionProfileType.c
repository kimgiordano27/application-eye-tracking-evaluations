/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 03277028
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
          (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  
  if (param_1 != 0) {
    FUN_0223d7d0(param_1,unaff_w20,*unaff_x21,*(undefined8 *)PTR_DAT_03830c30);
    puVar2 = PTR_DAT_03830190;
    lVar3 = *(long *)(unaff_x19 + 0x1d8);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_03830190;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
        }
        else {
          FUN_02776758(lVar3,unaff_w22,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        lVar3 = *(long *)(unaff_x19 + 0x1e0);
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          lVar6 = *(long *)puVar2;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
            }
            else {
              FUN_02776758(lVar3,unaff_w22,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            uVar4 = FUN_032a6f10(0);
            if ((uVar4 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03830520 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              FUN_03277ed8();
            }
            return 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


