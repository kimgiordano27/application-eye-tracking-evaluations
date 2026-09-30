/*
FUNCTION_NAME: Unity.VisualScripting.LudiqBehaviour$$OnAfterDeserialize
ENTRY_POINT: 082d2624
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


undefined4
Unity_VisualScripting_LudiqBehaviour__OnAfterDeserialize
          (undefined1 param_1 [16],ulong param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 *puVar21;
  long *unaff_x19;
  uint uVar22;
  undefined4 uVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  long unaff_x26;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  uint in_stack_00000020;
  uint uStack0000000000000024;
  int iStack0000000000000038;
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
  undefined4 in_stack_000000e0;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  uint uStack0000000000000148;
  undefined1 uStack000000000000014c;
  
                    /* try { // try from 082d2624 to 083d2627 has its CatchHandler @ 082d288c */
  if (*(int *)(param_3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar11 = FUN_0858816c();
  puVar4 = PTR_DAT_08f65618;
  if (((uVar11 & 1) != 0) && (plVar26 = unaff_x19, *(char *)((long)unaff_x19 + 0x42d) == '\0')) {
    while( true ) {
      plVar26 = (long *)plVar26[99];
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = FUN_0858816c(plVar26,0,0);
      if ((uVar11 & 1) == 0) goto LAB_082d264c;
      if (plVar26 == (long *)0x0) break;
      (**(code **)(*plVar26 + 0x558))
                (plVar26,**(undefined8 **)(*(long *)(puVar4 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar26 + 0x560));
      (**(code **)(*plVar26 + 0x948))(plVar26,*(undefined8 *)(*plVar26 + 0x950));
      lVar24 = FUN_082fb63c(plVar26,0);
      if (lVar24 == 0) break;
      FUN_0832b31c(lVar24,0);
    }
LAB_082d43c0:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
LAB_082d264c:
  if (unaff_x26 == 0) goto LAB_082d43c0;
  uVar8 = *(uint *)(unaff_x26 + 0x18);
  if ((int)uVar8 < 1) {
    iStack0000000000000038 = 0;
LAB_082d3af0:
    plVar26 = (long *)PTR_DAT_08fc16b0;
    if (*(char *)((long)unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x42d) = 0;
LAB_082d3afc:
      return (int)unaff_x19[0x94];
    }
    lVar24 = unaff_x19[0x74];
    if (lVar24 != 0) {
      lVar12 = *(long *)PTR_DAT_08fc16b0;
      *(int *)(lVar24 + 0x1c) = iStack0000000000000038;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar12 = *plVar26;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar12 != 0) {
        uVar8 = FUN_06ee1f14(lVar12,*(undefined8 *)PTR_DAT_08f76d38);
        *(uint *)(lVar24 + 0x34) = uVar8;
        if (unaff_x19[0x74] != 0) {
          plVar25 = (long *)(unaff_x19[0x74] + 0x60);
          lVar24 = *plVar25;
          if (lVar24 != 0) {
            uVar11 = (ulong)uVar8;
            if (*(int *)(lVar24 + 0x18) < (int)uVar8) {
              if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>
                        (plVar25,uVar11,0,*(undefined8 *)PTR_DAT_08ff6880);
            }
            if (unaff_x19[0xe4] != 0) {
              plVar25 = unaff_x19 + 0xe4;
              if (*(int *)(unaff_x19[0xe4] + 0x18) < (int)uVar8) {
                uVar22 = uVar8 | (int)uVar8 >> 0x10;
                uVar22 = uVar22 | (int)uVar22 >> 8;
                uVar22 = uVar22 | (int)uVar22 >> 4;
                uVar22 = uVar22 | (int)uVar22 >> 2;
                if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                FUN_04d0f434(plVar25,(uVar22 | (int)uVar22 >> 1) + 1,*(undefined8 *)PTR_DAT_08ff69b8
                            );
              }
              if (*(char *)((long)unaff_x19 + 0x359) != '\0') {
                if (unaff_x19[0x74] == 0) goto LAB_082d43c0;
                plVar27 = (long *)(unaff_x19[0x74] + 0x38);
                lVar24 = *plVar27;
                if (lVar24 == 0) goto LAB_082d43c0;
                iVar9 = (int)unaff_x19[0x94];
                if (0x100 < *(int *)(lVar24 + 0x18) - iVar9) {
                  iVar10 = 0x100;
                  if (0x100 < iVar9 + 1) {
                    iVar10 = iVar9 + 1;
                  }
                  if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  FUN_04d0f664(plVar27,iVar10,1,*(undefined8 *)PTR_DAT_08ff6878);
                }
              }
              puVar4 = PTR_DAT_08ff65a8;
              fVar3 = DAT_01a2e7f0;
              if (0 < (int)uVar8) {
                lVar24 = 0;
                uVar30 = 0;
                lVar12 = 0x54;
                do {
                  fVar34 = (float)param_2;
                  if (uVar30 == 0) {
                    lVar18 = *plVar26;
                  }
                  else {
                    lVar18 = *plVar25;
                    if (lVar18 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                    uVar13 = *(undefined8 *)(lVar18 + uVar30 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                    }
                    uVar15 = FUN_08589e5c(uVar13,0,0);
                    if ((uVar15 & 1) != 0) {
                      lVar18 = *plVar26;
                      plVar27 = (long *)*plVar25;
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar18 = *plVar26;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = lVar18 + lVar12;
                      in_stack_000000d0 = *(undefined8 *)(lVar18 + -4);
                      in_stack_000000c8 = *(undefined8 *)(lVar18 + -0xc);
                      in_stack_000000c0 = *(undefined8 *)(lVar18 + -0x14);
                      in_stack_000000a8 = *(undefined8 *)(lVar18 + -0x2c);
                      uVar13 = *(undefined8 *)(lVar18 + -0x34);
                      in_stack_000000b8 = *(undefined8 *)(lVar18 + -0x1c);
                      in_stack_000000b0 = *(undefined8 *)(lVar18 + -0x24);
                      in_stack_000000a0 = uVar13;
                      lVar18 = FUN_08329e2c();
                      fVar34 = (float)uVar13;
                      if (plVar27 == (long *)0x0) goto LAB_082d43c0;
                      if ((lVar18 != 0) &&
                         (lVar16 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar16 == 0)) {
LAB_082d445c:
                        uVar13 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
                        FUN_04031750(uVar13,0);
                      }
                      if (*(uint *)(plVar27 + 3) <= uVar30) goto LAB_082d4458;
                      plVar27[uVar30 + 4] = lVar18;
                      if ((unaff_x19[0x74] == 0) ||
                         (lVar18 = *(long *)(unaff_x19[0x74] + 0x60), lVar18 == 0))
                      goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      *(undefined8 *)(lVar18 + lVar24 + 0x30) = 0;
                    }
                    if (unaff_x19[0x77] == 0) goto LAB_082d43c0;
                    fVar31 = (float)FUN_08597b2c(unaff_x19[0x77],0);
                    lVar18 = *plVar25;
                    if (lVar18 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                    lVar18 = *(long *)(lVar18 + uVar30 * 8 + 0x20);
                    if ((lVar18 == 0) ||
                       (fVar33 = fVar34,
                       lVar18 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat
                                          (lVar18,0), lVar18 == 0)) goto LAB_082d43c0;
                    fVar32 = (float)FUN_08597b2c(lVar18,0);
                    fVar34 = (fVar34 - fVar33) * (fVar34 - fVar33);
                    param_2 = (ulong)(uint)fVar34;
                    if (fVar3 <= (fVar31 - fVar32) * (fVar31 - fVar32) + fVar34) {
                      lVar18 = *plVar25;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = *(long *)(lVar18 + uVar30 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      lVar18 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat
                                         (lVar18,0);
                      if ((unaff_x19[0x77] == 0) || (FUN_08597b2c(unaff_x19[0x77],0), lVar18 == 0))
                      goto LAB_082d43c0;
                      FUN_08597bf4(lVar18,0);
                    }
                    lVar18 = *plVar25;
                    if (lVar18 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                    lVar18 = *(long *)(lVar18 + uVar30 * 8 + 0x20);
                    if (lVar18 == 0) goto LAB_082d43c0;
                    uVar13 = *(undefined8 *)(lVar18 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                    }
                    uVar15 = FUN_08589e5c(uVar13,0,0);
                    if ((uVar15 & 1) == 0) {
                      lVar18 = *plVar25;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = *(long *)(lVar18 + uVar30 * 8 + 0x20);
                      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0))
                      goto LAB_082d43c0;
                      iVar9 = FUN_0858dd10(lVar18,0);
                      lVar18 = *plVar26;
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_0408f364(lVar18);
                        lVar18 = *plVar26;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = *(long *)(lVar18 + lVar12 + -0x1c);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      iVar10 = FUN_0858dd10(lVar18,0);
                      if (iVar9 != iVar10) goto LAB_082d3f50;
                      lVar18 = *plVar26;
                    }
                    else {
LAB_082d3f50:
                      lVar18 = *plVar25;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar16 = *plVar26;
                      lVar18 = *(long *)(lVar18 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar16 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar16 = *plVar26;
                      }
                      lVar16 = **(long **)(lVar16 + 0xb8);
                      if (lVar16 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_082d4458;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      FUN_08329aa4(lVar18,*(undefined8 *)(lVar16 + lVar12 + -0x1c),0);
                      lVar16 = *plVar25;
                      if (lVar16 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = *plVar26;
                      lVar19 = **(long **)(lVar18 + 0xb8);
                      if (lVar19 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar16 = lVar16 + uVar30 * 8;
                      lVar20 = *(long *)(lVar16 + 0x20);
                      if (lVar20 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar20 + 0xd8) = *(undefined8 *)(lVar19 + lVar12 + -0x2c);
                      lVar16 = *(long *)(lVar16 + 0x20);
                      if (lVar16 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar16 + 0xe0) = *(undefined8 *)(lVar19 + lVar12 + -0x24);
                    }
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                      lVar18 = *plVar26;
                    }
                    lVar16 = **(long **)(lVar18 + 0xb8);
                    if (lVar16 == 0) goto LAB_082d43c0;
                    if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_082d4458;
                    if (*(char *)(lVar16 + lVar12 + -0x13) != '\0') {
                      lVar19 = *plVar25;
                      if (lVar19 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                        lVar16 = **(long **)(*plVar26 + 0xb8);
                        if (lVar16 == 0) goto LAB_082d43c0;
                      }
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_082d4458;
                      if (lVar19 == 0) goto LAB_082d43c0;
                      FUN_08329b0c(lVar19,*(undefined8 *)(lVar16 + lVar12 + -0x1c),0);
                      lVar16 = *plVar25;
                      if (lVar16 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = *plVar26;
                      lVar19 = **(long **)(lVar18 + 0xb8);
                      if (lVar19 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar16 = *(long *)(lVar16 + uVar30 * 8 + 0x20);
                      if (lVar16 == 0) goto LAB_082d43c0;
                      *(undefined8 *)(lVar16 + 0x100) = *(undefined8 *)(lVar19 + lVar12 + -0xc);
                    }
                  }
                  if (*(int *)(lVar18 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                    lVar18 = *plVar26;
                  }
                  plVar26 = (long *)PTR_DAT_08fc16b0;
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_082d43c0;
                  if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar16 = *(long *)(unaff_x19[0x74] + 0x60), lVar16 == 0)) goto LAB_082d43c0;
                  if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_082d4458;
                  uVar22 = *(uint *)(lVar18 + lVar12);
                  lVar18 = *(long *)(lVar16 + lVar24 + 0x30);
                  if (lVar18 == 0) {
                    if (uVar30 == 0) {
                      in_stack_00000068 = 0;
                      in_stack_00000060 = 0;
                      in_stack_00000078 = 0;
                      in_stack_00000070 = 0;
                      in_stack_00000088 = 0;
                      in_stack_00000080 = 0;
                      in_stack_00000098 = 0;
                      in_stack_00000090 = 0;
                      in_stack_00000058 = 0;
                      in_stack_00000050 = 0;
                      FUN_0831e2c8(&stack0x00000050,unaff_x19[0x7b],uVar22 + 1,0);
                      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_082d4458;
                    }
                    else {
                      lVar18 = *plVar25;
                      if (lVar18 == 0) goto LAB_082d43c0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar18 = *(long *)(lVar18 + uVar30 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_082d43c0;
                      uVar13 = FUN_08329ce0(lVar18,0);
                      in_stack_00000068 = 0;
                      in_stack_00000060 = 0;
                      in_stack_00000078 = 0;
                      in_stack_00000070 = 0;
                      in_stack_00000088 = 0;
                      in_stack_00000080 = 0;
                      in_stack_00000098 = 0;
                      in_stack_00000090 = 0;
                      in_stack_00000058 = 0;
                      in_stack_00000050 = 0;
                      FUN_0831e2c8(&stack0x00000050,uVar13,uVar22 + 1,0);
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_082d4458;
                      lVar16 = lVar16 + lVar24;
                    }
                    memmove((void *)(lVar16 + 0x20),&stack0x00000050,0x50);
                    plVar26 = (long *)PTR_DAT_08fc16b0;
                  }
                  else {
                    iVar9 = *(int *)(lVar18 + 0x18);
                    if (iVar9 < (int)(uVar22 * 4)) {
                      if ((int)uVar22 < 0x401) {
                        uVar22 = uVar22 | (int)uVar22 >> 0x10;
                        uVar22 = uVar22 | (int)uVar22 >> 8;
                        uVar22 = uVar22 | (int)uVar22 >> 4;
                        uVar22 = uVar22 | (int)uVar22 >> 2;
                        uVar22 = uVar22 | (int)uVar22 >> 1;
LAB_082d4230:
                        iVar9 = uVar22 + 1;
                      }
                      else {
LAB_082d4158:
                        iVar9 = uVar22 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                      }
                      FUN_0831ef9c(lVar16 + lVar24 + 0x20,iVar9,0);
                    }
                    else if ((*(char *)((long)unaff_x19 + 0x359) != '\0') && (0 < (int)uVar22)) {
                      iVar10 = iVar9 + 3;
                      if (-1 < iVar9) {
                        iVar10 = iVar9;
                      }
                      if (0x100 < (int)((iVar10 >> 2) - uVar22)) {
                        if (uVar22 < 0x401) {
                          uVar22 = uVar22 >> 4 | uVar22 >> 8 | uVar22;
                          uVar22 = uVar22 | uVar22 >> 2;
                          uVar22 = uVar22 | uVar22 >> 1;
                          goto LAB_082d4230;
                        }
                        goto LAB_082d4158;
                      }
                    }
                  }
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar18 = *(long *)(unaff_x19[0x74] + 0x60), lVar18 == 0)) goto LAB_082d43c0;
                  lVar16 = *plVar26;
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                    lVar16 = *plVar26;
                  }
                  lVar16 = **(long **)(lVar16 + 0xb8);
                  if (lVar16 == 0) goto LAB_082d43c0;
                  if ((*(uint *)(lVar16 + 0x18) <= uVar30) || (*(uint *)(lVar18 + 0x18) <= uVar30))
                  goto LAB_082d4458;
                  lVar16 = lVar16 + lVar12;
                  uVar30 = uVar30 + 1;
                  lVar18 = lVar18 + lVar24;
                  lVar24 = lVar24 + 0x50;
                  lVar12 = lVar12 + 0x38;
                  *(undefined8 *)(lVar18 + 0x68) = *(undefined8 *)(lVar16 + -0x1c);
                } while (uVar11 != uVar30);
              }
              lVar24 = *plVar25;
              if (lVar24 != 0) {
                lVar12 = (long)(int)uVar8 + 4;
                do {
                  uVar8 = (uint)*(undefined8 *)(lVar24 + 0x18);
                  if ((long)(int)uVar8 <= lVar12 + -4) goto LAB_082d3afc;
                  uVar22 = (uint)uVar11;
                  if (uVar8 <= uVar22) {
LAB_082d4458:
                    /* WARNING: Subroutine does not return */
                    FUN_04031894();
                  }
                  uVar13 = *(undefined8 *)(lVar24 + lVar12 * 8);
                  if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  uVar11 = FUN_0858816c(uVar13,0,0);
                  if ((uVar11 & 1) == 0) goto LAB_082d3afc;
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                  if (lVar12 + -4 < (long)*(int *)(lVar24 + 0x18)) {
                    lVar24 = *plVar25;
                    if (lVar24 == 0) break;
                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_082d4458;
                    lVar24 = *(long *)(lVar24 + lVar12 * 8);
                    if ((lVar24 == 0) || (lVar24 = FUN_0869bc74(lVar24,0), lVar24 == 0)) break;
                    FUN_08868968(lVar24,0,0);
                  }
                  lVar24 = *plVar25;
                  lVar12 = lVar12 + 1;
                  uVar11 = (ulong)(uVar22 + 1);
                } while (lVar24 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_082d43c0;
  }
  uVar22 = 0;
  lVar24 = unaff_x26 + 0x20;
  iStack0000000000000038 = 0;
LAB_082d266c:
  if (uVar8 <= uVar22) goto LAB_082d4458;
  puVar28 = (uint *)(lVar24 + (long)(int)uVar22 * 0x10 + 4);
  if (*puVar28 == 0) goto LAB_082d3af0;
  if (unaff_x19[0x74] == 0) goto LAB_082d43c0;
  plVar26 = (long *)(unaff_x19[0x74] + 0x38);
  lVar18 = *plVar26;
  lVar12 = unaff_x19[0x94];
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) <= (int)lVar12)) {
    if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_04d0f664(plVar26,(int)lVar12 + 1,1,*(undefined8 *)PTR_DAT_08ff6878);
    uVar8 = *(uint *)(unaff_x26 + 0x18);
  }
  if (uVar8 <= uVar22) goto LAB_082d4458;
  uVar8 = *puVar28;
  uVar23 = (undefined4)unaff_x19[0x24];
  if ((*(char *)((long)unaff_x19 + 0x33a) != '\0') && (uVar8 == 0x3c)) {
    uVar11 = FUN_083025c8();
    uVar1 = uStack0000000000000148;
    if ((uVar11 & 1) == 0) {
      uVar23 = (undefined4)unaff_x19[0x24];
      goto LAB_082d28b0;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar22) goto LAB_082d4458;
    iVar9 = *(int *)(lVar24 + (long)(int)uVar22 * 0x10 + 8);
    if ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)((long)unaff_x19 + 0x292) = 1;
    }
    puVar4 = PTR_DAT_08fc16b0;
    uVar22 = uStack0000000000000148;
    if (*(int *)((long)unaff_x19 + 0x65c) != 1) goto LAB_082d3ad8;
    lVar12 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 != 0) {
      if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
        *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
        if ((unaff_x19[0x74] != 0) && (lVar12 = *(long *)(unaff_x19[0x74] + 0x38), lVar12 != 0)) {
          uVar8 = *(uint *)(unaff_x19 + 0x94);
          if (uVar8 < *(uint *)(lVar12 + 0x18)) {
            lVar18 = lVar12 + 0x20 + (long)(int)uVar8 * 0x178;
            *(short *)(lVar18 + 4) = *(short *)((long)unaff_x19 + 0x6bc) + -0x2000;
            *(long *)(lVar18 + 0x20) = unaff_x19[0x20];
            *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x24];
            if ((unaff_x19[0xd6] != 0) && (lVar18 = FUN_08325f94(unaff_x19[0xd6],0), lVar18 != 0)) {
              uVar13 = FUN_057d50ec(lVar18,*(undefined4 *)((long)unaff_x19 + 0x6bc),
                                    *(undefined8 *)PTR_DAT_08ff6858);
              if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x20 + (long)(int)uVar8 * 0x178 + 0x10) = uVar13;
                if ((unaff_x19[0x74] != 0) &&
                   (lVar12 = *(long *)(unaff_x19[0x74] + 0x38), lVar12 != 0)) {
                  uVar8 = *(uint *)(unaff_x19 + 0x94);
                  if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                    puVar21 = (undefined4 *)(lVar12 + 0x20 + (long)(int)uVar8 * 0x178);
                    *puVar21 = *(undefined4 *)((long)unaff_x19 + 0x65c);
                    puVar21[2] = iVar9;
                    if (uVar1 < *(uint *)(unaff_x26 + 0x18)) {
                      *(int *)(lVar12 + 0x20 + (long)(int)uVar8 * 0x178 + 0xc) =
                           (*(int *)(lVar24 + (long)(int)uVar1 * 0x10 + 8) - iVar9) + 1;
                      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                      *(undefined4 *)(unaff_x19 + 0x24) = uVar23;
                      uVar22 = uVar1;
                      goto LAB_082d35bc;
                    }
                  }
                  goto LAB_082d4458;
                }
                goto LAB_082d43c0;
              }
              goto LAB_082d4458;
            }
            goto LAB_082d43c0;
          }
          goto LAB_082d4458;
        }
        goto LAB_082d43c0;
      }
      goto LAB_082d4458;
    }
    goto LAB_082d43c0;
  }
LAB_082d28b0:
  lVar18 = unaff_x19[0x20];
  lVar12 = unaff_x19[0x23];
  uStack000000000000014c = 0;
  if (*(int *)((long)unaff_x19 + 0x65c) != 0) goto LAB_082d2978;
  uVar1 = *(uint *)((long)unaff_x19 + 0x284);
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 >> 5 & 1) != 0) goto LAB_082d28d8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = FUN_0745015c(uVar8,0);
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar8 = FUN_074505fc(uVar8,0);
        goto LAB_082d2974;
      }
    }
  }
  else {
LAB_082d28d8:
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar11 = System_Threading_Monitor__TryEnter(uVar8,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar8 = FUN_07450484(uVar8,0);
LAB_082d2974:
      uVar8 = uVar8 & 0xffff;
    }
  }
LAB_082d2978:
  uVar1 = uVar22 + 1;
  if ((int)uVar1 < (int)*(uint *)(unaff_x26 + 0x18)) {
    if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_082d4458;
    uVar29 = *(uint *)(lVar24 + (long)(int)uVar1 * 0x10 + 4);
  }
  else {
    uVar29 = 0;
  }
  uStack0000000000000024 = uVar8;
  if (*(char *)((long)unaff_x19 + 0x33b) == '\0') {
LAB_082d2afc:
    lVar16 = FUN_0830d168();
    if (lVar16 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar22) goto LAB_082d4458;
      FUN_0830d810();
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      iVar9 = FUN_08322014(0);
      bVar5 = *(uint *)(unaff_x26 + 0x18) <= uVar22;
      if (iVar9 == 0) {
        if (bVar5) goto LAB_082d4458;
        uStack0000000000000024 = 0x25a1;
      }
      else {
        if (bVar5) goto LAB_082d4458;
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = FUN_08322014(0);
      }
      *puVar28 = uStack0000000000000024;
      lVar16 = unaff_x19[0x20];
      if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar16 = FUN_082eacf4(uStack0000000000000024,lVar16,1,0,400,(long)&stack0x00000148 + 4,0);
      if (lVar16 == 0) {
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar16 = FUN_08322588(0);
        if (lVar16 != 0) {
          if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          lVar16 = FUN_08322588(0);
          if (lVar16 == 0) goto LAB_082d43c0;
          if (0 < *(int *)(lVar16 + 0x18)) {
            lVar16 = unaff_x19[0x20];
            if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            uVar13 = FUN_08322588(0);
            if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
              thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
            }
            lVar16 = FUN_082eb454(uStack0000000000000024,lVar16,uVar13,1,0,400,
                                  (long)&stack0x00000148 + 4,0);
            if (lVar16 != 0) goto LAB_082d2f0c;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar13 = FUN_08322188(0);
        if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
        }
        uVar11 = FUN_0858816c(uVar13,0,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar13 = FUN_08322188(0);
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
          }
          lVar16 = FUN_082eacf4(uStack0000000000000024,uVar13,1,0,400,(long)&stack0x00000148 + 4,0);
          if (lVar16 != 0) goto LAB_082d2f0c;
        }
        if (*(uint *)(unaff_x26 + 0x18) <= uVar22) goto LAB_082d4458;
        *puVar28 = 0x20;
        lVar16 = unaff_x19[0x20];
        if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = 0x20;
        lVar16 = FUN_082eacf4(0x20,lVar16,1,0,400,(long)&stack0x00000148 + 4,0);
        if (lVar16 == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar22) goto LAB_082d4458;
          *puVar28 = 3;
          lVar16 = unaff_x19[0x20];
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uStack0000000000000024 = 3;
          lVar16 = FUN_082eacf4(3,lVar16,1,0,400,(long)&stack0x00000148 + 4,0);
        }
      }
LAB_082d2f0c:
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = FUN_0832212c(0);
      if ((uVar11 & 1) == 0) {
        plVar26 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,4);
        if (uVar8 >> 0x10 == 0) {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar8);
          lVar19 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
          if (plVar26 == (long *)0x0) goto LAB_082d43c0;
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar20 == 0))
          goto LAB_082d445c;
          if ((int)plVar26[3] == 0) goto LAB_082d4458;
          plVar26[4] = lVar19;
          if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
          lVar19 = thunk_FUN_0858dfc0(unaff_x19[0x1f],0);
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar20 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar26 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
          plVar26[5] = lVar19;
          if (lVar16 == 0) goto LAB_082d43c0;
          in_stack_000000e0 = *(undefined4 *)(lVar16 + 0x14);
          lVar19 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar20 == 0))
          goto LAB_082d445c;
          if (*(uint *)(plVar26 + 3) < 3) goto LAB_082d4458;
          plVar26[6] = lVar19;
          lVar19 = thunk_FUN_0858dfc0();
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar20 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar26 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
          plVar26[7] = lVar19;
          puVar17 = (undefined8 *)PTR_DAT_08ff6898;
        }
        else {
          in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar8);
          lVar19 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
          if (plVar26 == (long *)0x0) goto LAB_082d43c0;
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar20 == 0))
          goto LAB_082d445c;
          if ((int)plVar26[3] == 0) goto LAB_082d4458;
          plVar26[4] = lVar19;
          if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
          lVar19 = thunk_FUN_0858dfc0(unaff_x19[0x1f],0);
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar20 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar26 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
          plVar26[5] = lVar19;
          if (lVar16 == 0) goto LAB_082d43c0;
          in_stack_000000e0 = *(undefined4 *)(lVar16 + 0x14);
          lVar19 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar20 == 0))
          goto LAB_082d445c;
          if (*(uint *)(plVar26 + 3) < 3) goto LAB_082d4458;
          plVar26[6] = lVar19;
          lVar19 = thunk_FUN_0858dfc0();
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0406ddbc(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar20 == 0))
          goto LAB_082d445c;
          if ((*(uint *)(plVar26 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
          plVar26[7] = lVar19;
          puVar17 = (undefined8 *)PTR_DAT_08ff6890;
        }
        uVar13 = FUN_0736a31c(*puVar17,plVar26,0);
        if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_085392e4(uVar13);
      }
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar11 = FUN_0832c2a4(uVar8,0);
    if (((uVar11 & 1) == 0) || (uVar29 == 0xfe0e)) {
      if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = FUN_0832c224(uVar8,0);
      if (((uVar11 & 1) == 0) || (uVar29 != 0xfe0f)) goto LAB_082d2afc;
    }
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar16 = FUN_08322990(0);
    if (lVar16 == 0) goto LAB_082d2afc;
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar16 = FUN_08322990(0);
    if (lVar16 == 0) goto LAB_082d43c0;
    if (*(int *)(lVar16 + 0x18) < 1) goto LAB_082d2afc;
    lVar16 = unaff_x19[0x20];
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar13 = FUN_08322990(0);
    lVar19 = unaff_x19[0x50];
    lVar20 = unaff_x19[0x47];
    if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
    }
    lVar16 = FUN_082eb668(uVar8,lVar16,uVar13,1,(int)lVar19,(int)lVar20,(long)&stack0x00000148 + 4,0
                         );
    if (lVar16 == 0) goto LAB_082d2afc;
  }
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
  goto LAB_082d43c0;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
  *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) = 0;
  if (lVar16 == 0) goto LAB_082d43c0;
  if (*(char *)(lVar16 + 0x10) == '\x01') {
    if (*(long *)(lVar16 + 0x18) == 0) goto LAB_082d43c0;
    iVar9 = FUN_082d75b4(*(long *)(lVar16 + 0x18),0);
    if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
    iVar10 = FUN_082d75b4(unaff_x19[0x20],0);
    bVar5 = iVar9 != iVar10;
    if (bVar5) {
      plVar26 = *(long **)(lVar16 + 0x18);
      if (plVar26 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1610 + 0x130);
        if (*(byte *)(*plVar26 + 0x130) < bVar2) {
          plVar26 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)PTR_DAT_08fc1610) {
          plVar26 = (long *)0x0;
        }
      }
      unaff_x19[0x20] = (long)plVar26;
    }
    if ((uVar29 >> 4 == 0xfe0) || (uVar29 - 0xe0100 < 0xf0)) {
      if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
      iVar9 = FUN_082e450c(unaff_x19[0x20],uStack0000000000000024,uVar29,0);
      if (iVar9 != 0) {
        if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
        uVar11 = FUN_082e6834(unaff_x19[0x20],iVar9,&stack0x00000130,0);
        if ((uVar11 & 1) != 0) {
          if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
          goto LAB_082d43c0;
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
          *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) =
               in_stack_00000130;
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_082d4458;
      *(undefined4 *)(lVar24 + (long)(int)uVar1 * 0x10 + 4) = 0x1a;
      uVar22 = uVar1;
    }
    if ((in_stack_00000020 & 1) != 0) {
      if (((unaff_x19[0x20] == 0) || (lVar19 = *(long *)(unaff_x19[0x20] + 0x178), lVar19 == 0)) ||
         (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_082d43c0;
      uVar11 = FUN_070b305c(lVar19,*(undefined4 *)(lVar16 + 0x28),&stack0x00000138,
                            *(undefined8 *)PTR_DAT_08ff6838);
      if ((uVar11 & 1) == 0) goto LAB_082d345c;
      if (in_stack_00000138 == 0) goto LAB_082d3af0;
      iVar9 = 0;
      while (iVar9 < *(int *)(in_stack_00000138 + 0x18)) {
        auVar35 = FUN_057805a8(in_stack_00000138,iVar9,*(undefined8 *)PTR_DAT_08ff6860);
        lVar19 = auVar35._0_8_;
        if (lVar19 == 0) goto LAB_082d43c0;
        uVar11 = *(ulong *)(lVar19 + 0x18);
        iVar10 = (int)uVar11;
        if (1 < iVar10) {
          lVar20 = 0;
          do {
            uVar8 = uVar22 + 1 + (int)lVar20;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_082d4458;
            if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
            iVar6 = FUN_082e4430(unaff_x19[0x20],
                                 *(undefined4 *)(lVar24 + (long)(int)uVar8 * 0x10 + 4),0);
            if (*(uint *)(lVar19 + 0x18) <= (int)lVar20 + 1U) goto LAB_082d4458;
            if (iVar6 != *(int *)(lVar19 + 0x24 + lVar20 * 4)) goto LAB_082d338c;
            lVar20 = lVar20 + 1;
          } while (iVar10 + -1 != (int)lVar20);
        }
        if (auVar35._8_4_ != 0) {
          if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
          uVar30 = FUN_082e6834(unaff_x19[0x20],auVar35._8_8_ & 0xffffffff,&stack0x00000128,0);
          if ((uVar30 & 1) != 0) {
            if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
            goto LAB_082d43c0;
            if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
            *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) =
                 in_stack_00000128;
            if (iVar10 < 1) goto LAB_082d3454;
            uVar30 = 0;
            goto LAB_082d3410;
          }
        }
LAB_082d338c:
        iVar9 = iVar9 + 1;
        if (in_stack_00000138 == 0) goto LAB_082d43c0;
      }
    }
  }
  else {
    bVar5 = false;
  }
  goto LAB_082d345c;
LAB_082d3410:
  do {
    if (uVar30 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar22) goto LAB_082d4458;
      *(int *)(lVar24 + (long)(int)uVar22 * 0x10 + 0xc) = iVar10;
    }
    else {
      uVar8 = uVar22 + (int)uVar30;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_082d4458;
      *(undefined4 *)(lVar24 + (long)(int)uVar8 * 0x10 + 4) = 0x1a;
    }
    uVar30 = uVar30 + 1;
  } while ((uVar11 & 0xffffffff) != uVar30);
LAB_082d3454:
  uVar22 = (uVar22 + iVar10) - 1;
LAB_082d345c:
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
  goto LAB_082d43c0;
  uVar8 = *(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_082d4458;
  puVar21 = (undefined4 *)(lVar19 + 0x20 + (long)(int)uVar8 * 0x178);
  *puVar21 = 0;
  *(long *)(puVar21 + 4) = lVar16;
  *(short *)(puVar21 + 1) = (short)uStack0000000000000024;
  *(undefined1 *)(puVar21 + 0xd) = uStack000000000000014c;
  if (*(uint *)(unaff_x26 + 0x18) <= uVar22) goto LAB_082d4458;
  lVar20 = lVar19 + 0x20 + (long)(int)uVar8 * 0x178;
  *(undefined8 *)(lVar20 + 8) = *(undefined8 *)(lVar24 + (long)(int)uVar22 * 0x10 + 8);
  lVar19 = unaff_x19[0x20];
  *(long *)(lVar20 + 0x20) = lVar19;
  puVar4 = PTR_DAT_08fc16b0;
  if (*(char *)(lVar16 + 0x10) == '\x02') {
    plVar26 = *(long **)(lVar16 + 0x18);
    if (plVar26 == (long *)0x0) goto LAB_082d43c0;
    bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1658 + 0x130);
    if ((*(byte *)(*plVar26 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08fc1658))
    goto LAB_082d43c0;
    lVar18 = plVar26[0x11];
    lVar12 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar8 = FUN_082c63fc(lVar18,plVar26,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    lVar12 = *(long *)puVar4;
    *(uint *)(unaff_x19 + 0x24) = uVar8;
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 == 0) goto LAB_082d43c0;
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_082d4458;
    lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
    *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
    if ((unaff_x19[0x74] == 0) || (lVar12 = *(long *)(unaff_x19[0x74] + 0x38), lVar12 == 0))
    goto LAB_082d43c0;
    uVar8 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_082d4458;
    lVar12 = lVar12 + (long)(int)uVar8 * 0x178;
    *(undefined4 *)(lVar12 + 0x20) = 1;
    *(int *)(lVar12 + 0x50) = (int)unaff_x19[0x24];
    *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar23;
LAB_082d35bc:
    iStack0000000000000038 = iStack0000000000000038 + 1;
    goto LAB_082d3ad0;
  }
  if (bVar5) {
    if (lVar19 == 0) goto LAB_082d43c0;
    iVar9 = FUN_082d75b4(lVar19,0);
    if (unaff_x19[0x1f] == 0) goto LAB_082d43c0;
    iVar10 = FUN_082d75b4(unaff_x19[0x1f],0);
    if (iVar9 != iVar10) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = FUN_08322644(0);
      if ((uVar11 & 1) == 0) {
        lVar19 = unaff_x19[0x20];
        if (lVar19 == 0) goto LAB_082d43c0;
        lVar20 = *(long *)(lVar19 + 0x88);
      }
      else {
        if (unaff_x19[0x20] == 0) goto LAB_082d43c0;
        lVar19 = unaff_x19[0x23];
        uVar13 = *(undefined8 *)(unaff_x19[0x20] + 0x88);
        if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar20 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorHover
                           (lVar19,uVar13,0);
        lVar19 = unaff_x19[0x20];
      }
      puVar4 = PTR_DAT_08fc16b0;
      unaff_x19[0x23] = lVar20;
      lVar14 = *(long *)puVar4;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar14 = *(long *)puVar4;
      }
      uVar7 = FUN_082c61e4(lVar20,lVar19,*(long *)(lVar14 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x24) = uVar7;
    }
  }
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
  goto LAB_082d43c0;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
  lVar19 = *(long *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38);
  if ((lVar19 == 0) && (lVar19 = *(long *)(lVar16 + 0x20), lVar19 == 0)) goto LAB_082d43c0;
  iVar9 = FUN_086475ac(lVar19,0);
  if (0 < iVar9) {
    lVar16 = unaff_x19[0x20];
    lVar19 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar16 = FUN_0831d274(lVar16,lVar19,iVar9,0);
    puVar4 = PTR_DAT_08fc16b0;
    unaff_x19[0x23] = lVar16;
    lVar20 = unaff_x19[0x20];
    lVar19 = *(long *)puVar4;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar19 = *(long *)puVar4;
    }
    uVar7 = FUN_082c61e4(lVar16,lVar20,*(long *)(lVar19 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar7;
  }
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar11 = FUN_0744db94(uStack0000000000000024,0);
  puVar4 = PTR_DAT_08fc16b0;
  if (((uVar11 & 1) == 0) && (uStack0000000000000024 != 0x200b)) {
    lVar16 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar16 = *(long *)puVar4;
    }
    lVar19 = **(long **)(lVar16 + 0xb8);
    if (lVar19 == 0) goto LAB_082d43c0;
    uVar8 = *(uint *)(unaff_x19 + 0x24);
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_082d4458;
    if (*(int *)(lVar19 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        plVar26 = *(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
        goto Unity_VisualScripting_CoroutineRunner__Awake;
      }
LAB_082d3964:
      uVar8 = *(uint *)(unaff_x19 + 0x24);
    }
    else {
      if (bVar5) {
        if (unaff_x19[0xf7] == 0) goto LAB_082d43c0;
        uVar11 = FUN_06ee3b1c(unaff_x19[0xf7],(long)(int)uVar8,(long)&stack0x00000120 + 4,
                              *(undefined8 *)PTR_DAT_08fc5190);
        puVar4 = PTR_DAT_08fc16b0;
        if ((uVar11 & 1) == 0) {
LAB_082d3890:
          lVar16 = unaff_x19[0x23];
          uVar13 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
          FUN_0854ff98(uVar13,lVar16,0);
          puVar4 = PTR_DAT_08fc16b0;
          lVar19 = unaff_x19[0x20];
          lVar16 = *(long *)PTR_DAT_08fc16b0;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar16 = *(long *)puVar4;
          }
          uVar8 = FUN_082c61e4(uVar13,lVar19,*(long *)(lVar16 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
          if (unaff_x19[0xf7] == 0) goto LAB_082d43c0;
          FUN_06ee2204(unaff_x19[0xf7],(int)unaff_x19[0x24],uVar8,*(undefined8 *)PTR_DAT_08f7cfc8);
          lVar16 = *(long *)PTR_DAT_08fc16b0;
        }
        else {
          lVar16 = *(long *)PTR_DAT_08fc16b0;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar16 = *(long *)puVar4;
          }
          lVar19 = **(long **)(lVar16 + 0xb8);
          if (lVar19 == 0) goto LAB_082d43c0;
          if (*(uint *)(lVar19 + 0x18) <= in_stack_00000120._4_4_) goto LAB_082d4458;
          uVar8 = in_stack_00000120._4_4_;
          if (0x3ffe < *(int *)(lVar19 + (long)(int)in_stack_00000120._4_4_ * 0x38 + 0x54))
          goto LAB_082d3890;
        }
        *(uint *)(unaff_x19 + 0x24) = uVar8;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar16 = *(long *)PTR_DAT_08fc16b0;
        }
        plVar26 = *(long **)(lVar16 + 0xb8);
Unity_VisualScripting_CoroutineRunner__Awake:
        lVar19 = *plVar26;
        if (lVar19 == 0) goto LAB_082d43c0;
        goto LAB_082d3964;
      }
      lVar16 = unaff_x19[0x23];
      uVar13 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
      FUN_0854ff98(uVar13,lVar16,0);
      puVar4 = PTR_DAT_08fc16b0;
      lVar19 = unaff_x19[0x20];
      lVar16 = *(long *)PTR_DAT_08fc16b0;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar16 = *(long *)puVar4;
      }
      uVar8 = FUN_082c61e4(uVar13,lVar19,*(long *)(lVar16 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
      lVar16 = *(long *)puVar4;
      *(uint *)(unaff_x19 + 0x24) = uVar8;
      lVar19 = **(long **)(lVar16 + 0xb8);
      if (lVar19 == 0) goto LAB_082d43c0;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_082d4458;
    lVar19 = lVar19 + (long)(int)uVar8 * 0x38;
    *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
  }
  if ((unaff_x19[0x74] == 0) || (lVar16 = *(long *)(unaff_x19[0x74] + 0x38), lVar16 == 0))
  goto LAB_082d43c0;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_082d4458;
  lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178;
  *(long *)(lVar16 + 0x48) = unaff_x19[0x23];
  *(int *)(lVar16 + 0x50) = (int)unaff_x19[0x24];
  puVar4 = PTR_DAT_08fc16b0;
  lVar16 = *(long *)PTR_DAT_08fc16b0;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar16 = *(long *)puVar4;
  }
  lVar19 = **(long **)(lVar16 + 0xb8);
  if (lVar19 == 0) goto LAB_082d43c0;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x24)) goto LAB_082d4458;
  *(bool *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38 + 0x41) = bVar5;
  if (bVar5) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar19 = **(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
      if (lVar19 == 0) goto LAB_082d43c0;
    }
    if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x24)) goto LAB_082d4458;
    *(long *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38 + 0x48) = lVar12;
    unaff_x19[0x23] = lVar12;
    unaff_x19[0x20] = lVar18;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar23;
  }
  uVar8 = *(uint *)(unaff_x19 + 0x94);
LAB_082d3ad0:
  *(uint *)(unaff_x19 + 0x94) = uVar8 + 1;
LAB_082d3ad8:
  uVar8 = *(uint *)(unaff_x26 + 0x18);
  uVar22 = uVar22 + 1;
  if ((int)uVar8 <= (int)uVar22) goto LAB_082d3af0;
  goto LAB_082d266c;
}


