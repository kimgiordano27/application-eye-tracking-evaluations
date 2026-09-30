/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector2>
ENTRY_POINT: 04c43e88
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04c44190) */

void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector2>
               (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  uint uVar8;
  long *unaff_x22;
  long *in_stack_00000120;
  long in_stack_000001e8;
  
LAB_04c43e98:
  uVar1 = (*(code *)*param_1)(unaff_x20,param_1[1]);
  uVar2 = FUN_0888cf38(&stack0x000001c0,0);
  uVar3 = thunk_FUN_0732565c(uVar1,uVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_07218b84(&stack0x000000d0,
                         *(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x78));
    unaff_x20 = in_stack_00000120;
    if ((uVar3 & 1) == 0) {
      uVar8 = 0x10;
      goto LAB_04c44140;
    }
    if (in_stack_00000120 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar6 = *in_stack_00000120;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
                    /* try { // try from 04c43e8c to 04d43ecb has its CatchHandler @ 04c43cbc */
          param_1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c43e98;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_03f4b594(in_stack_00000120,*unaff_x22,0);
    goto LAB_04c43e98;
  }
  lVar6 = *unaff_x20;
                    /* try { // try from 04c43ecc to 04d43edb has its CatchHandler @ 04c43ee4 */
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 04c43edc to 04d43ee7 has its CatchHandler @ 04c43cbc */
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 04c43e74 with catch @ 04c43ee4
                       catch() { ... } // from try @ 04c43ecc with catch @ 04c43ee4 */
                    /* try { // try from 04c43ee8 to 04d43eeb has its CatchHandler @ 04c43ef4 */
      if (*(long *)(piVar7 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04c44080;
      }
                    /* try { // try from 04c43eec to 04d43ef7 has its CatchHandler @ 04c43cbc */
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c43ee8 with catch @ 04c43ef4
                        */
    } while (uVar3 != 0);
  }
                    /* try { // try from 04c43ef8 to 04d43f37 has its CatchHandler @ 04c43ef8
                       catch() { ... } // from try @ 04c43ef8 with catch @ 04c43ef8
                       catch() { ... } // from try @ 04c43f4c with catch @ 04c43ef8
                       catch() { ... } // from try @ 04c440cc with catch @ 04c43ef8
                       catch() { ... } // from try @ 04c4411c with catch @ 04c43ef8
                       catch() { ... } // from try @ 04c4412c with catch @ 04c43ef8 */
  puVar4 = (undefined8 *)FUN_03f4b594(unaff_x20,*unaff_x22,1);
LAB_04c44080:
  uVar1 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar1;
  thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0xb0),uVar1);
  plVar5 = (long *)FUN_08890574(uVar1,0);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09122038) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c44128;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f4b594(plVar5,*(long *)PTR_DAT_09122038,0);
LAB_04c44128:
    (*(code *)*puVar4)(plVar5);
  }
  uVar8 = 0xf;
LAB_04c44140:
  FUN_07218fd8(&stack0x000000d0,*(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x80));
  if ((uVar8 | 0x10) == 0x10) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


