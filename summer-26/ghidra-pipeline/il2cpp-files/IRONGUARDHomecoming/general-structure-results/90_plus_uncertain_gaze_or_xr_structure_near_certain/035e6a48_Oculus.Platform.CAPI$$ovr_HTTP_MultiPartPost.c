/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_HTTP_MultiPartPost
ENTRY_POINT: 035e6a48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 186
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035e6c04) */
/* WARNING: Removing unreachable block (ram,0x035e6de8) */
/* WARNING: Removing unreachable block (ram,0x035e6ed0) */

void Oculus_Platform_CAPI__ovr_HTTP_MultiPartPost(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x23;
  uint uVar12;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e6a3c with catch @ 035e6a48
                        */
  while (!(bool)in_ZR) {
                    /* catch() { ... } // from try @ 035e69f4 with catch @ 035e6a38
                       catch() { ... } // from try @ 035e6a28 with catch @ 035e6a38 */
                    /* try { // try from 035e6a3c to 036e6a3f has its CatchHandler @ 035e6a48 */
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_035e6a68;
    }
                    /* try { // try from 035e6a40 to 036e6a4b has its CatchHandler @ 035e69c8 */
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_035e6a68:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = 0;
  do {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_035e6adc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_035e6adc:
    uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_035e6bf8;
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_035e6bd0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_035e6b38;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_035e6b38:
    lVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar9 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_23__
                                );
      uVar8 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                );
      FUN_034efd98(uVar6,uVar7,uVar8,0);
      uVar7 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_25__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar7);
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar5 == 0) {
      uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,0);
    }
                    /* catch() { ... } // from try @ 035e6b78 with catch @ 035e6b6c
                       catch() { ... } // from try @ 035e6bb0 with catch @ 035e6b6c
                       catch() { ... } // from try @ 035e6be8 with catch @ 035e6b6c */
    if (*(uint *)(unaff_x19 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
                    /* try { // try from 035e6b70 to 036e6b77 has its CatchHandler @ 035e6b80 */
    lVar5 = (long)(int)uVar12;
    unaff_x19[lVar5 + 4] = lVar9;
    uVar12 = uVar12 + 1;
    thunk_FUN_01f51358(unaff_x19 + lVar5 + 4,lVar9);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_035e6bec;
    }
  }
LAB_035e6bd0:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035e6bec:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_035e6bf8:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035e7260();
  return;
}


