/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_no_session_create
ENTRY_POINT: 0841979c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_no_session_create(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540();
  }
  iVar2 = FUN_04efb9a0();
  puVar1 = PTR_DAT_0927c520;
  if (iVar2 == 0) {
    thunk_FUN_03d1e194(PTR_DAT_0927c520);
    FUN_037e7a9c();
    lVar5 = thunk_FUN_03d1e194(puVar1);
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_091a29b8);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_091dc840);
    uVar3 = thunk_FUN_0512c1fc(uVar3,uVar6,uVar4);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_0927c4a0);
  }
  else {
    iVar2 = FUN_04efb9a0();
    if (iVar2 < 2) {
      uVar3 = FUN_04f02988();
      FUN_04f02988();
      uVar4 = thunk_FUN_03d2ef40(*unaff_x23);
      FUN_08418ee0(uVar4,uVar3,extraout_x1);
      return uVar4;
    }
    lVar5 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_091a29b8);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_0927c4b0);
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      puVar1 = PTR_DAT_0927c540;
      lVar5 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      thunk_FUN_03d1e194(PTR_DAT_0927c4b8);
      uVar6 = thunk_FUN_03d2ef40();
      uVar7 = thunk_FUN_03d1e194(PTR_DAT_0927c548);
      FUN_054b57f8(uVar6,uVar8,uVar7,0);
      lVar5 = thunk_FUN_03d1e194(puVar1);
      *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8) = uVar6;
      lVar5 = thunk_FUN_03d1e194(puVar1);
      thunk_FUN_03d1023c(*(long *)(lVar5 + 0xb8) + 8,uVar6);
    }
    thunk_FUN_03d1e194(PTR_DAT_0927c4c8);
    uVar6 = thunk_FUN_04f0eeec();
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091dc840);
    uVar3 = thunk_FUN_0512c1fc(uVar3,uVar6,uVar7);
  }
  uVar3 = FUN_06fc5244(uVar4,uVar3,0);
  thunk_FUN_03d1e194(PTR_DAT_091fb028);
  uVar4 = thunk_FUN_03d2ef40();
  FUN_0842b5c8(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03d1e194(PTR_DAT_0927c550);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar4,uVar3);
}


