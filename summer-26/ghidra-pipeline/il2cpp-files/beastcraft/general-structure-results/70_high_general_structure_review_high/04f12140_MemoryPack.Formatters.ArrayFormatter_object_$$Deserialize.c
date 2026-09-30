/*
FUNCTION_NAME: MemoryPack.Formatters.ArrayFormatter<object>$$Deserialize
ENTRY_POINT: 04f12140
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


float MemoryPack_Formatters_ArrayFormatter<object>__Deserialize
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  int unaff_w19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  undefined8 uStack0000000000000008;
  int iStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000028;
  
  _iStack0000000000000010 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000018 = param_2;
  thunk_FUN_02ee2be8(param_1 + 8);
  if (unaff_w19 < 0) {
    fVar4 = 0.0;
  }
  else {
    if (unaff_x20 == 0) {
LAB_04f1226c:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar2 = FUN_04a47c3c();
    _iStack0000000000000010 = CONCAT44(uStack0000000000000014,uVar2);
    if (*(int *)(unaff_x20 + 0x88) <= unaff_w19) {
      if (*(long *)(unaff_x20 + 0x98) == 0) goto LAB_04f1226c;
      uVar3 = FUN_04d44ce8(*(long *)(unaff_x20 + 0x98),*(int *)(unaff_x20 + 0x88),&stack0x00000028,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1f0));
      if ((uVar3 & 1) != 0) {
        fVar4 = (float)FUN_04f138c4();
        return fVar4;
      }
    }
    fVar4 = 0.0;
    do {
      if (*(long *)(unaff_x20 + 0x98) == 0) goto LAB_04f1226c;
      uVar3 = FUN_04d44ce8(*(long *)(unaff_x20 + 0x98),unaff_w19,&stack0x00000008,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1f0));
      if ((uVar3 & 1) != 0) {
        fVar5 = (float)FUN_04f138c4();
        return fVar4 + fVar5;
      }
      fVar5 = 0.0;
      if (unaff_w19 != iStack0000000000000010) {
        fVar5 = (float)System_Reactive_AnonymousSafeObserver<Vector3>__OnNext();
      }
      fVar4 = fVar4 + fVar5;
      bVar1 = 0 < unaff_w19;
      unaff_w19 = unaff_w19 + -1;
    } while (bVar1);
  }
  return fVar4;
}


