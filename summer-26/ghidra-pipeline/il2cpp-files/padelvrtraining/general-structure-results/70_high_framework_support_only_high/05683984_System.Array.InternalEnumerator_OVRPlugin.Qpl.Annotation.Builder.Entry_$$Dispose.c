/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 05683984
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar5;
  undefined *puVar3;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xad0));
  FUN_03d2d2b0(PTR_DAT_091a1be8);
  *(undefined1 *)(unaff_x23 + 0xd4a) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar5 = thunk_FUN_03d2ef40();
    puVar3 = PTR_DAT_091f9f38;
  }
  else {
    if (unaff_x22 != (long *)0x0) {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        FUN_03d8f26c(lVar4);
      }
      lVar4 = thunk_FUN_03d2ee44();
      if (lVar4 == 0) {
        uVar5 = **(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_07186ef4(uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_091a0ad0 + 0xe0) == 0) {
          thunk_FUN_03db619c(*(long *)PTR_DAT_091a0ad0);
        }
        unaff_x22 = (long *)FUN_070d48f8();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03d8f26c(lVar4);
      }
      if (unaff_x22 != (long *)0x0) {
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar4 + 0x40)) {
          puVar1 = (undefined4 *)thunk_FUN_03d2f094();
                    /* WARNING: Could not recover jumptable at 0x05683a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x21 + 600))(*puVar1,puVar1[1]);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(unaff_x22);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar5 = thunk_FUN_03d2ef40();
    puVar3 = PTR_DAT_091ae550;
  }
  uVar2 = thunk_FUN_03d1e194(puVar3);
  FUN_070c4c34(uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar5);
}


