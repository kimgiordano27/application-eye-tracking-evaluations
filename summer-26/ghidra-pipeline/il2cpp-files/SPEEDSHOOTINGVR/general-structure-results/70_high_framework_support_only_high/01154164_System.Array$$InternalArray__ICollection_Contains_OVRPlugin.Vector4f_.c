/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4f>
ENTRY_POINT: 01154164
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4f>(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  
  FUN_00fdc2e4();
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_0103c2a0();
  }
  uVar1 = FUN_01d60e34();
  if (unaff_w19 < uVar1) {
    plVar2 = (long *)thunk_FUN_0103ffe0();
    if (plVar2 == (long *)0x0) {
      FUN_00fdc340();
    }
    else {
      lVar3 = thunk_FUN_0103fd0c(**(undefined8 **)(unaff_x20 + 0x38));
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_0103ffe0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar2[(long)(int)unaff_w19 + 4] = lVar3;
      thunk_FUN_0106e12c(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_010303a8(PTR_DAT_0234be28);
  uVar6 = thunk_FUN_010400dc();
  uVar5 = thunk_FUN_010303a8(PTR_DAT_0234be20);
  FUN_01c66cb4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar6);
}


