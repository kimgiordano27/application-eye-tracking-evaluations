/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 04c40608
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int local_34;
  
  puVar3 = PTR_DAT_07d990f0;
  puVar2 = PTR_DAT_07d990e8;
  if ((DAT_082567b5 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d990f8);
    FUN_0373b518(PTR_DAT_07d99100);
    FUN_0373b518(PTR_DAT_07d990f0);
    FUN_0373b518(PTR_DAT_07d990e8);
    DAT_082567b5 = 1;
  }
  local_34 = 0;
  lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_049ce6c0(lVar6,*(undefined8 *)puVar3);
  if (lVar6 == 0) {
LAB_04c40794:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = FUN_049cf11c(lVar6,*(undefined8 *)PTR_DAT_07d99100);
  param_1[0x13] = lVar7;
  thunk_FUN_037aeb94();
  local_34 = 0;
  iVar4 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
  puVar2 = PTR_DAT_07d990f8;
  if (0 < iVar4) {
    do {
      uVar8 = FUN_06240534(&local_34,0);
      uVar8 = Newtonsoft_Json_Linq_Extensions_<Convert>d__14<object,_object>__System_IDisposable_Dispose
                        (param_1,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)puVar2;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_04c40794;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4(lVar6,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      iVar4 = local_34 + 1;
      local_34 = iVar4;
      iVar5 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
    } while (iVar4 < iVar5);
  }
  return;
}


