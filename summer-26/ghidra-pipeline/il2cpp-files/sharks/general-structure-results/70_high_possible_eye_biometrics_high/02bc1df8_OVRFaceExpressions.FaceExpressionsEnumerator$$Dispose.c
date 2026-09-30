/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 02bc1df8
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
OVRFaceExpressions_FaceExpressionsEnumerator__Dispose
          (ulong param_1,int *param_2,long *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  uint uStack000000000000000c;
  
                    /* catch() { ... } // from try @ 02bc1de8 with catch @ 02bc1df8 */
  uStack000000000000000c = param_4;
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_038071f8);
    FUN_017fc350(PTR_DAT_03806f58);
    FUN_017fc350(PTR_DAT_03809a30);
    *(undefined1 *)(unaff_x22 + 0xb32) = 1;
  }
  uVar1 = param_2[9];
  if (((uVar1 >> 0xb & 1) != 0) && ((param_2[1] != -1 || (param_2[2] != -1)))) {
    if (((uVar1 >> 8 & 1) != 0) && ((uVar1 & 0x1000) != 0 || *param_2 == -1)) {
      FUN_02bc7dc0(param_2,4,*(undefined8 *)PTR_DAT_03809a30,0);
      return 0;
    }
  }
  if (((*param_2 == -1) || (param_2[1] == -1)) || (param_2[2] == -1)) {
    if (*(int *)(*(long *)PTR_DAT_038071f8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar4 = FUN_02bbf3bc(param_2,&stack0x0000000c);
    iVar3 = param_2[1];
    if ((iVar3 == -1) && (param_2[2] == -1)) {
      if (*param_2 == -1) {
        if ((param_4 >> 3 & 1) == 0) {
          plVar5 = (long *)*param_3;
          if (plVar5 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar5 + 0x268))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x270));
            *param_2 = iVar3;
            plVar5 = (long *)*param_3;
            if (plVar5 != (long *)0x0) {
              iVar3 = (**(code **)(*plVar5 + 0x248))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x250));
              param_2[1] = iVar3;
              param_3 = (long *)*param_3;
              if (param_3 != (long *)0x0) {
                iVar3 = (**(code **)(*param_3 + 0x1e8))
                                  (param_3,uVar4,*(undefined8 *)(*param_3 + 0x1f0));
                param_2[2] = iVar3;
                goto LAB_02bc2014;
              }
            }
          }
LAB_02bc2068:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(int *)(*(long *)PTR_DAT_03806f58 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar6 = FUN_02b6c994(0);
        *param_3 = lVar6;
        thunk_FUN_0188fd20(param_3,lVar6);
        param_2[2] = 1;
        param_2[0] = 1;
        param_2[1] = 1;
      }
      else {
        param_2[1] = 1;
        param_2[2] = 1;
      }
    }
    else {
      if (*param_2 == -1) {
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_02bc2068;
        iVar2 = (**(code **)(*param_3 + 0x268))(param_3,uVar4,*(undefined8 *)(*param_3 + 0x270));
        iVar3 = param_2[1];
        *param_2 = iVar2;
      }
      if (iVar3 == -1) {
        param_2[1] = 1;
      }
      if (param_2[2] == -1) {
        param_2[2] = 1;
      }
    }
  }
LAB_02bc2014:
  if (param_2[3] == -1) {
    param_2[3] = 0;
  }
  if (param_2[4] == -1) {
    param_2[4] = 0;
  }
  if (param_2[5] == -1) {
    param_2[5] = 0;
  }
  if (param_2[8] == -1) {
    param_2[8] = 0;
  }
  return 1;
}


