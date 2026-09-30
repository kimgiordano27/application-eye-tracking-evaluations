/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 0313e994
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  float fVar11;
  float fVar12;
  undefined8 *puVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 *unaff_x19;
  long unaff_x20;
  int iVar21;
  long unaff_x21;
  long *plVar22;
  int iVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
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
  undefined2 uStack000000000000007c;
  undefined1 uStack000000000000007e;
  undefined8 uStack0000000000000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined8 uStack0000000000000098;
  undefined5 uStack00000000000000a0;
  undefined3 uStack00000000000000a5;
  float in_stack_000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  float in_stack_000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  undefined3 uStack00000000000000d0;
  undefined5 uStack00000000000000d3;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  _uStack00000000000000a0 = 0;
  fStack0000000000000088 = 0.0;
  fStack000000000000008c = 0.0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  fStack0000000000000090 = 0.0;
  fStack0000000000000094 = 0.0;
  uStack000000000000007e = 0;
  uStack000000000000007c = 0;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  pfVar14 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  in_stack_000000b0 = *pfVar14;
  fStack00000000000000b4 = pfVar14[1];
  fVar27 = pfVar14[2];
  lVar15 = *(long *)(unaff_x20 + 0x150);
  in_stack_000000b8 = fVar27;
  in_stack_000000c0 = in_stack_000000b0;
  fStack00000000000000c4 = fStack00000000000000b4;
  in_stack_000000c8 = fVar27;
  if (lVar15 != 0) {
    fVar26 = fStack00000000000000b4;
    (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
    FUN_0313edcc();
    FUN_0313eec4();
    if (unaff_x21 != 0) {
      FUN_03928d34();
      fVar24 = (float)FUN_0313fa94();
      fVar28 = *(float *)(unaff_x20 + 0x50);
      *(float *)(unaff_x20 + 0x98) = fVar24 * fVar28;
      *(float *)(unaff_x20 + 0x9c) = fVar26 * fVar28;
      *(float *)(unaff_x20 + 0xa0) = fVar27 * fVar28;
      in_stack_000000c0 = fVar24 * fVar28 + in_stack_000000c0;
      fStack00000000000000c4 = fVar26 * fVar28 + fStack00000000000000c4;
      fVar27 = fVar27 * fVar28 + in_stack_000000c8;
      in_stack_000000c8 = fVar27;
      fVar26 = fStack00000000000000c4;
      FUN_0313efa8();
      lVar15 = *(long *)(unaff_x20 + 0xd8);
      if (lVar15 != 0) {
        *(undefined4 *)(lVar15 + 0x18) = 0;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        puVar10 = PTR_DAT_03d7fa08;
        puVar9 = PTR_DAT_03d7f9e8;
        lVar15 = *(long *)(unaff_x20 + 0x130);
        if (lVar15 != 0) {
          iVar23 = *(int *)(lVar15 + 0x18);
          iVar4 = iVar23 + -1;
          if (iVar23 < 1) {
LAB_0313ebdc:
            fVar12 = in_stack_000000c8;
            fVar11 = in_stack_000000b8;
            fVar28 = fStack00000000000000b4;
            fVar24 = in_stack_000000b0;
            uVar7 = CONCAT44(fStack00000000000000c4,in_stack_000000c0);
            if (*(char *)(unaff_x20 + 0x108) == '\0') {
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              puVar17 = *(undefined4 **)(*(long *)puVar8 + 0xb8);
              uVar25 = *puVar17;
              fVar26 = (float)puVar17[1];
              fVar27 = (float)puVar17[2];
            }
            else {
              uVar25 = FUN_02d0b228(unaff_x20 + 0x108,*(undefined8 *)PTR_DAT_03d7f9a8);
            }
            fStack0000000000000088 = fVar12;
            fStack000000000000008c = fVar24;
            fStack0000000000000090 = fVar28;
            fStack0000000000000094 = fVar11;
            uStack0000000000000098 = CONCAT44(fVar26,uVar25);
            uStack00000000000000a0 = CONCAT14(1,fVar27);
            uVar5 = CONCAT44(fVar24,fVar12);
            uVar6 = CONCAT44(fVar11,fVar28);
            lVar15 = *(long *)(unaff_x20 + 0xd8);
            uStack0000000000000080 = uVar7;
            if (lVar15 != 0) {
              lVar18 = *(long *)puVar9;
              in_stack_000000e8 = uStack0000000000000098;
              in_stack_000000f0 = _uStack00000000000000a0;
              lVar16 = *(long *)(lVar15 + 0x10);
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              _uStack00000000000000d0 = uVar7;
              in_stack_000000d8 = uVar5;
              in_stack_000000e0 = uVar6;
              if (lVar16 != 0) {
                uVar3 = *(uint *)(lVar15 + 0x18);
                if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                  lVar16 = lVar16 + (long)(int)uVar3 * 0x28;
                  *(undefined8 *)(lVar16 + 0x40) = _uStack00000000000000a0;
                  *(undefined8 *)(lVar16 + 0x28) = uVar5;
                  *(undefined8 *)(lVar16 + 0x20) = uVar7;
                  *(undefined8 *)(lVar16 + 0x38) = uStack0000000000000098;
                  *(undefined8 *)(lVar16 + 0x30) = uVar6;
                }
                else {
                  in_stack_00000058 = uStack0000000000000098;
                  _uStack0000000000000060 = _uStack00000000000000a0;
                  _fStack0000000000000040 = uVar7;
                  _uStack0000000000000048 = uVar5;
                  in_stack_00000050 = uVar6;
                  FUN_02b970b4(lVar15,&stack0x00000040,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                lVar15 = *(long *)(unaff_x20 + 0xe0);
                if (lVar15 != 0) {
                  (**(code **)(lVar15 + 0x18))
                            (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
                             *(undefined8 *)(lVar15 + 0x28));
                  lVar15 = *(long *)(unaff_x20 + 0x130);
                  if (lVar15 != 0) {
                    *(undefined4 *)(lVar15 + 0x18) = 0;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    plVar22 = *(long **)(unaff_x20 + 0x78);
                    *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
                    if (plVar22 != (long *)0x0) {
                      lVar15 = *plVar22;
                      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
                      if (uVar19 != 0) {
                        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_03d7f9e0) {
                            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar20 + 3) * 0x10 + 0x138);
                            goto LAB_0313ed84;
                          }
                          uVar19 = uVar19 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar19 != 0);
                      }
                      puVar13 = (undefined8 *)FUN_01ae9f78(plVar22,*(long *)PTR_DAT_03d7f9e0,3);
LAB_0313ed84:
                      (*(code *)*puVar13)(plVar22,puVar13[1]);
                      unaff_x19[4] = _uStack00000000000000a0;
                      unaff_x19[1] = CONCAT44(fStack000000000000008c,fStack0000000000000088);
                      *unaff_x19 = uStack0000000000000080;
                      unaff_x19[3] = uStack0000000000000098;
                      unaff_x19[2] = CONCAT44(fStack0000000000000094,fStack0000000000000090);
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            iVar21 = *(int *)(unaff_x20 + 0x138);
            if (*(int *)(unaff_x20 + 0x138) < 0) {
              iVar21 = iVar4;
            }
            do {
              FUN_02c43204(&stack0x00000040,lVar15,iVar21,*(undefined8 *)puVar10);
              uVar7 = _fStack0000000000000040;
              fVar27 = fStack0000000000000040;
              fVar26 = fStack0000000000000044;
              uVar3 = uStack0000000000000048;
              lVar15 = *(long *)(unaff_x20 + 0xd8);
              if (lVar15 == 0) break;
              uStack00000000000000d0 = CONCAT12(uStack000000000000007e,uStack000000000000007c);
              lVar16 = *(long *)(lVar15 + 0x10);
              lVar18 = *(long *)puVar9;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar16 == 0) break;
              uVar2 = *(uint *)(lVar15 + 0x18);
              if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)uVar2 * 0x28;
                *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar16 + 0x20) = in_stack_00000058._4_4_;
                *(undefined4 *)(lVar16 + 0x24) = uStack0000000000000060;
                *(undefined4 *)(lVar16 + 0x28) = uStack0000000000000064;
                *(undefined4 *)(lVar16 + 0x2c) = uStack0000000000000068;
                *(undefined4 *)(lVar16 + 0x30) = uStack000000000000006c;
                *(undefined4 *)(lVar16 + 0x34) = in_stack_00000070;
                *(float *)(lVar16 + 0x38) = fStack0000000000000040;
                *(float *)(lVar16 + 0x3c) = fStack0000000000000044;
                *(uint *)(lVar16 + 0x40) = uStack0000000000000048;
                *(undefined1 *)(lVar16 + 0x44) = 0;
                *(undefined1 *)(lVar16 + 0x47) = uStack000000000000007e;
                *(undefined2 *)(lVar16 + 0x45) = uStack000000000000007c;
              }
              else {
                _fStack0000000000000040 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
                _uStack0000000000000048 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
                in_stack_00000050 = CONCAT44(in_stack_00000070,uStack000000000000006c);
                in_stack_00000058 = uVar7;
                _uStack0000000000000060 =
                     CONCAT17(uStack000000000000007e,CONCAT25(uStack000000000000007c,(uint5)uVar3));
                FUN_02b970b4(lVar15,&stack0x00000040,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              iVar23 = iVar23 + -1;
              if (iVar23 == 0) goto LAB_0313ebdc;
              lVar15 = *(long *)(unaff_x20 + 0x130);
              iVar1 = iVar21 + -1;
              if (iVar21 + -1 < 0) {
                iVar1 = iVar4;
              }
              iVar21 = iVar1;
            } while (lVar15 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


