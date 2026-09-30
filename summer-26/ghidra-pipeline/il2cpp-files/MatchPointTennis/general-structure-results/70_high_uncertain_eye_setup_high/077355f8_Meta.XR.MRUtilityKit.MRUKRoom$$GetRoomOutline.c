/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetRoomOutline
ENTRY_POINT: 077355f8
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


void Meta_XR_MRUtilityKit_MRUKRoom__GetRoomOutline(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  long unaff_x19;
  long lVar8;
  long lVar9;
  long *unaff_x21;
  ulong uVar10;
  long unaff_x24;
  long lVar11;
  undefined8 uVar12;
  long unaff_x27;
  ulong unaff_x28;
  undefined8 uVar13;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
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
  
  do {
    lVar5 = *(long *)(unaff_x24 + 0x48);
    if (lVar5 == 0) goto LAB_07735a68;
    uVar10 = 0;
    lVar11 = 0x20;
    while ((long)uVar10 < (long)(int)*(uint *)(lVar5 + 0x18)) {
      if ((*(uint *)(unaff_x19 + 0x18) <= unaff_x28) || (*(uint *)(lVar5 + 0x18) <= uVar10))
      goto LAB_07735a64;
      uVar13 = *(undefined8 *)(unaff_x19 + unaff_x28 * 8 + 0x20);
      uVar12 = *(undefined8 *)(lVar5 + uVar10 * 8 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar4 = FUN_0952c404(uVar13,uVar12,0);
      if ((uVar4 & 1) != 0) {
        if (unaff_x27 == 0) goto LAB_07735a68;
        FUN_05b4c354(&stack0x000000d0);
        in_stack_00000118 = in_stack_000000d8;
        in_stack_00000110 = in_stack_000000d0;
        in_stack_00000128 = in_stack_000000e8;
        in_stack_00000120 = in_stack_000000e0;
        in_stack_00000138 = in_stack_000000f8;
        in_stack_00000130 = in_stack_000000f0;
        in_stack_00000148 = in_stack_00000108;
        in_stack_00000140 = in_stack_00000100;
        lVar5 = *(long *)(unaff_x24 + 0x50);
        if (lVar5 == 0) goto LAB_07735a68;
        if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_07735a64;
        puVar1 = (undefined8 *)(lVar5 + lVar11);
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
        uVar4 = FUN_09513464(&stack0x00000090,&stack0x00000050,0);
        if ((uVar4 & 1) != 0) {
          if (in_stack_00000048 == 0) goto LAB_07735a68;
          if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_x28) goto LAB_07735a64;
          *(int *)(in_stack_00000048 + unaff_x28 * 4 + 0x20) = (int)uVar10;
          break;
        }
      }
      lVar5 = *(long *)(unaff_x24 + 0x48);
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x40;
      if (lVar5 == 0) goto LAB_07735a68;
    }
    unaff_x28 = unaff_x28 + 1;
    if (*in_stack_00000040 == 0) goto LAB_07735a68;
  } while ((long)unaff_x28 < (long)*(int *)(*in_stack_00000040 + 0x18));
  if (in_stack_00000038 != 0) {
    if (0 < (int)*(ulong *)(in_stack_00000038 + 0x18)) {
      uVar10 = 0;
      uVar4 = *(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff;
      lVar5 = (in_stack_00000010 >> 0x20) << 0x20;
      lVar11 = in_stack_00000038;
      do {
        lVar11 = lVar11 + 0x20;
        lVar9 = *(long *)(unaff_x24 + 0x58);
        if (lVar9 == 0) goto LAB_07735a68;
        if (uVar4 <= uVar10) goto LAB_07735a64;
        uVar3 = FUN_094fd900(lVar11,0);
        if (in_stack_00000048 == 0) goto LAB_07735a68;
        if ((*(uint *)(in_stack_00000048 + 0x18) <= uVar3) ||
           (uVar4 = (in_stack_00000010 >> 0x20) + uVar10, *(uint *)(lVar9 + 0x18) <= uVar4))
        goto LAB_07735a64;
        lVar8 = lVar5 >> 0x20;
        FUN_094fd908(lVar9 + lVar8 * 0x20 + 0x20,
                     *(undefined4 *)(in_stack_00000048 + (long)(int)uVar3 * 4 + 0x20),0);
        lVar9 = *(long *)(unaff_x24 + 0x58);
        if (lVar9 == 0) goto LAB_07735a68;
        if (((*(uint *)(in_stack_00000038 + 0x18) <= uVar10) ||
            (uVar3 = FUN_094fd910(lVar11,0), *(uint *)(in_stack_00000048 + 0x18) <= uVar3)) ||
           (*(uint *)(lVar9 + 0x18) <= uVar4)) goto LAB_07735a64;
        FUN_094fd918(lVar9 + lVar8 * 0x20 + 0x20,
                     *(undefined4 *)(in_stack_00000048 + (long)(int)uVar3 * 4 + 0x20),0);
        lVar9 = *(long *)(unaff_x24 + 0x58);
        if (lVar9 == 0) goto LAB_07735a68;
        if (((*(uint *)(in_stack_00000038 + 0x18) <= uVar10) ||
            (uVar3 = FUN_094fd920(lVar11,0), *(uint *)(in_stack_00000048 + 0x18) <= uVar3)) ||
           (*(uint *)(lVar9 + 0x18) <= uVar4)) goto LAB_07735a64;
        FUN_094fd928(lVar9 + lVar8 * 0x20 + 0x20,
                     *(undefined4 *)(in_stack_00000048 + (long)(int)uVar3 * 4 + 0x20),0);
        lVar9 = *(long *)(unaff_x24 + 0x58);
        if (lVar9 == 0) goto LAB_07735a68;
        if (((*(uint *)(in_stack_00000038 + 0x18) <= uVar10) ||
            (uVar3 = FUN_094fd930(lVar11,0), *(uint *)(in_stack_00000048 + 0x18) <= uVar3)) ||
           (*(uint *)(lVar9 + 0x18) <= uVar4)) goto LAB_07735a64;
        FUN_094fd938(lVar9 + lVar8 * 0x20 + 0x20,
                     *(undefined4 *)(in_stack_00000048 + (long)(int)uVar3 * 4 + 0x20),0);
        lVar9 = *(long *)(unaff_x24 + 0x58);
        if (lVar9 == 0) goto LAB_07735a68;
        if ((*(uint *)(in_stack_00000038 + 0x18) <= uVar10) ||
           (FUN_094fd8c0(lVar11,0), *(uint *)(lVar9 + 0x18) <= uVar4)) goto LAB_07735a64;
        FUN_094fd8c8(lVar9 + lVar8 * 0x20 + 0x20,0);
        lVar9 = *(long *)(unaff_x24 + 0x58);
        if (lVar9 == 0) goto LAB_07735a68;
        if ((*(uint *)(in_stack_00000038 + 0x18) <= uVar10) ||
           (FUN_094fd8d0(lVar11,0), *(uint *)(lVar9 + 0x18) <= uVar4)) goto LAB_07735a64;
        FUN_094fd8d8(lVar9 + lVar8 * 0x20 + 0x20,0);
        lVar9 = *(long *)(unaff_x24 + 0x58);
        if (lVar9 == 0) goto LAB_07735a68;
        if ((*(uint *)(in_stack_00000038 + 0x18) <= uVar10) ||
           (FUN_094fd8e0(lVar11,0), *(uint *)(lVar9 + 0x18) <= uVar4)) goto LAB_07735a64;
        FUN_094fd8e8(lVar9 + lVar8 * 0x20 + 0x20,0);
        lVar9 = *(long *)(unaff_x24 + 0x58);
        if (lVar9 == 0) goto LAB_07735a68;
        if ((*(uint *)(in_stack_00000038 + 0x18) <= uVar10) ||
           (FUN_094fd8f0(lVar11,0), *(uint *)(lVar9 + 0x18) <= uVar4)) goto LAB_07735a64;
        FUN_094fd8f8(lVar9 + lVar8 * 0x20 + 0x20,0);
        uVar4 = (ulong)*(uint *)(in_stack_00000038 + 0x18);
        uVar10 = uVar10 + 1;
        lVar5 = lVar5 + 0x100000000;
      } while ((long)uVar10 < (long)(int)*(uint *)(in_stack_00000038 + 0x18));
    }
    lVar5 = *in_stack_00000040;
    if (lVar5 != 0) {
      uVar3 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          if (uVar3 <= uVar6) {
LAB_07735a64:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          puVar7 = (uint *)(lVar5 + (long)(int)uVar6 * 4 + 0x20);
          uVar2 = *puVar7;
          if (in_stack_00000048 == 0) goto LAB_07735a68;
          if (*(uint *)(in_stack_00000048 + 0x18) <= uVar2) goto LAB_07735a64;
          uVar6 = uVar6 + 1;
          *puVar7 = *(uint *)(in_stack_00000048 + (long)(int)uVar2 * 4 + 0x20);
        } while ((int)uVar6 < (int)uVar3);
      }
      *(long *)(in_stack_00000030 + 0x40) = lVar5;
      thunk_FUN_044bb4b4((long *)(in_stack_00000030 + 0x40));
      *(undefined8 *)(in_stack_00000030 + 0xf0) = 0;
      thunk_FUN_044bb4b4(in_stack_00000040,0);
      *(undefined8 *)(in_stack_00000030 + 0xd8) = 0;
      thunk_FUN_044bb4b4(in_stack_00000018,0);
      *(undefined8 *)(in_stack_00000030 + 0xe0) = 0;
      thunk_FUN_044bb4b4(in_stack_00000020,0);
      *(undefined8 *)(in_stack_00000030 + 0xf8) = 0;
      thunk_FUN_044bb4b4(in_stack_00000028,0);
      return;
    }
  }
LAB_07735a68:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


