/*
FUNCTION_NAME: Mono.Unity.UnityTlsContext$$ProcessHandshake
ENTRY_POINT: 038e17d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038e1950) */

void Mono_Unity_UnityTlsContext__ProcessHandshake(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar3 = unaff_w19 * 8;
                    /* try { // try from 038e17ec to 039e17f3 has its CatchHandler @ 038e1878 */
  if (*(int *)(param_1 + 0x18) < iVar3) {
                    /* try { // try from 038e17f4 to 039e1847 has its CatchHandler @ 038e16e0 */
    (**(code **)(*unaff_x20 + 0x418))();
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_029cff28(iVar3,*(undefined8 *)StringLiteral_2946);
    puVar4 = StringLiteral_2947;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 038e1848 to 039e184b has its CatchHandler @ 038e1888 */
    FUN_029cfea8(plVar5,*(undefined8 *)StringLiteral_2947);
                    /* try { // try from 038e184c to 039e1853 has its CatchHandler @ 038e16e0 */
                    /* try { // try from 038e1854 to 039e1857 has its CatchHandler @ 038e1864 */
                    /* try { // try from 038e1858 to 039e185f has its CatchHandler @ 038e1878 */
                    /* catch() { ... } // from try @ 038e1774 with catch @ 038e1860
                       try { // try from 038e1860 to 039e18a7 has its CatchHandler @ 038e16e0 */
                    /* catch() { ... } // from try @ 038e1854 with catch @ 038e1864 */
    FUN_03952ce8();
                    /* catch() { ... } // from try @ 038e1750 with catch @ 038e1868 */
                    /* catch() { ... } // from try @ 038e17ec with catch @ 038e1878
                       catch() { ... } // from try @ 038e1858 with catch @ 038e1878 */
    plVar6 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
                    /* catch() { ... } // from try @ 038e17b8 with catch @ 038e1884 */
                    /* catch() { ... } // from try @ 038e1848 with catch @ 038e1888 */
    uVar7 = FUN_029cfea8(plVar5,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 038e17a0 with catch @ 038e188c */
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar7,uVar7);
    }
                    /* try { // try from 038e18a8 to 039e18ab has its CatchHandler @ 038e190c */
    (**(code **)(*plVar6 + 0x358))(plVar6,uVar7,0,iVar3,*(undefined8 *)(*plVar6 + 0x360));
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 038e18c8 to 039e18cf has its CatchHandler @ 038e1944 */
    if (uVar10 != 0) {
                    /* try { // try from 038e18d0 to 039e18f3 has its CatchHandler @ 038e16e0 */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 038e193c to 039e1943 has its CatchHandler @ 038e1944 */
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_038e1940;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 038e18f4 to 039e18f7 has its CatchHandler @ 038e1918 */
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038e1940:
                    /* catch() { ... } // from try @ 038e18c8 with catch @ 038e1944
                       catch() { ... } // from try @ 038e1904 with catch @ 038e1944
                       catch() { ... } // from try @ 038e193c with catch @ 038e1944 */
                    /* try { // try from 038e1948 to 039e1b37 has its CatchHandler @ 038e1948
                       catch() { ... } // from try @ 038e1948 with catch @ 038e1948
                       catch() { ... } // from try @ 038e1c3c with catch @ 038e1948
                       catch() { ... } // from try @ 038e1d60 with catch @ 038e1948
                       catch() { ... } // from try @ 038e1da0 with catch @ 038e1948
                       catch() { ... } // from try @ 038e1db8 with catch @ 038e1948
                       catch() { ... } // from try @ 038e1e30 with catch @ 038e1948
                       catch() { ... } // from try @ 038e1e8c with catch @ 038e1948
                       catch() { ... } // from try @ 038e1ee0 with catch @ 038e1948 */
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    return;
  }
                    /* try { // try from 038e1904 to 039e192f has its CatchHandler @ 038e1944 */
  if (*(int *)(param_1 + 0x18) < iVar1 + iVar3) {
                    /* catch() { ... } // from try @ 038e18a8 with catch @ 038e190c */
                    /* catch() { ... } // from try @ 038e18f4 with catch @ 038e1918 */
    (**(code **)(*unaff_x20 + 0x418))();
    param_1 = unaff_x20[7];
    lVar9 = 0;
    if (param_1 == 0) goto LAB_038e195c;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x20;
                    /* try { // try from 038e1930 to 039e193b has its CatchHandler @ 038e16e0 */
  }
LAB_038e195c:
  lVar2 = 0;
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    lVar2 = unaff_x21 + 0x20;
  }
  FUN_03952c90(lVar2,lVar9 + (int)unaff_x20[8],iVar3,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + iVar3;
  return;
}


