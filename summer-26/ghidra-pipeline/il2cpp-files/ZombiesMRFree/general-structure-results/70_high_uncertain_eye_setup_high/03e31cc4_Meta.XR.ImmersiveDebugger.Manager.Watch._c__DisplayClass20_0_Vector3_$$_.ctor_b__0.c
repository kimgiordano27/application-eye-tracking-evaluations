/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$<.ctor>b__0
ENTRY_POINT: 03e31cc4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>__<_ctor>b__0
               (long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long lVar8;
  undefined4 unaff_w20;
  long *unaff_x22;
  
  uVar1 = (**(code **)(param_1 + 0x438))();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x22);
  }
  uVar2 = FUN_05b0716c(0,uVar1,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_05b152c8(uVar1,unaff_w20,0);
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02feb2c4(lVar8);
    }
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_03010710(lVar3,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(lVar3,lVar8);
      }
    }
    return lVar4;
  }
  uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  thunk_FUN_03037804(PTR_DAT_06f6d6a0);
  FUN_02b0e39c();
  plVar5 = (long *)FUN_05afde1c(uVar1,0);
  FUN_02b03c7c();
  uVar1 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  uVar6 = thunk_FUN_03037804(PTR_DAT_06f9a4a0);
  uVar7 = thunk_FUN_03037804(PTR_DAT_06f9a490);
  uVar1 = FUN_05971ec8(uVar6,uVar1,uVar7,0);
  thunk_FUN_03037804(PTR_DAT_06f6d8e8);
  uVar6 = thunk_FUN_0301080c();
  FUN_05a64d00(uVar6,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar6);
}


