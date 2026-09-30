/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 063875c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  
  if ((DAT_0825c586 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d882c0);
    DAT_0825c586 = 1;
  }
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_0625ad04(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar4 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d88698);
    FUN_061a1b40(uVar4,uVar5,0);
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db62c8);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,uVar5);
  }
  plVar8 = (long *)(param_1 + 0x28);
  if (*plVar8 == 0) {
    return;
  }
  plVar2 = (long *)thunk_FUN_037787d0(*plVar8,*(undefined8 *)PTR_DAT_07d882c0);
  if (plVar2 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
LAB_06387778:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar1 = (**(code **)(*param_2 + 0x908))(param_2,*plVar8,*(undefined8 *)(*param_2 + 0x910));
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  else {
    lVar7 = plVar2[3];
    if (0 < (int)lVar7) {
      uVar10 = 0;
      uVar9 = 0;
      do {
        uVar6 = (uint)lVar7;
        if (uVar6 <= uVar10) goto LAB_06387720;
        lVar7 = plVar2[(long)(int)uVar10 + 4];
        if (lVar7 == 0) break;
        if (param_2 == (long *)0x0) goto LAB_06387778;
        uVar1 = (**(code **)(*param_2 + 0x908))(param_2,lVar7,*(undefined8 *)(*param_2 + 0x910));
        if ((uVar1 & 1) == 0) {
          lVar3 = thunk_FUN_037787d0(lVar7,*(undefined8 *)(*plVar2 + 0x40));
          if (lVar3 == 0) {
            uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar4,0);
          }
          if (*(uint *)(plVar2 + 3) <= uVar9) goto LAB_06387720;
          lVar3 = (long)(int)uVar9;
          plVar2[lVar3 + 4] = lVar7;
          uVar9 = uVar9 + 1;
          thunk_FUN_037aeb94(plVar2 + lVar3 + 4,lVar7);
        }
        lVar7 = plVar2[3];
        uVar10 = uVar10 + 1;
        uVar6 = (uint)lVar7;
      } while ((int)uVar10 < (int)uVar6);
      if (uVar9 != 0) {
        if ((int)uVar10 <= (int)uVar9) {
          return;
        }
        if (uVar9 < uVar6) {
          plVar8 = plVar2 + (long)(int)uVar9 + 4;
          do {
            *plVar8 = 0;
            thunk_FUN_037aeb94(plVar8,0);
            if (uVar10 - 1 == uVar9) {
              return;
            }
            uVar9 = uVar9 + 1;
            plVar8 = plVar8 + 1;
          } while (uVar9 < *(uint *)(plVar2 + 3));
        }
LAB_06387720:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
    }
  }
  *plVar8 = 0;
  thunk_FUN_037aeb94(plVar8,0);
  return;
}


