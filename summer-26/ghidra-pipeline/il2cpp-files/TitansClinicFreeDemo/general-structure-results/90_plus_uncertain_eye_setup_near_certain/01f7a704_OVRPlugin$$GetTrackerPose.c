/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 01f7a704
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackerPose(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int iVar3;
  long lVar4;
  long unaff_x25;
  long unaff_x26;
  
  uVar1 = FUN_01f36130();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(unaff_x22 + 0x78);
    if (*(char *)(unaff_x26 + 0xfb6) == '\0') {
      thunk_FUN_01279b34(PTR_DAT_027b5200);
      *(undefined1 *)(unaff_x26 + 0xfb6) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      System_Int32__TryParse(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (*(char *)(unaff_x25 + 0xbb0) == '\0') {
      thunk_FUN_01279b34(PTR_DAT_027be8a0);
      thunk_FUN_01279b34(PTR_DAT_027b9de8);
      *(undefined1 *)(unaff_x25 + 0xbb0) = 1;
    }
    if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_01f36130(), (uVar1 & 1) != 0)))) {
      uVar2 = 0xff800000;
    }
    else {
      lVar4 = *(long *)(unaff_x22 + 0x68);
      if (*(char *)(unaff_x26 + 0xfb6) == '\0') {
        thunk_FUN_01279b34(PTR_DAT_027b5200);
        *(undefined1 *)(unaff_x26 + 0xfb6) = 1;
      }
      iVar3 = 0;
      if (lVar4 != 0) {
        System_Int32__TryParse(lVar4,0);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if (*(char *)(unaff_x25 + 0xbb0) == '\0') {
        thunk_FUN_01279b34(PTR_DAT_027be8a0);
        thunk_FUN_01279b34(PTR_DAT_027b9de8);
        *(undefined1 *)(unaff_x25 + 0xbb0) = 1;
      }
      if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_01f36130(), (uVar1 & 1) == 0))))
      {
        return 0;
      }
      uVar2 = 0x7fc00000;
    }
  }
  else {
    uVar2 = 0x7f800000;
  }
  *unaff_x19 = uVar2;
  return 1;
}


