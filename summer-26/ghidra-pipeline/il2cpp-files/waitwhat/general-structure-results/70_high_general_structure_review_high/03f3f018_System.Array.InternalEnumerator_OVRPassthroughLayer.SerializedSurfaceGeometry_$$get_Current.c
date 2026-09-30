/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 03f3f018
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long in_x9;
  long *plVar9;
  ulong uVar10;
  long unaff_x21;
  undefined1 *__src;
  undefined8 *__dest;
  long unaff_x25;
  int iVar11;
  long unaff_x29;
  
  uVar1 = *(uint *)(in_x9 + 0xfc);
  uVar10 = (ulong)uVar1 + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar10;
  __dest = (undefined8 *)(__src + -uVar10);
                    /* try { // try from 03f3f040 to 0403f043 has its CatchHandler @ 03f3f05c */
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* try { // try from 03f3f044 to 0403f047 has its CatchHandler @ 03f3f054 */
                    /* try { // try from 03f3f048 to 0403f07f has its CatchHandler @ 03f3edb0 */
    (*(code *)**(undefined8 **)(param_1 + 0xe8))();
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03f3f044 with catch @ 03f3f054
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03f3efa4 with catch @ 03f3f058
                        */
    if (*(long *)(unaff_x21 + 0x10) != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03f3f040 with catch @ 03f3f05c
                        */
      iVar11 = 0;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03f3eed8 with catch @ 03f3f060
                        */
      do {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03f3ef28 with catch @ 03f3f064
                        */
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30))();
        if (iVar2 <= iVar11) {
          if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
          goto LAB_03f3f158;
        }
                    /* try { // try from 03f3f080 to 0403f083 has its CatchHandler @ 03f3f090 */
        lVar6 = *(long *)(unaff_x21 + 0x10);
        if (lVar6 == 0) break;
        lVar7 = *(long *)(param_4 + 0x20);
                    /* catch() { ... } // from try @ 03f3f080 with catch @ 03f3f090 */
                    /* try { // try from 03f3f094 to 0403f09b has its CatchHandler @ 03f3f0a4 */
        *(int *)(unaff_x29 + -0xc) = iVar11;
                    /* try { // try from 03f3f09c to 0403f0a7 has its CatchHandler @ 03f3edb0 */
        puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xa0);
        uVar3 = *puVar4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03f3f094 with catch @ 03f3f0a4
                        */
        pcVar8 = (code *)puVar4[2];
                    /* try { // try from 03f3f0a8 to 0403f123 has its CatchHandler @ 03f3f0a8
                       catch() { ... } // from try @ 03f3f0a8 with catch @ 03f3f0a8
                       catch() { ... } // from try @ 03f3f15c with catch @ 03f3f0a8
                       catch() { ... } // from try @ 03f3f1a0 with catch @ 03f3f0a8
                       catch() { ... } // from try @ 03f3f1e8 with catch @ 03f3f0a8 */
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined1 **)(unaff_x29 + -0x18) = __src;
        (*pcVar8)(uVar3,puVar4,lVar6,unaff_x29 + -0x20,__src);
        lVar6 = *(long *)(unaff_x21 + 0x18);
        memcpy(__dest,__src,(ulong)uVar1);
        if (lVar6 == 0) break;
        plVar9 = *(long **)(*(long *)(param_4 + 0x20) + 0xc0);
        puVar4 = __dest;
        if (-1 < *(int *)(*plVar9 + 0x28)) {
          puVar4 = (undefined8 *)*__dest;
        }
        puVar5 = (undefined8 *)plVar9[0x18];
        *(int *)(unaff_x29 + -0xc) = iVar11;
        uVar3 = *puVar5;
        pcVar8 = (code *)puVar5[2];
        *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
        *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
        (*pcVar8)(uVar3,puVar5,lVar6,unaff_x29 + -0x20,unaff_x29 + -0xc);
        iVar11 = iVar11 + 1;
      } while (*(long *)(unaff_x21 + 0x10) != 0);
    }
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
LAB_03f3f158:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


