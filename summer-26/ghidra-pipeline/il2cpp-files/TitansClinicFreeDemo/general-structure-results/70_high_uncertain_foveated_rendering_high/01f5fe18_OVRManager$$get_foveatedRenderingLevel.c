/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 01f5fe18
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


void OVRManager__get_foveatedRenderingLevel(void)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long *unaff_x19;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  
  do {
    *(undefined1 *)(unaff_x24 + 0xcb5) = unaff_w25;
    do {
      if ((int)*(uint *)(unaff_x19 + 1) <= unaff_w21 + 1) {
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
      uVar3 = FUN_01e8016c(uVar2,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      unaff_w21 = (int)unaff_x19[2] + 1;
      *(int *)(unaff_x19 + 2) = unaff_w21;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
    } while ((*(byte *)(unaff_x24 + 0xcb5) & 1) != 0);
    thunk_FUN_01279b34();
  } while( true );
}


