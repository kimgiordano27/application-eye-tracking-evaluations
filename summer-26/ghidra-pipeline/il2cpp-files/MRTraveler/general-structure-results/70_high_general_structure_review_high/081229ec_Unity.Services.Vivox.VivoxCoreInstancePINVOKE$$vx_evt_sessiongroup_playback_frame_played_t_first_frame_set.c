/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_playback_frame_played_t_first_frame_set
ENTRY_POINT: 081229ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_playback_frame_played_t_first_frame_set
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long *plVar4;
  undefined8 unaff_x24;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar3 = *unaff_x20;
  lVar2 = thunk_FUN_03cf5234(**(undefined8 **)(param_1 + 0xa10));
  FUN_07145224(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x10),uVar3);
  *(long *)(unaff_x19 + 0xa8) = lVar2;
  thunk_FUN_03d233cc((long *)(unaff_x19 + 0xa8),lVar2);
  *(undefined8 *)(unaff_x19 + 0x60) = unaff_x24;
  thunk_FUN_03d233cc();
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000000;
  thunk_FUN_03d233cc();
  plVar4 = (long *)(unaff_x19 + 0x70);
  *plVar4 = in_stack_00000008;
  thunk_FUN_03d233cc(plVar4);
  *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000010;
  thunk_FUN_03d233cc();
  *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000018;
  thunk_FUN_03d233cc();
  *(undefined4 *)(unaff_x19 + 0x88) = 0;
  FUN_08122b50();
  lVar2 = *plVar4;
  uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6eab8);
  System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
            ();
  puVar1 = PTR_DAT_08e69e98;
  if (lVar2 != 0) {
    FUN_08122be8(lVar2,uVar3);
    thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_07064478();
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_encoded_uri_with_tag_set
              ();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


