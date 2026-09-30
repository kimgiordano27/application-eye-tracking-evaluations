/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 05cd0824
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x27;
  undefined4 uStack0000000000000068;
  int iStack000000000000006c;
  
  *(undefined1 *)(unaff_x27 + 0x4f5) = 1;
  uStack0000000000000068 = 0;
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  puVar2 = PTR_DAT_091b44b8;
  uVar7 = thunk_FUN_03d2ef40();
  System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            (uVar7,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60));
  *(undefined8 *)(unaff_x20 + 0x110) = uVar7;
  thunk_FUN_03d1023c(unaff_x20 + 0x110,uVar7);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68) + 0x135) & 1) == 0)
  {
    FUN_03d8f26c();
  }
  uVar7 = thunk_FUN_03d2ef40();
  FUN_06071d1c(uVar7,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
  *(undefined8 *)(unaff_x20 + 0x120) = uVar7;
  thunk_FUN_03d1023c(unaff_x20 + 0x120,uVar7);
  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
  FUN_071dda18(uVar7,0,0);
  *(undefined8 *)(unaff_x20 + 0x128) = uVar7;
  thunk_FUN_03d1023c(unaff_x20 + 0x128,uVar7);
  FUN_076bd700();
  iVar3 = FUN_076cf7f0();
  if (iVar3 == 0) {
    FUN_037e46c4();
    uVar17 = *(undefined8 *)(unaff_x20 + 0xd0);
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091fcc30);
    uVar7 = FUN_06fc5244(uVar17,uVar7,0);
    goto LAB_05cd0ff0;
  }
  uVar4 = FUN_076cf7f0();
  *(undefined4 *)(unaff_x20 + 0x130) = uVar4;
  iVar3 = *(int *)(unaff_x21 + 4);
  if ((iVar3 != 0) && (iVar3 != unaff_w22)) {
    if (0 < iVar3) {
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar6 = unaff_w22 / iVar3;
      }
      if (iVar6 < 0xb) {
        iVar6 = 0;
        if (unaff_w22 != 0) {
          iVar6 = iVar3 / unaff_w22;
        }
        if (iVar6 < 0xb) {
          uVar5 = FUN_076cf7f0();
          iVar3 = iStack000000000000006c;
          uVar4 = *(undefined4 *)(unaff_x21 + 4);
          uVar1 = *(undefined4 *)(unaff_x21 + 8);
          lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_03d8f26c(lVar11);
          }
          uVar7 = thunk_FUN_03d2ef40(lVar11);
          FUN_054a9500(uVar7,uVar5,uVar1,uVar4,iVar3,1,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
          *(undefined8 *)(unaff_x20 + 0x100) = uVar7;
          thunk_FUN_03d1023c(unaff_x20 + 0x100,uVar7);
          iVar6 = FUN_076cf7f0();
          iVar3 = 0;
          if (*(int *)(unaff_x21 + 4) != 0) {
            iVar3 = (iStack000000000000006c * iVar6) / *(int *)(unaff_x21 + 4);
          }
          *(int *)(unaff_x20 + 0x130) = iVar3;
          if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05cd0ed8;
          plVar15 = *(long **)(*(long *)(unaff_x20 + 0x90) + 0x18);
          lVar11 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,7);
          if (lVar11 == 0) goto LAB_05cd0ed8;
          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_05cd0ed4;
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_091fcc00;
          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x20));
          uVar7 = FUN_070d0cbc(unaff_x20 + 0x80,0);
          if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_05cd0ed4;
          *(undefined8 *)(lVar11 + 0x28) = uVar7;
          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x28),uVar7);
          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_05cd0ed4;
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_091fcc10;
          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x30));
          uVar7 = FUN_07175a38((long)&stack0x00000068 + 4,0);
          if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_05cd0ed4;
          *(undefined8 *)(lVar11 + 0x38) = uVar7;
          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x38),uVar7);
          if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_05cd0ed4;
          *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_091fcc20;
          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x40));
          uStack0000000000000068 = *(undefined4 *)(unaff_x21 + 4);
          uVar7 = FUN_07175a38(&stack0x00000068,0);
          if (*(uint *)(lVar11 + 0x18) < 6) goto LAB_05cd0ed4;
          *(undefined8 *)(lVar11 + 0x48) = uVar7;
          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x48),uVar7);
          if (*(uint *)(lVar11 + 0x18) < 7) goto LAB_05cd0ed4;
          *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_091fcc08;
          thunk_FUN_03d1023c();
          uVar7 = FUN_06fd2590(lVar11,0);
          lVar16 = *(long *)PTR_DAT_091a0c08;
          lVar11 = *(long *)(lVar16 + 0x38);
          if (lVar11 == 0) {
            FUN_03d8f2c8(lVar16);
            lVar11 = *(long *)(lVar16 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_03d8f26c();
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_03d8f26c();
          }
          if (plVar15 == (long *)0x0) goto LAB_05cd0ed8;
          lVar16 = *plVar15;
          uVar17 = **(undefined8 **)(lVar11 + 0xb8);
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_091faf08) {
                puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto FUN_05cd0e40;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_03d8f370(plVar15,*(long *)PTR_DAT_091faf08,1);
FUN_05cd0e40:
          pcVar12 = (code *)*puVar8;
          uVar10 = puVar8[1];
          uVar9 = 2;
          goto LAB_05cd0e48;
        }
      }
    }
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091a2770);
    uVar7 = FUN_03d2d394(uVar7,5);
    FUN_037e46c4();
    uVar17 = *(undefined8 *)(unaff_x20 + 0xd0);
    FUN_037e46c4(uVar7);
    FUN_037e7eb0(uVar7,0,uVar17);
    FUN_037e46c4(uVar7);
    uVar17 = thunk_FUN_03d1e194(PTR_DAT_091fcc28);
    FUN_037e7eb0(uVar7,1,uVar17);
    uStack0000000000000068 = *(undefined4 *)(unaff_x21 + 4);
    uVar17 = FUN_07175a38(&stack0x00000068,0);
    FUN_037e46c4(uVar7);
    FUN_037e7eb0(uVar7,2,uVar17);
    FUN_037e46c4(uVar7);
    uVar17 = thunk_FUN_03d1e194(PTR_DAT_091a2788);
    FUN_037e7eb0(uVar7,3,uVar17);
    uVar17 = FUN_07175a38((long)&stack0x00000068 + 4,0);
    FUN_037e46c4(uVar7);
    FUN_037e7eb0(uVar7,4,uVar17);
    uVar7 = FUN_06fd2590(uVar7,0);
LAB_05cd0ff0:
    thunk_FUN_03d1e194(PTR_DAT_091a4f90);
    uVar17 = thunk_FUN_03d2ef40();
    FUN_071b07cc(uVar17,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar17);
  }
  uVar4 = FUN_076cf7f0();
  lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03d8f26c(lVar11);
  }
  uVar7 = thunk_FUN_03d2ef40(lVar11);
  FUN_054a9a88(uVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  *(undefined8 *)(unaff_x20 + 0x100) = uVar7;
  thunk_FUN_03d1023c(unaff_x20 + 0x100,uVar7);
  if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05cd0ed8;
  plVar15 = *(long **)(*(long *)(unaff_x20 + 0x90) + 0x18);
  lVar11 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,5);
  if (lVar11 == 0) goto LAB_05cd0ed8;
  if (*(int *)(lVar11 + 0x18) == 0) {
LAB_05cd0ed4:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_091fcc00;
  thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x20));
  uVar7 = FUN_070d0cbc(unaff_x20 + 0x80,0);
  if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_05cd0ed4;
  *(undefined8 *)(lVar11 + 0x28) = uVar7;
  thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x28),uVar7);
  if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_05cd0ed4;
  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_091fcc18;
  thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x30));
  uStack0000000000000068 = *(undefined4 *)(unaff_x21 + 4);
  uVar7 = FUN_07175a38(&stack0x00000068,0);
  if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_05cd0ed4;
  *(undefined8 *)(lVar11 + 0x38) = uVar7;
  thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x38),uVar7);
  if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_05cd0ed4;
  *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_091fcbf8;
  thunk_FUN_03d1023c();
  uVar7 = FUN_06fd2590(lVar11,0);
  lVar16 = *(long *)PTR_DAT_091a0c08;
  lVar11 = *(long *)(lVar16 + 0x38);
  if (lVar11 == 0) {
    FUN_03d8f2c8(lVar16);
    lVar11 = *(long *)(lVar16 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03d8f26c();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03d8f26c();
  }
  if (plVar15 == (long *)0x0) goto LAB_05cd0ed8;
  lVar16 = *plVar15;
  uVar17 = **(undefined8 **)(lVar11 + 0xb8);
  uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_091faf08) {
        puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_05cd0e24;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)FUN_03d8f370(plVar15,*(long *)PTR_DAT_091faf08,1);
LAB_05cd0e24:
  pcVar12 = (code *)*puVar8;
  uVar10 = puVar8[1];
  uVar9 = 3;
LAB_05cd0e48:
  (*pcVar12)(plVar15,uVar9,uVar7,uVar17,uVar10);
  if (unaff_x20 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + 200);
    uVar4 = *(undefined4 *)(unaff_x20 + 0x130);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8) + 0x135) & 1) ==
        0) {
      FUN_03d8f26c();
    }
    uVar17 = thunk_FUN_03d2ef40();
    FUN_06dd8080(uVar17,0x32,uVar7,uVar4,5,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
    *(undefined8 *)(unaff_x20 + 0x138) = uVar17;
    thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar17);
    return;
  }
LAB_05cd0ed8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


