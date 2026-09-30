/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 05cef7a8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  long *unaff_x22;
  long *plVar11;
  int iVar12;
  
  FUN_06bc34e4();
  plVar8 = (long *)(unaff_x19 + 0x50);
  *plVar8 = param_1;
  thunk_FUN_0333a630(plVar8,param_1);
  lVar5 = FUN_06be9698(3,0);
  if ((lVar5 != 0) &&
     (lVar6 = FUN_039efd20(lVar5,*(undefined8 *)PTR_DAT_0727c600), puVar3 = PTR_DAT_0728dcf8,
     puVar2 = PTR_DAT_0728bf58, puVar1 = PTR_DAT_0727aa88, lVar6 != 0)) {
    uVar7 = FUN_06bc697c(lVar6,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar7;
    thunk_FUN_0333a630();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06beda8c(lVar5,0);
    iVar10 = 1;
    if (*(char *)(unaff_x19 + 0x58) != '\0') {
      iVar10 = 2;
    }
    uVar7 = FUN_032d5d3c(*(undefined8 *)puVar3,*(int *)(unaff_x19 + 0x90) * iVar10 * 2);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar7;
    thunk_FUN_0333a630();
    iVar12 = 1;
    iVar10 = iVar12;
    if (*(char *)(unaff_x19 + 0x58) != '\0') {
      iVar10 = 2;
    }
    uVar7 = FUN_032d5d3c(*(undefined8 *)puVar2,*(int *)(unaff_x19 + 0x90) * iVar10 * 2);
    puVar9 = (undefined8 *)(unaff_x19 + 0x20);
    *puVar9 = uVar7;
    thunk_FUN_0333a630(puVar9,uVar7);
    iVar10 = *(int *)(unaff_x19 + 0x90);
    if (*(char *)(unaff_x19 + 0x58) != '\0') {
      iVar12 = 2;
    }
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_06bef234(lVar5,iVar10 * iVar12 * 2,0x10,0);
    plVar11 = (long *)(unaff_x19 + 0x60);
    *plVar11 = lVar5;
    thunk_FUN_0333a630(plVar11,lVar5);
    if (*plVar11 != 0) {
      FUN_06bef5a8(*plVar11,*(undefined8 *)(unaff_x19 + 0x10),0);
      iVar12 = *(int *)(unaff_x19 + 0x90);
      iVar10 = 1;
      if (*(char *)(unaff_x19 + 0x58) != '\0') {
        iVar10 = 2;
      }
      lVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_06bef234(lVar5,iVar12 * iVar10 * 2,0x10,0);
      plVar11 = (long *)(unaff_x19 + 0x68);
      *plVar11 = lVar5;
      thunk_FUN_0333a630(plVar11,lVar5);
      if (*plVar11 != 0) {
        FUN_06bef5a8(*plVar11,*puVar9,0);
        if (*plVar8 != 0) {
          FUN_06bc57b4(*plVar8,*(undefined4 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x60),0
                      );
          puVar2 = PTR_DAT_0728dcf0;
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            FUN_06bc57b4(*(long *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x84),
                         *(undefined8 *)(unaff_x19 + 0x68),0);
            lVar5 = FUN_032d5d3c(*(undefined8 *)puVar2,5);
            plVar8 = (long *)(unaff_x19 + 0x78);
            *plVar8 = lVar5;
            thunk_FUN_0333a630(plVar8,lVar5);
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              lVar5 = *plVar8;
              uVar4 = FUN_06bca4a0(*(long *)(unaff_x19 + 0x48),0,0);
              if (lVar5 != 0) {
                if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05cefa78:
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                *(undefined4 *)(lVar5 + 0x20) = uVar4;
                lVar5 = *plVar8;
                if (lVar5 != 0) {
                  if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_05cefa78;
                  iVar10 = 1;
                  if (*(char *)(unaff_x19 + 0x58) != '\0') {
                    iVar10 = 2;
                  }
                  *(int *)(lVar5 + 0x24) = iVar10 * *(int *)(unaff_x19 + 0x90);
                  lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                  FUN_06bef420(lVar6,1,*(int *)(lVar5 + 0x18) << 2,0x100,0);
                  plVar8 = (long *)(unaff_x19 + 0x70);
                  *plVar8 = lVar6;
                  thunk_FUN_0333a630(plVar8,lVar6);
                  if (*plVar8 != 0) {
                    FUN_06bef5a8(*plVar8,*(undefined8 *)(unaff_x19 + 0x78),0);
                    *(undefined1 *)(unaff_x19 + 0x18) = 1;
                    *(undefined1 *)(unaff_x19 + 0x28) = 1;
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


