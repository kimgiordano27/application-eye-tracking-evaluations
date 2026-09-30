/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 06a4121c
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083be2c0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c0c40,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c0f20,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083edbf0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08416e28,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08429530,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d9a38,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0xda9) = 1;
  }
  FUN_0467d454();
  if ((char)unaff_x19[0x22] != '\0') {
    lVar7 = unaff_x19[0x23];
    uVar4 = FUN_03398a84(DAT_083be2c0);
    FUN_0603c718();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_06a41470(lVar7,uVar4);
    lVar7 = unaff_x19[0x27];
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      FUN_03398a84(DAT_083c0f20);
      FUN_0439a8ec();
      (**(code **)(*unaff_x19 + 0x4a8))();
      if (*(int *)(DAT_083d9a38 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (*(long *)(*(long *)(DAT_083d9a38 + 0xb8) + 8) == 0) {
        if (*(int *)(DAT_083d9a38 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar8 = **(undefined8 **)(DAT_083d9a38 + 0xb8);
        uVar4 = FUN_03398a84(DAT_083c0c40);
        FUN_04399364(uVar4,uVar8,DAT_08429530,0);
        puVar6 = (undefined8 *)(*(long *)(DAT_083d9a38 + 0xb8) + 8);
        *puVar6 = uVar4;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
                    /* WARNING: Could not recover jumptable at 0x06a41458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x4c8))();
      return;
    }
  }
  return;
}


