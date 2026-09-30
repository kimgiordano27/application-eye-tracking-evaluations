/*
FUNCTION_NAME: FUN_066dd320
ENTRY_POINT: 066dd320
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_066dd320(long param_1,byte *param_2,long param_3,long param_4,byte param_5,
                 undefined4 param_6,undefined8 *param_7,undefined8 *param_8)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((DAT_073a1132 & 1) == 0) {
    FUN_02fe925c(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    FUN_02fe925c(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_02fe925c(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    DAT_073a1132 = 1;
  }
  local_b0 = 0;
  local_e8 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_70 = *(undefined4 *)(param_4 + 0x108);
  uStack_78 = *(undefined8 *)(param_4 + 0x100);
  local_80 = *(undefined8 *)(param_4 + 0xf8);
  uStack_88 = *(undefined8 *)(param_4 + 0xf0);
  local_90 = *(undefined8 *)(param_4 + 0xe8);
  uStack_98 = *(undefined8 *)(param_4 + 0xe0);
  local_a0 = *(undefined8 *)(param_4 + 0xd8);
  FUN_068e41c8(&local_a0,0,0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  uStack_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  local_f0 = local_70;
  if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_066dd83c;
  plVar1 = (long *)(param_1 + 0x1e0);
  uStack_158 = uStack_98;
  local_160 = local_a0;
  uStack_148 = uStack_88;
  uStack_150 = local_90;
  uStack_138 = uStack_78;
  local_140 = local_80;
  local_130 = local_70;
  FUN_06794af0(*(long *)(param_1 + 0x1e0),&local_160,param_6,0);
  if (*(int *)(param_4 + 200) != 0) {
    if (*(long *)(param_4 + 0x208) == 0) goto LAB_066dd83c;
    FUN_03bbf6cc(*(long *)(param_4 + 0x208),&local_e8,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    if ((local_e8 == 0) || (plVar6 = (long *)FUN_0675da60(local_e8,0), plVar6 == (long *)0x0))
    goto LAB_066dd83c;
    bVar10 = *(byte *)(*(long *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar10) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar10 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar6);
    }
    lVar7 = *plVar1;
    if (lVar7 != plVar6[0x3c]) {
      if (lVar7 == 0) goto LAB_066dd83c;
      UnityEngine_AndroidJNI__CallObjectMethod(lVar7,0);
      *plVar1 = plVar6[0x3c];
      thunk_FUN_03048534(plVar1);
    }
    *(undefined2 *)(param_1 + 0x1e9) = 0x101;
    *(long *)(param_1 + 0x1f0) = plVar6[0x3e];
    thunk_FUN_03048534(param_1 + 0x1f0);
    puVar11 = (undefined8 *)(param_1 + 0x1f8);
    *(long *)(param_1 + 0x1f8) = plVar6[0x3f];
    thunk_FUN_03048534(puVar11);
    *param_7 = *(undefined8 *)(param_1 + 0x1f0);
    thunk_FUN_03048534(param_7);
    goto LAB_066dd80c;
  }
  bVar10 = *param_2;
  bVar2 = param_2[1] | param_5 & 1;
  *(byte *)(param_1 + 0x1e9) = bVar2;
  bVar10 = bVar10 | bVar2;
  *(byte *)(param_1 + 0x1ea) = bVar10;
  if (bVar2 != 0) {
    if (*plVar1 == 0) goto LAB_066dd83c;
    lVar7 = FUN_067946d0(*plVar1,0);
    if (lVar7 == 0) {
LAB_066dd5dc:
      if (*plVar1 == 0) goto LAB_066dd83c;
      uVar9 = FUN_06794718(*plVar1,param_3,0);
      *(undefined8 *)(param_1 + 0x1f0) = uVar9;
      thunk_FUN_03048534((long *)(param_1 + 0x1f0),uVar9);
      lVar7 = *(long *)(param_1 + 0x1f0);
      if (lVar7 == 0) goto LAB_066dd83c;
      local_100 = *(undefined8 *)(lVar7 + 0x48);
      uStack_108 = *(undefined8 *)(lVar7 + 0x40);
      uStack_110 = *(undefined8 *)(lVar7 + 0x38);
      uStack_118 = *(undefined8 *)(lVar7 + 0x30);
      local_120 = *(undefined8 *)(lVar7 + 0x28);
      if (param_3 == 0) goto LAB_066dd83c;
      local_210 = local_120;
      uStack_208 = uStack_118;
      uStack_200 = uStack_110;
      uStack_1f8 = uStack_108;
      local_1f0 = local_100;
      FUN_06916814(param_3,*(undefined8 *)
                            OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,
                   &local_210,0);
      lVar7 = *(long *)(param_1 + 0x1f0);
      if (lVar7 == 0) goto LAB_066dd83c;
      uStack_238 = *(undefined8 *)(lVar7 + 0x30);
      local_240 = *(undefined8 *)(lVar7 + 0x28);
      local_220 = *(undefined8 *)(lVar7 + 0x48);
      uStack_228 = *(undefined8 *)(lVar7 + 0x40);
      uStack_230 = *(undefined8 *)(lVar7 + 0x38);
      FUN_06916814(param_3,*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,&local_240,0
                  );
    }
    else {
      if ((*plVar1 == 0) || (lVar7 = FUN_067946d0(*plVar1,0), lVar7 == 0)) goto LAB_066dd83c;
      local_100 = *(undefined8 *)(lVar7 + 0x48);
      uStack_108 = *(undefined8 *)(lVar7 + 0x40);
      uStack_110 = *(undefined8 *)(lVar7 + 0x38);
      uStack_118 = *(undefined8 *)(lVar7 + 0x30);
      local_120 = *(undefined8 *)(lVar7 + 0x28);
      FUN_06911464(&local_188,2,0);
      uStack_1d8 = uStack_180;
      local_1e0 = local_188;
      uStack_1c8 = uStack_170;
      uStack_1d0 = uStack_178;
      local_1c0 = local_168;
      uStack_1a8 = uStack_118;
      local_1b0 = local_120;
      uStack_198 = uStack_108;
      uStack_1a0 = uStack_110;
      local_190 = local_100;
      uVar8 = FUN_069119bc(&local_1b0,&local_1e0,0);
      if ((uVar8 & 1) != 0) goto LAB_066dd5dc;
    }
    if (*plVar1 == 0) {
LAB_066dd83c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar9 = FUN_067946d0(*plVar1,0);
    *(undefined8 *)(param_1 + 0x1f0) = uVar9;
    thunk_FUN_03048534(param_1 + 0x1f0);
    bVar10 = *(byte *)(param_1 + 0x1ea);
  }
  if (bVar10 != 0) {
    local_b0 = *(undefined4 *)(param_4 + 0x108);
    uStack_c8 = *(undefined8 *)(param_4 + 0xf0);
    local_d0 = *(undefined8 *)(param_4 + 0xe8);
    uStack_b8 = *(undefined8 *)(param_4 + 0x100);
    uStack_c0 = *(undefined8 *)(param_4 + 0xf8);
    uStack_d8 = *(undefined8 *)(param_4 + 0xe0);
    local_e0 = *(undefined8 *)(param_4 + 0xd8);
    FUN_068e4280(&local_e0,1,0);
    FUN_068e40b4(&local_e0,0,0);
    FUN_068e41c8(&local_e0,0x20,0);
    if ((*(char *)(param_4 + 0x1c0) == '\0') && (*(char *)(param_1 + 0x1e8) != '\0')) {
      if (((int)uStack_d8 < 2) || (uVar8 = FUN_069009c0(0), (uVar8 & 1) != 0)) {
        bVar4 = false;
      }
      else {
        iVar5 = FUN_06900970(0);
        bVar4 = iVar5 != 0;
      }
      FUN_068e4844(&local_e0,bVar4,0);
    }
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,param_1 + 0x1f8,&local_e0,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0);
  }
  puVar3 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if (*(char *)(param_1 + 0x1e9) == '\0') {
    lVar7 = *(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *(long *)puVar3;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  }
  else {
    puVar11 = (undefined8 *)(param_1 + 0x1f0);
  }
  *param_7 = *puVar11;
  thunk_FUN_03048534(param_7);
  puVar3 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if (*(char *)(param_1 + 0x1ea) == '\0') {
    lVar7 = *(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *(long *)puVar3;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  }
  else {
    puVar11 = (undefined8 *)(param_1 + 0x1f8);
  }
LAB_066dd80c:
  *param_8 = *puVar11;
  thunk_FUN_03048534(param_8);
  return;
}


