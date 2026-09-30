/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 02c22188
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined1  [16]
OVRPlugin__SetTrackingCalibratedOrigin(ulong param_1,long param_2,undefined1 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [12];
  long unaff_x21;
  undefined1 uVar7;
  undefined1 auVar8 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03806cb0);
    FUN_017fc350(PTR_DAT_0380a480);
    *(undefined1 *)(unaff_x21 + 0xef1) = 1;
  }
  if (*(char *)(param_2 + 0xa0) == '\0') {
    FUN_02c20510(param_2);
  }
  FUN_02c22334(param_2);
  plVar4 = (long *)FUN_02c219a4(param_2,1);
  puVar1 = PTR_DAT_03806cb0;
  if (plVar4 == (long *)0x0) {
    uVar7 = 1;
    do {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      iVar2 = thunk_FUN_01847714(0x96);
      if (iVar2 < 1) {
        if (*(long *)(param_2 + 0x60) == 0) {
LAB_02c2232c:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar5 = FUN_02b293f4(*(long *)(param_2 + 0x60),0);
        if ((uVar5 & 1) == 0) {
          plVar4 = (long *)FUN_02c219a4(param_2,0);
          if (plVar4 != (long *)0x0) {
            uVar7 = 1;
            break;
          }
          plVar4 = *(long **)(param_2 + 0x60);
          if (plVar4 == (long *)0x0) goto LAB_02c2232c;
          uVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          FUN_02c21778(param_2,uVar3);
        }
        else {
          do {
            plVar4 = *(long **)(param_2 + 0x60);
            if (plVar4 == (long *)0x0) goto LAB_02c2232c;
            uVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
            FUN_02c21778(param_2,uVar3);
            if (*(long *)(param_2 + 0x60) == 0) goto LAB_02c2232c;
            uVar5 = FUN_02b293f4(*(long *)(param_2 + 0x60),0);
          } while ((uVar5 & 1) != 0);
        }
      }
      else {
        do {
          plVar4 = *(long **)(param_2 + 0x60);
          if (plVar4 == (long *)0x0) goto LAB_02c2232c;
          uVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          FUN_02c21778(param_2,uVar3);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          iVar2 = thunk_FUN_01847714(0);
        } while (0 < iVar2);
      }
      plVar4 = (long *)FUN_02c219a4(param_2,1);
    } while (plVar4 == (long *)0x0);
  }
  else {
    uVar7 = 0;
  }
  puVar1 = PTR_DAT_0380a480;
  *param_3 = uVar7;
  if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc944();
  }
  pauVar6 = (undefined1 (*) [12])thunk_FUN_01861d10();
  auVar8._12_4_ = 0;
  auVar8._0_12_ = *pauVar6;
  return auVar8;
}


