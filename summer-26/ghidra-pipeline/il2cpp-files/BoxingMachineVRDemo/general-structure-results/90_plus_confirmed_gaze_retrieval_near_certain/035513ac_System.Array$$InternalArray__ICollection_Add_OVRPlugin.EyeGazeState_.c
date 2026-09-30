/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 035513ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>
          (long param_1,undefined8 param_2,int param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02d9a33c(param_4);
  }
  lVar2 = FUN_0505261c(0,0);
  iVar6 = param_3;
  if (7 < param_3) {
    do {
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar2 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) != 0) goto FUN_03551674;
      lVar4 = FUN_05052640(lVar2,1,0);
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) != 0) goto LAB_035515d0;
      lVar4 = FUN_05052640(lVar2,2,0);
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) != 0) goto LAB_03551600;
      lVar4 = FUN_05052640(lVar2,3,0);
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) != 0) goto LAB_03551664;
      lVar4 = FUN_05052640(lVar2,4,0);
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) != 0) {
        uVar5 = 4;
LAB_03551624:
        uVar5 = FUN_05052640(lVar2,uVar5,0);
        uVar5 = FUN_05052634(uVar5,0);
        return uVar5;
      }
      lVar4 = FUN_05052640(lVar2,5,0);
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) != 0) {
        uVar5 = 5;
        goto LAB_03551624;
      }
      lVar4 = FUN_05052640(lVar2,6,0);
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) != 0) {
        uVar5 = 6;
        goto LAB_03551624;
      }
      lVar4 = FUN_05052640(lVar2,7,0);
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) != 0) {
        uVar5 = 7;
        goto LAB_03551624;
      }
      param_3 = iVar6 + -8;
      lVar2 = FUN_05052640(lVar2,8,0);
      bVar1 = 0xf < iVar6;
      iVar6 = param_3;
    } while (bVar1);
  }
  if (param_3 < 4) {
LAB_0355153c:
    if (0 < param_3) {
      param_3 = param_3 + 1;
      do {
        uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar2 * 4),
                             *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
        if ((uVar3 & 1) != 0) goto FUN_03551674;
        lVar2 = FUN_05052640(lVar2,1,0);
        param_3 = param_3 + -1;
      } while (1 < param_3);
    }
    uVar5 = 0xffffffff;
  }
  else {
    uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar2 * 4),
                         *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_05052640(lVar2,1,0);
      uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                           *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar3 & 1) == 0) {
        lVar4 = FUN_05052640(lVar2,2,0);
        uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                             *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
        if ((uVar3 & 1) == 0) {
          lVar4 = FUN_05052640(lVar2,3,0);
          uVar3 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(param_1 + lVar4 * 4),
                               *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
          if ((uVar3 & 1) == 0) {
            lVar2 = FUN_05052640(lVar2,4,0);
            param_3 = param_3 + -4;
            goto LAB_0355153c;
          }
LAB_03551664:
          uVar5 = 3;
        }
        else {
LAB_03551600:
          uVar5 = 2;
        }
      }
      else {
LAB_035515d0:
        uVar5 = 1;
      }
      lVar2 = FUN_05052640(lVar2,uVar5,0);
    }
FUN_03551674:
    uVar5 = FUN_05052634(lVar2,0);
  }
  return uVar5;
}


