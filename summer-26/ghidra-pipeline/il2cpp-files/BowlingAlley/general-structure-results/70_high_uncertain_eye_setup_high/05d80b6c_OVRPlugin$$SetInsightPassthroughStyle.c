/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 05d80b6c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetInsightPassthroughStyle(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  undefined8 unaff_x23;
  long *plVar10;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 uVar11;
  undefined4 unaff_s10;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  while( true ) {
    FUN_057ab61c(*param_1,unaff_x23,param_2,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    uVar11 = FUN_05d80fdc(*(long *)(unaff_x19 + 0x40),unaff_w22);
    plVar10 = *(long **)(unaff_x19 + 0x38);
    uVar2 = (int)uVar11;
    if (unaff_w22 != 0) {
      uVar2 = unaff_s10;
    }
    if (plVar10 == (long *)0x0) break;
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_05d80c00;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar10,*unaff_x26,9);
LAB_05d80c00:
    (*(code *)*puVar3)(plVar10,unaff_x21 & 0xffffffff,&stack0x00000030,puVar3[1]);
    if (in_stack_00000078 == 0) break;
    FUN_06be6b04(in_stack_00000078,0);
    uVar11 = FUN_05d81058(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                          uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar11,
                          uVar2);
    lVar5 = in_stack_00000078;
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1550);
    FUN_05d812c0(uVar4,unaff_w22,unaff_x21 & 0xffffffff,lVar5,uVar11);
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) break;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *unaff_x29;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = uVar4;
      thunk_FUN_0333a630(puVar3,uVar4);
    }
    else {
                    /* try { // try from 05d80ce0 to 05e80d33 has its CatchHandler @ 05d80ce0
                       catch() { ... } // from try @ 05d80ce0 with catch @ 05d80ce0
                       catch() { ... } // from try @ 05d80e44 with catch @ 05d80ce0
                       catch() { ... } // from try @ 05d80ed0 with catch @ 05d80ce0 */
      FUN_041e2c78(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_05d81318();
        lVar5 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
                    /* try { // try from 05d80d34 to 05e80d43 has its CatchHandler @ 05d80e8c */
          return;
        }
        goto LAB_05d80d40;
      }
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *unaff_x27;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) goto LAB_05d80d40;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05d80d44;
      unaff_w22 = *(uint *)(lVar5 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) break;
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_05d80aac;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar10,*unaff_x26,9);
LAB_05d80aac:
    (*(code *)*puVar3)(plVar10,unaff_w22,&stack0x00000050,puVar3[1]);
    uVar7 = FUN_05d80d54();
    if ((uVar7 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar5 = FUN_05d80e1c();
      plVar10 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar5;
      if (plVar10 == (long *)0x0) break;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                    /* try { // try from 05d80d48 to 05e80d53 has its CatchHandler @ 05d80e88 */
        uVar11 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar11,0);
      }
      if (*(uint *)(plVar10 + 3) <= unaff_w22) {
LAB_05d80d44:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      plVar10[(long)(int)unaff_w22 + 4] = lVar5;
      thunk_FUN_0333a630(plVar10 + (long)(int)unaff_w22 + 4,lVar5);
    }
    uStack000000000000000c = unaff_w22;
    unaff_x23 = thunk_FUN_032a52d0(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    param_2 = thunk_FUN_032a52d0(*unaff_x28,&stack0x00000008);
    param_1 = (undefined8 *)PTR_DAT_072b1590;
  }
LAB_05d80d40:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


