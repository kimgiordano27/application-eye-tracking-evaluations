/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$CalculateHierarchyReferences
ENTRY_POINT: 077347b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKRoom__CalculateHierarchyReferences(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
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
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  
                    /* try { // try from 077347d0 to 078347e7 has its CatchHandler @ 07733edc */
  FUN_051bb3cc(&stack0x00000230,*unaff_x19);
                    /* try { // try from 077347e8 to 078347eb has its CatchHandler @ 0773485c */
  if ((unaff_x25 != 0) && (lVar2 = thunk_FUN_04485110(), lVar2 == 0)) {
    uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar5,0);
  }
  if (*(int *)(unaff_x22 + 0x18) != 0) {
    *(long *)(unaff_x22 + 0x20) = unaff_x25;
                    /* try { // try from 07734800 to 07834807 has its CatchHandler @ 077348a4 */
    thunk_FUN_044bb4b4();
                    /* try { // try from 07734808 to 0783481f has its CatchHandler @ 07733edc */
    in_stack_000000b0 = in_stack_000001f0;
    in_stack_000000b8 = in_stack_000001f8;
    in_stack_000000c0 = in_stack_00000200;
    in_stack_000000c8 = in_stack_00000208;
    in_stack_000000d0 = in_stack_00000210;
    in_stack_000000d8 = in_stack_00000218;
    in_stack_000000e0 = in_stack_00000220;
    in_stack_000000e8 = in_stack_00000228;
    if (unaff_x21 != 0) {
      in_stack_00000140 = in_stack_000001f0;
      in_stack_00000148 = in_stack_000001f8;
      in_stack_00000150 = in_stack_00000200;
      in_stack_00000158 = in_stack_00000208;
      in_stack_00000160 = in_stack_00000210;
      in_stack_00000168 = in_stack_00000218;
      in_stack_00000170 = in_stack_00000220;
      in_stack_00000178 = in_stack_00000228;
                    /* try { // try from 07734820 to 07834823 has its CatchHandler @ 07734868 */
                    /* try { // try from 07734824 to 07834843 has its CatchHandler @ 07733edc */
      FUN_05b4c3bc();
                    /* try { // try from 07734844 to 0783487f has its CatchHandler @ 077348a4 */
      lVar2 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(unaff_x22 + 0x18));
      if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 077347e8 with catch @ 0773485c */
        uVar10 = *(uint *)(lVar2 + 0x18);
                    /* catch() { ... } // from try @ 07734820 with catch @ 07734868 */
        if (0 < (long)((ulong)uVar10 << 0x20)) {
          uVar4 = 0;
          do {
                    /* try { // try from 07734880 to 0783488b has its CatchHandler @ 07733edc */
            if (uVar10 <= uVar4) goto LAB_07734b04;
            *(int *)(lVar2 + 0x20 + uVar4 * 4) = (int)uVar4;
            uVar4 = uVar4 + 1;
                    /* try { // try from 0773488c to 07834893 has its CatchHandler @ 077348a4 */
          } while ((long)(int)uVar10 != uVar4);
        }
                    /* catch() { ... } // from try @ 07734758 with catch @ 07734894 */
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar3 < 1) {
LAB_07734b08:
          *(long *)(in_stack_00000020 + 0xf0) = lVar2;
          thunk_FUN_044bb4b4((long *)(in_stack_00000020 + 0xf0),lVar2);
                    /* try { // try from 07734b20 to 07834cdf has its CatchHandler @ 07734b20
                       catch() { ... } // from try @ 07734b20 with catch @ 07734b20
                       catch() { ... } // from try @ 07735234 with catch @ 07734b20
                       catch() { ... } // from try @ 07735290 with catch @ 07734b20
                       catch() { ... } // from try @ 077352f0 with catch @ 07734b20
                       catch() { ... } // from try @ 07735414 with catch @ 07734b20
                       catch() { ... } // from try @ 0773544c with catch @ 07734b20
                       catch() { ... } // from try @ 07735468 with catch @ 07734b20
                       catch() { ... } // from try @ 077354c4 with catch @ 07734b20 */
          return in_stack_00000028._4_4_ & 1;
        }
        if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 077347a8 with catch @ 077348a4
                       catch() { ... } // from try @ 07734800 with catch @ 077348a4
                       catch() { ... } // from try @ 07734844 with catch @ 077348a4
                       catch() { ... } // from try @ 0773488c with catch @ 077348a4 */
          uVar10 = 0;
          puVar8 = (undefined8 *)((ulong)&stack0x000001a0 | 8);
          do {
            uVar1 = *(uint *)(lVar2 + (long)(int)uVar10 * 4 + 0x20);
            if (uVar3 <= uVar1) break;
            puVar9 = (undefined8 *)(unaff_x22 + (long)(int)uVar1 * 8 + 0x20);
            uVar5 = *puVar9;
            if (unaff_x21 == 0) goto LAB_07734b4c;
            FUN_05b4c354(&stack0x00000140);
            in_stack_00000108 = in_stack_00000148;
            in_stack_00000100 = in_stack_00000140;
            in_stack_00000118 = in_stack_00000158;
            in_stack_00000110 = in_stack_00000150;
            in_stack_00000128 = in_stack_00000168;
            in_stack_00000120 = in_stack_00000160;
            in_stack_00000138 = in_stack_00000178;
            in_stack_00000130 = in_stack_00000170;
            in_stack_000001a0 = uVar5;
            thunk_FUN_044bb4b4(&stack0x000001a0,uVar5);
            puVar8[5] = in_stack_00000128;
            puVar8[4] = in_stack_00000120;
            puVar8[7] = in_stack_00000138;
            puVar8[6] = in_stack_00000130;
            puVar8[1] = in_stack_00000108;
            *puVar8 = in_stack_00000100;
            puVar8[3] = in_stack_00000118;
            puVar8[2] = in_stack_00000110;
            lVar6 = *(long *)(unaff_x20 + 0x30);
            memcpy(&stack0x000000b0,&stack0x000001a0,0x48);
            if (lVar6 == 0) goto LAB_07734b4c;
            uVar5 = *(undefined8 *)PTR_DAT_09f318c8;
            memcpy(&stack0x00000140,&stack0x000000b0,0x48);
            uVar4 = FUN_0753d6ec(lVar6,&stack0x00000140,(long)&stack0x000001e8 + 4,uVar5);
            if ((uVar4 & 1) == 0) {
LAB_07734a5c:
              lVar6 = *(long *)(unaff_x20 + 0x28);
              memcpy(&stack0x000000b0,&stack0x000001a0,0x48);
              if (lVar6 == 0) goto LAB_07734b4c;
              uVar5 = *(undefined8 *)PTR_DAT_09f31910;
              memcpy(&stack0x00000140,&stack0x000000b0,0x48);
              uVar4 = FUN_05692cc4(lVar6,&stack0x00000140,uVar5);
              if ((uVar4 & 1) == 0) {
                lVar6 = *(long *)(unaff_x20 + 0x28);
                memcpy(&stack0x000000b0,&stack0x000001a0,0x48);
                if (lVar6 == 0) goto LAB_07734b4c;
                uVar5 = *(undefined8 *)PTR_DAT_09f31908;
                memcpy(&stack0x00000140,&stack0x000000b0,0x48);
                FUN_05693964(lVar6,&stack0x00000140,uVar5);
              }
            }
            else {
              if (*(uint *)(unaff_x22 + 0x18) <= uVar1) break;
              lVar6 = *(long *)(unaff_x20 + 0x38);
              if (lVar6 == 0) goto LAB_07734b4c;
              if (*(uint *)(lVar6 + 0x18) <= in_stack_000001e8._4_4_) break;
              uVar5 = *puVar9;
              uVar7 = *(undefined8 *)(lVar6 + (long)(int)in_stack_000001e8._4_4_ * 8 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar4 = FUN_0952c404(uVar5,uVar7,0);
              if ((uVar4 & 1) == 0) goto LAB_07734a5c;
              if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07734b4c;
              uVar4 = FUN_056495f4(*(long *)(unaff_x20 + 0x20),in_stack_000001e8._4_4_,
                                   *(undefined8 *)PTR_DAT_09f218e8);
              if ((uVar4 & 1) != 0) goto LAB_07734a5c;
              FUN_05b4c354(&stack0x000000b0);
              in_stack_00000148 = in_stack_000000b8;
              in_stack_00000140 = in_stack_000000b0;
              in_stack_00000158 = in_stack_000000c8;
              in_stack_00000150 = in_stack_000000c0;
              in_stack_00000168 = in_stack_000000d8;
              in_stack_00000160 = in_stack_000000d0;
              in_stack_00000178 = in_stack_000000e8;
              in_stack_00000170 = in_stack_000000e0;
              lVar6 = *(long *)(unaff_x20 + 0x40);
              if (lVar6 == 0) goto LAB_07734b4c;
              if (*(uint *)(lVar6 + 0x18) <= in_stack_000001e8._4_4_) break;
              lVar6 = lVar6 + (long)(int)in_stack_000001e8._4_4_ * 0x40;
              in_stack_00000038 = *(undefined8 *)(lVar6 + 0x28);
              in_stack_00000030 = *(undefined8 *)(lVar6 + 0x20);
              in_stack_00000048 = *(undefined8 *)(lVar6 + 0x38);
              in_stack_00000040 = *(undefined8 *)(lVar6 + 0x30);
              in_stack_00000058 = *(undefined8 *)(lVar6 + 0x48);
              in_stack_00000050 = *(undefined8 *)(lVar6 + 0x40);
              in_stack_00000068 = *(undefined8 *)(lVar6 + 0x58);
              in_stack_00000060 = *(undefined8 *)(lVar6 + 0x50);
              in_stack_00000078 = in_stack_000000b8;
              in_stack_00000070 = in_stack_000000b0;
              in_stack_00000088 = in_stack_000000c8;
              in_stack_00000080 = in_stack_000000c0;
              in_stack_00000098 = in_stack_000000d8;
              in_stack_00000090 = in_stack_000000d0;
              in_stack_000000a8 = in_stack_000000e8;
              in_stack_000000a0 = in_stack_000000e0;
              in_stack_000000b0 = in_stack_00000030;
              in_stack_000000b8 = in_stack_00000038;
              in_stack_000000c0 = in_stack_00000040;
              in_stack_000000c8 = in_stack_00000048;
              in_stack_000000d0 = in_stack_00000050;
              in_stack_000000d8 = in_stack_00000058;
              in_stack_000000e0 = in_stack_00000060;
              in_stack_000000e8 = in_stack_00000068;
              uVar4 = FUN_09513464(&stack0x00000070,&stack0x00000030,0);
              if ((uVar4 & 1) == 0) goto LAB_07734a5c;
            }
            uVar3 = *(uint *)(unaff_x22 + 0x18);
            uVar10 = uVar10 + 1;
            if ((int)uVar3 <= (int)uVar10) goto LAB_07734b08;
          } while (uVar10 < *(uint *)(lVar2 + 0x18));
        }
        goto LAB_07734b04;
      }
    }
LAB_07734b4c:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
LAB_07734b04:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


