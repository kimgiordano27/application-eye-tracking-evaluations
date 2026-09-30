/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 04f6bc50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_TypeInfo;
  if ((DAT_066c9b50 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>_TypeInfo);
    DAT_066c9b50 = 1;
  }
  plVar2 = (long *)FUN_03172fbc(param_1,*(undefined8 *)puVar1);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>_TypeInfo)
        {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04f6bd04;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02b7654c(plVar2,*(long *)
                                  System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>_TypeInfo
                          ,0);
LAB_04f6bd04:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28));
  return;
}


