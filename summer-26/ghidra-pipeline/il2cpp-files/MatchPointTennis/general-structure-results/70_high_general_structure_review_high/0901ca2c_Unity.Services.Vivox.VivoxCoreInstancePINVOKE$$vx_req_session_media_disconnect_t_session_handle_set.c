/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_disconnect_t_session_handle_set
ENTRY_POINT: 0901ca2c
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
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_disconnect_t_session_handle_set
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  int in_w9;
  long in_x10;
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
  
  do {
    param_1 = param_1 + in_x10 * 0x10;
    *(int *)(unaff_x19 + 0x18) = in_w9;
    puVar6 = (undefined8 *)(param_1 + 0x20);
    *puVar6 = param_3;
    *(undefined8 *)(param_1 + 0x28) = param_4;
    thunk_FUN_044bb4b4(puVar6,0);
    while( true ) {
      uVar4 = FUN_0768d020(&stack0x00000020,*unaff_x27);
      uVar7 = in_stack_00000030;
      if ((uVar4 & 1) == 0) {
        FUN_0768d01c(&stack0x00000020,*unaff_x26);
        iVar3 = FUN_04ce58e8();
        puVar2 = PTR_DAT_09fc0188;
        if (iVar3 == 0) {
          thunk_FUN_044adef4(PTR_DAT_09fc0188);
          FUN_03db7f50();
          lVar8 = thunk_FUN_044adef4(puVar2);
          uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
          uVar7 = thunk_FUN_044adef4(PTR_DAT_09f21278);
          uVar5 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
          uVar7 = thunk_FUN_04fd4178(uVar7,uVar9,uVar5);
          uVar5 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
        }
        else {
          iVar3 = FUN_04ce58e8();
          if (iVar3 < 2) {
            uVar7 = FUN_04cecb64();
            FUN_04cecb64();
            uVar5 = thunk_FUN_0448520c(*unaff_x23);
            FUN_0901c4d4(uVar5,uVar7,extraout_x1);
            return uVar5;
          }
          lVar8 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar8 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          uVar7 = thunk_FUN_044adef4(PTR_DAT_09f21278);
          uVar5 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
          if (lVar8 == 0) {
            lVar8 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            puVar2 = PTR_DAT_09fc01a8;
            lVar8 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
            uVar11 = **(undefined8 **)(lVar8 + 0xb8);
            thunk_FUN_044adef4(PTR_DAT_09fba8f0);
            uVar9 = thunk_FUN_0448520c();
            uVar10 = thunk_FUN_044adef4(PTR_DAT_09fc01b0);
            FUN_05555340(uVar9,uVar11,uVar10,0);
            lVar8 = thunk_FUN_044adef4(puVar2);
            *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8) = uVar9;
            lVar8 = thunk_FUN_044adef4(puVar2);
            thunk_FUN_044bb4b4(*(long *)(lVar8 + 0xb8) + 8,uVar9);
          }
          thunk_FUN_044adef4(PTR_DAT_09fba900);
          uVar9 = thunk_FUN_04cfebe4();
          uVar10 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
          uVar7 = thunk_FUN_04fd4178(uVar7,uVar9,uVar10);
        }
        uVar7 = FUN_078a7764(uVar5,uVar7,0);
        thunk_FUN_044adef4(PTR_DAT_09f273d8);
        uVar5 = thunk_FUN_0448520c();
        FUN_090250b8(uVar5,uVar7,0);
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09fc01b8);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar5,uVar7);
      }
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar5 = FUN_07acb74c();
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_06c733e0(&stack0x00000008,uVar5,uVar7,*unaff_x29);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      param_1 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      in_x10 = (long)(int)uVar1;
      if (uVar1 < *(uint *)(param_1 + 0x18)) break;
      FUN_059fee5c();
                    /* try { // try from 0901ca5c to 0911ca5f has its CatchHandler @ 0901cb74 */
    }
    in_w9 = uVar1 + 1;
    param_3 = in_stack_00000008;
    param_4 = in_stack_00000010;
  } while( true );
}


