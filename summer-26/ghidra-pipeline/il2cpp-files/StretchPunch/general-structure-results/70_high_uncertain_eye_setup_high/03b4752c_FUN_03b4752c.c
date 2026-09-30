/*
FUNCTION_NAME: FUN_03b4752c
ENTRY_POINT: 03b4752c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03b4752c(void)

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
  long lVar11;
  undefined8 uVar12;
  
  puVar4 = StringLiteral_3533;
  puVar3 = StringLiteral_3532;
  puVar2 = StringLiteral_1710;
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if ((DAT_044abd30 & 1) == 0) {
    FUN_01d7d918(PTR_DAT_04237310);
    FUN_01d7d918(PTR_DAT_0423ccb0);
    FUN_01d7d918(StringLiteral_3534);
    FUN_01d7d918(StringLiteral_3533);
    FUN_01d7d918(StringLiteral_3532);
    FUN_01d7d918(PTR_DAT_0423da78);
    FUN_01d7d918(PTR_DAT_04240498);
    FUN_01d7d918(PTR_DAT_042404a0);
    FUN_01d7d918(PTR_DAT_0423cda0);
    FUN_01d7d918(StringLiteral_6183);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(PTR_DAT_0423e890);
    FUN_01d7d918(StringLiteral_1710);
    FUN_01d7d918(StringLiteral_1711);
    FUN_01d7d918(StringLiteral_1712);
    DAT_044abd30 = 1;
  }
  lVar11 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar11,*(undefined8 *)puVar4);
  uVar12 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar12 = FUN_033a87c8(uVar12,0);
  puVar10 = PTR_DAT_042404a0;
  puVar9 = PTR_DAT_04240498;
  puVar8 = PTR_DAT_0423e890;
  puVar7 = PTR_DAT_0423cda0;
  puVar6 = PTR_DAT_0423ccb0;
  puVar5 = PTR_DAT_04237310;
  puVar4 = StringLiteral_6183;
  puVar3 = StringLiteral_3534;
  puVar2 = StringLiteral_1712;
  puVar1 = StringLiteral_1711;
  if (lVar11 != 0) {
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)StringLiteral_3534);
    uVar12 = FUN_033a87c8(*(undefined8 *)puVar1,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_033a87c8(*(undefined8 *)puVar2,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_033a87c8(*(undefined8 *)puVar6,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_033a87c8(*(undefined8 *)puVar5,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_033a87c8(*(undefined8 *)puVar7,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_033a87c8(*(undefined8 *)puVar10,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_033a87c8(*(undefined8 *)puVar9,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_033a87c8(*(undefined8 *)puVar4,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_033a87c8(*(undefined8 *)PTR_DAT_0423da78,0);
    FUN_02f17d24(lVar11,uVar12,*(undefined8 *)puVar3);
    **(long **)(*(long *)puVar8 + 0xb8) = lVar11;
    thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar8 + 0xb8),lVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


