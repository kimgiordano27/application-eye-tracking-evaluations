/*
FUNCTION_NAME: FUN_022022a0
ENTRY_POINT: 022022a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_022022a0(undefined8 *param_1,long param_2,uint *param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *extraout_x1;
  uint *puVar13;
  uint *extraout_x1_00;
  uint *extraout_x1_01;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar13 = param_3;
  if ((DAT_037818ae & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u64__);
    thunk_FUN_00d48444(Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__);
    DAT_037818ae = 1;
    puVar13 = extraout_x1;
  }
  puVar11 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  if (param_2 == 0) {
LAB_02202574:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  uVar14 = *param_3;
  while ((int)uVar14 < iVar1) {
    uVar4 = FUN_015fa29c(param_2,uVar14,0);
    if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar11);
    }
    auVar15 = FUN_016f68bc(uVar4,0);
    puVar13 = auVar15._8_8_;
    uVar14 = *param_3;
    if ((auVar15._0_8_ & 1) == 0) break;
    uVar14 = uVar14 + 1;
    *param_3 = uVar14;
  }
  puVar2 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
  uVar5 = uVar14;
  if ((int)uVar14 < iVar1) {
    puVar13 = (uint *)(ulong)uVar14;
    do {
      uVar5 = FUN_015fa29c(param_2,puVar13,0);
      puVar13 = extraout_x1_00;
      if ((uVar5 & 0xffff) == 0x28) break;
      if (*(long *)puVar2 == 0) goto LAB_02202574;
      uVar6 = FUN_015fa29c(*(long *)puVar2,0,0);
      puVar13 = extraout_x1_01;
      if ((uVar5 & 0xffff) == (uVar6 & 0xffff)) break;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar15 = FUN_016f68bc(uVar5,0);
      puVar13 = auVar15._8_8_;
      if ((auVar15._0_8_ & 1) != 0) break;
      uVar5 = *param_3 + 1;
      puVar13 = (uint *)(ulong)uVar5;
      *param_3 = uVar5;
    } while ((int)uVar5 < iVar1);
    uVar5 = *param_3;
  }
  if (uVar5 - uVar14 == 0) {
    local_60 = CONCAT44(local_60._4_4_,uVar14);
    uVar8 = thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,puVar13,0);
    uVar8 = thunk_FUN_00d61fa0(uVar8,&local_60);
    puVar11 = 
    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<NamedValue>_Dispose__;
LAB_0220259c:
    uVar10 = thunk_FUN_00d48444(puVar11);
    uVar8 = FUN_01600b5c(uVar10,uVar8,param_2,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(
                               Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__
                               );
    FUN_016ec624(uVar10,uVar8,uVar12,0);
    uVar8 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<NamedValue>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar8);
  }
  uVar8 = FUN_01601d40(param_2,uVar14,uVar5 - uVar14,0);
  if ((param_4 & 1) != 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = uVar8;
    return;
  }
  uVar14 = *param_3;
  while ((int)uVar14 < iVar1) {
    uVar4 = FUN_015fa29c(param_2,uVar14,0);
    if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar11);
    }
    uVar9 = FUN_016f68bc(uVar4,0);
    uVar14 = *param_3;
    if ((uVar9 & 1) == 0) break;
    uVar14 = uVar14 + 1;
    *param_3 = uVar14;
  }
  if ((int)uVar14 < iVar1) {
    sVar3 = FUN_015fa29c(param_2,uVar14,0);
    uVar14 = *param_3;
    if (sVar3 == 0x28) {
      *param_3 = uVar14 + 1;
      iVar7 = FUN_016047b8(param_2,0x29,uVar14 + 1,0);
      uVar14 = *param_3;
      if (iVar7 == -1) {
        local_60 = CONCAT44(local_60._4_4_,uVar14);
        uVar8 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  );
        uVar8 = thunk_FUN_00d61fa0(uVar8,&local_60);
        puVar11 = Method_FullSerializer_fsBaseConverter_DeserializeMember<TextClipping>__;
        goto LAB_0220259c;
      }
      FUN_01601d40(param_2,uVar14,iVar7 - uVar14,0);
      uVar10 = FUN_0220273c();
      uVar14 = iVar7 + 1;
      *param_3 = uVar14;
      goto LAB_022024e8;
    }
  }
  uVar10 = 0;
LAB_022024e8:
  puVar11 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u64__;
  if (((int)uVar14 < iVar1) &&
     ((sVar3 = FUN_015fa29c(param_2,uVar14,0), sVar3 == 0x2c ||
      (sVar3 = FUN_015fa29c(param_2,*param_3,0), sVar3 == 0x3b)))) {
    *param_3 = *param_3 + 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  FUN_01380c7c(&local_60,uVar10,*(undefined8 *)puVar11);
  *param_1 = uVar8;
  param_1[2] = uStack_58;
  param_1[1] = local_60;
  return;
}


