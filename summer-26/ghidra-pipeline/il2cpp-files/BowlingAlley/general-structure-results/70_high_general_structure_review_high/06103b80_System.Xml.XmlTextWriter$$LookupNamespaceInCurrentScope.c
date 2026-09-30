/*
FUNCTION_NAME: System.Xml.XmlTextWriter$$LookupNamespaceInCurrentScope
ENTRY_POINT: 06103b80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Xml_XmlTextWriter__LookupNamespaceInCurrentScope(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
                    /* try { // try from 06103b88 to 06203b93 has its CatchHandler @ 06103da4 */
  System_Collections_Generic_ArraySortHelper<VisualEffectControlClip_ClipEvent>__PickPivotAndPartition
            (param_1,*unaff_x21);
  puVar3 = System_Collections_Generic_IEnumerable<Vector2>_TypeInfo;
  if (unaff_x20 != 0) {
                    /* try { // try from 06103b9c to 06203ba7 has its CatchHandler @ 06103da0 */
                    /* try { // try from 06103ba8 to 06203bfb has its CatchHandler @ 061038dc */
    FUN_042b4cb8(&stack0x00000010);
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    uVar8 = 0;
    while (uVar6 = FUN_052ea58c(&stack0x00000030,*(undefined8 *)puVar3), uVar5 = in_stack_00000048,
          uVar4 = in_stack_00000040,
          puVar2 = System_Collections_Generic_IEnumerable<Variant>_TypeInfo, (uVar6 & 1) != 0) {
      if (((uint)in_stack_00000040 & 0xffff) == 1) {
                    /* try { // try from 06103bfc to 06203bff has its CatchHandler @ 06103dcc */
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
                    /* try { // try from 06103c00 to 06203c03 has its CatchHandler @ 06103dc8 */
                    /* try { // try from 06103c0c to 06203c0f has its CatchHandler @ 06103db0 */
        lVar9 = *(long *)(param_1 + 0x10);
                    /* try { // try from 06103c10 to 06203c13 has its CatchHandler @ 06103db8 */
                    /* try { // try from 06103c14 to 06203c17 has its CatchHandler @ 06103db4 */
        lVar10 = *(long *)
                  System_Collections_Generic_IEnumerator<KeyValuePair<LabelTarget,_LabelInfo>>_TypeInfo
        ;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                    /* try { // try from 06103c20 to 06203c23 has its CatchHandler @ 06103dac */
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
                    /* try { // try from 06103c24 to 06203c27 has its CatchHandler @ 061038dc */
        uVar1 = *(uint *)(param_1 + 0x18);
                    /* try { // try from 06103c28 to 06203c33 has its CatchHandler @ 06103d9c */
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 06103c34 to 06203c57 has its CatchHandler @ 06103d98 */
          lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar9 + 0x28);
          *puVar7 = in_stack_00000048;
          *(undefined8 *)(lVar9 + 0x20) = in_stack_00000040;
          thunk_FUN_0333a630(puVar7,0);
        }
        else {
                    /* try { // try from 06103c58 to 06203c5f has its CatchHandler @ 061038dc */
                    /* try { // try from 06103c60 to 06203c63 has its CatchHandler @ 06103d94 */
                    /* try { // try from 06103c64 to 06203c67 has its CatchHandler @ 06103da4 */
                    /* try { // try from 06103c68 to 06203c6b has its CatchHandler @ 06103da0 */
                    /* try { // try from 06103c6c to 06203c8b has its CatchHandler @ 06103d7c */
          FUN_042b4244(param_1,in_stack_00000040,in_stack_00000048,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        uVar6 = uVar8 & 1;
        uVar8 = 1;
        if (uVar6 == 0) {
                    /* try { // try from 06103c8c to 06203c8f has its CatchHandler @ 06103d78 */
                    /* try { // try from 06103c90 to 06203c93 has its CatchHandler @ 06103d84 */
                    /* try { // try from 06103c94 to 06203cb3 has its CatchHandler @ 06103cb4 */
          uVar8 = FUN_06103480(uVar4,uVar5,unaff_w22 & 1,unaff_w23 & 1,unaff_w24 & 1,unaff_w25 & 1,
                               &stack0x00000050);
        }
      }
    }
    FUN_052ea588(&stack0x00000030,
                 *(undefined8 *)System_Collections_Generic_IEnumerable<Variant>_TypeInfo);
    if (param_1 != 0) {
      FUN_042b4cb8(&stack0x00000010,param_1,
                   *(undefined8 *)System_Collections_Generic_IEnumerable<Vector4>_TypeInfo);
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      while (uVar8 = FUN_052ea58c(&stack0x00000030,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
        FUN_042b57f0();
      }
      FUN_052ea588(&stack0x00000030,*(undefined8 *)puVar2);
      unaff_x19[5] = in_stack_00000078;
      unaff_x19[4] = in_stack_00000070;
      unaff_x19[7] = in_stack_00000088;
      unaff_x19[6] = in_stack_00000080;
      unaff_x19[1] = in_stack_00000058;
      *unaff_x19 = in_stack_00000050;
      unaff_x19[3] = in_stack_00000068;
      unaff_x19[2] = in_stack_00000060;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


