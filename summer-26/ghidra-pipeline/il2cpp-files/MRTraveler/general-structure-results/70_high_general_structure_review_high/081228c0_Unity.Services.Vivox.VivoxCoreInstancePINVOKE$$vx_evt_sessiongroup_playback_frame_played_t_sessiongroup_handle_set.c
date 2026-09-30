/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_playback_frame_played_t_sessiongroup_handle_set
ENTRY_POINT: 081228c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_playback_frame_played_t_sessiongroup_handle_set
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack0000000000000000;
  long lStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  uStack0000000000000010 = in_stack_000000a0;
  uStack0000000000000018 = in_stack_000000a8;
  uStack0000000000000000 = in_stack_00000090;
  lStack0000000000000008 = in_stack_00000098;
  if ((DAT_09428d00 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6eab8);
    FUN_03c8f898(PTR_DAT_08e69e98);
    FUN_03c8f898(PTR_DAT_08f02a10);
    FUN_03c8f898(PTR_DAT_08f02a18);
    FUN_03c8f898(PTR_DAT_08f02a20);
    DAT_09428d00 = 1;
  }
  FUN_07145224(param_1,0);
  *(undefined8 *)(param_1 + 0x90) = param_2;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x90),param_2);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x98),param_3);
  *(undefined8 *)(param_1 + 0xa0) = param_4;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0xa0),param_4);
  *(undefined8 *)(param_1 + 0xb0) = param_5;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0xb0),param_5);
  *(undefined8 *)(param_1 + 0xb8) = param_6;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0xb8),param_6);
  *(undefined8 *)(param_1 + 0xc0) = param_7;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0xc0),param_7);
  *(undefined8 *)(param_1 + 200) = param_8;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 200),param_8);
  puVar4 = (undefined8 *)(param_1 + 0xd0);
  *puVar4 = in_stack_00000080;
  thunk_FUN_03d233cc(puVar4,in_stack_00000080);
  uVar5 = *puVar4;
  lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02a10);
  FUN_07145224(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x10),uVar5);
  *(long *)(param_1 + 0xa8) = lVar3;
  thunk_FUN_03d233cc((long *)(param_1 + 0xa8),lVar3);
  *(undefined8 *)(param_1 + 0x60) = in_stack_00000088;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x60),in_stack_00000088);
  *(undefined8 *)(param_1 + 0x68) = uStack0000000000000000;
  thunk_FUN_03d233cc();
  plVar6 = (long *)(param_1 + 0x70);
  *plVar6 = lStack0000000000000008;
  thunk_FUN_03d233cc(plVar6);
  *(undefined8 *)(param_1 + 0x78) = uStack0000000000000010;
  thunk_FUN_03d233cc();
  *(undefined8 *)(param_1 + 0x80) = uStack0000000000000018;
  thunk_FUN_03d233cc();
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_08122b50(param_1);
  lVar3 = *plVar6;
  uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6eab8);
  System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
            (uVar5,param_1,*(undefined8 *)PTR_DAT_08f02a18,0);
  puVar2 = PTR_DAT_08f02a20;
  puVar1 = PTR_DAT_08e69e98;
  if (lVar3 != 0) {
    FUN_08122be8(lVar3,uVar5);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_07064478(uVar5,param_1,*(undefined8 *)puVar2,0);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_encoded_uri_with_tag_set
              (param_1,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


