/*
FUNCTION_NAME: WeaponCollision$$ClosestCollider
ENTRY_POINT: 0317a34c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void WeaponCollision__ClosestCollider(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  long lVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  while (param_1 != 0) {
                    /* catch() { ... } // from try @ 0317a220 with catch @ 0317a350 */
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_2;
      thunk_FUN_03048534();
    }
    else {
      FUN_044302e8(unaff_x21,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
                    /* catch() { ... } // from try @ 0317a064 with catch @ 0317a390
                       catch() { ... } // from try @ 0317a310 with catch @ 0317a390 */
    lVar4 = *(long *)(unaff_x19 + 0x60);
    if (lVar4 == 0) break;
    lVar5 = *(long *)(lVar4 + 0x10);
                    /* try { // try from 0317a3a4 to 0327a41b has its CatchHandler @ 0317a3a4
                       catch() { ... } // from try @ 0317a3a4 with catch @ 0317a3a4
                       catch() { ... } // from try @ 0317a76c with catch @ 0317a3a4 */
    lVar6 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000008._4_4_;
    }
    else {
      FUN_043b542c(lVar4,in_stack_00000008._4_4_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    do {
      do {
        lVar4 = *(long *)(unaff_x19 + 0x58);
        unaff_w20 = unaff_w20 + 1;
        if (lVar4 == 0) goto LAB_0317a41c;
        if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
          if (*(long *)(unaff_x19 + 0xd0) != 0) {
            FUN_03175bfc();
            return;
          }
          goto LAB_0317a41c;
        }
        uVar2 = FUN_04430018(lVar4,unaff_w20,*unaff_x24);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*unaff_x22);
        }
        uVar3 = FUN_068f8810(uVar2,0,0);
      } while ((uVar3 & 1) == 0);
      if (((*(long *)(unaff_x19 + 0x58) == 0) ||
          (lVar4 = FUN_04430018(*(long *)(unaff_x19 + 0x58),unaff_w20,*unaff_x24), lVar4 == 0)) ||
         (lVar4 = FUN_068f5db8(lVar4,0), lVar4 == 0)) goto LAB_0317a41c;
      uVar3 = FUN_068f8bc4(lVar4,0);
    } while (((uVar3 & 1) == 0) || (uVar3 = FUN_03179e7c(), (uVar3 & 1) == 0));
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    unaff_x21 = *(long *)(unaff_x19 + 0x50);
    param_2 = FUN_04430018(*(long *)(unaff_x19 + 0x58),unaff_w20,*unaff_x24);
    if (unaff_x21 == 0) break;
    param_1 = *(long *)(unaff_x21 + 0x10);
    in_x9 = *unaff_x25;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    in_stack_00000008._4_4_ = unaff_w23;
  }
LAB_0317a41c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0317a41c to 0327a433 has its CatchHandler @ 0317a7c4 */
  FUN_02fe94e8();
}


