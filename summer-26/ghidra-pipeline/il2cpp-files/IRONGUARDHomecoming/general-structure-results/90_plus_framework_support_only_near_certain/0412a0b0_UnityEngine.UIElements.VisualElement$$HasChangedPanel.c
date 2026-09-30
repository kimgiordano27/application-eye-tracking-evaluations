/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$HasChangedPanel
ENTRY_POINT: 0412a0b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0412a278) */

int UnityEngine_UIElements_VisualElement__HasChangedPanel
              (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  int unaff_w20;
  int iVar9;
  int iVar10;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_01ecb238();
      goto LAB_0412a0d8;
    }
    plVar5 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar5 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
LAB_0412a0d8:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_System_DateTime_AddTicks__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = 0;
  do {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 04129fb8 with catch @ 0412a120 */
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 04129f74 with catch @ 0412a140 */
                    /* catch() { ... } // from try @ 04129bb4 with catch @ 0412a144 */
                    /* catch() { ... } // from try @ 04129f28 with catch @ 0412a148 */
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0412a14c;
        }
                    /* catch() { ... } // from try @ 04129f84 with catch @ 0412a124 */
        uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 04129f80 with catch @ 0412a128 */
        piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 04129a08 with catch @ 0412a12c */
      } while (uVar7 != 0);
    }
                    /* catch() { ... } // from try @ 04129f7c with catch @ 0412a130 */
                    /* catch() { ... } // from try @ 041299e8 with catch @ 0412a134 */
                    /* catch() { ... } // from try @ 04129c1c with catch @ 0412a138 */
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
                    /* catch() { ... } // from try @ 04129c08 with catch @ 0412a13c */
LAB_0412a14c:
                    /* catch() { ... } // from try @ 04129ba4 with catch @ 0412a14c */
                    /* catch() { ... } // from try @ 04129bf0 with catch @ 0412a150 */
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                    /* catch() { ... } // from try @ 04129f24 with catch @ 0412a158 */
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 0412a1c8 to 0422a1df has its CatchHandler @ 0412984c */
      iVar9 = 0;
      iVar10 = 9;
      iVar3 = 9;
      if (plVar5 == (long *)0x0) goto LAB_0412a244;
      goto LAB_0412a1e4;
    }
                    /* catch() { ... } // from try @ 04129a80 with catch @ 0412a15c */
    lVar6 = *plVar5;
                    /* catch() { ... } // from try @ 04129acc with catch @ 0412a160 */
                    /* catch() { ... } // from try @ 04129f20 with catch @ 0412a164 */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch() { ... } // from try @ 04129a58 with catch @ 0412a168 */
    if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 04129a64 with catch @ 0412a16c */
                    /* catch() { ... } // from try @ 04129f1c with catch @ 0412a170 */
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 04129b50 with catch @ 0412a174 */
                    /* catch() { ... } // from try @ 04129b2c with catch @ 0412a178 */
                    /* catch() { ... } // from try @ 04129efc with catch @ 0412a17c */
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0412a1a8;
        }
                    /* catch() { ... } // from try @ 04129b00 with catch @ 0412a180 */
        uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 04129b08 with catch @ 0412a184 */
        piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 04129f04 with catch @ 0412a188 */
      } while (uVar7 != 0);
    }
                    /* catch() { ... } // from try @ 04129ef0 with catch @ 0412a18c */
                    /* catch() { ... } // from try @ 04129ad0 with catch @ 0412a190 */
                    /* catch() { ... } // from try @ 04129ef4 with catch @ 0412a194
                       catch() { ... } // from try @ 04129f0c with catch @ 0412a194 */
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
                    /* catch() { ... } // from try @ 04129ef8 with catch @ 0412a198
                       catch() { ... } // from try @ 04129f00 with catch @ 0412a198 */
LAB_0412a1a8:
                    /* try { // try from 0412a1b0 to 0422a1c7 has its CatchHandler @ 0412a22c */
    iVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (iVar3 == unaff_w20) break;
    iVar9 = iVar9 + 1;
  } while( true );
  iVar10 = 3;
                    /* try { // try from 0412a1e0 to 0422a1f7 has its CatchHandler @ 0412a22c */
  iVar3 = 3;
  if (plVar5 != (long *)0x0) {
LAB_0412a1e4:
    iVar10 = iVar3;
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 0412a1f8 to 0422a21b has its CatchHandler @ 0412984c */
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch() { ... } // from try @ 0412a1b0 with catch @ 0412a22c
                       catch() { ... } // from try @ 0412a1e0 with catch @ 0412a22c
                       catch() { ... } // from try @ 0412a21c with catch @ 0412a22c */
                    /* try { // try from 0412a230 to 0422a233 has its CatchHandler @ 0412a23c */
                    /* try { // try from 0412a234 to 0422a23f has its CatchHandler @ 0412984c */
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0412a238;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 0412a21c to 0422a22b has its CatchHandler @ 0412a22c */
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0412a238:
                    /* catch() { ... } // from try @ 0412a230 with catch @ 0412a23c */
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
LAB_0412a244:
  if ((iVar10 == 9) || (iVar10 == 0)) {
    iVar9 = -1;
  }
  return iVar9;
}


