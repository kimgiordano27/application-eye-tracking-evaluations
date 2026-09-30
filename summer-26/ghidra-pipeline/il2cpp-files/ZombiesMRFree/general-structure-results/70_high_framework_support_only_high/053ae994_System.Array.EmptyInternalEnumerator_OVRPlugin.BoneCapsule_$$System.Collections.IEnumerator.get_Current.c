/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 053ae994
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  FUN_02feb2c4();
                    /* try { // try from 053ae99c to 054ae9b3 has its CatchHandler @ 053aea34 */
  if (unaff_x23 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_03010710();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
  }
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    FUN_02feb2c4(lVar1);
  }
  if (unaff_x23 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_03010710();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
  }
  thunk_FUN_03048534((long *)(unaff_x19 + 0x30),lVar1);
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_DeferredPassthroughMeshAddition>___ctor
              ();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar3 = FUN_05afde1c(uVar3,0);
    if (in_stack_00000008 == 0) goto LAB_053aeb84;
    lVar1 = FUN_059f8194(in_stack_00000008,*(undefined8 *)PTR_DAT_06f9ca90,uVar3,0);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    if (lVar1 == 0) {
      FUN_05b1040c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar2 = thunk_FUN_03010710(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(lVar1,lVar4);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar5 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        FUN_053ae36c();
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar1 = FUN_05abbc78(0);
  if (lVar1 != 0) {
    FUN_050e29b8();
    return;
  }
LAB_053aeb84:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


