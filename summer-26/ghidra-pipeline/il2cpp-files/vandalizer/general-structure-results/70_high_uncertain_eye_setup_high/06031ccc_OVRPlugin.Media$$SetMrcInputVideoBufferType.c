/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcInputVideoBufferType
ENTRY_POINT: 06031ccc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcInputVideoBufferType(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long *plVar11;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 unaff_s10;
  undefined4 uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
code_r0x06031ccc:
  puVar3 = (undefined8 *)FUN_0322c1e8(param_1,param_2,param_3);
  param_1 = unaff_x23;
  do {
    (*(code *)*puVar3)(param_1,unaff_w22,&stack0x00000050,puVar3[1]);
    uVar4 = FUN_06031f94();
    if ((uVar4 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar5 = FUN_0603205c();
      plVar11 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar5;
      if (plVar11 == (long *)0x0) goto LAB_06031f80;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_0322f04c(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
        uVar7 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar7,0);
      }
      if (*(uint *)(plVar11 + 3) <= unaff_w22) {
LAB_06031f84:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar11[(long)(int)unaff_w22 + 4] = lVar5;
      thunk_FUN_0329bf60(plVar11 + (long)(int)unaff_w22 + 4,lVar5);
    }
    uStack000000000000000c = unaff_w22;
    uVar7 = thunk_FUN_0322ed78(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (undefined4)unaff_x21;
    uVar8 = thunk_FUN_0322ed78(*unaff_x28,&stack0x00000008);
    FUN_05c89614(*(undefined8 *)PTR_DAT_075f7900,uVar7,uVar8,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) {
LAB_06031f80:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar7 = FUN_06033f9c(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    plVar11 = *(long **)(unaff_x19 + 0x38);
    uVar2 = (int)uVar7;
    if (unaff_w22 != 0) {
      uVar2 = unaff_s10;
    }
    if (plVar11 == (long *)0x0) goto LAB_06031f80;
    lVar5 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_06031e3c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8(plVar11,*unaff_x26,9);
LAB_06031e3c:
    (*(code *)*puVar3)(plVar11,unaff_x21 & 0xffffffff,&stack0x00000030,puVar3[1]);
    if (in_stack_00000078 == 0) goto LAB_06031f80;
    FUN_06e5502c(in_stack_00000078,0);
    uVar7 = FUN_0603221c(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar7,uVar2
                        );
    lVar5 = in_stack_00000078;
    uVar8 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f78c0);
    FUN_06032bd8(uVar8,unaff_w22,unaff_x21 & 0xffffffff,lVar5,uVar7,0);
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) goto LAB_06031f80;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar9 = *unaff_x29;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_06031f80;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = uVar8;
      thunk_FUN_0329bf60(puVar3,uVar8);
    }
    else {
      FUN_047af440(lVar5,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_06032484();
        lVar5 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        goto LAB_06031f80;
      }
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *unaff_x27;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) goto LAB_06031f80;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_06031f84;
      unaff_w22 = *(uint *)(lVar5 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    param_1 = *(long **)(unaff_x19 + 0x38);
    if (param_1 == (long *)0x0) goto LAB_06031f80;
    lVar5 = *param_1;
    param_2 = *unaff_x26;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 == 0) break;
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
      if (uVar4 == 0) goto LAB_06031cc4;
    }
    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
  } while( true );
LAB_06031cc4:
  param_3 = 9;
  unaff_x23 = param_1;
  goto code_r0x06031ccc;
}


