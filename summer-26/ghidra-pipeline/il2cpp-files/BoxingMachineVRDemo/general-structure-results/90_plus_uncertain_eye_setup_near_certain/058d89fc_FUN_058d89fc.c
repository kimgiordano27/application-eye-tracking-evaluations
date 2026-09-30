/*
FUNCTION_NAME: FUN_058d89fc
ENTRY_POINT: 058d89fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 126
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;telemetry_or_network_hits_11;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_058d89fc(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  if ((DAT_06b80b1e & 1) == 0) {
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_Internal_fsVersionedType_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000352_BurstDirectCall_TypeInfo
                );
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_fsObjectProcessor_TypeInfo);
    FUN_02d6084c(PTR_DAT_06769ce0);
    FUN_02d6084c(
                Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo
                );
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo);
    DAT_06b80b1e = 1;
  }
  puVar3 = PTR_DAT_06769ce0;
  if (*(long *)(param_1 + 0x180) == 0) goto LAB_058d8cb0;
  plVar8 = *(long **)(*(long *)(param_1 + 0x180) + 0x80);
  if (plVar8 == (long *)0x0) {
LAB_058d8b14:
    lVar7 = *(long *)PTR_DAT_06769ce0;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar7 = *(long *)puVar3;
    }
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
    return;
  }
  lVar7 = *plVar8;
  bVar1 = *(byte *)(lVar7 + 0x130);
  bVar2 = *(byte *)(*(long *)Unity_VisualScripting_FullSerializer_fsObjectProcessor_TypeInfo + 0x130
                   );
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)Unity_VisualScripting_FullSerializer_fsObjectProcessor_TypeInfo)) {
    bVar2 = *(byte *)(*(long *)
                       Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo
                     + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)
                         Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo))
      goto LAB_058d8b14;
      uVar4 = FUN_058d8f08(plVar8[0x37]);
      *(undefined4 *)(param_1 + 0x198) = uVar4;
      if (plVar8[0x34] == 0) goto LAB_058d8cb0;
      uVar4 = Unity_Mathematics_uint4__get_zxxz(plVar8[0x34],0);
      *(undefined4 *)(param_1 + 0x14c) = uVar4;
      if (plVar8[0x33] == 0) goto LAB_058d8cb0;
      puVar6 = (undefined8 *)
               FUN_037b9bf0(plVar8[0x33],*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
      *(undefined8 *)(param_1 + 0x16c) = *puVar6;
      goto LAB_058d8c80;
    }
    uVar4 = FUN_058d8f08(plVar8);
    *(undefined4 *)(param_1 + 0x198) = uVar4;
    if (plVar8[0x33] == 0) goto LAB_058d8cb0;
    uVar4 = Unity_Mathematics_uint4__get_zxxz(plVar8[0x33],0);
    *(undefined4 *)(param_1 + 0x14c) = uVar4;
    if (plVar8[0x34] == 0) goto LAB_058d8cb0;
    puVar6 = (undefined8 *)FUN_037b9bf0(plVar8[0x34],*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
    *(undefined8 *)(param_1 + 0x16c) = *puVar6;
    lVar7 = plVar8[0x2f];
  }
  else {
    uVar4 = FUN_058d8cb4(plVar8);
    *(undefined4 *)(param_1 + 0x198) = uVar4;
    if (plVar8[0x34] == 0) goto LAB_058d8cb0;
    uVar4 = Unity_Mathematics_uint4__get_zxxz(plVar8[0x34],0);
    *(undefined4 *)(param_1 + 0x14c) = uVar4;
    puVar3 = OVRPlugin_OVRP_1_34_0_TypeInfo;
    if (plVar8[0x3e] == 0) goto LAB_058d8cb0;
    pfVar5 = (float *)FUN_037b9bf0(plVar8[0x3e],*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
    fVar9 = DAT_01208264;
    *(float *)(param_1 + 0x158) = (*pfVar5 + 1.0) * DAT_01208264 * 0.5;
    if (plVar8[0x3e] == 0) goto LAB_058d8cb0;
    lVar7 = FUN_037b9bf0(plVar8[0x3e],*(undefined8 *)puVar3);
    *(float *)(param_1 + 0x154) = (*(float *)(lVar7 + 4) + 1.0) * fVar9 * 0.5;
    if (plVar8[0x3f] == 0) goto LAB_058d8cb0;
    pfVar5 = (float *)FUN_037b61ac(plVar8[0x3f],
                                   *(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000352_BurstDirectCall_TypeInfo
                                  );
    fVar9 = *pfVar5 * fVar9;
    *(float *)(param_1 + 0x15c) = fVar9 + fVar9;
LAB_058d8c80:
    lVar7 = plVar8[0x36];
  }
  if (lVar7 != 0) {
    uVar4 = FUN_037b0320(lVar7,*(undefined8 *)
                                Unity_VisualScripting_FullSerializer_Internal_fsVersionedType_TypeInfo
                        );
    *(undefined4 *)(param_1 + 0xfc) = uVar4;
    return;
  }
LAB_058d8cb0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


