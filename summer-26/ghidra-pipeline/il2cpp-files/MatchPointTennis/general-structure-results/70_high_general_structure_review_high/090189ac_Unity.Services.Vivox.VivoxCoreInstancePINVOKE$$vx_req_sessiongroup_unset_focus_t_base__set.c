/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_unset_focus_t_base__set
ENTRY_POINT: 090189ac
PROGRAM: MatchPointTennis-libil2cpp.so
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
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_unset_focus_t_base__set(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  
  uVar6 = thunk_FUN_044adef4();
  uVar7 = thunk_FUN_044a9a40(uVar6,*(undefined8 *)*unaff_x22);
  if ((uVar7 & 1) == 0) {
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *unaff_x22;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_0991e038,0);
  }
  __cxa_end_catch();
  while( true ) {
    uVar7 = FUN_0768d020(&stack0x00000020,*unaff_x27);
    uVar6 = in_stack_00000030;
    if ((uVar7 & 1) == 0) {
      FUN_0768d01c(&stack0x00000020,*unaff_x26);
      iVar3 = FUN_04ce58e8();
      puVar2 = PTR_DAT_09fc0040;
      if (iVar3 == 0) {
        thunk_FUN_044adef4(PTR_DAT_09fc0040);
        FUN_03db7f50();
        lVar10 = thunk_FUN_044adef4(puVar2);
        uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f21278);
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
        uVar6 = thunk_FUN_04fd4178(uVar6,uVar8,uVar4);
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
      }
      else {
        iVar3 = FUN_04ce58e8();
        if (iVar3 < 2) {
          uVar6 = FUN_04cecb64();
          FUN_04cecb64();
          uVar4 = thunk_FUN_0448520c(*unaff_x23);
          FUN_090183e4(uVar4,uVar6,extraout_x1);
          return uVar4;
        }
        lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f21278);
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
        if (lVar10 == 0) {
          lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          puVar2 = PTR_DAT_09fc0060;
          lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
          uVar11 = **(undefined8 **)(lVar10 + 0xb8);
          thunk_FUN_044adef4(PTR_DAT_09fba8f0);
          uVar8 = thunk_FUN_0448520c();
          uVar9 = thunk_FUN_044adef4(PTR_DAT_09fc0068);
          FUN_05555340(uVar8,uVar11,uVar9,0);
          lVar10 = thunk_FUN_044adef4(puVar2);
          *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8) = uVar8;
          lVar10 = thunk_FUN_044adef4(puVar2);
          thunk_FUN_044bb4b4(*(long *)(lVar10 + 0xb8) + 8,uVar8);
        }
        thunk_FUN_044adef4(PTR_DAT_09fba900);
        uVar8 = thunk_FUN_04cfebe4();
        uVar9 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
        uVar6 = thunk_FUN_04fd4178(uVar6,uVar8,uVar9);
      }
      uVar6 = FUN_078a7764(uVar4,uVar6,0);
      thunk_FUN_044adef4(PTR_DAT_09f273d8);
      uVar4 = thunk_FUN_0448520c();
      FUN_090250b8(uVar4,uVar6,0);
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc0070);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar4,uVar6);
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_07acb74c();
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_06c733e0(&stack0x00000008,uVar4,uVar6,*unaff_x29);
    if (unaff_x19 == 0) break;
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
      puVar5 = (undefined8 *)(lVar10 + 0x20);
      *puVar5 = in_stack_00000008;
      *(undefined8 *)(lVar10 + 0x28) = in_stack_00000010;
      thunk_FUN_044bb4b4(puVar5,0);
    }
    else {
      FUN_059fee5c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


