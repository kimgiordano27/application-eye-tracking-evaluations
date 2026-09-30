/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 02c221e4
PROGRAM: sharks-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined1  [16] OVRPlugin__RecenterTrackingOrigin(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [12];
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_03806cb0;
  do {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    iVar2 = thunk_FUN_01847714(0x96);
    if (iVar2 < 1) {
      if (*(long *)(unaff_x20 + 0x60) == 0) {
LAB_02c2232c:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar4 = FUN_02b293f4(*(long *)(unaff_x20 + 0x60),0);
      if ((uVar4 & 1) == 0) {
        plVar3 = (long *)FUN_02c219a4();
        if (plVar3 != (long *)0x0) break;
        plVar3 = *(long **)(unaff_x20 + 0x60);
        if (plVar3 == (long *)0x0) goto LAB_02c2232c;
        (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        FUN_02c21778();
      }
      else {
        do {
          plVar3 = *(long **)(unaff_x20 + 0x60);
          if (plVar3 == (long *)0x0) goto LAB_02c2232c;
          (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
          FUN_02c21778();
          if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_02c2232c;
          uVar4 = FUN_02b293f4(*(long *)(unaff_x20 + 0x60),0);
        } while ((uVar4 & 1) != 0);
      }
    }
    else {
      do {
        plVar3 = *(long **)(unaff_x20 + 0x60);
        if (plVar3 == (long *)0x0) goto LAB_02c2232c;
        (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        FUN_02c21778();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        iVar2 = thunk_FUN_01847714(0);
      } while (0 < iVar2);
    }
    plVar3 = (long *)FUN_02c219a4();
  } while (plVar3 == (long *)0x0);
  puVar1 = PTR_DAT_0380a480;
  *unaff_x19 = 1;
  if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc944();
  }
  pauVar5 = (undefined1 (*) [12])thunk_FUN_01861d10();
  auVar6._12_4_ = 0;
  auVar6._0_12_ = *pauVar5;
  return auVar6;
}


