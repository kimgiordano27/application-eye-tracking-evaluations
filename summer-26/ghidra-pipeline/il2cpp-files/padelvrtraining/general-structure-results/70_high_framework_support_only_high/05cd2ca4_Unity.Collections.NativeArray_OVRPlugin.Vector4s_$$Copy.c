/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 05cd2ca4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *unaff_x28;
  undefined4 uStack0000000000000068;
  int iStack000000000000006c;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar6 = thunk_FUN_03d2ef40();
  FUN_06071d1c(uVar6,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 05cd2cd4 to 05dd2ce3 has its CatchHandler @ 05cd2ce4 */
  *(undefined8 *)(unaff_x20 + 0x120) = uVar6;
  thunk_FUN_03d1023c(unaff_x20 + 0x120,uVar6);
                    /* catch() { ... } // from try @ 05cd2bf8 with catch @ 05cd2ce4
                       catch() { ... } // from try @ 05cd2c34 with catch @ 05cd2ce4
                       catch() { ... } // from try @ 05cd2c60 with catch @ 05cd2ce4
                       catch() { ... } // from try @ 05cd2cd4 with catch @ 05cd2ce4 */
  uVar6 = thunk_FUN_03d2ef40(*unaff_x28);
                    /* try { // try from 05cd2ce8 to 05dd2ceb has its CatchHandler @ 05cd2cf4 */
                    /* try { // try from 05cd2cec to 05dd2cf7 has its CatchHandler @ 05cd2a94 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05cd2ce8 with catch @ 05cd2cf4
                        */
  FUN_071dda18(uVar6,0,0);
                    /* catch() { ... } // from try @ 05cd2da4 with catch @ 05cd2cf8
                       catch() { ... } // from try @ 05cd2df4 with catch @ 05cd2cf8
                       catch() { ... } // from try @ 05cd2e20 with catch @ 05cd2cf8
                       catch() { ... } // from try @ 05cd2e94 with catch @ 05cd2cf8 */
  *(undefined8 *)(unaff_x20 + 0x128) = uVar6;
  thunk_FUN_03d1023c(unaff_x20 + 0x128,uVar6);
  FUN_076bd700();
  iVar2 = FUN_076cf7f0();
  if (iVar2 == 0) {
    FUN_037e46c4();
    uVar16 = *(undefined8 *)(unaff_x20 + 0xd0);
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091fcc30);
    uVar6 = FUN_06fc5244(uVar16,uVar6,0);
    goto LAB_05cd3418;
  }
  uVar3 = FUN_076cf7f0();
  *(undefined4 *)(unaff_x20 + 0x130) = uVar3;
  iVar2 = *(int *)(unaff_x21 + 4);
  if ((iVar2 != 0) && (iVar2 != unaff_w22)) {
    if (0 < iVar2) {
      iVar5 = 0;
      if (iVar2 != 0) {
        iVar5 = unaff_w22 / iVar2;
      }
      if (iVar5 < 0xb) {
        iVar5 = 0;
        if (unaff_w22 != 0) {
          iVar5 = iVar2 / unaff_w22;
        }
        if (iVar5 < 0xb) {
          uVar4 = FUN_076cf7f0();
          iVar2 = iStack000000000000006c;
          uVar3 = *(undefined4 *)(unaff_x21 + 4);
          uVar1 = *(undefined4 *)(unaff_x21 + 8);
          lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03d8f26c(lVar10);
          }
          uVar6 = thunk_FUN_03d2ef40(lVar10);
          FUN_054a9670(uVar6,uVar4,uVar1,uVar3,iVar2,1,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
          *(undefined8 *)(unaff_x20 + 0x100) = uVar6;
          thunk_FUN_03d1023c(unaff_x20 + 0x100,uVar6);
          iVar5 = FUN_076cf7f0();
          iVar2 = 0;
          if (*(int *)(unaff_x21 + 4) != 0) {
            iVar2 = (iStack000000000000006c * iVar5) / *(int *)(unaff_x21 + 4);
          }
          *(int *)(unaff_x20 + 0x130) = iVar2;
          if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05cd3300;
          plVar14 = *(long **)(*(long *)(unaff_x20 + 0x90) + 0x18);
          lVar10 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,7);
          if (lVar10 == 0) goto LAB_05cd3300;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_05cd32fc;
          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_091fcc00;
          thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x20));
          uVar6 = FUN_070d0cbc(unaff_x20 + 0x80,0);
          if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05cd32fc;
          *(undefined8 *)(lVar10 + 0x28) = uVar6;
          thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x28),uVar6);
          if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_05cd32fc;
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_091fcc10;
          thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x30));
          uVar6 = FUN_07175a38((long)&stack0x00000068 + 4,0);
          if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_05cd32fc;
          *(undefined8 *)(lVar10 + 0x38) = uVar6;
          thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x38),uVar6);
          if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_05cd32fc;
          *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_091fcc20;
          thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x40));
          uStack0000000000000068 = *(undefined4 *)(unaff_x21 + 4);
          uVar6 = FUN_07175a38(&stack0x00000068,0);
          if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_05cd32fc;
          *(undefined8 *)(lVar10 + 0x48) = uVar6;
          thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x48),uVar6);
          if (*(uint *)(lVar10 + 0x18) < 7) goto LAB_05cd32fc;
          *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)PTR_DAT_091fcc08;
          thunk_FUN_03d1023c();
          uVar6 = FUN_06fd2590(lVar10,0);
          lVar15 = *(long *)PTR_DAT_091a0c08;
          lVar10 = *(long *)(lVar15 + 0x38);
          if (lVar10 == 0) {
            FUN_03d8f2c8(lVar15);
            lVar10 = *(long *)(lVar15 + 0x38);
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03d8f26c();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03d8f26c();
          }
          if (plVar14 == (long *)0x0) goto LAB_05cd3300;
          lVar15 = *plVar14;
          uVar16 = **(undefined8 **)(lVar10 + 0xb8);
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_091faf08) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_05cd3268;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)PTR_DAT_091faf08,1);
LAB_05cd3268:
          pcVar11 = (code *)*puVar7;
          uVar9 = puVar7[1];
          uVar8 = 2;
          goto LAB_05cd3270;
        }
      }
    }
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091a2770);
    uVar6 = FUN_03d2d394(uVar6,5);
    FUN_037e46c4();
    uVar16 = *(undefined8 *)(unaff_x20 + 0xd0);
    FUN_037e46c4(uVar6);
    FUN_037e7eb0(uVar6,0,uVar16);
    FUN_037e46c4(uVar6);
    uVar16 = thunk_FUN_03d1e194(PTR_DAT_091fcc28);
    FUN_037e7eb0(uVar6,1,uVar16);
    uStack0000000000000068 = *(undefined4 *)(unaff_x21 + 4);
    uVar16 = FUN_07175a38(&stack0x00000068,0);
    FUN_037e46c4(uVar6);
    FUN_037e7eb0(uVar6,2,uVar16);
    FUN_037e46c4(uVar6);
    uVar16 = thunk_FUN_03d1e194(PTR_DAT_091a2788);
    FUN_037e7eb0(uVar6,3,uVar16);
    uVar16 = FUN_07175a38((long)&stack0x00000068 + 4,0);
    FUN_037e46c4(uVar6);
    FUN_037e7eb0(uVar6,4,uVar16);
    uVar6 = FUN_06fd2590(uVar6,0);
LAB_05cd3418:
    thunk_FUN_03d1e194(PTR_DAT_091a4f90);
    uVar16 = thunk_FUN_03d2ef40();
    FUN_071b07cc(uVar16,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar16);
  }
  uVar3 = FUN_076cf7f0();
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_03d8f26c(lVar10);
  }
  uVar6 = thunk_FUN_03d2ef40(lVar10);
  FUN_054a9d68(uVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  *(undefined8 *)(unaff_x20 + 0x100) = uVar6;
  thunk_FUN_03d1023c(unaff_x20 + 0x100,uVar6);
  if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05cd3300;
  plVar14 = *(long **)(*(long *)(unaff_x20 + 0x90) + 0x18);
  lVar10 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,5);
  if (lVar10 == 0) goto LAB_05cd3300;
  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_05cd32fc:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_091fcc00;
  thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x20));
  uVar6 = FUN_070d0cbc(unaff_x20 + 0x80,0);
  if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05cd32fc;
  *(undefined8 *)(lVar10 + 0x28) = uVar6;
  thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x28),uVar6);
  if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_05cd32fc;
  *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_091fcc18;
  thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x30));
  uStack0000000000000068 = *(undefined4 *)(unaff_x21 + 4);
  uVar6 = FUN_07175a38(&stack0x00000068,0);
  if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_05cd32fc;
  *(undefined8 *)(lVar10 + 0x38) = uVar6;
  thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x38),uVar6);
  if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_05cd32fc;
  *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_091fcbf8;
  thunk_FUN_03d1023c();
  uVar6 = FUN_06fd2590(lVar10,0);
  lVar15 = *(long *)PTR_DAT_091a0c08;
  lVar10 = *(long *)(lVar15 + 0x38);
  if (lVar10 == 0) {
    FUN_03d8f2c8(lVar15);
    lVar10 = *(long *)(lVar15 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_03d8f26c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_03d8f26c();
  }
  if (plVar14 == (long *)0x0) goto LAB_05cd3300;
  lVar15 = *plVar14;
  uVar16 = **(undefined8 **)(lVar10 + 0xb8);
  uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_091faf08) {
        puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_05cd324c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)PTR_DAT_091faf08,1);
LAB_05cd324c:
  pcVar11 = (code *)*puVar7;
  uVar9 = puVar7[1];
  uVar8 = 3;
LAB_05cd3270:
  (*pcVar11)(plVar14,uVar8,uVar6,uVar16,uVar9);
  if (unaff_x20 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 200);
    uVar3 = *(undefined4 *)(unaff_x20 + 0x130);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8) + 0x135) & 1) ==
        0) {
      FUN_03d8f26c();
    }
    uVar16 = thunk_FUN_03d2ef40();
    FUN_06dd86a0(uVar16,0x32,uVar6,uVar3,5,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
    *(undefined8 *)(unaff_x20 + 0x138) = uVar16;
    thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar16);
    return;
  }
LAB_05cd3300:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


