/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_HTTP_MultiPartPost_Native
ENTRY_POINT: 035e6b78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 164
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035e6c04) */
/* WARNING: Removing unreachable block (ram,0x035e6de8) */
/* WARNING: Removing unreachable block (ram,0x035e6ed0) */

void Oculus_Platform_CAPI__ovr_HTTP_MultiPartPost_Native(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  
  do {
                    /* try { // try from 035e6b78 to 036e6b97 has its CatchHandler @ 035e6b6c */
    unaff_w25 = unaff_w25 + 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035e6b70 with catch @ 035e6b80
                        */
    thunk_FUN_01f51358(param_1,unaff_x21);
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_035e6adc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_035e6adc:
    uVar6 = (*(code *)*puVar1)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_035e6bf8;
                    /* try { // try from 035e6b98 to 036e6baf has its CatchHandler @ 035e6be0 */
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_035e6bd0;
                    /* try { // try from 035e6bb0 to 036e6bcf has its CatchHandler @ 035e6b6c */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_035e6b38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_035e6b38:
    unaff_x21 = (*(code *)*puVar1)();
    if (unaff_x21 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar2 = thunk_FUN_01f117cc();
      uVar3 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_23__
                                );
      uVar4 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                );
      FUN_034efd98(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_25__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar2,uVar3);
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = thunk_FUN_01f116d0(unaff_x21,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar5 == 0) {
      uVar2 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar2,0);
    }
    if (*(uint *)(unaff_x19 + 3) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    param_1 = unaff_x19 + (long)(int)unaff_w25 + 4;
    *param_1 = unaff_x21;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch() { ... } // from try @ 035e6b98 with catch @ 035e6be0
                       catch() { ... } // from try @ 035e6bd0 with catch @ 035e6be0 */
                    /* try { // try from 035e6be4 to 036e6be7 has its CatchHandler @ 035e6bf0 */
                    /* try { // try from 035e6be8 to 036e6bf3 has its CatchHandler @ 035e6b6c */
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_035e6bec;
    }
  }
LAB_035e6bd0:
                    /* try { // try from 035e6bd0 to 036e6bdf has its CatchHandler @ 035e6be0 */
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_035e6bec:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e6be4 with catch @ 035e6bf0
                        */
                    /* try { // try from 035e6bf4 to 036e6c2f has its CatchHandler @ 035e6bf4
                       catch() { ... } // from try @ 035e6bf4 with catch @ 035e6bf4
                       catch() { ... } // from try @ 035e6c3c with catch @ 035e6bf4
                       catch() { ... } // from try @ 035e6c80 with catch @ 035e6bf4
                       catch() { ... } // from try @ 035e6cb8 with catch @ 035e6bf4 */
  (*(code *)*puVar1)();
LAB_035e6bf8:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035e7260();
  return;
}


