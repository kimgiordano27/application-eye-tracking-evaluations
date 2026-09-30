/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 0379da78
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__get_Current(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x370));
  thunk_FUN_0159f088(PTR_DAT_06e4b820);
  thunk_FUN_0159f088(PTR_DAT_06d99058);
  thunk_FUN_0159f088(PTR_DAT_06e5f058);
  *(undefined1 *)(unaff_x21 + 0x197) = 1;
  puVar1 = PTR_DAT_06e4b820;
  if (unaff_x22 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_04866d9c(*(undefined8 *)puVar1,0);
    if (unaff_x19 != 0) {
      (**(code **)(unaff_x19 + 0x18))
                (*(undefined8 *)(unaff_x19 + 0x40),0,*(undefined8 *)(unaff_x19 + 0x28));
    }
    uVar4 = 0;
  }
  else {
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e0b6b0);
    puVar1 = PTR_DAT_06e5f058;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_052aba64(lVar3,0);
    uVar4 = (**(code **)(*unaff_x22 + 0x178))();
    FUN_052abc24(lVar3,*(undefined8 *)puVar1,uVar4,0);
    lVar5 = (**(code **)(*unaff_x22 + 0x188))();
    puVar2 = PTR_DAT_06dde370;
    puVar1 = PTR_DAT_06d99058;
    if (lVar5 != 0) {
      FUN_027836d4(lVar5,*(undefined8 *)PTR_DAT_06da9340);
      while (uVar6 = FUN_04195c54(), (uVar6 & 1) != 0) {
        uVar4 = FUN_02526be4(*(undefined8 *)puVar2,0,*(undefined8 *)puVar1,0);
        FUN_052abc24(lVar3,uVar4,0,0);
      }
      FUN_04195d6c();
    }
    uVar4 = FUN_0379c7bc();
    FUN_0379dc98(uVar4,uVar4,lVar3);
    uVar4 = FUN_051e4284();
  }
  return uVar4;
}


