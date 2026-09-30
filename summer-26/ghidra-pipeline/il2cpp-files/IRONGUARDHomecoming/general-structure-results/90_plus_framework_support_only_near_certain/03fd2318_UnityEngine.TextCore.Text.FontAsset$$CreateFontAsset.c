/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$CreateFontAsset
ENTRY_POINT: 03fd2318
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03fd2568) */

float UnityEngine_TextCore_Text_FontAsset__CreateFontAsset(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_0483ba4a & 1) == 0) {
                    /* catch() { ... } // from try @ 03fd230c with catch @ 03fd2338 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04584110);
                    /* try { // try from 03fd2348 to 040d235b has its CatchHandler @ 03fd2438 */
    thunk_FUN_01efb3a4(PTR_DAT_04584118);
                    /* catch() { ... } // from try @ 03fd21d8 with catch @ 03fd235c
                       try { // try from 03fd235c to 040d2373 has its CatchHandler @ 03fd1b18 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483ba4a = 1;
  }
  if (DAT_0482ee9c == '\0') {
                    /* try { // try from 03fd2374 to 040d2377 has its CatchHandler @ 03fd23a4 */
                    /* try { // try from 03fd2378 to 040d23b3 has its CatchHandler @ 03fd1b18 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *param_2;
                    /* catch() { ... } // from try @ 03fd2374 with catch @ 03fd23a4 */
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  fVar10 = **(float **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
                    /* try { // try from 03fd23b4 to 040d23c7 has its CatchHandler @ 03fd2438 */
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 03fd21d0 with catch @ 03fd23c8
                       try { // try from 03fd23c8 to 040d23df has its CatchHandler @ 03fd1b18 */
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04584110) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03fd23f4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 03fd23e0 to 040d23e3 has its CatchHandler @ 03fd240c */
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,*(long *)PTR_DAT_04584110,0);
                    /* try { // try from 03fd23e4 to 040d241b has its CatchHandler @ 03fd1b18 */
LAB_03fd23f4:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar3 = PTR_DAT_04584118;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* catch() { ... } // from try @ 03fd23e0 with catch @ 03fd240c */
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar5;
                    /* try { // try from 03fd2424 to 040d242f has its CatchHandler @ 03fd1b18 */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 03fd2430 to 040d2437 has its CatchHandler @ 03fd2438 */
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 03fd2278 with catch @ 03fd2438
                       catch() { ... } // from try @ 03fd22e0 with catch @ 03fd2438
                       catch() { ... } // from try @ 03fd2348 with catch @ 03fd2438
                       catch() { ... } // from try @ 03fd23b4 with catch @ 03fd2438
                       catch() { ... } // from try @ 03fd241c with catch @ 03fd2438
                       catch() { ... } // from try @ 03fd2430 with catch @ 03fd2438 */
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03fd246c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03fd246c:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03fd24c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03fd24c8:
    fVar9 = (float)(*(code *)*puVar4)(plVar5,puVar4[1]);
    fVar10 = fVar10 + fVar9;
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03fd2534;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03fd2534:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  return fVar10;
}


