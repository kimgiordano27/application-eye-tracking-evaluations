/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 01f5fe64
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(void)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  
  do {
    lVar3 = unaff_x19[2];
    *(int *)(unaff_x19 + 2) = (int)lVar3 + 1;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    if ((*(byte *)(unaff_x24 + 0xcb5) & 1) == 0) {
      thunk_FUN_01279b34();
      *(undefined1 *)(unaff_x24 + 0xcb5) = unaff_w25;
    }
    if ((int)*(uint *)(unaff_x19 + 1) <= (int)lVar3 + 2) {
      return;
    }
    uVar1 = (int)unaff_x19[2] + 1;
    if (*(uint *)(unaff_x19 + 1) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    uVar2 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar1 * 2);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01e8016c(uVar2,0);
  } while ((uVar4 & 1) != 0);
  return;
}


