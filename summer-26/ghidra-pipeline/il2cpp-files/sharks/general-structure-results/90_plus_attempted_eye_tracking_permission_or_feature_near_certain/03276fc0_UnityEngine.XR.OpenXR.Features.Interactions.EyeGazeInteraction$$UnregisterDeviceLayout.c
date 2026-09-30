/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$UnregisterDeviceLayout
ENTRY_POINT: 03276fc0
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__UnregisterDeviceLayout(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  
  if (param_1 != 0) {
    uVar4 = *unaff_x21;
    lVar5 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)PTR_DAT_03830b80;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar4;
        thunk_FUN_0188fd20(puVar6);
      }
      else {
        FUN_0270a444(param_1,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(long *)(unaff_x19 + 200) != 0) {
        FUN_0223d7d0(*(long *)(unaff_x19 + 200),unaff_w20,*unaff_x21,*(undefined8 *)PTR_DAT_03830c30
                    );
        puVar2 = PTR_DAT_03830190;
        lVar5 = *(long *)(unaff_x19 + 0x1d8);
        if (lVar5 != 0) {
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar8 = *(long *)PTR_DAT_03830190;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
            }
            else {
              FUN_02776758(lVar5,unaff_w22,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            lVar5 = *(long *)(unaff_x19 + 0x1e0);
            if (lVar5 != 0) {
              lVar7 = *(long *)(lVar5 + 0x10);
              lVar8 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
                }
                else {
                  FUN_02776758(lVar5,unaff_w22,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                uVar3 = FUN_032a6f10(0);
                if ((uVar3 & 1) != 0) {
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


