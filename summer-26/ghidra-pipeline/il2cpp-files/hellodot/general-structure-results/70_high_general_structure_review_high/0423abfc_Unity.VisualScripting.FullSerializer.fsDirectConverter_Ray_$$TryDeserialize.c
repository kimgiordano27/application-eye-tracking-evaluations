/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 0423abfc
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize
               (ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long lVar7;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02ce0978();
  }
  lVar1 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x20));
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar7 = *unaff_x20;
  lVar2 = thunk_FUN_02cea798(lVar1,lVar7);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar1,lVar7);
  }
  lVar2 = *unaff_x20;
  plVar3 = (long *)thunk_FUN_02cea798(lVar1,lVar2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar1,lVar2);
  }
  lVar1 = *plVar3;
  lVar7 = *(long *)(unaff_x29 + -0x38);
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0423ac94;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar3,lVar2,0);
LAB_0423ac94:
  (*(code *)*puVar4)(plVar3,*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                     puVar4[1]);
  FUN_04dc7640();
  FUN_04dc7f18();
  (**(code **)(*unaff_x21 + 0x168))();
  if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0423ad38 to 0433ad5b has its CatchHandler @ 0423add8 */
  __stack_chk_fail();
}


