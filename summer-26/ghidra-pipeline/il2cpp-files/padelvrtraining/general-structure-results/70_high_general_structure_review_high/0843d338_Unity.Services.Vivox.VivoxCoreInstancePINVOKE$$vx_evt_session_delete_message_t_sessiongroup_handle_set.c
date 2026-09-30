/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_sessiongroup_handle_set
ENTRY_POINT: 0843d338
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_sessiongroup_handle_set
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *puVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  
  *(undefined8 *)(unaff_x23 + 0x30) = *param_1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x23 + 0x30));
  if (3 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + 0x38) = unaff_x20;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x23 + 0x38));
    puVar2 = PTR_DAT_091a0a80;
    puVar1 = PTR_DAT_091a0a78;
    if (4 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x40) = *(undefined8 *)PTR_DAT_0927cd88;
      thunk_FUN_03d1023c();
      uVar3 = FUN_06fd2590();
      puVar7 = (undefined8 *)(unaff_x19 + 0x28);
      *puVar7 = uVar3;
      thunk_FUN_03d1023c(puVar7,uVar3);
      lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
      System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
                (lVar4,*(undefined8 *)puVar2);
      uVar5 = FUN_06fd246c(*(undefined8 *)(unaff_x19 + 0x20),0);
      if ((uVar5 & 1) == 0) {
        lVar6 = *unaff_x25;
        uVar3 = *unaff_x22;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          lVar6 = thunk_FUN_03db619c();
        }
        FUN_08431540(lVar6,lVar4,*(undefined8 *)PTR_DAT_091fd950,uVar3);
      }
      puVar1 = PTR_DAT_091b0398;
      if (lVar4 != 0) {
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar8 = *puVar7;
          uVar3 = FUN_06fd3398(*(undefined8 *)PTR_DAT_091af1e8,lVar4,0);
          uVar3 = FUN_06fd2168(uVar8,*(undefined8 *)puVar1,uVar3,0);
          *puVar7 = uVar3;
          thunk_FUN_03d1023c(puVar7,uVar3);
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


