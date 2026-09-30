/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 0691078c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int *unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(PTR_DAT_08488b88);
                    /* try { // try from 06910798 to 06a107a3 has its CatchHandler @ 06910b34 */
  FUN_03a8a718(PTR_DAT_0848acd8);
                    /* try { // try from 069107a8 to 06a107b3 has its CatchHandler @ 06910bb0 */
  *(undefined1 *)(unaff_x20 + 0xbff) = 1;
  puVar1 = PTR_DAT_08488b88;
  lVar4 = *(long *)(unaff_x19 + 8);
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* try { // try from 069107d0 to 06a107d3 has its CatchHandler @ 06910ba0 */
    FUN_0690ec0c(lVar4,0);
                    /* try { // try from 069107d8 to 06a107e3 has its CatchHandler @ 06910b54 */
                    /* try { // try from 069107e8 to 06a107f3 has its CatchHandler @ 06910b50 */
    if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
                    /* try { // try from 069107f8 to 06a10803 has its CatchHandler @ 06910bb0 */
    lVar2 = FUN_067cd360(1000,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 069108d0 to 06a108d3 has its CatchHandler @ 06910bac */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_067c4bec(lVar2,0);
                    /* try { // try from 06910808 to 06a10813 has its CatchHandler @ 06910b70 */
    uVar3 = FUN_0666e8e0(&stack0x00000018,0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
                    /* try { // try from 06910828 to 06a10833 has its CatchHandler @ 06910ba4 */
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e6720(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0666e9a8(&stack0x00000018,0);
  if (lVar4 != 0) {
    FUN_0690e9c4(lVar4,0);
    lVar4 = *(long *)puVar1;
    *unaff_x19 = -2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


