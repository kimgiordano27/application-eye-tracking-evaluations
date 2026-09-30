/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 090cfa1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
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
  float unaff_s8;
  float fVar11;
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
    if ((bool)in_ZR) goto LAB_090cfb74;
    fVar11 = -unaff_s8;
LAB_090cfa24:
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) {
LAB_090cfbd0:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_090cfa7c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x26,9);
LAB_090cfa7c:
    (*(code *)*puVar1)(plVar10,unaff_x21 & 0xffffffff,&stack0x00000030,puVar1[1]);
    if (in_stack_00000078 == 0) goto LAB_090cfbd0;
    FUN_0a17834c(in_stack_00000078,0);
    uVar2 = FUN_090cfe64(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,unaff_s8,
                         fVar11);
    lVar4 = in_stack_00000078;
    uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79668);
    FUN_090d0808(uVar3,unaff_w22,unaff_x21 & 0xffffffff,lVar4,uVar2,0);
    lVar4 = *(long *)(unaff_x19 + 0x68);
    if (lVar4 == 0) goto LAB_090cfbd0;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar7 = *unaff_x29;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_090cfbd0;
    uVar9 = *(uint *)(lVar4 + 0x18);
    if (uVar9 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar9 + 1;
      puVar1 = (undefined8 *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
      *puVar1 = uVar3;
      thunk_FUN_049ee3d8(puVar1,uVar3);
    }
    else {
      FUN_06b7fe74(lVar4,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_090d00d0();
        lVar4 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
        goto LAB_090cfbd0;
      }
      lVar4 = *unaff_x27;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar4 = *unaff_x27;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 == 0) goto LAB_090cfbd0;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_090cfbd4;
      unaff_w22 = *(uint *)(lVar4 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            (uVar9 = (uint)unaff_x21,
            (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar9 & 0x1f) & 1) == 0));
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) goto LAB_090cfbd0;
    lVar4 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_090cf8f8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x26,9);
LAB_090cf8f8:
    (*(code *)*puVar1)(plVar10,unaff_w22,&stack0x00000050,puVar1[1]);
    uVar6 = FUN_090cfbe4();
    if ((uVar6 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar4 = FUN_090cfca4();
      plVar10 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar4;
      if (plVar10 == (long *)0x0) goto LAB_090cfbd0;
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0)) {
        uVar2 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar2,0);
      }
      if (*(uint *)(plVar10 + 3) <= unaff_w22) {
LAB_090cfbd4:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar10[(long)(int)unaff_w22 + 4] = lVar4;
      thunk_FUN_049ee3d8(plVar10 + (long)(int)unaff_w22 + 4,lVar4);
    }
    uStack000000000000000c = unaff_w22;
    uVar2 = thunk_FUN_04983b98(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = uVar9;
    uVar3 = thunk_FUN_04983b98(*unaff_x28,&stack0x00000008);
    FUN_08bda628(*(undefined8 *)PTR_DAT_0ac796a8,uVar2,uVar3,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_090cfbd0;
    unaff_s8 = (float)FUN_090d1bc8(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (0x19 < uVar9) {
LAB_090cfb74:
      fVar11 = unaff_s8;
      if (unaff_w22 != 0) {
        fVar11 = unaff_s10;
      }
      goto LAB_090cfa24;
    }
    in_ZR = (1 << (ulong)(uVar9 & 0x1f) & 0x2108420U) == 0;
  } while( true );
}


