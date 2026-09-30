/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 05ce3d94
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  uint unaff_w24;
  long *plVar4;
  long unaff_x25;
  uint uVar5;
  long unaff_x29;
  
  memset(unaff_x23,0,unaff_x22);
  if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar2 = thunk_FUN_03d2ef40();
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_091b4480);
    FUN_070ccddc(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar2);
  }
  uVar5 = *(uint *)(unaff_x19 + 0x18) - 1;
  *(uint *)(unaff_x19 + 0x18) = uVar5;
  if (uVar5 - unaff_w24 != 0 && (int)unaff_w24 <= (int)uVar5) {
    FUN_0719b94c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w24 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w24,uVar5 - unaff_w24,0);
    uVar5 = *(uint *)(unaff_x19 + 0x18);
  }
                    /* try { // try from 05ce3ddc to 05de3deb has its CatchHandler @ 05ce3dec */
  plVar4 = *(long **)(unaff_x19 + 0x10);
                    /* catch() { ... } // from try @ 05ce3d5c with catch @ 05ce3dec
                       catch() { ... } // from try @ 05ce3ddc with catch @ 05ce3dec */
  memset(unaff_x23,0,unaff_x22);
                    /* try { // try from 05ce3df0 to 05de3df3 has its CatchHandler @ 05ce3dfc */
                    /* try { // try from 05ce3df4 to 05de3dff has its CatchHandler @ 05ce3c8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ce3df0 with catch @ 05ce3dfc
                        */
  memcpy(unaff_x21,unaff_x23,unaff_x22);
  if (plVar4 != (long *)0x0) {
    if (uVar5 < *(uint *)(plVar4 + 3)) {
      memcpy((void *)((long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar5 + 0x20),
             unaff_x21,unaff_x22);
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      if (uVar5 < *(uint *)(plVar4 + 3)) {
        FUN_03d2d260(lVar1,(long)plVar4 +
                           (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar5 + 0x20);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


