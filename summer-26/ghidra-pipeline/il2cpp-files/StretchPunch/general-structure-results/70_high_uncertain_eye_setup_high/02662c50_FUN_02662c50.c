/*
FUNCTION_NAME: FUN_02662c50
ENTRY_POINT: 02662c50
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02662c50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = StringLiteral_397;
  if ((DAT_044a3beb & 1) == 0) {
    FUN_01d7d918(StringLiteral_2234);
    FUN_01d7d918(StringLiteral_1249);
    FUN_01d7d918(StringLiteral_397);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a3beb = 1;
  }
  uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
                    /* try { // try from 02662cb4 to 02762d43 has its CatchHandler @ 02662cb4
                       catch() { ... } // from try @ 02662cb4 with catch @ 02662cb4
                       catch() { ... } // from try @ 02662d8c with catch @ 02662cb4
                       catch() { ... } // from try @ 02662eec with catch @ 02662cb4
                       catch() { ... } // from try @ 02662f28 with catch @ 02662cb4
                       catch() { ... } // from try @ 02662f78 with catch @ 02662cb4 */
  FUN_033d8040(uVar3,0);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8) = uVar3;
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar4 + 0xb8) + 8,uVar3);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  uVar3 = thunk_FUN_01de27b8();
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8(lVar4);
  }
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10) = uVar3;
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  thunk_FUN_01e10808(*(long *)(lVar4 + 0xb8) + 0x10,uVar3);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  puVar2 = StringLiteral_1249;
  uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)puVar1);
  }
  puVar1 = StringLiteral_2234;
  uVar3 = FUN_033a87c8(uVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)puVar2);
  }
  uVar3 = FUN_0207544c(uVar3,1,*(undefined8 *)puVar1);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  **(undefined8 **)(lVar4 + 0xb8) = uVar3;
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(undefined8 *)(lVar4 + 0xb8),uVar3);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    return;
  }
  lVar4 = FUN_01a94a80(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20);
  thunk_FUN_01dd295c(
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                    );
  FUN_01a94a5c();
  uVar3 = FUN_033a87c8(uVar3,0);
  uVar5 = thunk_FUN_01dd295c(StringLiteral_2235);
  uVar3 = FUN_0326c6f8(uVar5,uVar3,0);
  thunk_FUN_01dd295c(StringLiteral_1969);
  uVar5 = thunk_FUN_01de27b8();
  FUN_03a31e7c(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar5,param_1);
}


