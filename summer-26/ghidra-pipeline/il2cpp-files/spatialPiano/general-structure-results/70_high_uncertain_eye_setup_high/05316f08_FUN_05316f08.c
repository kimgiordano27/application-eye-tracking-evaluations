/*
FUNCTION_NAME: FUN_05316f08
ENTRY_POINT: 05316f08
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05316f08(float param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  long local_58;
  long lStack_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  if ((DAT_06bbb206 & 1) == 0) {
    FUN_02f08768(System_Xml_Schema_Datatype_union_TypeInfo);
    FUN_02f08768(System_Xml_Schema_Datatype_unsignedByte_TypeInfo);
    DAT_06bbb206 = 1;
  }
  puVar1 = System_Xml_Schema_Datatype_unsignedByte_TypeInfo;
  local_40 = 0;
  local_38 = 0;
  local_44 = 0;
  local_58 = 0;
  lStack_50 = 0;
  if (param_3 == 0) goto LAB_053170b0;
  iVar3 = *(int *)(param_3 + 0x18);
  if (iVar3 == 1) {
    lVar2 = FUN_03abf644(param_3,0,*(undefined8 *)System_Xml_Schema_Datatype_unsignedByte_TypeInfo);
    if (lVar2 == 0) goto LAB_053170b0;
    if ((*(char *)(lVar2 + 0x38) == '\0') || (*(long *)(lVar2 + 0x48) == 0)) {
      iVar3 = *(int *)(param_3 + 0x18);
      goto OVRPlugin__get_positionTracked;
    }
    lVar4 = *param_4;
    lVar2 = FUN_03abf644(param_3,0,*(undefined8 *)puVar1);
    if (lVar2 == 0) goto LAB_053170b0;
    if (*(char *)(lVar2 + 0x38) == '\0') {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x48);
    }
  }
  else {
OVRPlugin__get_positionTracked:
    if (iVar3 < 2) {
      return 0;
    }
    lVar2 = FUN_060ed7ac(param_2,0);
    if (lVar2 == 0) goto LAB_053170b0;
    fVar5 = (float)FUN_06101d4c(lVar2,0);
    FUN_05310ba4(param_1 / fVar5,param_3,&local_38,&local_40,&local_44);
    if (local_38 == 0) goto LAB_053170b0;
    if ((*(char *)(local_38 + 0x38) == '\0') || (lVar2 = *(long *)(local_38 + 0x48), lVar2 == 0)) {
      if (local_40 == 0) goto LAB_053170b0;
      if (*(char *)(local_40 + 0x38) == '\0') {
        return 0;
      }
      lVar2 = *(long *)(local_40 + 0x48);
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      if (local_40 == 0) goto LAB_053170b0;
      if ((*(char *)(local_40 + 0x38) != '\0') && (*(long *)(local_40 + 0x48) != 0)) {
        local_58 = *(long *)(local_40 + 0x48);
        lStack_50 = lVar2;
        OVRMixedReality___cctor(local_44,&lStack_50,&local_58,param_4);
        return 1;
      }
    }
    lVar4 = *param_4;
  }
  if (lVar4 != 0) {
    FUN_05310ddc(lVar4,lVar2,0);
    return 1;
  }
LAB_053170b0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


