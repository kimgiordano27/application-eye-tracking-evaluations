/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetCeilingAnchor
ENTRY_POINT: 07735558
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetCeilingAnchor(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  long unaff_x19;
  long lVar11;
  long unaff_x20;
  long *plVar12;
  uint unaff_w21;
  ulong uVar13;
  long unaff_x24;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uStack0000000000000014;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f31928);
  FUN_04447ba8(PTR_DAT_09f1e538);
  *(undefined1 *)(unaff_x19 + 0x1ee) = 1;
  if (unaff_x20 != 0) {
    lVar11 = *(long *)(unaff_x20 + 0xd8);
    lVar17 = *(long *)(unaff_x20 + 0xe0);
    lVar14 = *(long *)(unaff_x20 + 0xf8);
    if (lVar11 != 0) {
      uStack0000000000000014 = unaff_w21;
      lVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar11 + 0x18));
      puVar4 = PTR_DAT_09f31928;
      puVar3 = PTR_DAT_09f1e538;
      plVar12 = (long *)(unaff_x20 + 0xf0);
      lVar8 = *plVar12;
      if (lVar8 != 0) {
        uVar18 = 0;
        while ((long)uVar18 < (long)*(int *)(lVar8 + 0x18)) {
          lVar8 = *(long *)(unaff_x24 + 0x48);
          if (lVar8 == 0) goto LAB_07735a68;
          uVar13 = 0;
          lVar15 = 0x20;
          while ((long)uVar13 < (long)(int)*(uint *)(lVar8 + 0x18)) {
            if ((*(uint *)(lVar11 + 0x18) <= uVar18) || (*(uint *)(lVar8 + 0x18) <= uVar13))
            goto LAB_07735a64;
            uVar19 = *(undefined8 *)(lVar11 + uVar18 * 8 + 0x20);
            uVar16 = *(undefined8 *)(lVar8 + uVar13 * 8 + 0x20);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar7 = FUN_0952c404(uVar19,uVar16,0);
            if ((uVar7 & 1) != 0) {
              if (lVar17 == 0) goto LAB_07735a68;
              FUN_05b4c354(&stack0x000000d0,lVar17,uVar18 & 0xffffffff,*(undefined8 *)puVar4);
              in_stack_00000118 = in_stack_000000d8;
              in_stack_00000110 = in_stack_000000d0;
              in_stack_00000128 = in_stack_000000e8;
              in_stack_00000120 = in_stack_000000e0;
              in_stack_00000138 = in_stack_000000f8;
              in_stack_00000130 = in_stack_000000f0;
              in_stack_00000148 = in_stack_00000108;
              in_stack_00000140 = in_stack_00000100;
              lVar8 = *(long *)(unaff_x24 + 0x50);
              if (lVar8 == 0) goto LAB_07735a68;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_07735a64;
              puVar1 = (undefined8 *)(lVar8 + lVar15);
              in_stack_00000058 = puVar1[1];
              in_stack_00000050 = *puVar1;
              in_stack_00000068 = puVar1[3];
              in_stack_00000060 = puVar1[2];
              in_stack_00000078 = puVar1[5];
              in_stack_00000070 = puVar1[4];
              in_stack_00000088 = puVar1[7];
              in_stack_00000080 = puVar1[6];
              in_stack_00000098 = in_stack_000000d8;
              in_stack_00000090 = in_stack_000000d0;
              in_stack_000000a8 = in_stack_000000e8;
              in_stack_000000a0 = in_stack_000000e0;
              in_stack_000000b8 = in_stack_000000f8;
              in_stack_000000b0 = in_stack_000000f0;
              in_stack_000000c8 = in_stack_00000108;
              in_stack_000000c0 = in_stack_00000100;
              in_stack_000000d0 = in_stack_00000050;
              in_stack_000000d8 = in_stack_00000058;
              in_stack_000000e0 = in_stack_00000060;
              in_stack_000000e8 = in_stack_00000068;
              in_stack_000000f0 = in_stack_00000070;
              in_stack_000000f8 = in_stack_00000078;
              in_stack_00000100 = in_stack_00000080;
              in_stack_00000108 = in_stack_00000088;
              uVar7 = FUN_09513464(&stack0x00000090,&stack0x00000050,0);
              if ((uVar7 & 1) != 0) {
                if (lVar6 == 0) goto LAB_07735a68;
                if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_07735a64;
                *(int *)(lVar6 + uVar18 * 4 + 0x20) = (int)uVar13;
                break;
              }
            }
            lVar8 = *(long *)(unaff_x24 + 0x48);
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 0x40;
            if (lVar8 == 0) goto LAB_07735a68;
          }
          uVar18 = uVar18 + 1;
          lVar8 = *plVar12;
          if (lVar8 == 0) goto LAB_07735a68;
        }
        if (lVar14 != 0) {
          if ((int)*(ulong *)(lVar14 + 0x18) < 1) goto LAB_077359a0;
          uVar18 = 0;
          uVar13 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
          lVar11 = (ulong)uStack0000000000000014 << 0x20;
          lVar17 = lVar14;
          goto LAB_07735750;
        }
      }
    }
  }
  goto LAB_07735a68;
  while( true ) {
    if (uVar13 <= uVar18) goto LAB_07735a64;
    uVar5 = FUN_094fd900(lVar17,0);
    if (lVar6 == 0) goto LAB_07735a68;
    if ((*(uint *)(lVar6 + 0x18) <= uVar5) ||
       (uVar13 = uStack0000000000000014 + uVar18, *(uint *)(lVar8 + 0x18) <= uVar13))
    goto LAB_07735a64;
    lVar15 = lVar11 >> 0x20;
    FUN_094fd908(lVar8 + lVar15 * 0x20 + 0x20,*(undefined4 *)(lVar6 + (long)(int)uVar5 * 4 + 0x20),0
                );
    lVar8 = *(long *)(unaff_x24 + 0x58);
    if (lVar8 == 0) goto LAB_07735a68;
    if (((*(uint *)(lVar14 + 0x18) <= uVar18) ||
        (uVar5 = FUN_094fd910(lVar17,0), *(uint *)(lVar6 + 0x18) <= uVar5)) ||
       (*(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_07735a64;
    FUN_094fd918(lVar8 + lVar15 * 0x20 + 0x20,*(undefined4 *)(lVar6 + (long)(int)uVar5 * 4 + 0x20),0
                );
    lVar8 = *(long *)(unaff_x24 + 0x58);
    if (lVar8 == 0) goto LAB_07735a68;
    if (((*(uint *)(lVar14 + 0x18) <= uVar18) ||
        (uVar5 = FUN_094fd920(lVar17,0), *(uint *)(lVar6 + 0x18) <= uVar5)) ||
       (*(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_07735a64;
    FUN_094fd928(lVar8 + lVar15 * 0x20 + 0x20,*(undefined4 *)(lVar6 + (long)(int)uVar5 * 4 + 0x20),0
                );
    lVar8 = *(long *)(unaff_x24 + 0x58);
    if (lVar8 == 0) goto LAB_07735a68;
    if (((*(uint *)(lVar14 + 0x18) <= uVar18) ||
        (uVar5 = FUN_094fd930(lVar17,0), *(uint *)(lVar6 + 0x18) <= uVar5)) ||
       (*(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_07735a64;
    FUN_094fd938(lVar8 + lVar15 * 0x20 + 0x20,*(undefined4 *)(lVar6 + (long)(int)uVar5 * 4 + 0x20),0
                );
    lVar8 = *(long *)(unaff_x24 + 0x58);
    if (lVar8 == 0) goto LAB_07735a68;
    if ((*(uint *)(lVar14 + 0x18) <= uVar18) ||
       (FUN_094fd8c0(lVar17,0), *(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_07735a64;
    FUN_094fd8c8(lVar8 + lVar15 * 0x20 + 0x20,0);
    lVar8 = *(long *)(unaff_x24 + 0x58);
    if (lVar8 == 0) goto LAB_07735a68;
    if ((*(uint *)(lVar14 + 0x18) <= uVar18) ||
       (FUN_094fd8d0(lVar17,0), *(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_07735a64;
    FUN_094fd8d8(lVar8 + lVar15 * 0x20 + 0x20,0);
    lVar8 = *(long *)(unaff_x24 + 0x58);
    if (lVar8 == 0) goto LAB_07735a68;
    if ((*(uint *)(lVar14 + 0x18) <= uVar18) ||
       (FUN_094fd8e0(lVar17,0), *(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_07735a64;
    FUN_094fd8e8(lVar8 + lVar15 * 0x20 + 0x20,0);
    lVar8 = *(long *)(unaff_x24 + 0x58);
    if (lVar8 == 0) goto LAB_07735a68;
    if ((*(uint *)(lVar14 + 0x18) <= uVar18) ||
       (FUN_094fd8f0(lVar17,0), *(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_07735a64;
    FUN_094fd8f8(lVar8 + lVar15 * 0x20 + 0x20,0);
    uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
    uVar18 = uVar18 + 1;
    lVar11 = lVar11 + 0x100000000;
    if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar18) break;
LAB_07735750:
    lVar17 = lVar17 + 0x20;
    lVar8 = *(long *)(unaff_x24 + 0x58);
    if (lVar8 == 0) goto LAB_07735a68;
  }
LAB_077359a0:
  lVar11 = *plVar12;
  if (lVar11 != 0) {
    uVar5 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar5) {
      uVar9 = 0;
      do {
        if (uVar5 <= uVar9) {
LAB_07735a64:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        puVar10 = (uint *)(lVar11 + (long)(int)uVar9 * 4 + 0x20);
        uVar2 = *puVar10;
        if (lVar6 == 0) goto LAB_07735a68;
        if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_07735a64;
        uVar9 = uVar9 + 1;
        *puVar10 = *(uint *)(lVar6 + (long)(int)uVar2 * 4 + 0x20);
      } while ((int)uVar9 < (int)uVar5);
    }
    *(long *)(unaff_x20 + 0x40) = lVar11;
    thunk_FUN_044bb4b4((long *)(unaff_x20 + 0x40));
    *(undefined8 *)(unaff_x20 + 0xf0) = 0;
    thunk_FUN_044bb4b4(plVar12,0);
    *(undefined8 *)(unaff_x20 + 0xd8) = 0;
    thunk_FUN_044bb4b4((long *)(unaff_x20 + 0xd8),0);
    *(undefined8 *)(unaff_x20 + 0xe0) = 0;
    thunk_FUN_044bb4b4((long *)(unaff_x20 + 0xe0),0);
    *(undefined8 *)(unaff_x20 + 0xf8) = 0;
    thunk_FUN_044bb4b4((long *)(unaff_x20 + 0xf8),0);
    return;
  }
LAB_07735a68:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


