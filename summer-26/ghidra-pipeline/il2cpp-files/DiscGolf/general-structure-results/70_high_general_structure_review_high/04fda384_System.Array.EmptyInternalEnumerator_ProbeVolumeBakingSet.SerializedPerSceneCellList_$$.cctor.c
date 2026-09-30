/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.cctor
ENTRY_POINT: 04fda384
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___cctor(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int in_w8;
  long lVar4;
  long lVar5;
  int *in_x11;
  uint uVar6;
  long unaff_x20;
  uint unaff_w24;
  long unaff_x26;
  int unaff_w27;
  undefined8 unaff_x28;
  undefined8 in_stack_00000028;
  
  if (in_ZR || in_NG != in_OV) {
    uVar6 = *(uint *)(unaff_x20 + 0x20);
    if (uVar6 == unaff_w24) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fda37c with catch @ 04fda3c4
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fda358 with catch @ 04fda3c8
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fda380 with catch @ 04fda3cc
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fda33c with catch @ 04fda3d0
                       catch(type#1 @ 066567d8) { ... } // from try @ 04fda3b0 with catch @ 04fda3d0
                        */
      System_Array_EmptyInternalEnumerator<Regex_CachedCodeEntryKey>___cctor();
                    /* try { // try from 04fda3d8 to 050da3db has its CatchHandler @ 04fda490 */
      lVar5 = *(long *)(unaff_x20 + 0x10);
                    /* try { // try from 04fda3dc to 050da3ef has its CatchHandler @ 04fda1f4 */
      *(uint *)(unaff_x20 + 0x20) = unaff_w24 + 1;
      if (lVar5 == 0) goto LAB_04fda518;
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
                    /* try { // try from 04fda3f0 to 050da407 has its CatchHandler @ 04fda480 */
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_04fda514;
      lVar4 = *(long *)(unaff_x20 + 0x18);
      in_x11 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
                    /* try { // try from 04fda408 to 050da46f has its CatchHandler @ 04fda1f4 */
    }
    else {
      lVar4 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar6 + 1;
    }
    if (lVar4 == 0) {
LAB_04fda518:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04fda514;
    lVar4 = lVar4 + (long)(int)uVar6 * 0x18;
  }
  else {
    uVar6 = *(uint *)(unaff_x20 + 0x24);
    *(int *)(unaff_x20 + 0x28) = in_w8 + -1;
    if (unaff_w24 <= uVar6) {
LAB_04fda514:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
                    /* try { // try from 04fda39c to 050da3af has its CatchHandler @ 04fda1f4 */
    lVar4 = unaff_x26 + (long)(int)uVar6 * 0x18;
                    /* try { // try from 04fda3b0 to 050da3bf has its CatchHandler @ 04fda3d0 */
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
  }
  *(int *)(lVar4 + 0x20) = unaff_w27;
  *(int *)(lVar4 + 0x24) = *in_x11 + -1;
  *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
  *(undefined8 *)(lVar4 + 0x30) = unaff_x28;
  *in_x11 = uVar6 + 1;
  return 1;
}


