/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 07350de0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_7;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07350ec4) */

void OVREyeGaze__StartEyeTracking(void)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  float fVar8;
  
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0x668)) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x10) * 0x10 + 0x138);
        goto LAB_07350e34;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_07350e34:
  uVar7 = (*(code *)*puVar3)();
  if ((*(long *)(unaff_x19 + 0x40) != 0) &&
     (lVar4 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), fVar2 = DAT_018b02f0, lVar4 != 0)) {
    fVar8 = (float)uVar7;
    fVar1 = 1.0 - fVar8;
    if (1.0 - fVar8 <= DAT_018b02f0) {
      fVar1 = DAT_018b02f0;
    }
    FUN_085b7960(fVar1,lVar4,*(undefined4 *)(unaff_x19 + 0x74),0);
    if ((*(long *)(unaff_x19 + 0x40) != 0) &&
       (lVar4 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar4 != 0)) {
      FUN_085b7960(uVar7,lVar4,*(undefined4 *)(unaff_x19 + 0x78),0);
      if ((*(long *)(unaff_x19 + 0x40) != 0) &&
         (lVar4 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar4 != 0)) {
        fVar1 = fVar8 * DAT_018b1024 + fVar2;
        if (fVar8 < 0.0) {
          fVar1 = fVar2;
        }
        FUN_085b7960(fVar1,lVar4,*(undefined4 *)(unaff_x19 + 0x7c),0);
        if ((*(long *)(unaff_x19 + 0x40) != 0) &&
           (lVar4 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar4 != 0)) {
          thunk_FUN_085b6d70(*(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                             *(undefined4 *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x54),
                             lVar4,*(undefined4 *)(unaff_x19 + 0x80),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


