/*
FUNCTION_NAME: Oculus.Platform.MessageWithApplicationVersion$$GetDataFromMessage
ENTRY_POINT: 04ebec40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_5;validity_or_gating_hits_9;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void Oculus_Platform_MessageWithApplicationVersion__GetDataFromMessage(void)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
  FUN_02b3c81c(System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
  FUN_02b3c81c(PTR_DAT_06312420);
  FUN_02b3c81c(PTR_DAT_06312428);
  *(undefined1 *)(unaff_x21 + 0x49f) = 1;
  if ((uint)unaff_x20[4] < 6) {
    uVar1 = 1 << (ulong)(unaff_x20[4] & 0x1f);
    if ((uVar1 & 0x19) != 0) {
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        uVar9 = unaff_x20[6];
        uVar10 = unaff_x20[7];
        cVar3 = FUN_04ebe230(unaff_x20[5],uVar9,uVar10,*(undefined4 *)(unaff_x19 + 0x58),
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x78),
                             *(undefined8 *)(unaff_x19 + 0x50));
        if (cVar3 == '\0') {
          uVar8 = unaff_x20[5];
          uVar9 = unaff_x20[6];
          uVar10 = unaff_x20[7];
        }
        else {
          uVar8 = FUN_03ade9a8();
        }
        if (*(long *)(unaff_x19 + 0x90) != 0) {
          uVar4 = FUN_04458f24(*(long *)(unaff_x19 + 0x90),*unaff_x20,
                               *(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                              );
          puVar2 = System_Xml_Schema_FacetsChecker_FacetsCompiler_var;
          if ((uVar4 & 1) == 0) {
            FUN_04ebeac8();
            return;
          }
          if ((*(long *)(unaff_x19 + 0x90) != 0) &&
             (lVar5 = FUN_04458c90(*(long *)(unaff_x19 + 0x90),*unaff_x20,
                                   *(undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var
                                  ), lVar5 != 0)) {
            lVar6 = *(long *)(unaff_x19 + 0x90);
            *(undefined1 *)(lVar5 + 0x14) = 0;
            if (lVar6 != 0) {
              lVar7 = *(long *)(unaff_x19 + 0x70);
              lVar5 = FUN_04458c90(lVar6,*unaff_x20,*(undefined8 *)puVar2);
              if ((lVar5 != 0) && (lVar7 != 0)) {
                if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar5 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                   (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x78), lVar6 != 0)) {
                  lVar5 = *(long *)(lVar7 + (long)(int)*(uint *)(lVar5 + 0x10) * 8 + 0x20);
                  uVar8 = FUN_05c9dc9c(uVar8,lVar6,0);
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
LAB_04ebee28:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((uVar1 & 0x22) != 0) {
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_04ebee28;
      uVar4 = FUN_04458f24(*(long *)(unaff_x19 + 0x90),*unaff_x20,
                           *(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                          );
      if ((uVar4 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x90) == 0) ||
           (lVar5 = FUN_04458c90(*(long *)(unaff_x19 + 0x90),*unaff_x20,
                                 *(undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var),
           lVar5 == 0)) goto LAB_04ebee28;
        *(undefined1 *)(lVar5 + 0x14) = 1;
      }
    }
  }
  return;
}


