/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$SubstractBorderPadding
ENTRY_POINT: 0412761c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04127890) */
/* WARNING: Removing unreachable block (ram,0x041278d0) */

void UnityEngine_UIElements_VisualElement__SubstractBorderPadding
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long in_x9;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  
  if (in_x9 != 0) {
    piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == param_3) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0412763c with catch @ 04127654
                       catch(type#2 @ 00000000) { ... } // from try @ 0412764c with catch @ 04127654
                        */
                    /* catch() { ... } // from try @ 041276a0 with catch @ 04127658
                       catch() { ... } // from try @ 041276cc with catch @ 04127658
                       catch() { ... } // from try @ 041276fc with catch @ 04127658 */
        puVar9 = (undefined8 *)(param_1 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0412765c;
      }
      in_x9 = in_x9 + -1;
                    /* catch() { ... } // from try @ 0412760c with catch @ 04127638 */
      piVar15 = piVar15 + 4;
                    /* try { // try from 0412763c to 0422763f has its CatchHandler @ 04127654 */
    } while (in_x9 != 0);
  }
                    /* try { // try from 04127640 to 0422764b has its CatchHandler @ 0412759c */
  puVar9 = (undefined8 *)FUN_01ecb238();
                    /* try { // try from 0412764c to 04227653 has its CatchHandler @ 04127654 */
LAB_0412765c:
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar10 = (long *)(*(code *)*puVar9)();
  puVar6 = PTR_DAT_0458a3a0;
  puVar5 = Method_System_DateTime_AddTicks__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar10;
                    /* try { // try from 041276a0 to 042276c7 has its CatchHandler @ 04127658 */
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0412767c with catch @ 041276b0
                        */
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_041276e4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
                    /* try { // try from 041276c8 to 042276cb has its CatchHandler @ 041276f4 */
                    /* try { // try from 041276cc to 042276f7 has its CatchHandler @ 04127658 */
    puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_041276e4:
    uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar13 & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 041277f4 with catch @ 04127828
                        */
      if (plVar10 == (long *)0x0) goto LAB_04127884;
      lVar11 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto LAB_0412785c;
                    /* try { // try from 04127840 to 04227843 has its CatchHandler @ 0412786c */
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
                    /* catch() { ... } // from try @ 041276c8 with catch @ 041276f4 */
    lVar11 = *plVar10;
                    /* try { // try from 041276f8 to 042276fb has its CatchHandler @ 04127710 */
                    /* try { // try from 041276fc to 04227707 has its CatchHandler @ 04127658 */
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
                    /* try { // try from 04127708 to 0422770f has its CatchHandler @ 04127710 */
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041276f8 with catch @ 04127710
                       catch(type#2 @ 00000000) { ... } // from try @ 04127708 with catch @ 04127710
                        */
                    /* catch() { ... } // from try @ 0412775c with catch @ 04127714
                       catch() { ... } // from try @ 04127788 with catch @ 04127714
                       catch() { ... } // from try @ 041277b8 with catch @ 04127714 */
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                    /* try { // try from 04127738 to 0422775b has its CatchHandler @ 0412776c */
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04127740;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_04127740:
    uVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
                    /* try { // try from 0412775c to 04227783 has its CatchHandler @ 04127714 */
    iVar8 = (**(code **)(*unaff_x19 + 0x2a8))();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04127738 with catch @ 0412776c
                        */
    if (iVar8 == -1) {
      lVar11 = unaff_x19[7];
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *(long *)(lVar11 + 0x10);
                    /* try { // try from 04127784 to 04227787 has its CatchHandler @ 041277b0 */
      lVar14 = *(long *)puVar2;
                    /* try { // try from 04127788 to 042277b3 has its CatchHandler @ 04127714 */
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 04127784 with catch @ 041277b0 */
        *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
                    /* try { // try from 041277b4 to 042277b7 has its CatchHandler @ 041277cc */
      }
      else {
                    /* try { // try from 041277b8 to 042277c3 has its CatchHandler @ 04127714 */
                    /* try { // try from 041277c4 to 042277cb has its CatchHandler @ 041277cc */
        FUN_030ba904(lVar11,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041277b4 with catch @ 041277cc
                       catch(type#2 @ 00000000) { ... } // from try @ 041277c4 with catch @ 041277cc
                        */
                    /* catch() { ... } // from try @ 04127818 with catch @ 041277d0
                       catch() { ... } // from try @ 04127844 with catch @ 041277d0
                       catch() { ... } // from try @ 04127874 with catch @ 041277d0 */
    lVar11 = unaff_x19[6];
    (**(code **)(*unaff_x19 + 0x2b8))();
                    /* try { // try from 041277f4 to 04227817 has its CatchHandler @ 04127828 */
    FUN_041bf278();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 04127818 to 0422783f has its CatchHandler @ 041277d0 */
    Sirenix_Serialization_Utilities_DoubleLookupDictionary<int,_int,_object>__TotalInnerCount
              (lVar11,uVar7,0,0,*(undefined8 *)puVar6);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
                    /* try { // try from 04127844 to 0422786f has its CatchHandler @ 041277d0 */
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                    /* catch() { ... } // from try @ 04127840 with catch @ 0412786c */
                    /* try { // try from 04127870 to 04227873 has its CatchHandler @ 04127888 */
                    /* try { // try from 04127874 to 0422787f has its CatchHandler @ 041277d0 */
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_04127878;
    }
  }
LAB_0412785c:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_04127878:
                    /* try { // try from 04127880 to 04227887 has its CatchHandler @ 04127888 */
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_04127884:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04127870 with catch @ 04127888
                       catch(type#2 @ 00000000) { ... } // from try @ 04127880 with catch @ 04127888
                        */
                    /* catch() { ... } // from try @ 041278d4 with catch @ 0412788c
                       catch() { ... } // from try @ 04127900 with catch @ 0412788c
                       catch() { ... } // from try @ 04127930 with catch @ 0412788c */
  FUN_0412799c();
                    /* try { // try from 041278b0 to 042278d3 has its CatchHandler @ 041278e4 */
  return;
}


