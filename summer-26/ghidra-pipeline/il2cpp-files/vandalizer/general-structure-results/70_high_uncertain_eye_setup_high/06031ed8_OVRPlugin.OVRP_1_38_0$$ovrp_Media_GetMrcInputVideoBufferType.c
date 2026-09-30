/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 06031ed8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long in_x9;
  int in_w10;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x21;
  long *plVar10;
  undefined8 unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 unaff_s10;
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
  
  while (*(int *)(param_2 + 0x1c) = in_w10, param_1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = unaff_x23;
      thunk_FUN_0329bf60(puVar6,unaff_x23);
    }
    else {
      FUN_047af440(param_2,unaff_x23,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_06032484();
        lVar7 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
          return;
        }
        goto LAB_06031f80;
      }
      lVar7 = *unaff_x27;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *unaff_x27;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_06031f80;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_06031f84;
      uVar1 = *(uint *)(lVar7 + unaff_x21 * 4 + 0x20);
    } while ((uVar1 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) break;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_06031ce4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar10,*unaff_x26,9);
LAB_06031ce4:
    (*(code *)*puVar6)(plVar10,uVar1,&stack0x00000050,puVar6[1]);
    uVar8 = FUN_06031f94();
    if ((uVar8 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar7 = FUN_0603205c();
      plVar10 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar7;
      if (plVar10 == (long *)0x0) break;
      if ((lVar7 != 0) &&
         (lVar3 = thunk_FUN_0322f04c(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar4,0);
      }
      if (*(uint *)(plVar10 + 3) <= uVar1) {
LAB_06031f84:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar10[(long)(int)uVar1 + 4] = lVar7;
      thunk_FUN_0329bf60(plVar10 + (long)(int)uVar1 + 4,lVar7);
    }
    uStack000000000000000c = uVar1;
    uVar4 = thunk_FUN_0322ed78(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    uVar5 = thunk_FUN_0322ed78(*unaff_x28,&stack0x00000008);
    FUN_05c89614(*(undefined8 *)PTR_DAT_075f7900,uVar4,uVar5,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    uVar4 = FUN_06033f9c(*(long *)(unaff_x19 + 0x40),uVar1,0);
    plVar10 = *(long **)(unaff_x19 + 0x38);
    uVar2 = (int)uVar4;
    if (uVar1 != 0) {
      uVar2 = unaff_s10;
    }
    if (plVar10 == (long *)0x0) break;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_06031e3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar10,*unaff_x26,9);
LAB_06031e3c:
    (*(code *)*puVar6)(plVar10,unaff_x21 & 0xffffffff,&stack0x00000030,puVar6[1]);
    if (in_stack_00000078 == 0) break;
    FUN_06e5502c(in_stack_00000078,0);
    uVar4 = FUN_0603221c(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar4,uVar2
                        );
    lVar7 = in_stack_00000078;
    unaff_x23 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f78c0);
    FUN_06032bd8(unaff_x23,uVar1,unaff_x21 & 0xffffffff,lVar7,uVar4,0);
    param_2 = *(long *)(unaff_x19 + 0x68);
    if (param_2 == 0) break;
    in_x9 = *unaff_x29;
    in_w10 = *(int *)(param_2 + 0x1c) + 1;
    param_1 = *(long *)(param_2 + 0x10);
  }
LAB_06031f80:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


