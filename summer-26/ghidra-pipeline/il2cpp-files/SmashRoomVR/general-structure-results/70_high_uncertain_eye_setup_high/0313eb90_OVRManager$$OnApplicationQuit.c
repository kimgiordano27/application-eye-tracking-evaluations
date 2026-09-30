/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 0313eb90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationQuit
               (long param_1,ulong param_2,ulong param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               long param_10,undefined1 *param_11)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined2 in_w9;
  long lVar11;
  ulong uVar12;
  undefined1 in_w10;
  long lVar13;
  int *piVar14;
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar15;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined2 *unaff_x28;
  long unaff_x29;
  undefined4 uVar16;
  undefined4 in_s16;
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
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
  ulong in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  uStack0000000000000058._4_4_ = param_9;
code_r0x0313eb90:
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70);
  _uStack0000000000000040 = CONCAT44(param_8,uStack0000000000000058._4_4_);
  _uStack0000000000000048 = CONCAT44(param_6,param_7);
  uStack0000000000000050 = CONCAT44(in_s16,param_5);
  uStack0000000000000058 = CONCAT44((int)param_3,param_4);
  _uStack0000000000000060 = (uint5)(uint)param_2;
  *(undefined1 *)(unaff_x28 + 1) = in_w10;
  *unaff_x28 = in_w9;
  FUN_02b970b4(param_10,param_11,uVar8);
  do {
    uVar6 = in_stack_000000c8;
    uVar5 = in_stack_000000c0;
    uVar4 = in_stack_000000b8;
    uVar8 = in_stack_000000b0;
    uVar16 = (undefined4)param_3;
    unaff_w25 = unaff_w25 + -1;
    if (unaff_w25 == 0) {
      if (*(char *)(unaff_x20 + 0x108) == '\0') {
        if (*(char *)(unaff_x22 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x22 + 599) = 1;
        }
        puVar10 = *(undefined4 **)(*unaff_x23 + 0xb8);
        uStack0000000000000098 = *puVar10;
        uVar16 = puVar10[1];
        param_4 = puVar10[2];
      }
      else {
        uStack0000000000000098 = FUN_02d0b228(unaff_x20 + 0x108,*(undefined8 *)PTR_DAT_03d7f9a8);
      }
      in_stack_00000080 = uVar5;
      uStack0000000000000088 = uVar6;
      uStack000000000000008c = (undefined4)uVar8;
      uStack0000000000000090 = (undefined4)((ulong)uVar8 >> 0x20);
      uStack0000000000000094 = uVar4;
      uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
      uVar12 = CONCAT44(uStack000000000000008c,uVar6);
      uVar2 = CONCAT44(uVar16,uStack0000000000000098);
      uVar8 = CONCAT44(uVar4,uStack0000000000000090);
      lVar9 = *(long *)(unaff_x20 + 0xd8);
      uVar3 = CONCAT44(uStack00000000000000a4,param_4);
      uStack000000000000009c = uVar16;
      uStack00000000000000a0 = param_4;
      if (lVar9 != 0) {
        lVar13 = *unaff_x24;
        _uStack00000000000000d0 = uVar5;
        lVar11 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        in_stack_000000d8 = uVar12;
        in_stack_000000e0 = uVar8;
        in_stack_000000e8 = uVar2;
        in_stack_000000f0 = uVar3;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            lVar11 = lVar11 + (long)(int)uVar1 * 0x28;
            *(undefined8 *)(lVar11 + 0x40) = uVar3;
            *(ulong *)(lVar11 + 0x28) = uVar12;
            *(undefined8 *)(lVar11 + 0x20) = uVar5;
            *(undefined8 *)(lVar11 + 0x38) = uVar2;
            *(undefined8 *)(lVar11 + 0x30) = uVar8;
          }
          else {
            _uStack0000000000000040 = uVar5;
            _uStack0000000000000048 = uVar12;
            uStack0000000000000050 = uVar8;
            uStack0000000000000058 = uVar2;
            _uStack0000000000000060 = uVar3;
            FUN_02b970b4(lVar9,&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *(long *)(unaff_x20 + 0xe0);
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
                       *(undefined8 *)(lVar9 + 0x28));
            lVar9 = *(long *)(unaff_x20 + 0x130);
            if (lVar9 != 0) {
              *(undefined4 *)(lVar9 + 0x18) = 0;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              plVar15 = *(long **)(unaff_x20 + 0x78);
              *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
              if (plVar15 != (long *)0x0) {
                lVar9 = *plVar15;
                uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar12 == 0) goto LAB_0313ed64;
                piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_0313ed4c;
              }
            }
          }
        }
      }
LAB_0313edc8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) {
      unaff_w21 = unaff_w26;
    }
    if (*(long *)(unaff_x20 + 0x130) == 0) goto LAB_0313edc8;
    FUN_02c43204(&stack0x00000040,*(long *)(unaff_x20 + 0x130),unaff_w21,*unaff_x27);
    param_3 = (ulong)uStack0000000000000044;
    param_2 = _uStack0000000000000048 & 0xffffffff;
    param_10 = *(long *)(unaff_x20 + 0xd8);
    if (param_10 == 0) goto LAB_0313edc8;
    uStack00000000000000d0 = CONCAT12(in_stack_00000078._6_1_,in_stack_00000078._4_2_);
    lVar9 = *(long *)(param_10 + 0x10);
    lVar11 = *unaff_x24;
    *(int *)(param_10 + 0x1c) = *(int *)(param_10 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_0313edc8;
    uVar1 = *(uint *)(param_10 + 0x18);
    param_4 = uStack0000000000000040;
    if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
    lVar9 = lVar9 + (int)uVar1 * unaff_x29;
    *(uint *)(param_10 + 0x18) = uVar1 + 1;
    *(undefined4 *)(lVar9 + 0x20) = uStack0000000000000058._4_4_;
    *(undefined4 *)(lVar9 + 0x24) = uStack0000000000000060;
    *(undefined4 *)(lVar9 + 0x28) = uStack0000000000000064;
    *(undefined4 *)(lVar9 + 0x2c) = uStack0000000000000068;
    *(undefined4 *)(lVar9 + 0x30) = uStack000000000000006c;
    *(undefined4 *)(lVar9 + 0x34) = in_stack_00000070;
    *(undefined4 *)(lVar9 + 0x38) = uStack0000000000000040;
    *(uint *)(lVar9 + 0x3c) = uStack0000000000000044;
    *(undefined4 *)(lVar9 + 0x40) = uStack0000000000000048;
    *(undefined1 *)(lVar9 + 0x44) = 0;
    *(undefined1 *)(lVar9 + 0x47) = in_stack_00000078._6_1_;
    *(undefined2 *)(lVar9 + 0x45) = in_stack_00000078._4_2_;
  } while( true );
  param_1 = *(long *)(lVar11 + 0x20);
  param_11 = (undefined1 *)&stack0x00000040;
  param_5 = uStack000000000000006c;
  param_6 = uStack0000000000000068;
  param_7 = uStack0000000000000064;
  param_8 = uStack0000000000000060;
  in_s16 = in_stack_00000070;
  in_w9 = in_stack_00000078._4_2_;
  in_w10 = in_stack_00000078._6_1_;
  goto code_r0x0313eb90;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_0313ed4c:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d7f9e0) {
      puVar7 = (undefined8 *)(lVar9 + (long)(*piVar14 + 3) * 0x10 + 0x138);
      goto LAB_0313ed84;
    }
  }
LAB_0313ed64:
  puVar7 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)PTR_DAT_03d7f9e0,3);
LAB_0313ed84:
  (*(code *)*puVar7)(plVar15,puVar7[1]);
  unaff_x19[4] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
  unaff_x19[1] = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  *unaff_x19 = in_stack_00000080;
  unaff_x19[3] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
  unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  return;
}


