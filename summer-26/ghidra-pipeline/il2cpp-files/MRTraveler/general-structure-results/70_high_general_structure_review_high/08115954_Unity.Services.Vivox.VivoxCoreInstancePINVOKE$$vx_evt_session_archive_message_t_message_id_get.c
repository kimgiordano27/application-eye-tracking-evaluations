/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_message_id_get
ENTRY_POINT: 08115954
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_message_id_get
               (ulong param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x21;
  
  if ((param_1 & 1) != 0) {
    plVar2 = (long *)Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                               ();
    uVar5 = *(undefined8 *)PTR_DAT_08f023f8;
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    }
    uVar5 = FUN_06f683f8(uVar5,uVar3,0);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e695a0);
    FUN_071396dc(uVar3,uVar5,0);
    FUN_0479df5c();
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_08f02308 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08f02308))
  {
    uVar5 = FUN_0811134c();
    *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
    thunk_FUN_03d233cc();
  }
  if ((*(long *)(unaff_x19 + 0x18) != 0) &&
     (uVar4 = FUN_085d9f54(*(long *)(unaff_x19 + 0x18),0), (uVar4 & 1) == 0)) {
    lVar6 = *(long *)(unaff_x19 + 0x18);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              ();
    if (lVar6 != 0) {
      FUN_085da19c(lVar6,uVar5,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_08115b90();
  return;
}


