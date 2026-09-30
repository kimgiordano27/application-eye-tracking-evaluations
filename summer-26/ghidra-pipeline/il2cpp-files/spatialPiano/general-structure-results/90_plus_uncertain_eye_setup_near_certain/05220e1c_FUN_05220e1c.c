/*
FUNCTION_NAME: FUN_05220e1c
ENTRY_POINT: 05220e1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05220e1c(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if ((DAT_06bba7fe & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d7df8);
    FUN_02f08768(PTR_DAT_067cde50);
    FUN_02f08768(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_02f08768(PTR_DAT_067d5ea0);
    DAT_06bba7fe = 1;
  }
  if (param_3 != (long *)0x0) {
    uVar4 = *(uint *)(param_3 + 4);
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_04f65260(0,*(undefined8 *)PTR_DAT_067cde50,0);
      uVar4 = *(uint *)(param_3 + 4);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar2 = FUN_04f65260(uVar2,*(undefined8 *)
                                  System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo
                           ,0);
      uVar4 = *(uint *)(param_3 + 4);
    }
    puVar1 = System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo;
    if ((uVar4 >> 4 & 1) != 0) {
      uVar2 = FUN_04f65260(uVar2,*(undefined8 *)PTR_DAT_067d5ea0,0);
    }
    uVar2 = FUN_04f65260(uVar2,*(undefined8 *)puVar1,0);
    if ((*(byte *)(param_3 + 4) >> 2 & 1) != 0) {
      uVar2 = FUN_04f65260(uVar2,*(undefined8 *)PTR_DAT_067d7df8,0);
    }
    uVar3 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    if (param_2 != 0) {
      FUN_05234068(param_2,uVar3,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


