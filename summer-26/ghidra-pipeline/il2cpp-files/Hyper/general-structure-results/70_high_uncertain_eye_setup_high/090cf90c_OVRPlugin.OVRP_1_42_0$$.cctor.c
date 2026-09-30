/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$.cctor
ENTRY_POINT: 090cf90c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_42_0___cctor(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  uint uVar9;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar10;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar11;
  float fVar12;
  float unaff_s10;
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
  
  do {
                    /* try { // try from 090cf918 to 091cf997 has its CatchHandler @ 090cfb0c */
    uVar1 = FUN_090cfbe4();
    if ((uVar1 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar2 = FUN_090cfca4();
      plVar10 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar2;
      if (plVar10 == (long *)0x0) {
LAB_090cfbd0:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04983e64(lVar2,*(undefined8 *)(*plVar10 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar4,0);
      }
      if (*(uint *)(plVar10 + 3) <= unaff_w22) {
LAB_090cfbd4:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar10[(long)(int)unaff_w22 + 4] = lVar2;
      thunk_FUN_049ee3d8(plVar10 + (long)(int)unaff_w22 + 4,lVar2);
    }
    uStack000000000000000c = unaff_w22;
    uVar4 = thunk_FUN_04983b98(*unaff_x28,(long)&stack0x00000008 + 4);
    uVar9 = (uint)unaff_x21;
    uStack0000000000000008 = uVar9;
    uVar5 = thunk_FUN_04983b98(*unaff_x28,&stack0x00000008);
    FUN_08bda628(*(undefined8 *)PTR_DAT_0ac796a8,uVar4,uVar5,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_090cfbd0;
    fVar11 = (float)FUN_090d1bc8(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((uVar9 < 0x1a) && ((1 << (ulong)(uVar9 & 0x1f) & 0x2108420U) != 0)) {
      fVar12 = -fVar11;
    }
    else {
      fVar12 = fVar11;
      if (unaff_w22 != 0) {
        fVar12 = unaff_s10;
      }
    }
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) goto LAB_090cfbd0;
    lVar2 = *plVar10;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar2 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_090cfa7c;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x26,9);
LAB_090cfa7c:
    (*(code *)*puVar6)(plVar10,unaff_x21 & 0xffffffff,&stack0x00000030,puVar6[1]);
    if (in_stack_00000078 == 0) goto LAB_090cfbd0;
    FUN_0a17834c(in_stack_00000078,0);
    uVar4 = FUN_090cfe64(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar11,
                         fVar12);
    lVar2 = in_stack_00000078;
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79668);
    FUN_090d0808(uVar5,unaff_w22,unaff_x21 & 0xffffffff,lVar2,uVar4,0);
    lVar2 = *(long *)(unaff_x19 + 0x68);
    if (lVar2 == 0) goto LAB_090cfbd0;
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar7 = *unaff_x29;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_090cfbd0;
    uVar9 = *(uint *)(lVar2 + 0x18);
    if (uVar9 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar9 + 1;
      puVar6 = (undefined8 *)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
      *puVar6 = uVar5;
      thunk_FUN_049ee3d8(puVar6,uVar5);
    }
    else {
      FUN_06b7fe74(lVar2,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_090d00d0();
        lVar2 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          return;
        }
        goto LAB_090cfbd0;
      }
      lVar2 = *unaff_x27;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar2 = *unaff_x27;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_090cfbd0;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_090cfbd4;
      unaff_w22 = *(uint *)(lVar2 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) goto LAB_090cfbd0;
    lVar2 = *plVar10;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar2 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_090cf8f8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x26,9);
LAB_090cf8f8:
    (*(code *)*puVar6)(plVar10,unaff_w22,&stack0x00000050,puVar6[1]);
  } while( true );
}


