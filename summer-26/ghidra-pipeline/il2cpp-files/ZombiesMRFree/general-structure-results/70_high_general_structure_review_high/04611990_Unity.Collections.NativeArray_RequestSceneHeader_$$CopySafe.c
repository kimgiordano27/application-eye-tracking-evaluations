/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$CopySafe
ENTRY_POINT: 04611990
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Collections_NativeArray<RequestSceneHeader>__CopySafe(void)

{
  long lVar1;
  undefined1 in_CY;
  int iVar2;
  undefined8 *puVar3;
  uint in_w8;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x27;
  uint uVar7;
  ulong unaff_x28;
  ulong unaff_x29;
  ulong uVar8;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  while (!(bool)in_CY) {
    uVar5 = *unaff_x27;
                    /* try { // try from 0461199c to 047119a3 has its CatchHandler @ 04611aa8 */
    lVar1 = unaff_x22 + (long)(int)in_w8 * 0x10;
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x28) = unaff_x27[1];
    *puVar3 = uVar5;
    thunk_FUN_03048534(puVar3,0);
    uVar7 = (int)unaff_x28 - 1;
    unaff_x28 = (ulong)uVar7;
    if ((int)uVar7 < unaff_w21) goto LAB_046119cc;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar7) break;
    while( true ) {
      unaff_x28 = (ulong)(int)uVar7;
      lVar1 = unaff_x22 + unaff_x28 * 0x10;
      unaff_x27 = (undefined8 *)(lVar1 + 0x20);
      uVar5 = *unaff_x27;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar6 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar5,uVar6,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) break;
LAB_046119cc:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      do {
        uVar8 = unaff_x29;
        uVar7 = (int)unaff_x28 + 1;
        if ((uint)uVar4 <= uVar7) goto LAB_04611a24;
        lVar1 = unaff_x22 + (long)(int)uVar7 * 0x10;
        puVar3 = (undefined8 *)(lVar1 + 0x20);
        *puVar3 = unaff_x23;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x24;
        thunk_FUN_03048534(puVar3,0);
                    /* try { // try from 04611a00 to 04711a07 has its CatchHandler @ 04611ab0 */
        if (uVar8 == in_stack_00000000) {
                    /* try { // try from 04611a08 to 04711a87 has its CatchHandler @ 0461179c */
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x29 = uVar8 + 1;
        if ((uint)uVar4 <= (uint)unaff_x29) goto LAB_04611a24;
        lVar1 = unaff_x22 + unaff_x29 * 0x10;
        unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
        unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
        unaff_x28 = uVar8;
      } while ((long)uVar8 < in_stack_00000008);
      uVar7 = (uint)uVar8;
      if ((uint)uVar4 <= uVar7) goto LAB_04611a24;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar7) break;
    in_w8 = uVar7 + 1;
    in_CY = *(uint *)(unaff_x22 + 0x18) <= in_w8;
  }
LAB_04611a24:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


