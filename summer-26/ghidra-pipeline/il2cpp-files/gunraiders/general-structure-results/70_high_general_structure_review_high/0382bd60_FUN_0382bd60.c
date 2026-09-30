/*
FUNCTION_NAME: FUN_0382bd60
ENTRY_POINT: 0382bd60
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0382bd60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__;
  puVar2 = System_Xml_XmlQualifiedName_TypeInfo;
                    /* catch() { ... } // from try @ 0382bcf4 with catch @ 0382bd60 */
  puVar1 = System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo;
                    /* catch() { ... } // from try @ 0382bcf0 with catch @ 0382bd64 */
                    /* catch() { ... } // from try @ 0382bcec with catch @ 0382bd68 */
                    /* catch() { ... } // from try @ 0382bc18 with catch @ 0382bd6c */
                    /* catch() { ... } // from try @ 0382bb2c with catch @ 0382bd70 */
                    /* try { // try from 0382bd88 to 0392bd9f has its CatchHandler @ 0382be18 */
                    /* try { // try from 0382bda0 to 0392be07 has its CatchHandler @ 0382ba90 */
  if ((DAT_045391d5 & 1) == 0) {
    FUN_01c5d288(System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    FUN_01c5d288(Method_System_Reflection_Emit_MethodBuilder_Invoke__);
    FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__);
    FUN_01c5d288(System_Xml_XmlQualifiedName_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UI_Image_RebuildImage__);
    DAT_045391d5 = 1;
  }
  uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                    /* try { // try from 0382be08 to 0392be17 has its CatchHandler @ 0382be18 */
  FUN_03884424(uVar4,10,0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
                    /* catch() { ... } // from try @ 0382bd88 with catch @ 0382be18
                       catch() { ... } // from try @ 0382be08 with catch @ 0382be18 */
                    /* try { // try from 0382be1c to 0392be1f has its CatchHandler @ 0382be28 */
  uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                    /* try { // try from 0382be20 to 0392be2b has its CatchHandler @ 0382ba90 */
                    /* catch() { ... } // from try @ 0382be1c with catch @ 0382be28 */
  FUN_032a5d08(uVar4,0);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_032a7b98(uVar4,0);
  *(undefined8 *)(param_1 + 400) = uVar4;
  FUN_037b2444(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  *(undefined8 *)(param_1 + 0x70) = param_4;
  uVar4 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Reflection_Emit_MethodBuilder_Invoke__);
  FUN_03836694(uVar4,param_3,param_2,0);
  *(undefined8 *)(param_1 + 0x50) = param_6;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x188) = param_7;
  *(undefined8 *)(param_1 + 0x48) = param_5;
  uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_03884424(uVar4,10,0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  puVar1 = Method_UnityEngine_UI_Image_RebuildImage__;
  lVar5 = *(long *)Method_UnityEngine_UI_Image_RebuildImage__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b8);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
      uVar4 = FUN_0388492c(param_2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


