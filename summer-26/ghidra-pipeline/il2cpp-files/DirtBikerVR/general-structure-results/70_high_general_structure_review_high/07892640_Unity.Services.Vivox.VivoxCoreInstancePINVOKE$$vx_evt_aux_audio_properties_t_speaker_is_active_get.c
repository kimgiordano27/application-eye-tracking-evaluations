/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_aux_audio_properties_t_speaker_is_active_get
ENTRY_POINT: 07892640
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_aux_audio_properties_t_speaker_is_active_get
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
                    /* try { // try from 07892640 to 0799264f has its CatchHandler @ 07892e64 */
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xa20));
  FUN_03a8a718(UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo);
  FUN_03a8a718(PTR_DAT_084902d8);
  FUN_03a8a718(PTR_DAT_08486bc0);
  FUN_03a8a718(System_Collections_Generic_List<ClaimsIdentity>_TypeInfo);
                    /* try { // try from 07892678 to 07992687 has its CatchHandler @ 07892e60 */
  *(undefined1 *)(unaff_x23 + 0x7df) = 1;
  uVar4 = *unaff_x20;
  uVar2 = FUN_0674aae0();
  uVar2 = FUN_065ce354(uVar4,*unaff_x22,uVar2,*unaff_x21,0);
  puVar1 = System_Collections_Generic_List<ClientId>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar4,*unaff_x21,0);
  }
  puVar1 = System_Collections_Generic_List<CloudSaveValidationErrorDetail>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x28);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar4,*unaff_x21,0);
  }
  puVar1 = UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar4,*unaff_x21,0);
  }
  puVar1 = System_Collections_Generic_List<CloudSettings>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar4,*unaff_x21,0);
  }
  puVar1 = System_Collections_Generic_List<CloudSaveConflictErrorDetail>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x40);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar4,*unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    uVar2 = FUN_065cddf0(uVar2,*(undefined8 *)
                                System_Collections_Generic_List<ClientStateEvent>_TypeInfo,
                         *(long *)(unaff_x19 + 0x48),0);
  }
  return uVar2;
}


