/*
FUNCTION_NAME: FUN_04ebec14
ENTRY_POINT: 04ebec14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_3;validity_or_gating_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_04ebec14(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_50 [16];
  
  if ((DAT_066c949f & 1) == 0) {
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_02b3c81c(System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
    FUN_02b3c81c(PTR_DAT_06312420);
    FUN_02b3c81c(PTR_DAT_06312428);
    DAT_066c949f = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if ((uint)param_2[4] < 6) {
    uVar1 = 1 << (ulong)(param_2[4] & 0x1f);
    if ((uVar1 & 0x19) == 0) {
      if ((uVar1 & 0x22) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        uVar4 = FUN_04458f24(*(long *)(param_1 + 0x90),*param_2,
                             *(undefined8 *)
                              UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                            );
        auVar2._8_8_ = local_50._8_8_;
        auVar2._0_8_ = local_50._0_8_;
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x90) != 0) {
          lVar5 = FUN_04458c90(*(long *)(param_1 + 0x90),*param_2,
                               *(undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
          auVar2._8_8_ = local_50._8_8_;
          auVar2._0_8_ = local_50._0_8_;
          if (lVar5 != 0) {
            *(undefined1 *)(lVar5 + 0x14) = 1;
            return;
          }
        }
      }
    }
    else {
      auVar2 = ZEXT816(0);
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar9 = param_2[6];
        uVar10 = param_2[7];
        local_50 = FUN_04ebe230(param_2[5],uVar9,uVar10,*(undefined4 *)(param_1 + 0x58),
                                *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78),
                                *(undefined8 *)(param_1 + 0x50));
        if ((local_50._0_8_ & 0xff) == 0) {
          uVar8 = param_2[5];
          uVar9 = param_2[6];
          uVar10 = param_2[7];
        }
        else {
          uVar8 = FUN_03ade9a8(local_50,*(undefined8 *)PTR_DAT_06312428);
        }
        auVar2 = local_50;
        if (*(long *)(param_1 + 0x90) != 0) {
          uVar4 = FUN_04458f24(*(long *)(param_1 + 0x90),*param_2,
                               *(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                              );
          puVar3 = System_Xml_Schema_FacetsChecker_FacetsCompiler_var;
          if ((uVar4 & 1) == 0) {
            FUN_04ebeac8(param_1,*param_2);
            return;
          }
          auVar2 = local_50;
          if (*(long *)(param_1 + 0x90) != 0) {
            lVar5 = FUN_04458c90(*(long *)(param_1 + 0x90),*param_2,
                                 *(undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
            auVar2 = local_50;
            if (lVar5 != 0) {
              lVar6 = *(long *)(param_1 + 0x90);
              *(undefined1 *)(lVar5 + 0x14) = 0;
              if (lVar6 != 0) {
                lVar7 = *(long *)(param_1 + 0x70);
                lVar5 = FUN_04458c90(lVar6,*param_2,*(undefined8 *)puVar3);
                auVar2 = local_50;
                if ((lVar5 != 0) && (lVar7 != 0)) {
                  if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar5 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cacc();
                  }
                  if ((*(long *)(param_1 + 0x48) != 0) &&
                     (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x78), lVar6 != 0)) {
                    lVar5 = *(long *)(lVar7 + (long)(int)*(uint *)(lVar5 + 0x10) * 8 + 0x20);
                    uVar8 = FUN_05c9dc9c(uVar8,lVar6,0);
                    auVar2 = local_50;
                    if (lVar5 != 0) {
                      *(undefined4 *)(lVar5 + 0x2c) = uVar8;
                      *(undefined4 *)(lVar5 + 0x30) = uVar9;
                      *(undefined4 *)(lVar5 + 0x34) = uVar10;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_50 = auVar2;
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  return;
}


