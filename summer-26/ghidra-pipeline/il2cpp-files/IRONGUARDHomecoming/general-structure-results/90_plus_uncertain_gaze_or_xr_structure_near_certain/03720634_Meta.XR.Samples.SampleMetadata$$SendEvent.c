/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 03720634
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
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
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  long *unaff_x21;
  uint uVar22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar23;
  undefined8 *unaff_x25;
  long lVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  ulong uVar31;
  undefined8 uVar33;
  float fVar34;
  ulong uVar35;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float unaff_s11;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  long in_stack_00000090;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
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
  ulong in_stack_00000170;
  undefined8 in_stack_00000178;
  ulong in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001b8;
  ulong in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  ulong in_stack_000002b0;
  undefined8 in_stack_000002b8;
  ulong in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  long in_stack_000003f0;
  long in_stack_000003f8;
  long in_stack_00000400;
  uint in_stack_0000049c;
  int in_stack_000004a0;
  int in_stack_000004a4;
  ulong uVar32;
  ulong uVar36;
  
  while (uVar11 = FUN_02cbb364(&stack0x000003e0,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_2__
                              ), (uVar11 & 1) != 0) {
    if (in_stack_000003f0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = FUN_040cc278(in_stack_000003f0,0);
    uVar33 = unaff_x25[5];
    uVar11 = unaff_x25[4];
    uVar29 = unaff_x25[7];
    uVar28 = unaff_x25[6];
    uVar39 = unaff_x25[1];
    uVar38 = *unaff_x25;
    uVar37 = unaff_x25[3];
    uVar35 = unaff_x25[2];
    lVar13 = FUN_040703d4(in_stack_000003f0,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = FUN_04073258(lVar13,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0407cee0(&stack0x000002a0,lVar13,0);
    in_stack_00000160 = in_stack_000002a0;
    in_stack_00000168 = in_stack_000002a8;
    in_stack_00000170 = in_stack_000002b0;
    in_stack_00000178 = in_stack_000002b8;
    in_stack_00000180 = in_stack_000002c0;
    in_stack_00000188 = in_stack_000002c8;
    in_stack_00000190 = in_stack_000002d0;
    in_stack_00000198 = in_stack_000002d8;
    in_stack_000001a0 = uVar38;
    in_stack_000001a8 = uVar39;
    in_stack_000001b0 = uVar35;
    in_stack_000001b8 = uVar37;
    in_stack_000001c0 = uVar11;
    in_stack_000001c8 = uVar33;
    in_stack_000001d0 = uVar28;
    in_stack_000001d8 = uVar29;
    FUN_04064d0c(&stack0x000002a0,&stack0x000001a0,&stack0x00000160,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar31 = in_stack_000002b0;
    uVar23 = in_stack_000002c0;
    iVar9 = FUN_040cca3c(lVar12,0);
    iVar10 = FUN_040cca3c(lVar12,0);
    lVar13 = FUN_040ccb54(lVar12,0,0,iVar9,iVar10,0);
    fVar25 = (float)FUN_040ccab4(lVar12,0);
    lVar14 = *unaff_x21;
    uVar32 = uVar31;
    uVar36 = uVar23;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *unaff_x21;
    }
    if (in_stack_00000090 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar24 = (long)(int)in_stack_0000049c;
    if (*(uint *)(in_stack_00000090 + 0x18) <= in_stack_0000049c) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    iVar18 = *(int *)(*(long *)(lVar14 + 0xb8) + 0xc);
    *(undefined4 *)(in_stack_00000090 + lVar24 * 0x1c + 0x30) = 0;
    iVar6 = 0;
    if (iVar18 != 0) {
      iVar6 = (iVar9 + -1) / iVar18;
    }
    iVar7 = 0;
    if (iVar18 != 0) {
      iVar7 = (iVar10 + -1) / iVar18;
    }
    uVar15 = FUN_035c41f0((long)(iVar6 * iVar7 * 2),0);
    if (*(uint *)(in_stack_00000090 + 0x18) <= in_stack_0000049c) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(in_stack_00000090 + lVar24 * 0x1c + 0x28) = uVar15;
    uVar15 = FUN_035c41f0((long)in_stack_000004a0,0);
    if (*(uint *)(in_stack_00000090 + 0x18) <= in_stack_0000049c) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(in_stack_00000090 + lVar24 * 0x1c + 0x20) = uVar15;
    if (in_stack_000003f8 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
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
        uVar15 = *(undefined8 *)(*(long *)(in_stack_000003f8 + 0x20) + 0x20);
      }
    }
    uVar1 = iVar6 + 1;
    *(undefined8 *)(in_stack_00000090 + lVar24 * 0x1c + 0x34) = uVar15;
    if (0 < iVar7 + 1) {
      fVar30 = (float)iVar18;
      uVar32 = (ulong)(uint)fVar30;
      fVar34 = (float)uVar23 / (float)(iVar10 + -1);
      uVar36 = (ulong)(uint)fVar34;
      iVar10 = 0;
      uVar22 = in_stack_000004a4 * 3;
      do {
        if (0 < (int)uVar1) {
          uVar23 = 0;
          uVar2 = uVar22;
          do {
            lVar14 = *unaff_x21;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar14 = *unaff_x21;
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            iVar18 = *(int *)(*(long *)(lVar14 + 0xb8) + 0xc);
            uVar4 = iVar18 * (int)uVar23;
            if (**(uint **)(lVar13 + 0x10) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar14 = *(long *)(*(uint **)(lVar13 + 0x10) + 4);
            uVar5 = iVar18 * iVar10;
            if ((uint)lVar14 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar36 = (ulong)(uint)(fVar34 * fVar30 * (float)(int)uVar23);
            uVar32 = (ulong)(uint)((float)uVar31 *
                                  *(float *)(lVar13 + ((long)(int)uVar5 + lVar14 * (int)uVar4) * 4 +
                                            0x20));
            uVar26 = FUN_04065130((fVar25 / (float)(iVar9 + -1)) * fVar30 * (float)iVar10,
                                  &stack0x000003a0,0);
            if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar4 = *(uint *)(unaff_x23 + 0x18);
            if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined4 *)(unaff_x23 + (long)(int)uVar2 * 4 + 0x20) = uVar26;
            if (uVar4 <= uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar5 = uVar2 + 2;
            *(int *)(unaff_x23 + (long)(int)(uVar2 + 1) * 4 + 0x20) = (int)uVar32;
            if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar23 = uVar23 + 1;
            uVar2 = uVar2 + 3;
            *(int *)(unaff_x23 + (long)(int)uVar5 * 4 + 0x20) = (int)uVar36;
          } while (uVar1 != uVar23);
        }
        bVar8 = iVar10 != iVar7;
        iVar10 = iVar10 + 1;
        uVar22 = uVar22 + iVar6 * 3 + 3;
      } while (bVar8);
    }
    if (0 < iVar7) {
      iVar9 = 0;
      do {
        if (0 < iVar6) {
          iVar18 = 0;
          iVar10 = in_stack_000004a4 + (iVar9 + 1) * uVar1;
          iVar20 = in_stack_000004a4 + iVar9 * uVar1;
          iVar21 = iVar6;
          do {
            if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar22 = *(uint *)(unaff_x24 + 0x18);
            if (uVar22 <= (uint)(in_stack_000004a0 + iVar18)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar2 = in_stack_000004a0 + iVar18 + 1;
            *(int *)(unaff_x24 + (long)(in_stack_000004a0 + iVar18) * 4 + 0x20) = iVar20;
            if (uVar22 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar4 = in_stack_000004a0 + iVar18 + 2;
            *(int *)(unaff_x24 + (long)(int)uVar2 * 4 + 0x20) = iVar10;
            if (uVar22 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar2 = in_stack_000004a0 + iVar18 + 3;
            iVar3 = iVar20 + 1;
            *(int *)(unaff_x24 + (long)(int)uVar4 * 4 + 0x20) = iVar3;
            if (uVar22 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar4 = in_stack_000004a0 + iVar18 + 4;
            *(int *)(unaff_x24 + (long)(int)uVar2 * 4 + 0x20) = iVar10;
            if (uVar22 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar2 = in_stack_000004a0 + iVar18 + 5;
            iVar10 = iVar10 + 1;
            *(int *)(unaff_x24 + (long)(int)uVar4 * 4 + 0x20) = iVar10;
            if (uVar22 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            iVar18 = iVar18 + 6;
            iVar21 = iVar21 + -1;
            iVar20 = iVar20 + 1;
            *(int *)(unaff_x24 + (long)(int)uVar2 * 4 + 0x20) = iVar3;
          } while (iVar21 != 0);
          in_stack_000004a0 = in_stack_000004a0 + iVar18;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar7);
    }
    in_stack_0000049c = in_stack_0000049c + 1;
    in_stack_000004a4 = in_stack_000004a4 + (iVar7 + 1) * uVar1;
    lVar13 = FUN_040cccf0(lVar12,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar13 + 0x18);
    unaff_x25 = in_stack_00000050;
    if (0 < (int)uVar1) {
      uVar22 = 0;
      do {
        fVar30 = (float)uVar36;
        fVar25 = (float)uVar32;
        if (uVar1 <= uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar14 = lVar13 + (long)(int)uVar22 * 0x28;
        fVar40 = *(float *)(lVar14 + 0x20);
        fVar41 = *(float *)(lVar14 + 0x24);
        fVar42 = *(float *)(lVar14 + 0x28);
        uVar1 = *(uint *)(lVar14 + 0x40);
        fVar34 = (float)FUN_040ccab4(lVar12,0);
        lVar14 = FUN_040703d4(in_stack_000003f0,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = FUN_04073258(lVar14,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407cee0(&stack0x000002e0,lVar14,0);
        uVar31 = uVar35;
        uVar32 = uVar11;
        uVar15 = uVar28;
        fVar27 = (float)FUN_040649bc(&stack0x00000360,3,0);
        FUN_04065038(fVar40 * fVar34 + fVar27,fVar41 * fVar25 + (float)uVar31,
                     fVar42 * fVar30 + (float)uVar32,(float)uVar15 + unaff_s11,&stack0x00000360,3,0)
        ;
        in_stack_00000148 = in_stack_00000050[5];
        in_stack_00000140 = in_stack_00000050[4];
        in_stack_00000158 = in_stack_00000050[7];
        in_stack_00000150 = in_stack_00000050[6];
        in_stack_00000128 = in_stack_00000050[1];
        in_stack_00000120 = *in_stack_00000050;
        in_stack_00000138 = in_stack_00000050[3];
        in_stack_00000130 = in_stack_00000050[2];
        in_stack_000000e0 = uVar38;
        in_stack_000000e8 = uVar39;
        in_stack_000000f0 = uVar35;
        in_stack_000000f8 = uVar37;
        in_stack_00000100 = uVar11;
        in_stack_00000108 = uVar33;
        in_stack_00000110 = uVar28;
        in_stack_00000118 = uVar29;
        FUN_04064d0c(&stack0x000002e0,&stack0x00000120,&stack0x000000e0,0);
        if (in_stack_00000400 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(uint *)(in_stack_00000400 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar32 = uVar35;
        uVar36 = uVar11;
        FUN_03720cd8(in_stack_00000048,in_stack_00000040,in_stack_00000090);
        uVar1 = *(uint *)(lVar13 + 0x18);
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)uVar1);
    }
  }
  FUN_02cbb360(&stack0x000003e0,
               *(undefined8 *)
                Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_0__
              );
  plVar16 = (long *)FUN_0371e3dc();
  if (((unaff_x24 == 0) || (in_stack_00000090 == 0)) || (plVar16 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *plVar16;
  uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar11 != 0) {
    piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) ==
          *(long *)Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__) {
        puVar17 = (undefined8 *)(lVar12 + (long)(*piVar19 + 4) * 0x10 + 0x138);
        goto LAB_037206c8;
      }
      uVar11 = uVar11 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar11 != 0);
  }
  puVar17 = (undefined8 *)
            FUN_01ecb238(plVar16,*(long *)
                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__
                         ,4);
LAB_037206c8:
  (*(code *)*puVar17)(plVar16,in_stack_00000038);
  return;
}


