/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 0313eb08
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationFocus
               (ulong param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 in_w9;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  ulong *unaff_x19;
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
  undefined2 in_stack_00000010;
  undefined4 uStack0000000000000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
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
  ulong in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined3 uStack00000000000000d0;
  undefined5 uStack00000000000000d3;
  ulong in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  do {
    uVar16 = (undefined4)param_2;
    if (param_9 == 0) {
LAB_0313edc8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uStack00000000000000d0 = CONCAT12(in_w9,in_stack_00000010);
    lVar9 = *(long *)(param_9 + 0x10);
    lVar11 = *unaff_x24;
    *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_0313edc8;
    uVar1 = *(uint *)(param_9 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (int)uVar1 * unaff_x29;
      *(uint *)(param_9 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar9 + 0x20) = param_8;
      *(undefined4 *)(lVar9 + 0x24) = param_7;
      *(undefined4 *)(lVar9 + 0x28) = param_6;
      *(undefined4 *)(lVar9 + 0x2c) = param_5;
      *(undefined4 *)(lVar9 + 0x30) = param_4;
      *(undefined4 *)(lVar9 + 0x34) = in_s16;
      *(undefined4 *)(lVar9 + 0x38) = param_3;
      *(undefined4 *)(lVar9 + 0x3c) = uVar16;
      *(uint *)(lVar9 + 0x40) = (uint)param_1;
      *(undefined1 *)(lVar9 + 0x44) = 0;
      *(undefined1 *)(lVar9 + 0x47) = in_w9;
      *(undefined2 *)(lVar9 + 0x45) = in_stack_00000010;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
      _uStack0000000000000040 = CONCAT44(param_7,param_8);
      in_stack_00000048 = CONCAT44(param_5,param_6);
      in_stack_00000050 = CONCAT44(in_s16,param_4);
      in_stack_00000058 = CONCAT44(uVar16,param_3);
      _uStack0000000000000060 = (uint5)(uint)param_1;
      *(undefined1 *)(unaff_x28 + 1) = in_w9;
      *unaff_x28 = in_stack_00000010;
      FUN_02b970b4(param_9,&stack0x00000040,uVar8);
    }
    uVar6 = in_stack_000000c8;
    uVar12 = in_stack_000000c0;
    uVar5 = in_stack_000000b8;
    uVar8 = in_stack_000000b0;
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
        param_3 = puVar10[2];
      }
      else {
        uStack0000000000000098 = FUN_02d0b228(unaff_x20 + 0x108,*(undefined8 *)PTR_DAT_03d7f9a8);
      }
      in_stack_00000080 = uVar12;
      uStack0000000000000088 = uVar6;
      uStack000000000000008c = (undefined4)uVar8;
      uStack0000000000000090 = (undefined4)((ulong)uVar8 >> 0x20);
      uStack0000000000000094 = uVar5;
      uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
      uVar2 = CONCAT44(uStack000000000000008c,uVar6);
      uVar3 = CONCAT44(uVar16,uStack0000000000000098);
      uVar8 = CONCAT44(uVar5,uStack0000000000000090);
      lVar9 = *(long *)(unaff_x20 + 0xd8);
      uVar4 = CONCAT44(uStack00000000000000a4,param_3);
      uStack000000000000009c = uVar16;
      uStack00000000000000a0 = param_3;
      if (lVar9 != 0) {
        lVar13 = *unaff_x24;
        _uStack00000000000000d0 = uVar12;
        lVar11 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        in_stack_000000d8 = uVar2;
        in_stack_000000e0 = uVar8;
        in_stack_000000e8 = uVar3;
        in_stack_000000f0 = uVar4;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            lVar11 = lVar11 + (long)(int)uVar1 * 0x28;
            *(undefined8 *)(lVar11 + 0x40) = uVar4;
            *(ulong *)(lVar11 + 0x28) = uVar2;
            *(ulong *)(lVar11 + 0x20) = uVar12;
            *(undefined8 *)(lVar11 + 0x38) = uVar3;
            *(undefined8 *)(lVar11 + 0x30) = uVar8;
          }
          else {
            _uStack0000000000000040 = uVar12;
            in_stack_00000048 = uVar2;
            in_stack_00000050 = uVar8;
            in_stack_00000058 = uVar3;
            _uStack0000000000000060 = uVar4;
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
                break;
              }
            }
          }
        }
      }
      goto LAB_0313edc8;
    }
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) {
      unaff_w21 = unaff_w26;
    }
    if (*(long *)(unaff_x20 + 0x130) == 0) goto LAB_0313edc8;
    FUN_02c43204(&stack0x00000040,*(long *)(unaff_x20 + 0x130),unaff_w21,*unaff_x27);
    param_2 = _uStack0000000000000040 >> 0x20;
    param_1 = in_stack_00000048 & 0xffffffff;
    param_9 = *(long *)(unaff_x20 + 0xd8);
    param_3 = uStack0000000000000040;
    param_4 = uStack000000000000006c;
    param_5 = uStack0000000000000068;
    param_6 = uStack0000000000000064;
    param_7 = uStack0000000000000060;
    param_8 = in_stack_00000058._4_4_;
    in_s16 = in_stack_00000070;
    in_w9 = in_stack_00000078._6_1_;
    in_stack_00000010 = in_stack_00000078._4_2_;
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
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


