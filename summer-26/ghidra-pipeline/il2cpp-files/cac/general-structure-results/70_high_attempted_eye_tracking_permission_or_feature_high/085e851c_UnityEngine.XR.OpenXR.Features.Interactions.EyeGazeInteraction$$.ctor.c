/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 085e851c
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long * UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000028;
  
code_r0x085e851c:
  do {
    (*(code *)*param_1)(unaff_x20,param_1[1]);
    uVar1 = thunk_FUN_0732565c();
    if ((uVar1 & 1) != 0) {
LAB_085e8540:
      FUN_072070e8(&stack0x00000018,*unaff_x21);
      return unaff_x20;
    }
    uVar1 = FUN_072070ec(&stack0x00000018,*unaff_x22);
    unaff_x20 = in_stack_00000028;
    if ((uVar1 & 1) == 0) {
      unaff_x20 = (long *)0x0;
      goto LAB_085e8540;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar2 = *in_stack_00000028;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar3 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x23) {
          param_1 = (undefined8 *)(lVar2 + (long)(*piVar3 + 4) * 0x10 + 0x138);
          goto code_r0x085e851c;
        }
        uVar1 = uVar1 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_03f4b594(in_stack_00000028,*unaff_x23,4);
  } while( true );
}


