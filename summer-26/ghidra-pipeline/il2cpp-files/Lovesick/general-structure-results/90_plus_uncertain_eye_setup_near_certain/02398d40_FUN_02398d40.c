/*
FUNCTION_NAME: FUN_02398d40
ENTRY_POINT: 02398d40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 119
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02398d40(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_03781e7b & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_BinaryDataWriter_WritePrimitiveArray_bool__);
    thunk_FUN_00d48444(System_ComponentModel_ReflectEventDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_Serialization_FixupHolder___TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_Vector4f_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_SortedList__ctor__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_FirstOrDefault<InputSettings>__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Converters_XmlNodeConverter_SerializeNode__);
    thunk_FUN_00d48444(
                      System_Func<LightCookieManager_LightCookieMapping,_LightCookieManager_LightCookieMapping,_int>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033ed1e0);
    thunk_FUN_00d48444(System_ICustomFormatter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13373);
    thunk_FUN_00d48444(Method_Oculus_Interaction_ProgressCurve_<>c_<_ctor>b__14_0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddhn_s16__);
    thunk_FUN_00d48444(Method_MultiRotationKnob_Reset__);
    thunk_FUN_00d48444(StringLiteral_9831);
    DAT_03781e7b = 1;
  }
  puVar10 = StringLiteral_9831;
  puVar9 = Method_Oculus_Interaction_ProgressCurve_<>c_<_ctor>b__14_0__;
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddhn_s16__;
  puVar7 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_SerializeNode__;
  puVar6 = Method_System_Collections_SortedList__ctor__;
  puVar5 = Method_MultiRotationKnob_Reset__;
  puVar4 = Method_System_Linq_Enumerable_FirstOrDefault<InputSettings>__;
  puVar3 = Method_Sirenix_Serialization_BinaryDataWriter_WritePrimitiveArray_bool__;
  puVar2 = OVRPlugin_Vector4f_TypeInfo;
  local_80 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x18),&local_e8,*(undefined8 *)System_ICustomFormatter_TypeInfo
                );
    uStack_98 = uStack_e0;
    local_a0 = local_e8;
    uStack_88 = uStack_d0;
    uStack_90 = local_d8;
    local_80 = local_c8;
    while (uVar11 = FUN_012b894c(&local_a0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
      FUN_00caaebc(&local_e8,&local_a0,*(undefined8 *)puVar4);
      uVar12 = local_e8;
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_70 = uStack_e0;
      uStack_68 = local_d8;
      FUN_0129eff4(*(long *)(param_1 + 0x10),&local_70,&local_a8,*(undefined8 *)puVar3);
      if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_013b1b6c(local_a8,uVar12,*(undefined8 *)puVar10);
    }
    FUN_012b8948(&local_a0,*(undefined8 *)System_ComponentModel_ReflectEventDescriptor_TypeInfo);
    lVar14 = *(long *)(param_1 + 0x18);
    if (lVar14 != 0) {
      lVar13 = *(long *)
                System_Func<LightCookieManager_LightCookieMapping,_LightCookieManager_LightCookieMapping,_int>_TypeInfo
      ;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) {
        *(undefined4 *)(lVar14 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar14 + 0x18);
        *(undefined4 *)(lVar14 + 0x18) = 0;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
        }
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x20),&local_e8,*(undefined8 *)StringLiteral_13373);
        uStack_b8 = uStack_e0;
        local_c0 = local_e8;
        local_b0 = local_d8;
        while( true ) {
          uVar11 = FUN_012b894c(&local_c0,*(undefined8 *)puVar2);
          if ((uVar11 & 1) == 0) {
            FUN_023aaaa0(System_Runtime_Serialization_FixupHolder___TypeInfo,&local_c0);
            return;
          }
          uVar12 = FUN_00caafbc(&local_c0,*(undefined8 *)puVar7);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar14 = FUN_013a15d4(*(undefined8 *)puVar8);
          if (lVar14 == 0) break;
          FUN_013a134c(lVar14,uVar12,*(undefined8 *)puVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


