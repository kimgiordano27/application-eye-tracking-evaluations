/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_unset_focus_create
ENTRY_POINT: 0841940c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_unset_focus_create(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long lVar10;
  int in_w10;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  
  while( true ) {
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar10 + 0x20);
      *puVar6 = in_stack_00000008;
      *(undefined8 *)(lVar10 + 0x28) = in_stack_00000010;
      thunk_FUN_03d1023c(puVar6,0);
    }
    else {
      FUN_0590c4e0();
    }
    uVar4 = FUN_06daab3c(&stack0x00000020,*unaff_x27);
    uVar7 = in_stack_00000030;
    if ((uVar4 & 1) == 0) break;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar5 = FUN_07207d1c();
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_0653b8e0(&stack0x00000008,uVar5,uVar7,*unaff_x29);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_w10 = *(int *)(unaff_x19 + 0x1c);
  }
  FUN_06daab38(&stack0x00000020,*unaff_x26);
  iVar3 = FUN_04efb9a0();
  puVar2 = PTR_DAT_0927c520;
  if (iVar3 == 0) {
    thunk_FUN_03d1e194(PTR_DAT_0927c520);
    FUN_037e7a9c();
    lVar10 = thunk_FUN_03d1e194(puVar2);
    uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091a29b8);
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_091dc840);
    uVar7 = thunk_FUN_0512c1fc(uVar7,uVar8,uVar5);
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_0927c4a0);
  }
  else {
    iVar3 = FUN_04efb9a0();
    if (iVar3 < 2) {
      uVar7 = FUN_04f02988();
      FUN_04f02988();
      uVar5 = thunk_FUN_03d2ef40(*unaff_x23);
      FUN_08418ee0(uVar5,uVar7,extraout_x1);
      return uVar5;
    }
    lVar10 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar10 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091a29b8);
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_0927c4b0);
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      puVar2 = PTR_DAT_0927c540;
      lVar10 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
      uVar11 = **(undefined8 **)(lVar10 + 0xb8);
      thunk_FUN_03d1e194(PTR_DAT_0927c4b8);
      uVar8 = thunk_FUN_03d2ef40();
      uVar9 = thunk_FUN_03d1e194(PTR_DAT_0927c548);
      FUN_054b57f8(uVar8,uVar11,uVar9,0);
      lVar10 = thunk_FUN_03d1e194(puVar2);
      *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8) = uVar8;
      lVar10 = thunk_FUN_03d1e194(puVar2);
      thunk_FUN_03d1023c(*(long *)(lVar10 + 0xb8) + 8,uVar8);
    }
    thunk_FUN_03d1e194(PTR_DAT_0927c4c8);
    uVar8 = thunk_FUN_04f0eeec();
    uVar9 = thunk_FUN_03d1e194(PTR_DAT_091dc840);
    uVar7 = thunk_FUN_0512c1fc(uVar7,uVar8,uVar9);
  }
  uVar7 = FUN_06fc5244(uVar5,uVar7,0);
  thunk_FUN_03d1e194(PTR_DAT_091fb028);
  uVar5 = thunk_FUN_03d2ef40();
  FUN_0842b5c8(uVar5,uVar7,0);
  uVar7 = thunk_FUN_03d1e194(PTR_DAT_0927c550);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar5,uVar7);
}


