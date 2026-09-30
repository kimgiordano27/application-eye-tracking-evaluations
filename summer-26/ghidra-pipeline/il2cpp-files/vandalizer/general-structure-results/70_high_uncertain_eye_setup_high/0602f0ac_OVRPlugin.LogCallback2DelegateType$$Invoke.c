/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 0602f0ac
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


void OVRPlugin_LogCallback2DelegateType__Invoke(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar7;
  long lVar8;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while( true ) {
    lVar8 = *(long *)(param_1 + 0x38);
    if (*(char *)(unaff_x26 + 0xa82) == '\0') {
      FUN_031f20f4();
      cVar4 = *(char *)(unaff_x24 + 0x53c);
      *(undefined1 *)(unaff_x26 + 0xa82) = 1;
    }
    else {
      cVar4 = '\x01';
    }
    puVar6 = *(undefined4 **)(*unaff_x27 + 0xb8);
    uVar13 = *puVar6;
    uVar14 = puVar6[1];
    uVar11 = (ulong)(uint)puVar6[2];
    if (cVar4 == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x24 + 0x53c) = 1;
    }
    puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
    uVar12 = *puVar6;
    in_stack_00000070 = 0;
    uStack0000000000000078 = 0;
    uStack000000000000007c = 0;
    in_stack_00000088 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    FUN_06e67e1c(uVar13,uVar14,uVar11,uVar12,puVar6[1],puVar6[2],puVar6[3],&stack0x00000070,0);
    if (lVar8 == 0) break;
    uVar3 = CONCAT44(in_stack_00000088,uStack0000000000000084);
    if (*(uint *)(lVar8 + 0x18) <= unaff_x20) {
LAB_0602f284:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar9 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar10 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    puVar5 = (undefined8 *)(lVar8 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar5 + 0x14) = uVar3;
      *(undefined8 *)((long)puVar5 + 0xc) = uVar9;
      puVar5[1] = uVar10;
      *puVar5 = in_stack_00000070;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0602f280;
      uVar3 = in_stack_00000070;
      lVar8 = FUN_047af170(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_0759be18);
      uVar13 = (undefined4)uVar3;
      if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_0759b2a8);
      }
      uVar1 = FUN_06e5ba28(lVar8,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0602f280;
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar1 & 1) != 0) break;
      if (((lVar8 == 0) || (lVar2 = FUN_06e5502c(lVar8,0), lVar2 == 0)) ||
         (uVar14 = FUN_06e6abb8(lVar2,0), lVar7 == 0)) goto LAB_0602f280;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_0602f284;
      puVar6 = (undefined4 *)(lVar7 + unaff_x29);
      puVar6[-3] = uVar14;
      puVar6[-2] = uVar13;
      puVar6[-1] = (int)uVar11;
      *puVar6 = uVar12;
      uVar3 = FUN_06e5502c(lVar8,0);
      FUN_05f9a6f0(&stack0x00000070,uVar3,0,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = in_stack_00000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar3 = FUN_06e5502c();
      FUN_05faed1c(&stack0x00000070,uVar3,&stack0x00000090,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = in_stack_00000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0602f280;
      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      uVar3 = *(undefined8 *)(unaff_x25 + 0x14);
      uVar9 = *(undefined8 *)(unaff_x25 + 0xc);
      uStack0000000000000084 = (undefined4)uVar3;
      in_stack_00000088 = (undefined4)((ulong)uVar3 >> 0x20);
      uStack000000000000007c = (undefined4)uVar9;
      uStack0000000000000080 = (undefined4)((ulong)uVar9 >> 0x20);
      if (lVar8 == 0) goto LAB_0602f280;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_0602f284;
      uVar10 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar5 = (undefined8 *)(lVar8 + unaff_x28);
    }
    if (*(char *)(unaff_x24 + 0x53c) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x24 + 0x53c) = 1;
    }
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_0602f284;
    uVar3 = **(undefined8 **)(*unaff_x21 + 0xb8);
    *(undefined8 *)(lVar7 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
    *(undefined8 *)(lVar7 + unaff_x29 + -0xc) = uVar3;
    param_1 = *(long *)(unaff_x19 + 0x48);
    if (param_1 == 0) break;
  }
LAB_0602f280:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


