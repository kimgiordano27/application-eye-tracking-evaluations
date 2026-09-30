/*
FUNCTION_NAME: Meta.XR.Movement.Networking.NetworkPoseRetargeterConfig$$OnValidate
ENTRY_POINT: 06db09c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8 Meta_XR_Movement_Networking_NetworkPoseRetargeterConfig__OnValidate(void)

{
  char in_NG;
  char in_OV;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar6;
  long *unaff_x25;
  int unaff_w26;
  bool bVar7;
  int unaff_w28;
  
  while( true ) {
    bVar7 = in_NG != in_OV;
    if (in_NG != in_OV) {
      lVar6 = *unaff_x21;
      if (lVar6 == 0) goto LAB_06db0d00;
      iVar4 = FUN_08592530(lVar6,0);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = unaff_w28 / iVar4;
      }
      uVar5 = FUN_085925e4(lVar6,unaff_x22,unaff_w28 - iVar2 * iVar4,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = unaff_x19[0xc];
        if (lVar6 != 0) {
          if (lVar6 == 0) goto LAB_06db0d00;
          (**(code **)(lVar6 + 0x18))
                    (0,*(undefined8 *)(lVar6 + 0x40),0,*(undefined8 *)(unaff_x20 + 0x30),
                     *(undefined8 *)(lVar6 + 0x28));
        }
        *(int *)(unaff_x20 + 0x3c) = unaff_w26;
        bVar7 = true;
      }
    }
    lVar6 = *unaff_x21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    bVar1 = FUN_085decd4(lVar6,0,0);
    if ((bVar7 & bVar1) == 0) break;
    if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
    iVar2 = (**(code **)(*unaff_x19 + 0x2b8))();
    if (iVar2 < *(int *)(unaff_x20 + 0x38)) {
      *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
    }
    *(int *)(unaff_x20 + 0x38) = iVar2;
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_06db0d00;
    iVar4 = *(int *)(unaff_x20 + 0x40);
    iVar3 = FUN_08592530(*(long *)(unaff_x20 + 0x28),0);
    unaff_x22 = *(long *)(unaff_x20 + 0x30);
    if (unaff_x22 == 0) goto LAB_06db0d00;
    unaff_w28 = *(int *)(unaff_x20 + 0x3c);
    iVar2 = iVar2 + iVar3 * iVar4;
    unaff_w26 = unaff_w28 + *(int *)(unaff_x22 + 0x18);
    in_OV = SBORROW4(unaff_w26,iVar2);
    in_NG = unaff_w26 - iVar2 < 0;
  }
  lVar6 = *unaff_x21;
  if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar5 = FUN_085decd4(lVar6,0,0);
  if ((uVar5 & 1) == 0) {
    if (unaff_x19 != (long *)0x0) goto LAB_06db0cb0;
  }
  else if (unaff_x19 != (long *)0x0) {
    uVar5 = (**(code **)(*unaff_x19 + 0x338))();
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x18),0);
      *(undefined4 *)(unaff_x20 + 0x10) = 2;
      return 1;
    }
LAB_06db0cb0:
    uVar5 = (**(code **)(*unaff_x19 + 0x338))();
    if ((uVar5 & 1) != 0) {
      (**(code **)(*unaff_x19 + 0x3b8))();
    }
    return 0;
  }
LAB_06db0d00:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


