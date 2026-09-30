/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$BeginInvoke
ENTRY_POINT: 0602f0c0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__BeginInvoke(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar7;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while( true ) {
    puVar6 = *(undefined4 **)(*unaff_x27 + 0xb8);
    uVar12 = *puVar6;
    uVar13 = puVar6[1];
    uVar10 = (ulong)(uint)puVar6[2];
    if (in_w8 == 0) {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x24 + 0x53c) = 1;
    }
    puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
    uVar11 = *puVar6;
    in_stack_00000070 = 0;
    uStack0000000000000078 = 0;
    uStack000000000000007c = 0;
    in_stack_00000088 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    FUN_06e67e1c(uVar12,uVar13,uVar10,uVar11,puVar6[1],puVar6[2],puVar6[3],&stack0x00000070,0);
    if (unaff_x23 == 0) break;
    uVar4 = CONCAT44(in_stack_00000088,uStack0000000000000084);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x20) {
LAB_0602f284:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar8 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar9 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    puVar5 = (undefined8 *)(unaff_x23 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar5 + 0x14) = uVar4;
      *(undefined8 *)((long)puVar5 + 0xc) = uVar8;
      puVar5[1] = uVar9;
      *puVar5 = in_stack_00000070;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0602f280;
      uVar4 = in_stack_00000070;
      lVar1 = FUN_047af170(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_0759be18);
      uVar12 = (undefined4)uVar4;
      if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_0759b2a8);
      }
      uVar2 = FUN_06e5ba28(lVar1,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0602f280;
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar2 & 1) != 0) break;
      if (((lVar1 == 0) || (lVar3 = FUN_06e5502c(lVar1,0), lVar3 == 0)) ||
         (uVar13 = FUN_06e6abb8(lVar3,0), lVar7 == 0)) goto LAB_0602f280;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_0602f284;
      puVar6 = (undefined4 *)(lVar7 + unaff_x29);
      puVar6[-3] = uVar13;
      puVar6[-2] = uVar12;
      puVar6[-1] = (int)uVar10;
      *puVar6 = uVar11;
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
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      uVar4 = *(undefined8 *)(unaff_x25 + 0x14);
      uVar8 = *(undefined8 *)(unaff_x25 + 0xc);
      uStack0000000000000084 = (undefined4)uVar4;
      in_stack_00000088 = (undefined4)((ulong)uVar4 >> 0x20);
      uStack000000000000007c = (undefined4)uVar8;
      uStack0000000000000080 = (undefined4)((ulong)uVar8 >> 0x20);
      if (lVar1 == 0) goto LAB_0602f280;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x20) goto LAB_0602f284;
      uVar9 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar5 = (undefined8 *)(lVar1 + unaff_x28);
    }
    if (*(char *)(unaff_x24 + 0x53c) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x24 + 0x53c) = 1;
    }
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_0602f284;
    uVar4 = **(undefined8 **)(*unaff_x21 + 0xb8);
    *(undefined8 *)(lVar7 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
    *(undefined8 *)(lVar7 + unaff_x29 + -0xc) = uVar4;
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    unaff_x23 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    if (*(char *)(unaff_x22 + 0xa82) == '\0') {
      FUN_031f20f4();
      in_w8 = (uint)*(byte *)(unaff_x24 + 0x53c);
      *(undefined1 *)(unaff_x22 + 0xa82) = 1;
    }
    else {
      in_w8 = 1;
    }
  }
LAB_0602f280:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


