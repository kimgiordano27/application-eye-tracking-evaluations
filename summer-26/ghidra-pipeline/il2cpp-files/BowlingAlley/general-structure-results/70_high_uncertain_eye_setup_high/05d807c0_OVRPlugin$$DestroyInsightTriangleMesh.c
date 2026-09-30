/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightTriangleMesh
ENTRY_POINT: 05d807c0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyInsightTriangleMesh(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  long *plVar17;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  ulong in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d80708 with catch @ 05d807c0
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d806d8 with catch @ 05d807c4
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d80744 with catch @ 05d807c8
                        */
  thunk_FUN_032e1da0(PTR_DAT_072b1590);
  *(undefined1 *)(unaff_x20 + 0x814) = 1;
  puVar4 = PTR_DAT_072ada08;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
                    /* try { // try from 05d807e0 to 05e807e3 has its CatchHandler @ 05d807f0 */
  in_stack_00000078 = 0;
  _uStack0000000000000030 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
                    /* catch() { ... } // from try @ 05d807e0 with catch @ 05d807f0 */
  plVar17 = *(long **)(unaff_x19 + 0x38);
  if (plVar17 != (long *)0x0) {
                    /* try { // try from 05d807fc to 05e80807 has its CatchHandler @ 05d8081c */
    lVar10 = *plVar17;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 05d80808 to 05e80813 has its CatchHandler @ 05d80670 */
    if (uVar13 != 0) {
                    /* try { // try from 05d80814 to 05e8081b has its CatchHandler @ 05d8081c */
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d807fc with catch @ 05d8081c
                       catch(type#2 @ 00000000) { ... } // from try @ 05d80814 with catch @ 05d8081c
                        */
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_072ada08) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
          goto LAB_05d80850;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_032937ac(plVar17,*(long *)PTR_DAT_072ada08,0x11);
LAB_05d80850:
    uVar13 = (*(code *)*puVar7)(plVar17,puVar7[1]);
    if ((uVar13 & 1) == 0) {
      return;
    }
    uVar8 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072b1580,0x1a);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar8;
    thunk_FUN_0333a630();
    lVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b958);
    FUN_06be9c64(lVar10,*(undefined8 *)PTR_DAT_072b1588,0);
    if (lVar10 != 0) {
      lVar10 = FUN_06be99dc(lVar10,0);
      uVar8 = FUN_06be6b04();
      if (lVar10 != 0) {
        FUN_06bf5194(lVar10,uVar8,0,0);
        if (DAT_076cd829 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_072795b0);
          DAT_076cd829 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_072795b0 + 0xb8);
        FUN_06bf3df8(*puVar11,puVar11[1],puVar11[2],lVar10,0);
        if (DAT_076cd761 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07279568);
          DAT_076cd761 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_07279568 + 0xb8);
        FUN_06bf4b94(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
        lVar10 = FUN_06be6b40(lVar10,0);
        if (lVar10 != 0) {
          FUN_06be9a54(lVar10,*(undefined4 *)(unaff_x19 + 0x4c),0);
          lVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1578);
          FUN_041e24b4(lVar10,0x1a,*(undefined8 *)PTR_DAT_072b1570);
          plVar17 = (long *)(unaff_x19 + 0x68);
          *plVar17 = lVar10;
          thunk_FUN_0333a630(plVar17,lVar10);
          if (*plVar17 != 0) {
            uVar8 = FUN_041e2ea0(*plVar17,*(undefined8 *)PTR_DAT_072b1568);
            *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
            thunk_FUN_0333a630();
            puVar6 = PTR_DAT_072b1560;
            puVar5 = PTR_DAT_072b1558;
            puVar3 = PTR_DAT_072ad8c8;
            uVar13 = 2;
            do {
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar10 = *(long *)puVar3;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_05d80d40;
              if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_05d80d44:
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              uVar1 = *(uint *)(lVar10 + uVar13 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0)) {
                plVar17 = *(long **)(unaff_x19 + 0x38);
                if (plVar17 == (long *)0x0) goto LAB_05d80d40;
                lVar12 = *plVar17;
                lVar10 = *(long *)puVar4;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar7 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_05d80aac;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)FUN_032937ac(plVar17,lVar10,9);
LAB_05d80aac:
                (*(code *)*puVar7)(plVar17,uVar1,&stack0x00000050,puVar7[1]);
                uVar14 = FUN_05d80d54();
                if ((uVar14 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar10 = FUN_05d80e1c();
                  plVar17 = *(long **)(unaff_x19 + 0x78);
                  in_stack_00000078 = lVar10;
                  if (plVar17 == (long *)0x0) goto LAB_05d80d40;
                  if ((lVar10 != 0) &&
                     (lVar12 = thunk_FUN_032a55a4(lVar10,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar12 == 0)) {
                    uVar8 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                    FUN_032d5dbc(uVar8,0);
                  }
                  if (*(uint *)(plVar17 + 3) <= uVar1) goto LAB_05d80d44;
                  plVar17[(long)(int)uVar1 + 4] = lVar10;
                  thunk_FUN_0333a630(plVar17 + (long)(int)uVar1 + 4,lVar10);
                }
                uStack000000000000000c = uVar1;
                uVar8 = thunk_FUN_032a52d0(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = (uint)uVar13;
                uVar9 = thunk_FUN_032a52d0(*(undefined8 *)puVar5,&stack0x00000008);
                FUN_057ab61c(*(undefined8 *)PTR_DAT_072b1590,uVar8,uVar9,0);
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05d80d40;
                uVar8 = FUN_05d80fdc(*(long *)(unaff_x19 + 0x40),uVar1);
                plVar17 = *(long **)(unaff_x19 + 0x38);
                uVar2 = (int)uVar8;
                if (uVar1 != 0) {
                  uVar2 = 0;
                }
                if (plVar17 == (long *)0x0) goto LAB_05d80d40;
                lVar12 = *plVar17;
                lVar10 = *(long *)puVar4;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar7 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_05d80c00;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)FUN_032937ac(plVar17,lVar10,9);
LAB_05d80c00:
                (*(code *)*puVar7)(plVar17,uVar13 & 0xffffffff,&stack0x00000030,puVar7[1]);
                if (in_stack_00000078 == 0) goto LAB_05d80d40;
                FUN_06be6b04(in_stack_00000078,0);
                uVar8 = FUN_05d81058(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,uVar8,uVar2);
                lVar10 = in_stack_00000078;
                uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1550);
                FUN_05d812c0(uVar9,uVar1,uVar13 & 0xffffffff,lVar10,uVar8);
                lVar10 = *(long *)(unaff_x19 + 0x68);
                if (lVar10 == 0) goto LAB_05d80d40;
                lVar12 = *(long *)(lVar10 + 0x10);
                lVar15 = *(long *)puVar6;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_05d80d40;
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  puVar7 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar7 = uVar9;
                  thunk_FUN_0333a630(puVar7,uVar9);
                }
                else {
                  FUN_041e2c78(lVar10,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x1a);
            FUN_05d81318();
            lVar10 = *(long *)(unaff_x19 + 0x58);
            *(undefined1 *)(unaff_x19 + 0x81) = 1;
            if (lVar10 != 0) {
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_05d80d40:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


