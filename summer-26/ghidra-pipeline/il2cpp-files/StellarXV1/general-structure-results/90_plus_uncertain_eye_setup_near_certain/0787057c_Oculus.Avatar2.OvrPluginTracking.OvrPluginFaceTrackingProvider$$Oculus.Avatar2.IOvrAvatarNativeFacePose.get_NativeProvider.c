/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginFaceTrackingProvider$$Oculus.Avatar2.IOvrAvatarNativeFacePose.get_NativeProvider
ENTRY_POINT: 0787057c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider__Oculus_Avatar2_IOvrAvatarNativeFacePose_get_NativeProvider
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined8 unaff_x23;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x24;
  
                    /* try { // try from 0787057c to 07970583 has its CatchHandler @ 078705e4 */
                    /* try { // try from 07870584 to 079705c3 has its CatchHandler @ 078701c8 */
  FUN_04077588(PTR_DAT_092e5b28);
  FUN_04077588(PTR_DAT_092e64d0);
  *(undefined1 *)(unaff_x21 + 0x4f8) = 1;
  lVar4 = thunk_FUN_040b4efc(*unaff_x24);
  FUN_076bca34(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = unaff_x23;
    thunk_FUN_040ec700();
    puVar8 = (undefined8 *)(lVar4 + 0x20);
    *puVar8 = unaff_x22;
    thunk_FUN_040ec700(puVar8);
    *(long *)(lVar4 + 0x10) = unaff_x19;
    thunk_FUN_040ec700();
    puVar3 = PTR_DAT_092e64c8;
    puVar2 = PTR_DAT_092e5c20;
    puVar1 = PTR_DAT_092e57a0;
    if (unaff_x20 != 0) {
      FUN_0787070c();
      FUN_07850014();
      FUN_078500fc();
      FUN_07870860();
      FUN_0784fca4();
      uVar5 = FUN_0784d77c(*(undefined8 *)(lVar4 + 0x20),0);
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      thunk_FUN_040ec700(puVar8,uVar5);
      uVar5 = FUN_075a0ef8(*(undefined8 *)(lVar4 + 0x18),0);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar9 = *(undefined8 *)(lVar4 + 0x20);
      uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
      FUN_07849778(uVar6,uVar5,uVar7,uVar9);
      uVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_05696740(uVar5,lVar4,*(undefined8 *)puVar3,0);
      FUN_07851ebc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


