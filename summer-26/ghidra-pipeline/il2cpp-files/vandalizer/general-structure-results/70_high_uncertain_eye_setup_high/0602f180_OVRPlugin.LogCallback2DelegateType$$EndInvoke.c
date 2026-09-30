/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 0602f180
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
               undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar8;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  uVar9 = param_3._8_8_;
  uVar4 = param_3._0_8_;
  while( true ) {
    uStack000000000000001c = (undefined4)uVar4;
    uStack0000000000000020 = (undefined4)((ulong)uVar4 >> 0x20);
    uStack0000000000000024 = uVar9;
    if (*(uint *)(param_1 + 0x18) <= unaff_x20) break;
    uVar10 = CONCAT44(uStack000000000000001c,in_stack_00000018);
    puVar6 = (undefined8 *)(param_1 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar6 + 0x14) = uVar9;
      *(undefined8 *)((long)puVar6 + 0xc) = uVar4;
      puVar6[1] = uVar10;
      *puVar6 = in_stack_00000010;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0602f280;
      lVar1 = FUN_047af170(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_0759be18);
      uVar11 = (undefined4)in_stack_00000010;
      if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_0759b2a8);
      }
      uVar2 = FUN_06e5ba28(lVar1,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0602f280;
      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar2 & 1) == 0) break;
      if (*(char *)(unaff_x24 + 0x53c) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x24 + 0x53c) = 1;
      }
      if (lVar8 == 0) goto LAB_0602f280;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_0602f284;
      uVar4 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar8 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(lVar8 + unaff_x29 + -0xc) = uVar4;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0602f280;
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x26 + 0xa82) == '\0') {
        FUN_031f20f4();
        cVar5 = *(char *)(unaff_x24 + 0x53c);
        *(undefined1 *)(unaff_x26 + 0xa82) = 1;
      }
      else {
        cVar5 = '\x01';
      }
      puVar7 = *(undefined4 **)(*unaff_x27 + 0xb8);
      uVar11 = *puVar7;
      uVar12 = puVar7[1];
      param_4 = (ulong)(uint)puVar7[2];
      if (cVar5 == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x24 + 0x53c) = 1;
      }
      puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
      param_5 = *puVar7;
      in_stack_00000070 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007c = 0;
      in_stack_00000088 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000084 = 0;
      FUN_06e67e1c(uVar11,uVar12,param_4,param_5,puVar7[1],puVar7[2],puVar7[3],&stack0x00000070,0);
      if (lVar1 == 0) goto LAB_0602f280;
      uVar9 = CONCAT44(in_stack_00000088,uStack0000000000000084);
      if (*(uint *)(lVar1 + 0x18) <= unaff_x20) goto LAB_0602f284;
      uVar4 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar10 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar6 = (undefined8 *)(lVar1 + unaff_x28);
      in_stack_00000010 = in_stack_00000070;
    }
    if (((lVar1 == 0) || (lVar3 = FUN_06e5502c(lVar1,0), lVar3 == 0)) ||
       (uVar12 = FUN_06e6abb8(lVar3,0), lVar8 == 0)) {
LAB_0602f280:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_x20) break;
    puVar7 = (undefined4 *)(lVar8 + unaff_x29);
    puVar7[-3] = uVar12;
    puVar7[-2] = uVar11;
    puVar7[-1] = (int)param_4;
    *puVar7 = param_5;
    uVar4 = FUN_06e5502c(lVar1,0);
    FUN_05f9a6f0(&stack0x00000070,uVar4,0,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000090 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar4 = FUN_06e5502c();
    FUN_05faed1c(&stack0x00000070,uVar4,&stack0x00000090,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000090 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0602f280;
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    uVar9 = *(undefined8 *)(unaff_x25 + 0x14);
    uVar4 = *(undefined8 *)(unaff_x25 + 0xc);
    uStack0000000000000084 = (undefined4)uVar9;
    in_stack_00000088 = (undefined4)((ulong)uVar9 >> 0x20);
    uStack000000000000007c = (undefined4)uVar4;
    uStack0000000000000080 = (undefined4)((ulong)uVar4 >> 0x20);
    if (param_1 == 0) goto LAB_0602f280;
    in_stack_00000018 = uStack0000000000000078;
    in_stack_00000010 = in_stack_00000070;
  }
LAB_0602f284:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


