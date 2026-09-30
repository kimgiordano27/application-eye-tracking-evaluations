/*
FUNCTION_NAME: MagicaCloth2.ColliderCollisionConstraint.SerializeData$$.ctor
ENTRY_POINT: 05232918
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 MagicaCloth2_ColliderCollisionConstraint_SerializeData___ctor(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  long *plVar10;
  long unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  ulong unaff_x27;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  while( true ) {
    uVar4 = (uint)param_1;
    if ((int)uVar4 <= unaff_w26) {
      thunk_FUN_02f239f0(PTR_DAT_06d021a0);
      uVar5 = thunk_FUN_02ef1808();
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d39100);
      FUN_05601bec(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar5);
    }
    if (uVar4 <= (uint)unaff_x25) break;
    uVar1 = *(uint *)(unaff_x24 + unaff_x27 * 0x20 + 0x24);
    unaff_x25 = (ulong)uVar1;
    unaff_w26 = unaff_w26 + 1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (uVar4 <= uVar1) break;
    lVar3 = unaff_x24 + unaff_x25 * 0x20;
    unaff_x27 = unaff_x25;
    if (*(int *)(lVar3 + 0x20) == unaff_w22) {
      uVar5 = *(undefined8 *)(lVar3 + 0x38);
      uVar13 = *(undefined8 *)(lVar3 + 0x30);
      uVar11 = *(undefined8 *)(lVar3 + 0x28);
      plVar10 = *(long **)(unaff_x20 + 0x30);
      uVar6 = unaff_x21[2];
      uVar14 = unaff_x21[1];
      uVar12 = *unaff_x21;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_052328d8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c(plVar10,lVar3,0);
LAB_052328d8:
      in_stack_000000a0 = uVar12;
      in_stack_000000a8 = uVar14;
      in_stack_000000b0 = uVar6;
      in_stack_000000c0 = uVar11;
      in_stack_000000c8 = uVar13;
      in_stack_000000d0 = uVar5;
      uVar8 = (*(code *)*puVar2)(plVar10,&stack0x000000c0,&stack0x000000a0,puVar2[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      param_1 = *(undefined8 *)(unaff_x24 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


