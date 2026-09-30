/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$MoveNext
ENTRY_POINT: 0379d1bc
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__MoveNext
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_06e11c10;
  if ((bRam000000000723a192 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06df7a40);
    thunk_FUN_0159f088(PTR_DAT_06e62728);
    thunk_FUN_0159f088(PTR_DAT_06e11c10);
    thunk_FUN_0159f088(PTR_DAT_06e63440);
    bRam000000000723a192 = 1;
  }
  FUN_0379d2fc(param_1,param_2);
  lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    FUN_03b1d9e4(lVar3,*(undefined8 *)PTR_DAT_06e62728);
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar8 = *(long *)PTR_DAT_06df7a40;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      puVar2 = PTR_DAT_06e63440;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = param_2;
          thunk_FUN_01656ef8(puVar7,param_2);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar4,param_2);
        }
        uVar5 = FUN_0379c884(param_1);
        uVar5 = FUN_04c35130(param_1,uVar5,lVar3,*(undefined8 *)puVar2);
        FUN_051e4284(param_1,uVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


