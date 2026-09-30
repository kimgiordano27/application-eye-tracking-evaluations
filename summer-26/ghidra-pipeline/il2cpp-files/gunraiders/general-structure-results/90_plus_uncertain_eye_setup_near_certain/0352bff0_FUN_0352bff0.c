/*
FUNCTION_NAME: FUN_0352bff0
ENTRY_POINT: 0352bff0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint FUN_0352bff0(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 local_38;
  uint local_34;
  
  local_38 = 0;
  if (param_2 == 0) {
LAB_0352c2b0:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar5 = FUN_035336b4(param_2,0);
  local_34 = FUN_035336bc(param_2,0);
  uVar9 = 0;
  uVar8 = 0;
  pbVar10 = (byte *)(lVar5 + (int)local_34 + 0x20);
  do {
    uVar2 = local_34;
    if (uVar9 == 0x23) break;
    iVar3 = FUN_03533754(param_2,0);
    if (iVar3 <= (int)uVar2) {
      FUN_019b2708(param_2);
      uVar4 = FUN_03533754(param_2,0);
      FUN_019b2708(param_2);
      FUN_035336c4(param_2,uVar4,0);
      uVar6 = thunk_FUN_01c273e8(PTR_DAT_0422fd68);
      uVar6 = FUN_01c5d2fc(uVar6,8);
      FUN_019b2708();
      uVar7 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int2>_get_IsCreated__);
      FUN_019b8e08(uVar6,0,uVar7);
      uVar7 = FUN_032cf308(&local_34,0);
      FUN_019b2708(uVar6);
      FUN_019b8e08(uVar6,1,uVar7);
      FUN_019b2708(uVar6);
      uVar7 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int3>__ctor__);
      FUN_019b8e08(uVar6,2,uVar7);
      FUN_019b2708(param_2);
      local_38 = FUN_03533754(param_2,0);
      uVar7 = FUN_032cf308(&local_38,0);
      FUN_019b2708(uVar6);
      FUN_019b8e08(uVar6,3,uVar7);
      FUN_019b2708(uVar6);
      uVar7 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int3>_Dispose__);
      FUN_019b8e08(uVar6,4,uVar7);
      FUN_019b2708(lVar5);
      local_38 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
      uVar7 = FUN_032cf308(&local_38,0);
      FUN_019b2708(uVar6);
      FUN_019b8e08(uVar6,5,uVar7);
      FUN_019b2708(uVar6);
      uVar7 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int3>_get_IsCreated__);
      FUN_019b8e08(uVar6,6,uVar7);
      FUN_019b2708(param_2);
      local_38 = FUN_0353a4cc(param_2,0);
      uVar7 = FUN_032cf308(&local_38,0);
      FUN_019b2708(uVar6);
      FUN_019b8e08(uVar6,7,uVar7);
      uVar6 = FUN_031533cc(uVar6,0);
      thunk_FUN_01c273e8(OVRPlugin_OVRP_1_28_0_TypeInfo);
      uVar7 = thunk_FUN_01c496e0();
      FUN_032245cc(uVar7,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<int4>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,uVar6);
    }
    if (lVar5 == 0) goto LAB_0352c2b0;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    bVar1 = *pbVar10;
    local_34 = uVar2 + 1;
    uVar8 = (bVar1 & 0x7f) << (ulong)(uVar9 & 0x1f) | uVar8;
    uVar9 = uVar9 + 7;
    pbVar10 = pbVar10 + 1;
  } while ((char)bVar1 < '\0');
  FUN_035336c4(param_2,local_34,0);
  return uVar8;
}


