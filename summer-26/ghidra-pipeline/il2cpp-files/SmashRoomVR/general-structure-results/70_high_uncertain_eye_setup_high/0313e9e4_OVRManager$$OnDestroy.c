/*
FUNCTION_NAME: OVRManager$$OnDestroy
ENTRY_POINT: 0313e9e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnDestroy(undefined4 param_1,float param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 *unaff_x19;
  long unaff_x20;
  int iVar23;
  long unaff_x21;
  long *plVar24;
  long unaff_x22;
  long *unaff_x23;
  int iVar25;
  float fVar26;
  float fVar27;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint uStack0000000000000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  undefined4 uStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined3 uStack00000000000000d0;
  undefined5 uStack00000000000000d3;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  lVar17 = *(long *)(unaff_x20 + 0x150);
  uStack00000000000000b0 = param_1;
  fStack00000000000000b4 = param_2;
  fStack00000000000000b8 = param_3;
  fStack00000000000000c8 = param_3;
  if (lVar17 != 0) {
    (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
    FUN_0313edcc();
    FUN_0313eec4();
    if (unaff_x21 != 0) {
      FUN_03928d34();
      fVar26 = (float)FUN_0313fa94();
      fVar27 = *(float *)(unaff_x20 + 0x50);
      *(float *)(unaff_x20 + 0x98) = fVar26 * fVar27;
      *(float *)(unaff_x20 + 0x9c) = param_2 * fVar27;
      *(float *)(unaff_x20 + 0xa0) = param_3 * fVar27;
      fStack00000000000000c0 = fVar26 * fVar27 + fStack00000000000000c0;
      fStack00000000000000c4 = param_2 * fVar27 + fStack00000000000000c4;
      fVar26 = param_3 * fVar27 + fStack00000000000000c8;
      fStack00000000000000c8 = fVar26;
      fVar27 = fStack00000000000000c4;
      FUN_0313efa8();
      lVar17 = *(long *)(unaff_x20 + 0xd8);
      if (lVar17 != 0) {
        *(undefined4 *)(lVar17 + 0x18) = 0;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        puVar11 = PTR_DAT_03d7fa08;
        puVar10 = PTR_DAT_03d7f9e8;
        lVar17 = *(long *)(unaff_x20 + 0x130);
        if (lVar17 != 0) {
          iVar25 = *(int *)(lVar17 + 0x18);
          iVar4 = iVar25 + -1;
          if (iVar25 < 1) {
LAB_0313ebdc:
            fVar15 = fStack00000000000000c8;
            fVar14 = fStack00000000000000b8;
            fVar13 = fStack00000000000000b4;
            uVar12 = uStack00000000000000b0;
            uVar9 = CONCAT44(fStack00000000000000c4,fStack00000000000000c0);
            if (*(char *)(unaff_x20 + 0x108) == '\0') {
              if (*(char *)(unaff_x22 + 599) == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                *(undefined1 *)(unaff_x22 + 599) = 1;
              }
              puVar19 = *(undefined4 **)(*unaff_x23 + 0xb8);
              uStack0000000000000098 = *puVar19;
              fVar27 = (float)puVar19[1];
              fVar26 = (float)puVar19[2];
            }
            else {
              uStack0000000000000098 =
                   FUN_02d0b228(unaff_x20 + 0x108,*(undefined8 *)PTR_DAT_03d7f9a8);
            }
            fStack0000000000000088 = fVar15;
            uStack000000000000008c = uVar12;
            fStack0000000000000090 = fVar13;
            fStack0000000000000094 = fVar14;
            uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
            uVar5 = CONCAT44(uVar12,fVar15);
            uVar7 = CONCAT44(fVar27,uStack0000000000000098);
            uVar6 = CONCAT44(fVar14,fVar13);
            lVar17 = *(long *)(unaff_x20 + 0xd8);
            uVar8 = CONCAT44(uStack00000000000000a4,fVar26);
            in_stack_00000080 = uVar9;
            fStack000000000000009c = fVar27;
            fStack00000000000000a0 = fVar26;
            if (lVar17 != 0) {
              lVar20 = *(long *)puVar10;
              lVar18 = *(long *)(lVar17 + 0x10);
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              _uStack00000000000000d0 = uVar9;
              in_stack_000000d8 = uVar5;
              in_stack_000000e0 = uVar6;
              in_stack_000000e8 = uVar7;
              in_stack_000000f0 = uVar8;
              if (lVar18 != 0) {
                uVar3 = *(uint *)(lVar17 + 0x18);
                if (uVar3 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar17 + 0x18) = uVar3 + 1;
                  lVar18 = lVar18 + (long)(int)uVar3 * 0x28;
                  *(undefined8 *)(lVar18 + 0x40) = uVar8;
                  *(undefined8 *)(lVar18 + 0x28) = uVar5;
                  *(undefined8 *)(lVar18 + 0x20) = uVar9;
                  *(undefined8 *)(lVar18 + 0x38) = uVar7;
                  *(undefined8 *)(lVar18 + 0x30) = uVar6;
                }
                else {
                  _fStack0000000000000040 = uVar9;
                  _uStack0000000000000048 = uVar5;
                  in_stack_00000050 = uVar6;
                  in_stack_00000058 = uVar7;
                  _uStack0000000000000060 = uVar8;
                  FUN_02b970b4(lVar17,&stack0x00000040,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                lVar17 = *(long *)(unaff_x20 + 0xe0);
                if (lVar17 != 0) {
                  (**(code **)(lVar17 + 0x18))
                            (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
                             *(undefined8 *)(lVar17 + 0x28));
                  lVar17 = *(long *)(unaff_x20 + 0x130);
                  if (lVar17 != 0) {
                    *(undefined4 *)(lVar17 + 0x18) = 0;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    plVar24 = *(long **)(unaff_x20 + 0x78);
                    *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
                    if (plVar24 != (long *)0x0) {
                      lVar17 = *plVar24;
                      uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar21 != 0) {
                        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03d7f9e0) {
                            puVar16 = (undefined8 *)(lVar17 + (long)(*piVar22 + 3) * 0x10 + 0x138);
                            goto LAB_0313ed84;
                          }
                          uVar21 = uVar21 - 1;
                          piVar22 = piVar22 + 4;
                        } while (uVar21 != 0);
                      }
                      puVar16 = (undefined8 *)FUN_01ae9f78(plVar24,*(long *)PTR_DAT_03d7f9e0,3);
LAB_0313ed84:
                      (*(code *)*puVar16)(plVar24,puVar16[1]);
                      unaff_x19[4] = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
                      unaff_x19[1] = CONCAT44(uStack000000000000008c,fStack0000000000000088);
                      *unaff_x19 = in_stack_00000080;
                      unaff_x19[3] = CONCAT44(fStack000000000000009c,uStack0000000000000098);
                      unaff_x19[2] = CONCAT44(fStack0000000000000094,fStack0000000000000090);
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            iVar23 = *(int *)(unaff_x20 + 0x138);
            if (*(int *)(unaff_x20 + 0x138) < 0) {
              iVar23 = iVar4;
            }
            do {
              FUN_02c43204(&stack0x00000040,lVar17,iVar23,*(undefined8 *)puVar11);
              uVar9 = _fStack0000000000000040;
              fVar26 = fStack0000000000000040;
              fVar27 = fStack0000000000000044;
              uVar3 = uStack0000000000000048;
              lVar17 = *(long *)(unaff_x20 + 0xd8);
              if (lVar17 == 0) break;
              uStack00000000000000d0 = CONCAT12(in_stack_00000078._6_1_,in_stack_00000078._4_2_);
              lVar18 = *(long *)(lVar17 + 0x10);
              lVar20 = *(long *)puVar10;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar18 == 0) break;
              uVar2 = *(uint *)(lVar17 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                lVar18 = lVar18 + (long)(int)uVar2 * 0x28;
                *(uint *)(lVar17 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar18 + 0x20) = in_stack_00000058._4_4_;
                *(undefined4 *)(lVar18 + 0x24) = uStack0000000000000060;
                *(undefined4 *)(lVar18 + 0x28) = uStack0000000000000064;
                *(undefined4 *)(lVar18 + 0x2c) = uStack0000000000000068;
                *(undefined4 *)(lVar18 + 0x30) = uStack000000000000006c;
                *(undefined4 *)(lVar18 + 0x34) = in_stack_00000070;
                *(float *)(lVar18 + 0x38) = fStack0000000000000040;
                *(float *)(lVar18 + 0x3c) = fStack0000000000000044;
                *(uint *)(lVar18 + 0x40) = uStack0000000000000048;
                *(undefined1 *)(lVar18 + 0x44) = 0;
                *(undefined1 *)(lVar18 + 0x47) = in_stack_00000078._6_1_;
                *(undefined2 *)(lVar18 + 0x45) = in_stack_00000078._4_2_;
              }
              else {
                _fStack0000000000000040 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
                _uStack0000000000000048 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
                in_stack_00000050 = CONCAT44(in_stack_00000070,uStack000000000000006c);
                in_stack_00000058 = uVar9;
                _uStack0000000000000060 =
                     CONCAT17(in_stack_00000078._6_1_,CONCAT25(in_stack_00000078._4_2_,(uint5)uVar3)
                             );
                FUN_02b970b4(lVar17,&stack0x00000040,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              iVar25 = iVar25 + -1;
              if (iVar25 == 0) goto LAB_0313ebdc;
              lVar17 = *(long *)(unaff_x20 + 0x130);
              iVar1 = iVar23 + -1;
              if (iVar23 + -1 < 0) {
                iVar1 = iVar4;
              }
              iVar23 = iVar1;
            } while (lVar17 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


