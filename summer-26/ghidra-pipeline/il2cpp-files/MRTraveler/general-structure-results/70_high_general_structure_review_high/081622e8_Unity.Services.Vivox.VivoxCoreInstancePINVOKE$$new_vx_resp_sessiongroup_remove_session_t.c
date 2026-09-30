/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_sessiongroup_remove_session_t
ENTRY_POINT: 081622e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_sessiongroup_remove_session_t
               (undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x24;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
  uVar5 = FUN_05ac7d38(&stack0x00000008,*param_1);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000008;
    thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0418307c(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    lVar3 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e7c310);
    if (lVar3 == 0) {
      plVar6 = *(long **)(unaff_x19 + 0xc);
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_08e695a0 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08e695a0
           )) {
          lVar3 = FUN_0701b8d8(plVar6,0);
          if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0701b998(lVar3,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
      }
      uVar4 = thunk_FUN_03ce5214(PTR_DAT_08f04c78);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(plVar6,uVar4);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0815da00();
    *unaff_x19 = 0xfffffffe;
    puVar2 = PTR_DAT_08e7c2e8;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,lVar3,*(undefined8 *)puVar2);
  }
  return;
}


