/*
FUNCTION_NAME: FUN_014978d4
ENTRY_POINT: 014978d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x01497b30) */

long FUN_014978d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = System_Runtime_Remoting_Metadata_SoapAttribute_var;
  if ((DAT_03776c73 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3659);
    thunk_FUN_00d48444(StringLiteral_4722);
    thunk_FUN_00d48444(StringLiteral_6710);
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass115_0_<RequestText>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Data_Common_DecimalStorage_Aggregate__);
    thunk_FUN_00d48444(StringLiteral_1867);
    thunk_FUN_00d48444(System_Comparison<ICanvasElement>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectOfType<OVRManager>__);
    thunk_FUN_00d48444(PTR_DAT_033ef2e8);
    thunk_FUN_00d48444(StringLiteral_10846);
    thunk_FUN_00d48444(StringLiteral_7391);
    thunk_FUN_00d48444(System_Runtime_Remoting_Metadata_SoapAttribute_var);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<float>__ctor__);
    DAT_03776c73 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar8 != 0) {
    FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_7391);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar9 = FUN_01299a34(*(long *)(param_1 + 0x40),*(undefined8 *)StringLiteral_3659),
       puVar7 = StringLiteral_10846, puVar6 = StringLiteral_1867,
       puVar5 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass115_0_<RequestText>b__0__,
       puVar4 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__,
       puVar3 = Method_System_Data_Common_DecimalStorage_Aggregate__,
       puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__, puVar1 = PTR_DAT_033ef2e8,
       lVar9 != 0)) {
      FUN_011dcc00(lVar9,&local_b8,
                   *(undefined8 *)Method_Sirenix_Serialization_Serializer<float>__ctor__);
      uStack_78 = uStack_b0;
      local_80 = local_b8;
      local_70 = local_a8;
      while( true ) {
        uVar10 = FUN_012c3588(&local_80,*(undefined8 *)puVar5);
        if ((uVar10 & 1) == 0) {
          FUN_012c3584(&local_80,*(undefined8 *)StringLiteral_6710);
          return lVar8;
        }
        lVar9 = FUN_00bc3040(&local_80,*(undefined8 *)System_Comparison<ICanvasElement>_TypeInfo);
        if (lVar9 == 0) break;
        FUN_01323390(lVar9,&local_b8,*(undefined8 *)puVar7);
        uStack_98 = uStack_b0;
        local_a0 = local_b8;
        local_90 = local_a8;
        while (uVar10 = FUN_012b894c(&local_a0,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
          lVar9 = FUN_00bc2594(&local_a0,*(undefined8 *)puVar6);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar11 = *(undefined8 *)(lVar9 + 0x38);
          uVar12 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01780344(uVar12,0);
          uVar10 = FUN_01789ac0(uVar11,uVar12,0);
          if ((uVar10 & 1) != 0) {
            FUN_00bc2d48(lVar8,lVar9,*(undefined8 *)puVar1);
          }
        }
        FUN_012b8948(&local_a0,*(undefined8 *)StringLiteral_4722);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


