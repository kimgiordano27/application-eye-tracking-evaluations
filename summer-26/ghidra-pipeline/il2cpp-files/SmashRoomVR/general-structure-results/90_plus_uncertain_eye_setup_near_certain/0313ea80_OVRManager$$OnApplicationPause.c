/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 0313ea80
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 *unaff_x19;
  long unaff_x20;
  int iVar21;
  long *plVar22;
  long unaff_x22;
  long *unaff_x23;
  int iVar23;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
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
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined3 uStack00000000000000d0;
  undefined5 uStack00000000000000d3;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
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
        uVar13 = in_stack_000000c8;
        uVar12 = in_stack_000000c0;
        uVar11 = in_stack_000000b8;
        uVar5 = in_stack_000000b0;
        if (*(char *)(unaff_x20 + 0x108) == '\0') {
          if (*(char *)(unaff_x22 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x22 + 599) = 1;
          }
          puVar17 = *(undefined4 **)(*unaff_x23 + 0xb8);
          uStack0000000000000098 = *puVar17;
          param_2 = puVar17[1];
          param_3 = puVar17[2];
        }
        else {
          uStack0000000000000098 = FUN_02d0b228(unaff_x20 + 0x108,*(undefined8 *)PTR_DAT_03d7f9a8);
        }
        in_stack_00000080 = uVar12;
        uStack0000000000000088 = uVar13;
        uStack000000000000008c = (undefined4)uVar5;
        uStack0000000000000090 = (undefined4)((ulong)uVar5 >> 0x20);
        uStack0000000000000094 = uVar11;
        uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
        uVar5 = CONCAT44(uStack000000000000008c,uVar13);
        uVar7 = CONCAT44(param_2,uStack0000000000000098);
        uVar6 = CONCAT44(uVar11,uStack0000000000000090);
        lVar15 = *(long *)(unaff_x20 + 0xd8);
        uVar8 = CONCAT44(uStack00000000000000a4,param_3);
        uStack000000000000009c = param_2;
        uStack00000000000000a0 = param_3;
        if (lVar15 != 0) {
          lVar18 = *(long *)puVar9;
          _uStack00000000000000d0 = uVar12;
          lVar16 = *(long *)(lVar15 + 0x10);
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          in_stack_000000d8 = uVar5;
          in_stack_000000e0 = uVar6;
          in_stack_000000e8 = uVar7;
          in_stack_000000f0 = uVar8;
          if (lVar16 != 0) {
            uVar3 = *(uint *)(lVar15 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar3 + 1;
              lVar16 = lVar16 + (long)(int)uVar3 * 0x28;
              *(undefined8 *)(lVar16 + 0x40) = uVar8;
              *(undefined8 *)(lVar16 + 0x28) = uVar5;
              *(undefined8 *)(lVar16 + 0x20) = uVar12;
              *(undefined8 *)(lVar16 + 0x38) = uVar7;
              *(undefined8 *)(lVar16 + 0x30) = uVar6;
            }
            else {
              _uStack0000000000000040 = uVar12;
              _uStack0000000000000048 = uVar5;
              in_stack_00000050 = uVar6;
              in_stack_00000058 = uVar7;
              _uStack0000000000000060 = uVar8;
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
                        puVar14 = (undefined8 *)(lVar15 + (long)(*piVar20 + 3) * 0x10 + 0x138);
                        goto LAB_0313ed84;
                      }
                      uVar19 = uVar19 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_01ae9f78(plVar22,*(long *)PTR_DAT_03d7f9e0,3);
LAB_0313ed84:
                  (*(code *)*puVar14)(plVar22,puVar14[1]);
                  unaff_x19[4] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
                  unaff_x19[1] = CONCAT44(uStack000000000000008c,uStack0000000000000088);
                  *unaff_x19 = in_stack_00000080;
                  unaff_x19[3] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
                  unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
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
          uVar5 = _uStack0000000000000040;
          param_3 = uStack0000000000000040;
          param_2 = uStack0000000000000044;
          uVar3 = uStack0000000000000048;
          lVar15 = *(long *)(unaff_x20 + 0xd8);
          if (lVar15 == 0) break;
          uStack00000000000000d0 = CONCAT12(in_stack_00000078._6_1_,in_stack_00000078._4_2_);
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
            *(undefined4 *)(lVar16 + 0x38) = uStack0000000000000040;
            *(undefined4 *)(lVar16 + 0x3c) = uStack0000000000000044;
            *(uint *)(lVar16 + 0x40) = uStack0000000000000048;
            *(undefined1 *)(lVar16 + 0x44) = 0;
            *(undefined1 *)(lVar16 + 0x47) = in_stack_00000078._6_1_;
            *(undefined2 *)(lVar16 + 0x45) = in_stack_00000078._4_2_;
          }
          else {
            _uStack0000000000000040 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
            _uStack0000000000000048 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
            in_stack_00000050 = CONCAT44(in_stack_00000070,uStack000000000000006c);
            in_stack_00000058 = uVar5;
            _uStack0000000000000060 =
                 CONCAT17(in_stack_00000078._6_1_,CONCAT25(in_stack_00000078._4_2_,(uint5)uVar3));
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
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


