/*
FUNCTION_NAME: FUN_0252272c
ENTRY_POINT: 0252272c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0252272c(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03782a1a & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<WitRequest>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HIDParser_HIDReportData>_Add__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03782a1a = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  lVar5 = FUN_025207d8(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar6 = FUN_02681b9c(lVar5,0,0);
  puVar3 = Method_System_Collections_Generic_List<HIDParser_HIDReportData>_Add__;
  puVar2 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + 0x18);
    if (0 < iVar1) {
      iVar8 = 0;
      do {
        if (param_2[1] == 0) goto LAB_0252297c;
        FUN_0132138c(param_2[1],iVar8,&local_f0,*(undefined8 *)puVar2);
        uVar4 = local_f0;
        if ((*param_2 == 0) ||
           (FUN_0132138c(*param_2,iVar8,&local_f0,*(undefined8 *)puVar3), lVar5 == 0))
        goto LAB_0252297c;
        uVar6 = FUN_0267dcf4(lVar5,uVar4,CONCAT44(uStack_ec,local_f0),0);
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
    FUN_025224a4(uVar6,lVar5,param_2[2],param_2[3]);
    lVar7 = FUN_0268fd10(param_1,0);
    if (lVar7 != 0) {
      FUN_026a0144(&local_f0,lVar7,0);
      uVar10 = CONCAT44(uStack_ec,local_f0);
      uStack_98 = uStack_d8;
      local_a0 = local_e0;
      uStack_88 = uStack_c8;
      local_90 = uStack_d0;
      uStack_a8 = uStack_e8;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      uVar11 = local_e0;
      uVar12 = local_c0;
      local_b0 = uVar10;
      fVar9 = (float)FUN_02692760(&local_b0,2,0);
      if (DAT_037762f0 == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_037762f0 = '\x01';
      }
      puVar2 = UnityEngine_Events_UnityAction<WitRequest>_TypeInfo;
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar5 != 0) {
        FUN_0267f1e8(SQRT((float)uVar12 * (float)uVar12 +
                          (float)uVar11 * (float)uVar11 +
                          fVar9 * fVar9 + (float)uVar10 * (float)uVar10),lVar5,
                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
        return;
      }
    }
  }
LAB_0252297c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


