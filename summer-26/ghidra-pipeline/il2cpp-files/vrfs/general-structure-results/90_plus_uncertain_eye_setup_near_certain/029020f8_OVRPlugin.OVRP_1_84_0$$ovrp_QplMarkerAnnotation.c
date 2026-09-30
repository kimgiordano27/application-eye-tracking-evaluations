/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerAnnotation
ENTRY_POINT: 029020f8
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerAnnotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 uVar16;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar9;
  
                    /* try { // try from 029020f8 to 02a02103 has its CatchHandler @ 02902104 */
  thunk_FUN_0159f088();
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02902074 with catch @ 02902104
                       catch(type#1 @ 06a5a440) { ... } // from try @ 029020f8 with catch @ 02902104
                       try { // try from 02902104 to 02a0211b has its CatchHandler @ 02902020 */
  thunk_FUN_0159f088(PTR_DAT_06dc26f0);
  thunk_FUN_0159f088(PTR_DAT_06dc2fe0);
                    /* try { // try from 0290211c to 02a02133 has its CatchHandler @ 029021a0 */
  thunk_FUN_0159f088(PTR_DAT_06dd3570);
  thunk_FUN_0159f088(PTR_DAT_06e4c678);
  *(undefined1 *)(unaff_x20 + 0xc3a) = 1;
  puVar9 = PTR_DAT_06deb360;
                    /* try { // try from 02902134 to 02a0218f has its CatchHandler @ 02902020 */
  if (unaff_x22 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar11 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06e3fa30);
    FUN_028f2804(uVar11,uVar8);
    goto LAB_02902c08;
  }
  if (unaff_x21 == 0) {
    uVar14 = FUN_031d42e4();
    if ((uVar14 & 1) != 0) {
      thunk_FUN_0159f088(PTR_DAT_06e1d950);
      uVar11 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      puVar9 = PTR_DAT_06df4d28;
LAB_02902578:
      uVar8 = thunk_FUN_0159f088(puVar9);
      FUN_032192a4(uVar11,uVar8,0);
LAB_02902c08:
      uVar8 = thunk_FUN_0159f088(PTR_DAT_06da7538);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar11,uVar8);
    }
  }
  else {
    plVar5 = (long *)thunk_FUN_015d0480();
    puVar2 = PTR_DAT_06ddaad8;
    puVar1 = PTR_DAT_06dc26f0;
    if (plVar5 == (long *)0x0) {
      uVar11 = thunk_FUN_0164ba04();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar1);
      }
      uVar14 = FUN_031d212c(uVar11);
      if ((uVar14 & 1) == 0) {
        thunk_FUN_0159f088(PTR_DAT_06e1d950);
        uVar11 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar9 = PTR_DAT_06e69c48;
        goto LAB_02902578;
      }
    }
    else {
      lVar6 = *(long *)PTR_DAT_06ddaad8;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar6 = *(long *)puVar2;
      }
      puVar1 = PTR_DAT_06df2be8;
      lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar12 == 0) {
LAB_02902c20:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(uint *)(lVar12 + 0x18) < 4) {
LAB_02902bd4:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
                    /* try { // try from 02902190 to 02a0219f has its CatchHandler @ 029021a0 */
      if (*(long *)(lVar12 + 0x38) == unaff_x22) {
        lVar6 = *plVar5;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar9) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_02902670;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar9,1);
LAB_02902670:
        uVar3 = (*(code *)*puVar7)(plVar5);
        uVar11 = *(undefined8 *)puVar1;
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar3) & 0xffffffffffffff01;
        goto LAB_029027c0;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0290211c with catch @ 029021a0
                       catch() { ... } // from try @ 02902190 with catch @ 029021a0 */
        thunk_FUN_016466fc();
                    /* try { // try from 029021a4 to 02a021a7 has its CatchHandler @ 029021b0 */
        lVar6 = *(long *)puVar2;
                    /* try { // try from 029021a8 to 02a021b3 has its CatchHandler @ 02902020 */
        lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 029021a4 with catch @ 029021b0
                        */
        if (lVar12 == 0) goto LAB_02902c20;
      }
      if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_02902bd4;
      if (*(long *)(lVar12 + 0x40) == unaff_x22) {
        lVar12 = *plVar5;
        lVar6 = *(long *)puVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        puVar7 = (undefined8 *)PTR_DAT_06e18670;
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar6) {
              iVar13 = *piVar15 + 2;
              goto LAB_029026e0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        uVar11 = 2;
        goto LAB_02902614;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar6 = *(long *)puVar2;
        lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_02902c20;
      }
      if (*(uint *)(lVar12 + 0x18) < 6) goto LAB_02902bd4;
      if (*(long *)(lVar12 + 0x48) == unaff_x22) {
        lVar12 = *plVar5;
        lVar6 = *(long *)puVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        puVar7 = (undefined8 *)PTR_DAT_06e5e6c8;
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar6) {
              iVar13 = *piVar15 + 3;
              goto LAB_02902798;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        uVar11 = 3;
FUN_029026cc:
        puVar10 = (undefined8 *)FUN_015c2a80(plVar5,lVar6,uVar11);
LAB_029027a0:
        uVar3 = (*(code *)*puVar10)(plVar5);
        uVar11 = *puVar7;
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar3);
      }
      else {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar6 = *(long *)puVar2;
          lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar12 == 0) goto LAB_02902c20;
        }
        if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_02902bd4;
        if (*(long *)(lVar12 + 0x50) == unaff_x22) {
          lVar12 = *plVar5;
          lVar6 = *(long *)puVar9;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          puVar7 = (undefined8 *)PTR_DAT_06e0ce20;
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
OVRPlugin_Qpl_Variant__From:
            if (*(long *)(piVar15 + -2) != lVar6) goto code_r0x029026bc;
            iVar13 = *piVar15 + 4;
LAB_02902798:
            puVar10 = (undefined8 *)(lVar12 + (long)iVar13 * 0x10 + 0x138);
            goto LAB_029027a0;
          }
LAB_029026c8:
          uVar11 = 4;
          goto FUN_029026cc;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar6 = *(long *)puVar2;
          lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar12 == 0) goto LAB_02902c20;
        }
        if (*(uint *)(lVar12 + 0x18) < 8) goto LAB_02902bd4;
        if (*(long *)(lVar12 + 0x58) == unaff_x22) {
          lVar12 = *plVar5;
          lVar6 = *(long *)puVar9;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          puVar7 = (undefined8 *)PTR_DAT_06e467c0;
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar6) {
                iVar13 = *piVar15 + 5;
                goto LAB_029026e0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          uVar11 = 5;
LAB_02902614:
          puVar10 = (undefined8 *)FUN_015c2a80(plVar5,lVar6,uVar11);
LAB_029026e8:
          uVar4 = (*(code *)*puVar10)(plVar5);
          uVar11 = *puVar7;
          in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar4);
        }
        else {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar6 = *(long *)puVar2;
            lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar12 == 0) goto LAB_02902c20;
          }
          if (*(uint *)(lVar12 + 0x18) < 9) goto LAB_02902bd4;
          if (*(long *)(lVar12 + 0x60) == unaff_x22) {
            lVar12 = *plVar5;
            lVar6 = *(long *)puVar9;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
            puVar7 = (undefined8 *)PTR_DAT_06dc2fe0;
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
LAB_02902770:
              if (*(long *)(piVar15 + -2) != lVar6) goto code_r0x0290277c;
              iVar13 = *piVar15 + 6;
LAB_029026e0:
              puVar10 = (undefined8 *)(lVar12 + (long)iVar13 * 0x10 + 0x138);
              goto LAB_029026e8;
            }
LAB_02902788:
            uVar11 = 6;
            goto LAB_02902614;
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar6 = *(long *)puVar2;
            lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar12 == 0) goto LAB_02902c20;
          }
          if (*(uint *)(lVar12 + 0x18) < 10) goto LAB_02902bd4;
          if (*(long *)(lVar12 + 0x68) == unaff_x22) {
            lVar12 = *plVar5;
            lVar6 = *(long *)puVar9;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
            puVar7 = (undefined8 *)PTR_DAT_06e1faf8;
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar6) {
                  iVar13 = *piVar15 + 7;
                  goto LAB_02902930;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            uVar11 = 7;
LAB_0290287c:
            puVar10 = (undefined8 *)FUN_015c2a80(plVar5,lVar6,uVar11);
LAB_02902938:
            uVar16 = (*(code *)*puVar10)(plVar5);
            uVar11 = *puVar7;
            in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar16);
          }
          else {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar6 = *(long *)puVar2;
              lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_02902c20;
            }
            if (*(uint *)(lVar12 + 0x18) < 0xb) goto LAB_02902bd4;
            if (*(long *)(lVar12 + 0x70) == unaff_x22) {
              lVar12 = *plVar5;
              lVar6 = *(long *)puVar9;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
              puVar7 = (undefined8 *)PTR_DAT_06dd3570;
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
LAB_02902860:
                if (*(long *)(piVar15 + -2) != lVar6) goto code_r0x0290286c;
                iVar13 = *piVar15 + 8;
LAB_02902930:
                puVar10 = (undefined8 *)(lVar12 + (long)iVar13 * 0x10 + 0x138);
                goto LAB_02902938;
              }
LAB_02902878:
              uVar11 = 8;
              goto LAB_0290287c;
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar6 = *(long *)puVar2;
              lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_02902c20;
            }
            if (*(uint *)(lVar12 + 0x18) < 0xc) goto LAB_02902bd4;
            if (*(long *)(lVar12 + 0x78) == unaff_x22) {
              lVar12 = *plVar5;
              lVar6 = *(long *)puVar9;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
              puVar7 = (undefined8 *)PTR_DAT_06e199e0;
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar6) {
                    iVar13 = *piVar15 + 9;
                    goto LAB_029029f8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              uVar11 = 9;
LAB_0290291c:
              puVar10 = (undefined8 *)FUN_015c2a80(plVar5,lVar6,uVar11);
LAB_02902a00:
              uVar11 = (*(code *)*puVar10)(plVar5);
              in_stack_00000008 = uVar11;
              uVar11 = *puVar7;
            }
            else {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar6 = *(long *)puVar2;
                lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                if (lVar12 == 0) goto LAB_02902c20;
              }
              if (*(uint *)(lVar12 + 0x18) < 0xd) goto LAB_02902bd4;
              if (*(long *)(lVar12 + 0x80) == unaff_x22) {
                lVar12 = *plVar5;
                lVar6 = *(long *)puVar9;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                puVar7 = (undefined8 *)PTR_DAT_06e4c678;
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar6) {
                      iVar13 = *piVar15 + 10;
                      goto LAB_029029f8;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                uVar11 = 10;
                goto LAB_0290291c;
              }
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar6 = *(long *)puVar2;
                lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                if (lVar12 == 0) goto LAB_02902c20;
              }
              puVar1 = PTR_DAT_06e10ca0;
              if (*(uint *)(lVar12 + 0x18) < 0xe) goto LAB_02902bd4;
              if (*(long *)(lVar12 + 0x88) == unaff_x22) {
                lVar6 = *plVar5;
                uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar9) {
                      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
                      goto LAB_02902a74;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar9,0xb);
LAB_02902a74:
                uVar16 = (*(code *)*puVar7)(plVar5);
                uVar11 = *(undefined8 *)puVar1;
                in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar16);
              }
              else {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar6 = *(long *)puVar2;
                  lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                  if (lVar12 == 0) goto LAB_02902c20;
                }
                puVar1 = PTR_DAT_06e01080;
                if (*(uint *)(lVar12 + 0x18) < 0xf) goto LAB_02902bd4;
                if (*(long *)(lVar12 + 0x90) == unaff_x22) {
                  lVar6 = *plVar5;
                  uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar9) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
                        goto LAB_02902ae0;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar9,0xc);
LAB_02902ae0:
                  uVar11 = (*(code *)*puVar7)(plVar5);
                  in_stack_00000008 = uVar11;
                  uVar11 = *(undefined8 *)puVar1;
                }
                else {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                    lVar6 = *(long *)puVar2;
                    lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                    if (lVar12 == 0) goto LAB_02902c20;
                  }
                  puVar1 = PTR_DAT_06d98c30;
                  if (*(uint *)(lVar12 + 0x18) < 0x10) goto LAB_02902bd4;
                  if (*(long *)(lVar12 + 0x98) != unaff_x22) {
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                      lVar6 = *(long *)puVar2;
                      lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                      if (lVar12 == 0) goto LAB_02902c20;
                    }
                    if (*(uint *)(lVar12 + 0x18) < 0x11) goto LAB_02902bd4;
                    if (*(long *)(lVar12 + 0xa0) != unaff_x22) {
                      if (*(int *)(lVar6 + 0xe0) == 0) {
                        thunk_FUN_016466fc();
                        lVar6 = *(long *)puVar2;
                        lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                        if (lVar12 == 0) goto LAB_02902c20;
                      }
                      if (*(uint *)(lVar12 + 0x18) < 0x13) goto LAB_02902bd4;
                      if (*(long *)(lVar12 + 0xb0) == unaff_x22) {
                        lVar6 = *plVar5;
                        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
                        if (uVar14 != 0) {
                          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == *(long *)puVar9) {
                              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 0xf) * 0x10 + 0x138)
                              ;
                              goto LAB_02902bb0;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar9,0xf);
LAB_02902bb0:
                        lVar6 = (*(code *)*puVar7)(plVar5);
                      }
                      else {
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_016466fc();
                          lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                          if (lVar12 == 0) goto LAB_02902c20;
                        }
                        if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_02902bd4;
                        if (*(long *)(lVar12 + 0x28) == unaff_x22) goto LAB_029027c8;
                        lVar6 = *plVar5;
                        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
                        if (uVar14 != 0) {
                          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == *(long *)puVar9) {
                              puVar7 = (undefined8 *)
                                       (lVar6 + (long)(*piVar15 + 0x10) * 0x10 + 0x138);
                              goto LAB_02902b88;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar9,0x10);
LAB_02902b88:
                        lVar6 = (*(code *)*puVar7)(plVar5);
                      }
                      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                        return lVar6;
                      }
                      goto LAB_02902bd0;
                    }
                    lVar12 = *plVar5;
                    lVar6 = *(long *)puVar9;
                    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    puVar7 = (undefined8 *)PTR_DAT_06e56f18;
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
LAB_02902ab0:
                      if (*(long *)(piVar15 + -2) != lVar6) goto code_r0x02902abc;
                      iVar13 = *piVar15 + 0xe;
LAB_029029f8:
                      puVar10 = (undefined8 *)(lVar12 + (long)iVar13 * 0x10 + 0x138);
                      goto LAB_02902a00;
                    }
LAB_02902ac8:
                    uVar11 = 0xe;
                    goto LAB_0290291c;
                  }
                  lVar6 = *plVar5;
                  uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar9) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
                        goto LAB_02902b50;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar9,0xd);
LAB_02902b50:
                  _in_stack_00000008 = (*(code *)*puVar7)(plVar5);
                  uVar11 = *(undefined8 *)puVar1;
                }
              }
            }
          }
        }
      }
LAB_029027c0:
      unaff_x21 = thunk_FUN_015d01b0(uVar11,&stack0x00000008);
    }
  }
LAB_029027c8:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return unaff_x21;
  }
LAB_02902bd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x029026bc:
  uVar14 = uVar14 - 1;
  piVar15 = piVar15 + 4;
  if (uVar14 == 0) goto LAB_029026c8;
  goto OVRPlugin_Qpl_Variant__From;
code_r0x0290277c:
  uVar14 = uVar14 - 1;
  piVar15 = piVar15 + 4;
  if (uVar14 == 0) goto LAB_02902788;
  goto LAB_02902770;
code_r0x0290286c:
  uVar14 = uVar14 - 1;
  piVar15 = piVar15 + 4;
  if (uVar14 == 0) goto LAB_02902878;
  goto LAB_02902860;
code_r0x02902abc:
  uVar14 = uVar14 - 1;
  piVar15 = piVar15 + 4;
  if (uVar14 == 0) goto LAB_02902ac8;
  goto LAB_02902ab0;
}


