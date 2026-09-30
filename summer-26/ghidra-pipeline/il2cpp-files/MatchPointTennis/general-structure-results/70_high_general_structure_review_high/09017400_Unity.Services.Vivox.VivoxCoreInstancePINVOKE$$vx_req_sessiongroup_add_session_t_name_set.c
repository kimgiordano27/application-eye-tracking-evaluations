/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_name_set
ENTRY_POINT: 09017400
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_name_set
          (long param_1)

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
  long unaff_x19;
  undefined8 unaff_x22;
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
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar5 = FUN_07acb74c();
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_06c733e0(&stack0x00000008,uVar5,unaff_x22,*unaff_x29);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar10 + 0x20);
      *puVar6 = in_stack_00000008;
      *(undefined8 *)(lVar10 + 0x28) = in_stack_00000010;
      thunk_FUN_044bb4b4(puVar6,0);
    }
    else {
      FUN_059fee5c();
    }
    uVar4 = FUN_0768d020(&stack0x00000020,*unaff_x27);
    if ((uVar4 & 1) == 0) break;
    param_1 = *unaff_x28;
    unaff_x22 = in_stack_00000030;
  }
  FUN_0768d01c(&stack0x00000020,*unaff_x26);
  iVar3 = FUN_04ce58e8();
  puVar2 = PTR_DAT_09fbffe0;
  if (iVar3 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09fbffe0);
    FUN_03db7f50();
    lVar10 = thunk_FUN_044adef4(puVar2);
    uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f21278);
    uVar7 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
    uVar5 = thunk_FUN_04fd4178(uVar5,uVar8,uVar7);
    uVar7 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
  }
  else {
    iVar3 = FUN_04ce58e8();
    if (iVar3 < 2) {
      uVar5 = FUN_04cecb64();
      FUN_04cecb64();
      uVar7 = thunk_FUN_0448520c(*unaff_x23);
      FUN_09016f10(uVar7,uVar5,extraout_x1);
      return uVar7;
    }
    lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc0000);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc0000);
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f21278);
    uVar7 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc0000);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      puVar2 = PTR_DAT_09fc0000;
      lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc0000);
      uVar11 = **(undefined8 **)(lVar10 + 0xb8);
      thunk_FUN_044adef4(PTR_DAT_09fba8f0);
      uVar8 = thunk_FUN_0448520c();
      uVar9 = thunk_FUN_044adef4(PTR_DAT_09fc0008);
      FUN_05555340(uVar8,uVar11,uVar9,0);
      lVar10 = thunk_FUN_044adef4(puVar2);
      *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8) = uVar8;
      lVar10 = thunk_FUN_044adef4(puVar2);
      thunk_FUN_044bb4b4(*(long *)(lVar10 + 0xb8) + 8,uVar8);
    }
    thunk_FUN_044adef4(PTR_DAT_09fba900);
    uVar8 = thunk_FUN_04cfebe4();
    uVar9 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
    uVar5 = thunk_FUN_04fd4178(uVar5,uVar8,uVar9);
  }
  uVar5 = FUN_078a7764(uVar7,uVar5,0);
  thunk_FUN_044adef4(PTR_DAT_09f273d8);
  uVar7 = thunk_FUN_0448520c();
  FUN_090250b8(uVar7,uVar5,0);
  uVar5 = thunk_FUN_044adef4(PTR_DAT_09fc0010);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar7,uVar5);
}


