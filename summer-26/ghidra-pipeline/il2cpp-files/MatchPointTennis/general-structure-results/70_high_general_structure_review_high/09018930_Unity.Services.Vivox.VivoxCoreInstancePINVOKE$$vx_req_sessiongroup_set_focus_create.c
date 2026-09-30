/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_create
ENTRY_POINT: 09018930
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_create
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 uVar10;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  
  while( true ) {
    if ((uint)in_x10 < in_w11) {
      param_1 = param_1 + in_x10 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = (uint)in_x10 + 1;
      puVar5 = (undefined8 *)(param_1 + 0x20);
      *puVar5 = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
      thunk_FUN_044bb4b4(puVar5,0);
    }
    else {
      FUN_059fee5c();
    }
    uVar3 = FUN_0768d020(&stack0x00000020,*unaff_x27);
    uVar6 = in_stack_00000030;
    if ((uVar3 & 1) == 0) {
      FUN_0768d01c(&stack0x00000020,*unaff_x26);
      iVar2 = FUN_04ce58e8();
      puVar1 = PTR_DAT_09fc0040;
      if (iVar2 == 0) {
        thunk_FUN_044adef4(PTR_DAT_09fc0040);
        FUN_03db7f50();
        lVar7 = thunk_FUN_044adef4(puVar1);
        uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f21278);
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
        uVar6 = thunk_FUN_04fd4178(uVar6,uVar8,uVar4);
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
      }
      else {
        iVar2 = FUN_04ce58e8();
        if (iVar2 < 2) {
          uVar6 = FUN_04cecb64();
          FUN_04cecb64();
          uVar4 = thunk_FUN_0448520c(*unaff_x23);
          FUN_090183e4(uVar4,uVar6,extraout_x1);
          return uVar4;
        }
        lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f21278);
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
        if (lVar7 == 0) {
          lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          puVar1 = PTR_DAT_09fc0060;
          lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
          uVar10 = **(undefined8 **)(lVar7 + 0xb8);
          thunk_FUN_044adef4(PTR_DAT_09fba8f0);
          uVar8 = thunk_FUN_0448520c();
          uVar9 = thunk_FUN_044adef4(PTR_DAT_09fc0068);
          FUN_05555340(uVar8,uVar10,uVar9,0);
          lVar7 = thunk_FUN_044adef4(puVar1);
          *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8) = uVar8;
          lVar7 = thunk_FUN_044adef4(puVar1);
          thunk_FUN_044bb4b4(*(long *)(lVar7 + 0xb8) + 8,uVar8);
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
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_x10 = (long)*(int *)(unaff_x19 + 0x18);
    in_w11 = *(uint *)(param_1 + 0x18);
    param_3 = in_stack_00000008;
    param_4 = in_stack_00000010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


