/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$.ctor
ENTRY_POINT: 03b71eac
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>___ctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_02f07e70(PTR_DAT_06d36e98);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_02eea7c4(param_1);
      puVar6 = *(undefined8 **)(param_1 + 0x38);
    }
  }
  puVar2 = PTR_DAT_06d01eb0;
  uVar7 = *puVar6;
  if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar3 = FUN_056109c0(uVar7,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar4 = FUN_0561bef0(lVar3,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  uVar7 = **(undefined8 **)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  plVar5 = (long *)FUN_056109c0(uVar7,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d36e98 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_06d36e98) {
      plVar5 = (long *)0x0;
    }
  }
  uVar7 = thunk_FUN_02f100e4(plVar5,0);
  return uVar7;
}


