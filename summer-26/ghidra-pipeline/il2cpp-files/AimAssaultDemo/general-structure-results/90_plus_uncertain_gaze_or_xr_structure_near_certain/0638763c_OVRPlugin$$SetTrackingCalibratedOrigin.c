/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 0638763c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingCalibratedOrigin(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long *plVar6;
  long *unaff_x20;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) {
LAB_06387778:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar1 = (**(code **)(*unaff_x20 + 0x908))();
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  else {
    lVar5 = param_1[3];
    if (0 < (int)lVar5) {
      uVar8 = 0;
      uVar7 = 0;
      do {
        uVar4 = (uint)lVar5;
        if (uVar4 <= uVar8) goto LAB_06387720;
        lVar5 = param_1[(long)(int)uVar8 + 4];
        if (lVar5 == 0) break;
        if (unaff_x20 == (long *)0x0) goto LAB_06387778;
        uVar1 = (**(code **)(*unaff_x20 + 0x908))();
        if ((uVar1 & 1) == 0) {
          lVar2 = thunk_FUN_037787d0(lVar5,*(undefined8 *)(*param_1 + 0x40));
          if (lVar2 == 0) {
            uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar3,0);
          }
          if (*(uint *)(param_1 + 3) <= uVar7) goto LAB_06387720;
          lVar2 = (long)(int)uVar7;
          param_1[lVar2 + 4] = lVar5;
          uVar7 = uVar7 + 1;
          thunk_FUN_037aeb94(param_1 + lVar2 + 4,lVar5);
        }
        lVar5 = param_1[3];
        uVar8 = uVar8 + 1;
        uVar4 = (uint)lVar5;
      } while ((int)uVar8 < (int)uVar4);
      if (uVar7 != 0) {
        if ((int)uVar8 <= (int)uVar7) {
          return;
        }
        if (uVar7 < uVar4) {
          plVar6 = param_1 + (long)(int)uVar7 + 4;
          do {
            *plVar6 = 0;
            thunk_FUN_037aeb94(plVar6,0);
            if (uVar8 - 1 == uVar7) {
              return;
            }
            uVar7 = uVar7 + 1;
            plVar6 = plVar6 + 1;
          } while (uVar7 < *(uint *)(param_1 + 3));
        }
LAB_06387720:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
    }
  }
  *unaff_x19 = 0;
  thunk_FUN_037aeb94();
  return;
}


