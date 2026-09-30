/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$Awake
ENTRY_POINT: 037205a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Samples_SampleMetadata__Awake
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long in_x9;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  uint uVar21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar22;
  undefined8 *unaff_x25;
  undefined8 unaff_x27;
  long lVar23;
  undefined8 unaff_x28;
  int unaff_w29;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float unaff_s11;
  float fVar42;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
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
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  long in_stack_000003f0;
  long in_stack_000003f8;
  long in_stack_00000400;
  uint in_stack_0000049c;
  int in_stack_000004a0;
  int in_stack_000004a4;
  ulong uVar36;
  
  uVar28 = param_4._8_8_;
  uVar27 = param_4._0_8_;
  uVar32 = param_3._8_8_;
  uVar31 = param_3._0_8_;
  uVar38 = param_2._8_8_;
  uVar35 = param_2._0_8_;
  uVar41 = param_1._8_8_;
  uVar39 = param_1._0_8_;
  do {
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(in_x9 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = uVar35;
    uVar37 = uVar31;
    FUN_03720cd8(unaff_x27,unaff_x28,in_stack_00000090);
    fVar34 = (float)uVar37;
    fVar30 = (float)uVar14;
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    if ((int)uVar3 <= (int)unaff_w22) {
      do {
        uVar11 = FUN_02cbb364(&stack0x000003e0,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_2__
                             );
        if ((uVar11 & 1) == 0) {
          FUN_02cbb360(&stack0x000003e0,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_0__
                      );
          plVar15 = (long *)FUN_0371e3dc();
          if (((unaff_x24 == 0) || (in_stack_00000090 == 0)) || (plVar15 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 == 0) goto LAB_037206a8;
          piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03720690;
        }
        if (in_stack_000003f0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        in_stack_00000088 = FUN_040cc278(in_stack_000003f0,0);
        uVar32 = unaff_x25[5];
        uVar31 = unaff_x25[4];
        uVar28 = unaff_x25[7];
        uVar27 = unaff_x25[6];
        uVar41 = unaff_x25[1];
        uVar39 = *unaff_x25;
        uVar38 = unaff_x25[3];
        uVar35 = unaff_x25[2];
        lVar12 = FUN_040703d4(in_stack_000003f0,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = FUN_04073258(lVar12,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407cee0(&stack0x000002a0,lVar12,0);
        in_stack_00000160 = in_stack_000002a0;
        in_stack_00000168 = in_stack_000002a8;
        in_stack_00000170 = in_stack_000002b0;
        in_stack_00000178 = in_stack_000002b8;
        in_stack_00000180 = in_stack_000002c0;
        in_stack_00000188 = in_stack_000002c8;
        in_stack_00000190 = in_stack_000002d0;
        in_stack_00000198 = in_stack_000002d8;
        in_stack_000001a0 = uVar39;
        in_stack_000001a8 = uVar41;
        in_stack_000001b0 = uVar35;
        in_stack_000001b8 = uVar38;
        in_stack_000001c0 = uVar31;
        in_stack_000001c8 = uVar32;
        in_stack_000001d0 = uVar27;
        in_stack_000001d8 = uVar28;
        FUN_04064d0c(&stack0x000002a0,&stack0x000001a0,&stack0x00000160,0);
        if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar14 = in_stack_000002b0;
        uVar37 = in_stack_000002c0;
        iVar9 = FUN_040cca3c(in_stack_00000088,0);
        fVar33 = (float)uVar37;
        fVar42 = (float)uVar14;
        iVar10 = FUN_040cca3c(in_stack_00000088,0);
        lVar12 = FUN_040ccb54(in_stack_00000088,0,0,iVar9,iVar10,0);
        fVar24 = (float)FUN_040ccab4(in_stack_00000088,0);
        lVar13 = *unaff_x21;
        fVar30 = fVar42;
        fVar34 = fVar33;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar13 = *unaff_x21;
        }
        if (in_stack_00000090 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar23 = (long)(int)in_stack_0000049c;
        if (*(uint *)(in_stack_00000090 + 0x18) <= in_stack_0000049c) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        iVar17 = *(int *)(*(long *)(lVar13 + 0xb8) + 0xc);
        *(undefined4 *)(in_stack_00000090 + lVar23 * 0x1c + 0x30) = 0;
        iVar6 = 0;
        if (iVar17 != 0) {
          iVar6 = (iVar9 + -1) / iVar17;
        }
        iVar7 = 0;
        if (iVar17 != 0) {
          iVar7 = (iVar10 + -1) / iVar17;
        }
        uVar14 = FUN_035c41f0((long)(iVar6 * iVar7 * 2),0);
        if (*(uint *)(in_stack_00000090 + 0x18) <= in_stack_0000049c) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(in_stack_00000090 + lVar23 * 0x1c + 0x28) = uVar14;
        uVar14 = FUN_035c41f0((long)in_stack_000004a0,0);
        if (*(uint *)(in_stack_00000090 + 0x18) <= in_stack_0000049c) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(in_stack_00000090 + lVar23 * 0x1c + 0x20) = uVar14;
        if (in_stack_000003f8 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          if (*(long *)(in_stack_000003f8 + 0x18) != 0) {
            if ((int)*(long *)(in_stack_000003f8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(long *)(in_stack_000003f8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            UnityEngine_EventSystems_OVRInputModule__ClearSelection();
            if (*(int *)(in_stack_000003f8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(long *)(in_stack_000003f8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(in_stack_00000090 + 0x18) <= in_stack_0000049c) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar14 = *(undefined8 *)(*(long *)(in_stack_000003f8 + 0x20) + 0x20);
          }
        }
        uVar3 = iVar6 + 1;
        *(undefined8 *)(in_stack_00000090 + lVar23 * 0x1c + 0x34) = uVar14;
        if (0 < iVar7 + 1) {
          fVar29 = (float)iVar17;
          uVar11 = (ulong)(uint)fVar29;
          fVar33 = fVar33 / (float)(iVar10 + -1);
          uVar36 = (ulong)(uint)fVar33;
          iVar10 = 0;
          uVar21 = in_stack_000004a4 * 3;
          do {
            if (0 < (int)uVar3) {
              uVar22 = 0;
              uVar1 = uVar21;
              do {
                lVar13 = *unaff_x21;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar13 = *unaff_x21;
                }
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                iVar17 = *(int *)(*(long *)(lVar13 + 0xb8) + 0xc);
                uVar4 = iVar17 * (int)uVar22;
                if (**(uint **)(lVar12 + 0x10) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                lVar13 = *(long *)(*(uint **)(lVar12 + 0x10) + 4);
                uVar5 = iVar17 * iVar10;
                if ((uint)lVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar36 = (ulong)(uint)(fVar33 * fVar29 * (float)(int)uVar22);
                uVar11 = (ulong)(uint)(fVar42 * *(float *)(lVar12 + ((long)(int)uVar5 +
                                                                    lVar13 * (int)uVar4) * 4 + 0x20)
                                      );
                uVar25 = FUN_04065130((fVar24 / (float)(iVar9 + -1)) * fVar29 * (float)iVar10,
                                      &stack0x000003a0,0);
                if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar4 = *(uint *)(unaff_x23 + 0x18);
                if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined4 *)(unaff_x23 + (long)(int)uVar1 * 4 + 0x20) = uVar25;
                if (uVar4 <= uVar1 + 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar5 = uVar1 + 2;
                *(int *)(unaff_x23 + (long)(int)(uVar1 + 1) * 4 + 0x20) = (int)uVar11;
                if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar22 = uVar22 + 1;
                uVar1 = uVar1 + 3;
                *(int *)(unaff_x23 + (long)(int)uVar5 * 4 + 0x20) = (int)uVar36;
              } while (uVar3 != uVar22);
            }
            fVar34 = (float)uVar36;
            fVar30 = (float)uVar11;
            bVar8 = iVar10 != iVar7;
            iVar10 = iVar10 + 1;
            uVar21 = uVar21 + iVar6 * 3 + 3;
          } while (bVar8);
        }
        if (0 < iVar7) {
          iVar9 = 0;
          do {
            if (0 < iVar6) {
              iVar17 = 0;
              iVar10 = in_stack_000004a4 + (iVar9 + 1) * uVar3;
              iVar19 = in_stack_000004a4 + iVar9 * uVar3;
              iVar20 = iVar6;
              do {
                if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar21 = *(uint *)(unaff_x24 + 0x18);
                if (uVar21 <= (uint)(in_stack_000004a0 + iVar17)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar1 = in_stack_000004a0 + iVar17 + 1;
                *(int *)(unaff_x24 + (long)(in_stack_000004a0 + iVar17) * 4 + 0x20) = iVar19;
                if (uVar21 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar4 = in_stack_000004a0 + iVar17 + 2;
                *(int *)(unaff_x24 + (long)(int)uVar1 * 4 + 0x20) = iVar10;
                if (uVar21 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar1 = in_stack_000004a0 + iVar17 + 3;
                iVar2 = iVar19 + 1;
                *(int *)(unaff_x24 + (long)(int)uVar4 * 4 + 0x20) = iVar2;
                if (uVar21 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar4 = in_stack_000004a0 + iVar17 + 4;
                *(int *)(unaff_x24 + (long)(int)uVar1 * 4 + 0x20) = iVar10;
                if (uVar21 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar1 = in_stack_000004a0 + iVar17 + 5;
                iVar10 = iVar10 + 1;
                *(int *)(unaff_x24 + (long)(int)uVar4 * 4 + 0x20) = iVar10;
                if (uVar21 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                iVar17 = iVar17 + 6;
                iVar20 = iVar20 + -1;
                iVar19 = iVar19 + 1;
                *(int *)(unaff_x24 + (long)(int)uVar1 * 4 + 0x20) = iVar2;
              } while (iVar20 != 0);
              in_stack_000004a0 = in_stack_000004a0 + iVar17;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar7);
        }
        unaff_w29 = 0x28;
        in_stack_0000049c = in_stack_0000049c + 1;
        in_stack_000004a4 = in_stack_000004a4 + (iVar7 + 1) * uVar3;
        unaff_x19 = FUN_040cccf0(in_stack_00000088,0);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = *(uint *)(unaff_x19 + 0x18);
        unaff_x25 = in_stack_00000050;
      } while ((int)uVar3 < 1);
      unaff_w22 = 0;
      unaff_x27 = in_stack_00000048;
      unaff_x28 = in_stack_00000040;
      in_stack_00000078 = in_stack_00000400;
      in_stack_00000080 = in_stack_000003f0;
    }
    if (uVar3 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar12 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w29;
    fVar42 = *(float *)(lVar12 + 0x20);
    fVar33 = *(float *)(lVar12 + 0x24);
    fVar29 = *(float *)(lVar12 + 0x28);
    unaff_w20 = *(uint *)(lVar12 + 0x40);
    fVar24 = (float)FUN_040ccab4(in_stack_00000088,0);
    lVar12 = FUN_040703d4(in_stack_00000080,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = FUN_04073258(lVar12,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0407cee0(&stack0x000002e0,lVar12,0);
    uVar14 = uVar35;
    uVar37 = uVar31;
    uVar40 = uVar27;
    fVar26 = (float)FUN_040649bc(&stack0x00000360,3,0);
    FUN_04065038(fVar42 * fVar24 + fVar26,fVar33 * fVar30 + (float)uVar14,
                 fVar29 * fVar34 + (float)uVar37,(float)uVar40 + unaff_s11,&stack0x00000360,3,0);
    in_stack_00000148 = unaff_x25[5];
    in_stack_00000140 = unaff_x25[4];
    in_stack_00000158 = unaff_x25[7];
    in_stack_00000150 = unaff_x25[6];
    in_stack_00000128 = unaff_x25[1];
    in_stack_00000120 = *unaff_x25;
    in_stack_00000138 = unaff_x25[3];
    in_stack_00000130 = unaff_x25[2];
    in_stack_000000e0 = uVar39;
    in_stack_000000e8 = uVar41;
    in_stack_000000f0 = uVar35;
    in_stack_000000f8 = uVar38;
    in_stack_00000100 = uVar31;
    in_stack_00000108 = uVar32;
    in_stack_00000110 = uVar27;
    in_stack_00000118 = uVar28;
    FUN_04064d0c(&stack0x000002e0,&stack0x00000120,&stack0x000000e0,0);
    in_x9 = in_stack_00000078;
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar18 = piVar18 + 4;
    if (uVar11 == 0) break;
LAB_03720690:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__) {
      puVar16 = (undefined8 *)(lVar12 + (long)(*piVar18 + 4) * 0x10 + 0x138);
      goto LAB_037206c8;
    }
  }
LAB_037206a8:
  puVar16 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__
                         ,4);
LAB_037206c8:
  (*(code *)*puVar16)(plVar15,in_stack_00000038);
  return;
}


