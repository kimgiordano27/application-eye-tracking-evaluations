/*
FUNCTION_NAME: FUN_00fa0bc4
ENTRY_POINT: 00fa0bc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00fa0bc4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377599c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_13729);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_145__);
    thunk_FUN_00d48444(StringLiteral_10530);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemsSourceChanged__
                      );
    thunk_FUN_00d48444(StringLiteral_11982);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377599c = 1;
  }
                    /* try { // try from 00fa0c38 to 010a0ccb has its CatchHandler @ 00fa0c38
                       catch() { ... } // from try @ 00fa0c38 with catch @ 00fa0c38
                       catch() { ... } // from try @ 00fa0cfc with catch @ 00fa0c38
                       catch() { ... } // from try @ 00fa0d24 with catch @ 00fa0c38
                       catch() { ... } // from try @ 00fa0d54 with catch @ 00fa0c38
                       catch() { ... } // from try @ 00fa0d94 with catch @ 00fa0c38 */
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemsSourceChanged__;
  uVar2 = FUN_0268b4e0(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    FUN_010c2c5c(param_1,&local_28,*(undefined8 *)StringLiteral_13729);
    *(undefined8 *)(param_1 + 0x30) = local_28;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = StringLiteral_11982;
  if (lVar3 != 0) {
    FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_10530);
    *(long *)(param_1 + 0x38) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
                    /* try { // try from 00fa0ccc to 010a0cd3 has its CatchHandler @ 00fa0d38 */
      FUN_01320e50(lVar3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_145__);
      *(long *)(param_1 + 0x40) = lVar3;
                    /* try { // try from 00fa0cdc to 010a0ce3 has its CatchHandler @ 00fa0d30 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


