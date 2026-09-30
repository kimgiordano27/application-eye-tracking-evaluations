/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcInputVideoBufferType
ENTRY_POINT: 06031e10
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcInputVideoBufferType(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
  long lVar8;
  int *piVar9;
  int *in_x10;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar10;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 unaff_d8;
  ulong unaff_d9;
  uint unaff_s10;
  uint uStack0000000000000008;
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
  
code_r0x06031e10:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_06031e04;
LAB_06031e1c:
  puVar2 = (undefined8 *)FUN_0322c1e8(unaff_x24,param_3,9);
  do {
    (*(code *)*puVar2)(unaff_x24,unaff_x21 & 0xffffffff,&stack0x00000030,puVar2[1]);
    if (in_stack_00000078 == 0) {
LAB_06031f80:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_06e5502c(in_stack_00000078,0);
    uVar3 = FUN_0603221c(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,unaff_d8,
                         unaff_d9);
    lVar5 = in_stack_00000078;
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f78c0);
    FUN_06032bd8(uVar4,unaff_w22,unaff_x21 & 0xffffffff,lVar5,uVar3,0);
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) goto LAB_06031f80;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *unaff_x29;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_06031f80;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar2 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *puVar2 = uVar4;
      thunk_FUN_0329bf60(puVar2,uVar4);
    }
    else {
      FUN_047af440(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
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
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) goto LAB_06031f80;
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_06031ce4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar10,*unaff_x26,9);
LAB_06031ce4:
    (*(code *)*puVar2)(plVar10,unaff_w22,&stack0x00000050,puVar2[1]);
    uVar7 = FUN_06031f94();
    if ((uVar7 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar5 = FUN_0603205c();
      plVar10 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar5;
      if (plVar10 == (long *)0x0) goto LAB_06031f80;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_0322f04c(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
        uVar3 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar3,0);
      }
      if (*(uint *)(plVar10 + 3) <= unaff_w22) {
LAB_06031f84:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar10[(long)(int)unaff_w22 + 4] = lVar5;
      thunk_FUN_0329bf60(plVar10 + (long)(int)unaff_w22 + 4,lVar5);
    }
    uStack000000000000000c = unaff_w22;
    uVar3 = thunk_FUN_0322ed78(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    uVar4 = thunk_FUN_0322ed78(*unaff_x28,&stack0x00000008);
    FUN_05c89614(*(undefined8 *)PTR_DAT_075f7900,uVar3,uVar4,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06031f80;
    unaff_d8 = FUN_06033f9c(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    unaff_x24 = *(long **)(unaff_x19 + 0x38);
    uVar1 = (uint)unaff_d8;
    if (unaff_w22 != 0) {
      uVar1 = unaff_s10;
    }
    unaff_d9 = (ulong)uVar1;
    if (unaff_x24 == (long *)0x0) goto LAB_06031f80;
    param_1 = *unaff_x24;
    param_3 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_06031e1c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_06031e04:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x06031e10;
    puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 9) * 0x10 + 0x138);
  } while( true );
}


