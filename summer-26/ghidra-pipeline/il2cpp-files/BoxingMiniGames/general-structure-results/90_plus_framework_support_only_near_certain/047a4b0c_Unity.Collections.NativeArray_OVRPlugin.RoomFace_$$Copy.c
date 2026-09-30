/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$Copy
ENTRY_POINT: 047a4b0c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__Copy
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong unaff_x24;
  int iVar3;
  ulong uVar4;
  
  uVar4 = unaff_x24 >> 1 & 0x7fffffff;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 047a4b04 with catch @ 047a4b10
                        */
  do {
    lVar2 = *(long *)(param_5 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar2 = *(long *)(param_5 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    FUN_047a4c5c(param_1,uVar4,unaff_x24 & 0xffffffff,param_2,param_4,
                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
    iVar3 = (int)uVar4;
    uVar1 = iVar3 - 1;
    uVar4 = (ulong)uVar1;
  } while (uVar1 != 0 && 0 < iVar3);
  if (1 < (int)unaff_x24) {
    do {
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a42cc(param_1,param_2,param_3);
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      FUN_047a4c5c(param_1,1,-param_2 + param_3,param_2,param_4,
                   *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
      param_3 = param_3 + -1;
    } while (2 < -param_2 + param_3 + 2U);
  }
  return;
}


