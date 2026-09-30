/*
FUNCTION_NAME: FUN_05cffc3c
ENTRY_POINT: 05cffc3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05cffc3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
                    /* try { // try from 05cffc48 to 05dffc67 has its CatchHandler @ 05cfff84 */
  if ((DAT_066da6dd & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Key__);
                    /* try { // try from 05cffc74 to 05dffc7b has its CatchHandler @ 05cfff7c */
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__);
    DAT_066da6dd = 1;
  }
                    /* try { // try from 05cffc88 to 05dffc93 has its CatchHandler @ 05cfff9c */
  plVar5 = (long *)(param_1 + 0x10);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Key__
                              );
    FUN_05cff4f0();
    *plVar5 = lVar6;
    thunk_FUN_02bb0e9c(plVar5,lVar6);
    lVar6 = *plVar5;
    if (lVar6 == 0) goto LAB_05cffeb8;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__;
  uVar3 = FUN_05c96dc4(0);
  uVar8 = _UNK_01035b58;
  uVar7 = _DAT_01035b50;
  uVar10 = _UNK_010357e8;
  uVar9 = _DAT_010357e0;
  uVar12 = _UNK_01035188;
  uVar11 = _DAT_01035180;
  uVar14 = _UNK_01033b88;
  uVar13 = _DAT_01033b80;
  lVar4 = 0;
  *(undefined4 *)(lVar6 + 0x18) = uVar3;
  do {
    if (uVar13 < 0x28) {
      *(undefined1 *)(lVar6 + lVar4 + 0x1c) = 0;
    }
    if (uVar14 < 0x28) {
      *(undefined1 *)(lVar6 + lVar4 + 0x1d) = 0;
    }
    if (uVar11 < 0x28) {
      *(undefined1 *)(lVar6 + lVar4 + 0x1e) = 0;
    }
    if (uVar12 < 0x28) {
      *(undefined1 *)(lVar6 + lVar4 + 0x1f) = 0;
    }
    if (uVar9 < 0x28) {
      *(undefined1 *)(lVar6 + lVar4 + 0x20) = 0;
    }
    if (uVar10 < 0x28) {
      *(undefined1 *)(lVar6 + lVar4 + 0x21) = 0;
    }
    if (uVar7 < 0x28) {
      *(undefined1 *)(lVar6 + lVar4 + 0x22) = 0;
    }
    if (uVar8 < 0x28) {
      *(undefined1 *)(lVar6 + lVar4 + 0x23) = 0;
    }
    uVar9 = uVar9 + 8;
    uVar10 = uVar10 + 8;
    uVar11 = uVar11 + 8;
    uVar12 = uVar12 + 8;
    lVar4 = lVar4 + 8;
    uVar13 = uVar13 + 8;
    uVar14 = uVar14 + 8;
    uVar7 = uVar7 + 8;
    uVar8 = uVar8 + 8;
  } while (lVar4 != 0x28);
  lVar4 = *plVar5;
  *(undefined4 *)(lVar6 + 0x44) = 0;
  if (lVar4 != 0) {
    lVar6 = *(long *)puVar1;
    *(undefined1 *)(lVar4 + 0x48) = 1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cffebc(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0;
    FUN_05cffebc(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (*(long *)(param_1 + 0xf8) != 0) {
      FUN_0444eb38(*(long *)(param_1 + 0xf8),*(undefined8 *)puVar2);
      *(undefined4 *)(param_1 + 0x100) = 0;
      FUN_05cffebc(param_1 + 0x108);
      return;
    }
  }
LAB_05cffeb8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


