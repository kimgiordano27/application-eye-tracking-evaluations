/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 06387698
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__RecenterTrackingOrigin(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar6;
  
  while( true ) {
    lVar2 = thunk_FUN_037787d0(param_1,param_2);
    if (lVar2 == 0) {
      uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar3,0);
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_w23) break;
    lVar2 = (long)(int)unaff_w23;
    unaff_x21[lVar2 + 4] = unaff_x22;
    unaff_w23 = unaff_w23 + 1;
    thunk_FUN_037aeb94(unaff_x21 + lVar2 + 4,unaff_x22);
    uVar6 = unaff_w24;
    do {
      unaff_w24 = uVar6 + 1;
      uVar4 = (uint)unaff_x21[3];
      if ((int)uVar4 <= (int)unaff_w24) {
LAB_063876d4:
        if (unaff_w23 == 0) {
          *unaff_x19 = 0;
          thunk_FUN_037aeb94();
          return;
        }
        if ((int)unaff_w24 <= (int)unaff_w23) {
          return;
        }
        if (unaff_w23 < uVar4) {
          plVar5 = unaff_x21 + (long)(int)unaff_w23 + 4;
          do {
            *plVar5 = 0;
            thunk_FUN_037aeb94(plVar5,0);
            if (uVar6 == unaff_w23) {
              return;
            }
            unaff_w23 = unaff_w23 + 1;
            plVar5 = plVar5 + 1;
          } while (unaff_w23 < *(uint *)(unaff_x21 + 3));
        }
        goto LAB_06387720;
      }
      if (uVar4 <= unaff_w24) goto LAB_06387720;
      param_1 = unaff_x21[(long)(int)unaff_w24 + 4];
      if (param_1 == 0) goto LAB_063876d4;
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar1 = (**(code **)(*unaff_x20 + 0x908))();
      uVar6 = unaff_w24;
    } while ((uVar1 & 1) != 0);
    param_2 = *(undefined8 *)(*unaff_x21 + 0x40);
    unaff_x22 = param_1;
  }
LAB_06387720:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


