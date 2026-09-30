/*
FUNCTION_NAME: Meta.XR.Movement.Networking.NetworkPoseRetargeterConfig$$get_BodyIndicesToSend
ENTRY_POINT: 06db0958
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_Movement_Networking_NetworkPoseRetargeterConfig__get_BodyIndicesToSend(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar7;
  long lVar8;
  long *unaff_x25;
  bool bVar9;
  
  do {
    if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
    iVar4 = (**(code **)(*unaff_x19 + 0x2b8))();
    if (iVar4 < *(int *)(unaff_x20 + 0x38)) {
      *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
    }
    *(int *)(unaff_x20 + 0x38) = iVar4;
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_06db0d00;
    iVar1 = *(int *)(unaff_x20 + 0x40);
    iVar5 = FUN_08592530(*(long *)(unaff_x20 + 0x28),0);
    lVar7 = *(long *)(unaff_x20 + 0x30);
    if (lVar7 == 0) goto LAB_06db0d00;
    iVar2 = *(int *)(unaff_x20 + 0x3c);
    iVar4 = iVar4 + iVar5 * iVar1;
    iVar1 = iVar2 + *(int *)(lVar7 + 0x18);
    bVar9 = iVar1 < iVar4;
    if (iVar1 < iVar4) {
      lVar8 = *unaff_x21;
      if (lVar8 == 0) goto LAB_06db0d00;
      iVar5 = FUN_08592530(lVar8,0);
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar2 / iVar5;
      }
      uVar6 = FUN_085925e4(lVar8,lVar7,iVar2 - iVar4 * iVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = unaff_x19[0xc];
        if (lVar7 != 0) {
          if (lVar7 == 0) goto LAB_06db0d00;
          (**(code **)(lVar7 + 0x18))
                    (0,*(undefined8 *)(lVar7 + 0x40),0,*(undefined8 *)(unaff_x20 + 0x30),
                     *(undefined8 *)(lVar7 + 0x28));
        }
        *(int *)(unaff_x20 + 0x3c) = iVar1;
        bVar9 = true;
      }
    }
    lVar7 = *unaff_x21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    bVar3 = FUN_085decd4(lVar7,0,0);
  } while ((bVar9 & bVar3) != 0);
  lVar7 = *unaff_x21;
  if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar6 = FUN_085decd4(lVar7,0,0);
  if ((uVar6 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
  }
  else {
    if (unaff_x19 == (long *)0x0) {
LAB_06db0d00:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = (**(code **)(*unaff_x19 + 0x338))();
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x18),0);
      *(undefined4 *)(unaff_x20 + 0x10) = 2;
      return 1;
    }
  }
  uVar6 = (**(code **)(*unaff_x19 + 0x338))();
  if ((uVar6 & 1) != 0) {
    (**(code **)(*unaff_x19 + 0x3b8))();
  }
  return 0;
}


