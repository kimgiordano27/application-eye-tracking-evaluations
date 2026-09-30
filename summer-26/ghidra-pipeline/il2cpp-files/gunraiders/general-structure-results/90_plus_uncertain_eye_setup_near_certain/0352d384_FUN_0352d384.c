/*
FUNCTION_NAME: FUN_0352d384
ENTRY_POINT: 0352d384
PROGRAM: gunraiders-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_0352d384(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
LAB_0352d420:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar4 = FUN_035336b4(param_2,0);
  uVar3 = FUN_035336bc(param_2,0);
  uVar8 = 0;
  uVar9 = 0;
  uVar1 = uVar3 + 10;
  do {
    uVar7 = uVar1;
    if ((int)uVar8 == 0x46) break;
    if (lVar4 == 0) goto LAB_0352d420;
    if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
      thunk_FUN_01c273e8(OVRPlugin_OVRP_1_28_0_TypeInfo);
      uVar5 = thunk_FUN_01c496e0();
      uVar6 = thunk_FUN_01c273e8(
                                Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>_Copy__
                                );
      FUN_032245cc(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar5,uVar6);
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    bVar2 = *(byte *)(lVar4 + (int)uVar3 + 0x20);
    uVar3 = uVar3 + 1;
    uVar9 = ((ulong)bVar2 & 0x7f) << (uVar8 & 0x3f) | uVar9;
    uVar8 = (ulong)((int)uVar8 + 7);
    uVar7 = uVar3;
  } while ((char)bVar2 < '\0');
  FUN_035336c4(param_2,uVar7,0);
  return uVar9;
}


