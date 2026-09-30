/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 0111d2b8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation>(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long lVar6;
  
  if (unaff_x23 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar4 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234be10);
    FUN_01c5e120(uVar4,uVar5,0);
  }
  else if ((unaff_w22 < 0) || (unaff_w21 < 0)) {
    puVar1 = PTR_DAT_0234be20;
    if (-1 < unaff_w21) {
      puVar1 = PTR_DAT_0234be18;
    }
    uVar5 = thunk_FUN_010303a8(puVar1);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar4 = thunk_FUN_010400dc();
    uVar3 = thunk_FUN_010303a8(PTR_DAT_0234be30);
    FUN_01c62494(uVar4,uVar5,uVar3,0);
  }
  else {
    if (unaff_w22 <= *(int *)(unaff_x23 + 0x18) - unaff_w21) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
                    /* try { // try from 0111d2dc to 0121d2e3 has its CatchHandler @ 0111d55c */
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 0111d2e4 to 0121d4f3 has its CatchHandler @ 0111ce60 */
        lVar2 = FUN_0103c244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_0173d204();
      return;
    }
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar4 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234be38);
    FUN_01c65ad0(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar4);
}


