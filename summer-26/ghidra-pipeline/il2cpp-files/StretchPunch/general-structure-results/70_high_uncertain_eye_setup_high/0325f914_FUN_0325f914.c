/*
FUNCTION_NAME: FUN_0325f914
ENTRY_POINT: 0325f914
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0325f914(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  
  puVar5 = StringLiteral_4134;
  puVar4 = StringLiteral_4133;
  puVar3 = StringLiteral_3533;
  puVar1 = StringLiteral_3532;
  puVar2 = StringLiteral_1756;
  if ((DAT_044a5ca8 & 1) == 0) {
    FUN_01d7d918(StringLiteral_4135);
    FUN_01d7d918(StringLiteral_4134);
    FUN_01d7d918(StringLiteral_4133);
    FUN_01d7d918(StringLiteral_2637);
    FUN_01d7d918(StringLiteral_4136);
    FUN_01d7d918(StringLiteral_4137);
    FUN_01d7d918(StringLiteral_4138);
    FUN_01d7d918(StringLiteral_4139);
    FUN_01d7d918(StringLiteral_4140);
    FUN_01d7d918(StringLiteral_4141);
    FUN_01d7d918(StringLiteral_4142);
    FUN_01d7d918(StringLiteral_3534);
    FUN_01d7d918(StringLiteral_4143);
    FUN_01d7d918(StringLiteral_3533);
    FUN_01d7d918(StringLiteral_3532);
    FUN_01d7d918(
                Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                );
    FUN_01d7d918(StringLiteral_4144);
    FUN_01d7d918(StringLiteral_4145);
    FUN_01d7d918(Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action);
    FUN_01d7d918(StringLiteral_4146);
    FUN_01d7d918(StringLiteral_4147);
    FUN_01d7d918(StringLiteral_4148);
    FUN_01d7d918(StringLiteral_1756);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_4149);
    FUN_01d7d918(StringLiteral_4150);
    FUN_01d7d918(StringLiteral_4151);
    FUN_01d7d918(StringLiteral_4152);
    FUN_01d7d918(StringLiteral_4153);
    FUN_01d7d918(StringLiteral_4154);
    FUN_01d7d918(StringLiteral_4155);
    FUN_01d7d918(StringLiteral_4156);
    DAT_044a5ca8 = 1;
  }
  uVar11 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  FUN_02b235c4(uVar11,*(undefined8 *)puVar5);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar11;
  thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar11);
  uVar11 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar11,*(undefined8 *)puVar3);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar12 = uVar11;
  thunk_FUN_01e10808(puVar12,uVar11);
  plVar15 = *(long **)(*(long *)puVar2 + 0xb8);
  if (*plVar15 != 0) {
    FUN_02b23f3c(*plVar15,*(undefined8 *)StringLiteral_4135);
    plVar15 = *(long **)(*(long *)puVar2 + 0xb8);
  }
  if (plVar15[1] != 0) {
    FUN_02f171d4(plVar15[1],*(undefined8 *)StringLiteral_4143);
    plVar15 = *(long **)(*(long *)puVar2 + 0xb8);
  }
  puVar3 = StringLiteral_3534;
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  lVar16 = plVar15[1];
  if (lVar16 != 0) {
    uVar11 = *(undefined8 *)
              Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
    ;
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar11 = FUN_033a87c8(uVar11,0);
    FUN_02f17d24(lVar16,uVar11,*(undefined8 *)puVar3);
    plVar15 = *(long **)(*(long *)puVar2 + 0xb8);
  }
  puVar10 = StringLiteral_4156;
  puVar5 = StringLiteral_4145;
  puVar4 = StringLiteral_4144;
  puVar2 = StringLiteral_4139;
  lVar16 = plVar15[1];
  if (lVar16 != 0) {
    uVar11 = *(undefined8 *)
              Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar11 = FUN_033a87c8(uVar11,0);
    FUN_02f17d24(lVar16,uVar11,*(undefined8 *)puVar3);
  }
                    /* try { // try from 0325fc48 to 0335fc8f has its CatchHandler @ 0325fc48
                       catch() { ... } // from try @ 0325fc48 with catch @ 0325fc48
                       catch() { ... } // from try @ 0325fce8 with catch @ 0325fc48
                       catch() { ... } // from try @ 0325fd18 with catch @ 0325fc48
                       catch() { ... } // from try @ 0325fd94 with catch @ 0325fc48 */
  puVar9 = StringLiteral_4155;
  puVar8 = StringLiteral_4154;
  puVar7 = StringLiteral_4153;
  puVar6 = StringLiteral_4146;
  puVar3 = StringLiteral_4140;
  puVar1 = StringLiteral_4136;
  uVar11 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
                    /* try { // try from 0325fc90 to 0335fce7 has its CatchHandler @ 0325fce8 */
  FUN_02e34190(uVar11,0,*(undefined8 *)puVar4,0);
  uVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_02e34190(uVar13,0,*(undefined8 *)puVar5,0);
  lVar16 = *(long *)puVar10;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar16 = *(long *)puVar10;
  }
  puVar2 = StringLiteral_4149;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0325fc90 with catch @ 0325fce8
                       try { // try from 0325fce8 to 0335fcff has its CatchHandler @ 0325fc48 */
  uVar17 = **(undefined8 **)(lVar16 + 0xb8);
  uVar14 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_2637);
                    /* try { // try from 0325fd00 to 0335fd17 has its CatchHandler @ 0325fd8c */
  FUN_02e28bb8(uVar14,uVar17,*(undefined8 *)puVar2,0);
                    /* try { // try from 0325fd18 to 0335fd7b has its CatchHandler @ 0325fc48 */
  FUN_02170aa8(uVar11,uVar13,uVar14,*(undefined8 *)StringLiteral_4148);
  uVar13 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  uVar11 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_4138);
  FUN_02e339a8(uVar11,uVar13,*(undefined8 *)StringLiteral_4150,0);
  uVar14 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  uVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_4142);
                    /* try { // try from 0325fd7c to 0335fd8b has its CatchHandler @ 0325fd8c */
                    /* catch() { ... } // from try @ 0325fd00 with catch @ 0325fd8c
                       catch() { ... } // from try @ 0325fd7c with catch @ 0325fd8c */
                    /* try { // try from 0325fd90 to 0335fd93 has its CatchHandler @ 0325fd9c */
  FUN_02e33a5c(uVar13,uVar14,*(undefined8 *)StringLiteral_4151,0);
                    /* try { // try from 0325fd94 to 0335fd9f has its CatchHandler @ 0325fc48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0325fd90 with catch @ 0325fd9c
                        */
  uVar17 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  uVar14 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_4137);
  FUN_02e2899c(uVar14,uVar17,*(undefined8 *)StringLiteral_4152,0);
  FUN_021708f4(uVar11,uVar13,uVar14,*(undefined8 *)StringLiteral_4147);
  uVar13 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  uVar11 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_4141);
  FUN_02e3382c(uVar11,uVar13,*(undefined8 *)puVar7,0);
  uVar14 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  uVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
  FUN_02e338ec(uVar13,uVar14,*(undefined8 *)puVar8,0);
  uVar17 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  uVar14 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
                    /* try { // try from 0325fe60 to 0335fea3 has its CatchHandler @ 0325fe60
                       catch() { ... } // from try @ 0325fe60 with catch @ 0325fe60
                       catch() { ... } // from try @ 0325ff54 with catch @ 0325fe60
                       catch() { ... } // from try @ 0325ff84 with catch @ 0325fe60
                       catch() { ... } // from try @ 0325fff8 with catch @ 0325fe60 */
  FUN_02e28780(uVar14,uVar17,*(undefined8 *)puVar9,0);
  FUN_02170740(uVar11,uVar13,uVar14,*(undefined8 *)puVar6);
  return;
}


