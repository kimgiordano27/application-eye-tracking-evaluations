/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector$$OnDestroy
ENTRY_POINT: 0298f840
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0298f890) */
/* WARNING: Removing unreachable block (ram,0x029900f0) */

void RootMotion_FinalIK_FBBIKHeadEffector__OnDestroy(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int *unaff_x22;
  char in_stack_00000038;
  
  FUN_027e0bd8();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(unaff_x20 + 0x68) < *(int *)(unaff_x21 + 0x14)) {
    *(int *)(unaff_x20 + 0x68) = *(int *)(unaff_x21 + 0x14);
  }
  *(int *)(unaff_x20 + 0x6c) = *(int *)(unaff_x20 + 0x6c) + -1;
  if (in_stack_00000038 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  iVar1 = *unaff_x22;
  if (*(char *)(unaff_x21 + 0x11) == '\f') {
    if (*(int *)((long)unaff_x19 + 0x74) < iVar1) {
      (**(code **)(*unaff_x19 + 0x1e8))();
    }
    else {
      if (unaff_x19[0x18] == 0) {
LAB_029900e8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = unaff_x19[0x30];
      iVar3 = FUN_02f0ce18(unaff_x19[0x18],0);
      *(int *)((long)unaff_x19 + 0x6c) = ((int)lVar2 + (iVar1 >> 1)) - iVar3;
      *(undefined1 *)(unaff_x19 + 0xe) = 1;
    }
  }
  else {
    FUN_02994e98();
    if (*(char *)(unaff_x21 + 0x11) == '\x02') {
      iVar1 = *unaff_x22;
      if (-1 < iVar1) {
        if (iVar1 < 0x10) {
          *(undefined8 *)((long)unaff_x19 + 0x74) = DAT_00d386d8;
        }
        else {
          *(int *)((long)unaff_x19 + 0x74) = iVar1;
        }
      }
    }
    else if ((*(char *)(unaff_x21 + 0x11) == '\x04') && ((char)unaff_x19[8] == '\x04')) {
      if (unaff_x19[2] == 0) goto LAB_029900e8;
      if (2 < *(byte *)(unaff_x19[2] + 0x40)) {
        FUN_0298e564();
      }
      thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d079d8);
      FUN_0299c3f0();
      FUN_02994f0c();
    }
  }
  FUN_02990210();
  return;
}


