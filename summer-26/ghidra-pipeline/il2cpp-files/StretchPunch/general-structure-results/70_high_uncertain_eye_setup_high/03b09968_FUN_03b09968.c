/*
FUNCTION_NAME: FUN_03b09968
ENTRY_POINT: 03b09968
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03b09968(void)

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
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  
  puVar1 = PTR_DAT_0423d5c8;
  if ((DAT_044ab989 & 1) == 0) {
    FUN_01d7d918(Field_System_Reflection_ParameterInfo_ClassImpl);
    FUN_01d7d918(Field_UnityEngine_EventSystems_RaycastResult_m_GameObject);
    FUN_01d7d918(Field_UnityEngine_InputSystem_UI_NavigationModel_eventData);
    FUN_01d7d918(StringLiteral_1700);
    FUN_01d7d918(PTR_DAT_0423e2a0);
    FUN_01d7d918(PTR_DAT_0423e2a8);
    FUN_01d7d918(PTR_DAT_0423e2b0);
    FUN_01d7d918(PTR_DAT_0422fc08);
    FUN_01d7d918(StringLiteral_5070);
    FUN_01d7d918(PTR_DAT_04227e08);
    FUN_01d7d918(PTR_DAT_0423e2b8);
    FUN_01d7d918(StringLiteral_1849);
    FUN_01d7d918(StringLiteral_4038);
    FUN_01d7d918(StringLiteral_5955);
    FUN_01d7d918(PTR_DAT_0423e2c0);
    FUN_01d7d918(StringLiteral_2004);
    FUN_01d7d918(PTR_DAT_0423d5c8);
    FUN_01d7d918(PTR_DAT_0423cf00);
    DAT_044ab989 = 1;
  }
  puVar12 = PTR_DAT_0423e2c0;
  puVar10 = PTR_DAT_0423e2a0;
  puVar9 = PTR_DAT_0423cf00;
  puVar8 = PTR_DAT_0422fc08;
  puVar7 = PTR_DAT_04227e08;
  puVar6 = StringLiteral_5955;
  puVar5 = StringLiteral_5070;
  puVar4 = StringLiteral_4038;
  puVar3 = StringLiteral_2004;
  puVar2 = StringLiteral_1849;
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar13 = *(long *)puVar1;
  }
  puVar11 = PTR_DAT_0423e2b8;
  uVar14 = FUN_0326dc80(*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),*(undefined8 *)puVar5,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
  *puVar15 = uVar14;
  thunk_FUN_01e10808(puVar15,uVar14);
  uVar14 = FUN_0326dc80(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),*(undefined8 *)puVar2
                        ,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
  *puVar15 = uVar14;
  thunk_FUN_01e10808(puVar15,uVar14);
  uVar14 = FUN_0326dc80(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),*(undefined8 *)puVar3
                        ,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18);
  *puVar15 = uVar14;
  thunk_FUN_01e10808(puVar15,uVar14);
  uVar14 = FUN_0326dc80(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),*(undefined8 *)puVar6
                        ,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x20);
  *puVar15 = uVar14;
  thunk_FUN_01e10808(puVar15,uVar14);
  uVar14 = FUN_0326dc80(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),*(undefined8 *)puVar4
                        ,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
  *puVar15 = uVar14;
  thunk_FUN_01e10808(puVar15,uVar14);
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x30) = *(undefined8 *)puVar10;
  thunk_FUN_01e10808();
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x38) = *(undefined8 *)puVar7;
  thunk_FUN_01e10808();
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x40) = *(undefined8 *)puVar8;
  thunk_FUN_01e10808();
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x48) = *(undefined8 *)puVar12;
  thunk_FUN_01e10808();
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x50) = *(undefined8 *)PTR_DAT_0423e2b0;
  thunk_FUN_01e10808();
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x58) = *(undefined8 *)PTR_DAT_0423e2a8;
  thunk_FUN_01e10808();
  uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x58);
  if (*(int *)(*(long *)StringLiteral_1700 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar14 = FUN_03ad2784(uVar14,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x60);
  *puVar15 = uVar14;
  thunk_FUN_01e10808(puVar15,uVar14);
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x68) = *(undefined8 *)puVar11;
  thunk_FUN_01e10808();
  uVar14 = FUN_03ad2784(*(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x68),0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x70);
  *puVar15 = uVar14;
  thunk_FUN_01e10808(puVar15,uVar14);
  lVar13 = thunk_FUN_01de27b8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_UI_NavigationModel_eventData);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar13,*(undefined8 *)Field_UnityEngine_EventSystems_RaycastResult_m_GameObject);
  puVar1 = Field_System_Reflection_ParameterInfo_ClassImpl;
  if (lVar13 != 0) {
    FUN_02f17d24(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 8),
                 *(undefined8 *)Field_System_Reflection_ParameterInfo_ClassImpl);
    FUN_02f17d24(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10),
                 *(undefined8 *)puVar1);
    FUN_02f17d24(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18),
                 *(undefined8 *)puVar1);
    FUN_02f17d24(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x20),
                 *(undefined8 *)puVar1);
    FUN_02f17d24(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28),
                 *(undefined8 *)puVar1);
    **(long **)(*(long *)puVar9 + 0xb8) = lVar13;
    thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar9 + 0xb8),lVar13);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


