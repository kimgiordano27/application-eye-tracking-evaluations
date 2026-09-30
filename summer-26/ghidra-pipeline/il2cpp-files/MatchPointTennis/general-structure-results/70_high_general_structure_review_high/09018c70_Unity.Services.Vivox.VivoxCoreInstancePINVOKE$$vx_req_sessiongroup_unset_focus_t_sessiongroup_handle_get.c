/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_unset_focus_t_sessiongroup_handle_get
ENTRY_POINT: 09018c70
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x09018cd0) */

undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_unset_focus_t_sessiongroup_handle_get
          (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x1;
  int in_w8;
  long lVar8;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  undefined8 *unaff_x26;
  
  if (param_2 != in_w8) {
    FUN_0768d01c(&stack0x00000020,*unaff_x26);
                    /* WARNING: Subroutine does not return */
    FUN_0452a004();
  }
  plVar7 = (long *)__cxa_begin_catch();
  lVar8 = *plVar7;
  __cxa_end_catch();
  FUN_0768d01c(&stack0x00000020,*unaff_x26);
  if (lVar8 == 0) {
    iVar2 = FUN_04ce58e8();
    puVar1 = PTR_DAT_09fc0040;
    if (iVar2 == 0) {
      thunk_FUN_044adef4(PTR_DAT_09fc0040);
      FUN_03db7f50();
      lVar8 = thunk_FUN_044adef4(puVar1);
      uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
      uVar3 = thunk_FUN_044adef4(PTR_DAT_09f21278);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
      uVar3 = thunk_FUN_04fd4178(uVar3,uVar5,uVar4);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
    }
    else {
      iVar2 = FUN_04ce58e8();
      if (iVar2 < 2) {
        uVar3 = FUN_04cecb64();
        FUN_04cecb64();
        uVar4 = thunk_FUN_0448520c(*unaff_x23);
        FUN_090183e4(uVar4,uVar3,extraout_x1);
        return uVar4;
      }
      lVar8 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar8 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      uVar3 = thunk_FUN_044adef4(PTR_DAT_09f21278);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        puVar1 = PTR_DAT_09fc0060;
        lVar8 = thunk_FUN_044adef4(PTR_DAT_09fc0060);
        uVar9 = **(undefined8 **)(lVar8 + 0xb8);
        thunk_FUN_044adef4(PTR_DAT_09fba8f0);
        uVar5 = thunk_FUN_0448520c();
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc0068);
        FUN_05555340(uVar5,uVar9,uVar6,0);
        lVar8 = thunk_FUN_044adef4(puVar1);
        *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8) = uVar5;
        lVar8 = thunk_FUN_044adef4(puVar1);
        thunk_FUN_044bb4b4(*(long *)(lVar8 + 0xb8) + 8,uVar5);
      }
      thunk_FUN_044adef4(PTR_DAT_09fba900);
      uVar5 = thunk_FUN_04cfebe4();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
      uVar3 = thunk_FUN_04fd4178(uVar3,uVar5,uVar6);
    }
    uVar3 = FUN_078a7764(uVar4,uVar3,0);
    thunk_FUN_044adef4(PTR_DAT_09f273d8);
    uVar4 = thunk_FUN_0448520c();
    FUN_090250b8(uVar4,uVar3,0);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09fc0070);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e3c(lVar8);
}


