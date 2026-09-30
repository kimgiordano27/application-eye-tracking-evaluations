/*
FUNCTION_NAME: Sirenix.Utilities.MathUtilities$$Fract
ENTRY_POINT: 01f622f4
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Sirenix_Utilities_MathUtilities__Fract(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *unaff_x23;
  undefined4 extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 uVar7;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar6 [16];
  
  thunk_FUN_016466fc(param_1);
  uVar3 = FUN_051d94d4();
  if ((uVar3 & 1) != 0) {
    FUN_051d85c4(0);
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
              ();
  }
  iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor();
  if (iVar2 == 0) {
LAB_01f62380:
    FUN_01f64634();
    uVar5 = extraout_s0;
    uVar7 = extraout_var;
    uVar4 = extraout_var_01;
  }
  else {
    if (iVar2 == 2) {
      uVar4 = FUN_036e1620();
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x23);
      }
      uVar3 = FUN_051d94d4(uVar4,0,0);
      puVar1 = PTR_DAT_06dcf890;
      if ((uVar3 & 1) == 0) {
LAB_01f6242c:
        FUN_01f647cc();
        uVar5 = extraout_s0_00;
        uVar7 = extraout_var_00;
        uVar4 = extraout_var_02;
        goto Sirenix_Utilities_MathUtilities__StackHermite01;
      }
      if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_0486672c(*(undefined8 *)puVar1,0);
    }
    else if (iVar2 == 1) {
      uVar4 = FUN_036e1620();
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x23);
      }
      uVar3 = FUN_051d94d4(uVar4,0,0);
      if ((uVar3 & 1) == 0) goto LAB_01f6242c;
      goto LAB_01f62380;
    }
    if (DAT_0722a89c == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e4d340);
      DAT_0722a89c = '\x01';
    }
    uVar5 = **(undefined4 **)(*(long *)PTR_DAT_06e4d340 + 0xb8);
    uVar7 = 0;
    uVar4 = 0;
  }
Sirenix_Utilities_MathUtilities__StackHermite01:
  auVar6._4_4_ = uVar7;
  auVar6._0_4_ = uVar5;
  auVar6._8_8_ = uVar4;
  return auVar6;
}


