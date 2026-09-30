/*
FUNCTION_NAME: Oculus.Platform.Models.ApplicationVersion$$.ctor
ENTRY_POINT: 04ebecd0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void Oculus_Platform_Models_ApplicationVersion___ctor
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined4 *unaff_x20;
  long lVar5;
  undefined4 uVar6;
  
  uVar6 = FUN_03ade9a8(param_5,**(undefined8 **)(param_1 + 0x428));
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    uVar2 = FUN_04458f24(*(long *)(unaff_x19 + 0x90),*unaff_x20,
                         *(undefined8 *)
                          UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                        );
    puVar1 = System_Xml_Schema_FacetsChecker_FacetsCompiler_var;
    if ((uVar2 & 1) == 0) {
      FUN_04ebeac8();
      return;
    }
    if ((*(long *)(unaff_x19 + 0x90) != 0) &&
       (lVar3 = FUN_04458c90(*(long *)(unaff_x19 + 0x90),*unaff_x20,
                             *(undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var),
       lVar3 != 0)) {
      lVar4 = *(long *)(unaff_x19 + 0x90);
      *(undefined1 *)(lVar3 + 0x14) = 0;
      if (lVar4 != 0) {
        lVar5 = *(long *)(unaff_x19 + 0x70);
        lVar3 = FUN_04458c90(lVar4,*unaff_x20,*(undefined8 *)puVar1);
        if ((lVar3 != 0) && (lVar5 != 0)) {
          if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar3 + 0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x78), lVar4 != 0)) {
            lVar3 = *(long *)(lVar5 + (long)(int)*(uint *)(lVar3 + 0x10) * 8 + 0x20);
            uVar6 = FUN_05c9dc9c(uVar6,lVar4,0);
            if (lVar3 != 0) {
              *(undefined4 *)(lVar3 + 0x2c) = uVar6;
              *(undefined4 *)(lVar3 + 0x30) = param_3;
              *(undefined4 *)(lVar3 + 0x34) = param_4;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


