/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetSubArray
ENTRY_POINT: 047a60e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetSubArray(ushort *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w26;
  
  do {
    if ((*param_1 & 1) == 0) {
      FUN_0367c9fc();
    }
                    /* try { // try from 047a60f4 to 048a60f7 has its CatchHandler @ 047a6104 */
    FUN_047a59e8();
    do {
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_047a617c;
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar4 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
      uVar1 = *(undefined8 *)(lVar4 + 0x20);
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      iVar3 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar2);
    } while (iVar3 < 0);
    do {
      unaff_w26 = unaff_w26 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w26) {
LAB_047a617c:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      iVar3 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
    } while (iVar3 < 0);
    if ((int)unaff_w26 <= (int)unaff_w19) {
      lVar4 = *(long *)(unaff_x21 + 0x20);
                    /* catch() { ... } // from try @ 047a60f4 with catch @ 047a6104 */
                    /* try { // try from 047a6108 to 048a610f has its CatchHandler @ 047a6118 */
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 047a6110 to 048a611b has its CatchHandler @ 047a5bf8 */
        lVar4 = FUN_0367c9fc();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 047a6108 with catch @ 047a6118
                        */
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a59e8();
      return unaff_w19;
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    param_1 = (ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
  } while( true );
}


