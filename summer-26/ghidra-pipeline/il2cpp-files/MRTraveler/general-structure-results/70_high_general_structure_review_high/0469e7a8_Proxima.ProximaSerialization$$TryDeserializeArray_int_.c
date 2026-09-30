/*
FUNCTION_NAME: Proxima.ProximaSerialization$$TryDeserializeArray<int>
ENTRY_POINT: 0469e7a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Proxima_ProximaSerialization__TryDeserializeArray<int>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  void *__src;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  void *unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  plVar4 = *(long **)(param_5 + 0x38);
  if (plVar4 == (long *)0x0) {
    FUN_03c8f898(PTR_DAT_08e80fd8);
                    /* try { // try from 0469e7c4 to 0479e7cb has its CatchHandler @ 0469e944 */
    plVar4 = *(long **)(unaff_x19 + 0x38);
    if (plVar4 == (long *)0x0) {
                    /* try { // try from 0469e7d0 to 0479e7df has its CatchHandler @ 0469e938 */
      FUN_03cf12a0();
      plVar4 = *(long **)(unaff_x19 + 0x38);
    }
  }
  uVar1 = *(uint *)(*plVar4 + 0xfc);
                    /* try { // try from 0469e7ec to 0479e7fb has its CatchHandler @ 0469e940 */
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  plVar4 = (long *)FUN_0848f324(param_2,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0469e90c to 0479e90f has its CatchHandler @ 0469e930 */
    FUN_03c8fb30();
  }
                    /* try { // try from 0469e808 to 0479e80f has its CatchHandler @ 0469e934 */
  lVar5 = *plVar4;
                    /* try { // try from 0469e814 to 0479e81f has its CatchHandler @ 0469e930 */
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
                    /* try { // try from 0469e824 to 0479e82b has its CatchHandler @ 0469e91c */
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e80fd8) {
                    /* try { // try from 0469e85c to 0479e867 has its CatchHandler @ 0469e92c */
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0469e860;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* try { // try from 0469e840 to 0479e843 has its CatchHandler @ 0469e914 */
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e80fd8,0);
LAB_0469e860:
  uVar6 = (*(code *)*puVar2)(plVar4);
                    /* try { // try from 0469e874 to 0479e87b has its CatchHandler @ 0469e918 */
  if ((uVar6 & 1) == 0) {
                    /* try { // try from 0469e910 to 0479e913 has its CatchHandler @ 0469e92c */
                    /* catch() { ... } // from try @ 0469e840 with catch @ 0469e914
                       try { // try from 0469e914 to 0479e95b has its CatchHandler @ 0469e778 */
                    /* catch() { ... } // from try @ 0469e874 with catch @ 0469e918 */
    thunk_FUN_03ce5214(PTR_DAT_08e80fe0);
    uVar9 = FUN_06f6be0c();
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x29 + -0x10);
    lVar5 = **(long **)(unaff_x19 + 0x38);
                    /* try { // try from 0469e888 to 0479e8a7 has its CatchHandler @ 0469e920 */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar5 = thunk_FUN_03cf5138(uVar9,lVar5);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x10);
    if (lVar5 != 0) {
      lVar5 = **(long **)(unaff_x19 + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03cf1244(lVar5);
                    /* try { // try from 0469e8c0 to 0479e8cb has its CatchHandler @ 0469e928 */
      }
      __src = (void *)FUN_03c8fa20(uVar9,lVar5,
                                   (long)&stack0x00000000 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
                    /* try { // try from 0469e8d0 to 0479e8df has its CatchHandler @ 0469e924 */
      memcpy(unaff_x21,__src,(ulong)uVar1);
                    /* try { // try from 0469e8e8 to 0479e8f3 has its CatchHandler @ 0469e93c */
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0469e9bc to 0479e9c7 has its CatchHandler @ 0469e778 */
      __stack_chk_fail();
    }
    FUN_036f8b10(uVar9);
    uVar9 = thunk_FUN_03d12a58(uVar9,0);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    thunk_FUN_03ce5214(PTR_DAT_08e695f0);
    FUN_036f8b20();
    uVar8 = FUN_0710fcf0(uVar8,0);
    uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e80fe8);
    uVar9 = FUN_06f75240(uVar3,uVar9,uVar8,0);
  }
  thunk_FUN_03ce5214(PTR_DAT_08e80fd0);
  uVar8 = thunk_FUN_03cf5234();
  FUN_0848d3d4(uVar8,uVar9,param_2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar8);
}


