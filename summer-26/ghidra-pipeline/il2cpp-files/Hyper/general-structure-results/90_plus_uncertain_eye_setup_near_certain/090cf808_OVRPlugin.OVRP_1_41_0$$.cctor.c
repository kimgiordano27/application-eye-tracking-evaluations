/*
FUNCTION_NAME: OVRPlugin.OVRP_1_41_0$$.cctor
ENTRY_POINT: 090cf808
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_41_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  uint uVar13;
  ulong uVar14;
  long *unaff_x22;
  long *plVar15;
  long *unaff_x26;
  float fVar16;
  float fVar17;
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
  
  thunk_FUN_049ee3d8();
  if (*unaff_x22 != 0) {
    uVar5 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__CopyTo
                      (*unaff_x22,*(undefined8 *)PTR_DAT_0ac79680);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar5;
    thunk_FUN_049ee3d8();
    puVar4 = PTR_DAT_0ac79678;
    puVar3 = PTR_DAT_0ac79670;
    puVar2 = PTR_DAT_0ac75878;
    uVar14 = 2;
    do {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_090cfbd0;
                    /* try { // try from 090cf880 to 091cf8a7 has its CatchHandler @ 090cfb04 */
      if (*(uint *)(lVar6 + 0x18) <= uVar14) {
LAB_090cfbd4:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      uVar1 = *(uint *)(lVar6 + uVar14 * 4 + 0x20);
      if ((uVar1 != 0xffffffff) &&
         (uVar13 = (uint)uVar14, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar13 & 0x1f) & 1) != 0))
      {
        plVar15 = *(long **)(unaff_x19 + 0x38);
        if (plVar15 == (long *)0x0) goto LAB_090cfbd0;
        lVar6 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x26) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_090cf8f8;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(plVar15,*unaff_x26,9);
LAB_090cf8f8:
        (*(code *)*puVar7)(plVar15,uVar1,&stack0x00000050,puVar7[1]);
        uVar10 = FUN_090cfbe4();
        if ((uVar10 & 1) == 0) {
          in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          in_stack_00000018 = in_stack_00000058;
          uStack0000000000000024 = uStack0000000000000064;
          uStack0000000000000020 = uStack0000000000000060;
          lVar6 = FUN_090cfca4();
          plVar15 = *(long **)(unaff_x19 + 0x78);
          in_stack_00000078 = lVar6;
          if (plVar15 == (long *)0x0) goto LAB_090cfbd0;
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_04983e64(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0)) {
            uVar5 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
            FUN_04948050(uVar5,0);
          }
          if (*(uint *)(plVar15 + 3) <= uVar1) goto LAB_090cfbd4;
          plVar15[(long)(int)uVar1 + 4] = lVar6;
          thunk_FUN_049ee3d8(plVar15 + (long)(int)uVar1 + 4,lVar6);
        }
        uStack000000000000000c = uVar1;
        uVar5 = thunk_FUN_04983b98(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
        uStack0000000000000008 = uVar13;
        uVar9 = thunk_FUN_04983b98(*(undefined8 *)puVar3,&stack0x00000008);
        FUN_08bda628(*(undefined8 *)PTR_DAT_0ac796a8,uVar5,uVar9,0);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_090cfbd0;
        fVar16 = (float)FUN_090d1bc8(*(long *)(unaff_x19 + 0x40),uVar1,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if ((uVar13 < 0x1a) && ((1 << (ulong)(uVar13 & 0x1f) & 0x2108420U) != 0)) {
          fVar17 = -fVar16;
        }
        else {
          fVar17 = fVar16;
          if (uVar1 != 0) {
            fVar17 = 0.0;
          }
        }
        plVar15 = *(long **)(unaff_x19 + 0x38);
        if (plVar15 == (long *)0x0) goto LAB_090cfbd0;
        lVar6 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x26) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_090cfa7c;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(plVar15,*unaff_x26,9);
LAB_090cfa7c:
        (*(code *)*puVar7)(plVar15,uVar14 & 0xffffffff,&stack0x00000030,puVar7[1]);
        if (in_stack_00000078 == 0) goto LAB_090cfbd0;
        FUN_0a17834c(in_stack_00000078,0);
        uVar5 = FUN_090cfe64(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar16,
                             fVar17);
        lVar6 = in_stack_00000078;
        uVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79668);
        FUN_090d0808(uVar9,uVar1,uVar14 & 0xffffffff,lVar6,uVar5,0);
        lVar6 = *(long *)(unaff_x19 + 0x68);
        if (lVar6 == 0) goto LAB_090cfbd0;
        lVar8 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_090cfbd0;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar9;
          thunk_FUN_049ee3d8(puVar7,uVar9);
        }
        else {
          FUN_06b7fe74(lVar6,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x1a);
    FUN_090d00d0();
    lVar6 = *(long *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0x81) = 1;
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      return;
    }
  }
LAB_090cfbd0:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


