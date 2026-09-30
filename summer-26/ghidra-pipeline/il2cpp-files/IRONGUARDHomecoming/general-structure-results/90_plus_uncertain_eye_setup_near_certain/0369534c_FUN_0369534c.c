/*
FUNCTION_NAME: FUN_0369534c
ENTRY_POINT: 0369534c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool FUN_0369534c(float param_1,undefined1 param_2 [16],float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_78 [2];
  float local_70;
  float fStack_6c;
  float local_64;
  
  if ((DAT_04833ee7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_RectfPair_get_Item__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    DAT_04833ee7 = 1;
  }
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
  plVar8 = *(long **)(param_4 + 0xd0);
  if (plVar8 == (long *)0x0) {
    bVar2 = true;
  }
  else {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Method_OVRPlugin_RectfPair_get_Item__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0369540c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_OVRPlugin_RectfPair_get_Item__,0);
LAB_0369540c:
    (*(code *)*puVar3)(local_78,plVar8,puVar3[1]);
    fVar13 = local_78[0];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar9 = (float)FUN_0407bb40(param_5,0);
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee19 = '\x01';
    }
    puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
    lVar4 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    fVar15 = *(float *)(lVar4 + 0x18);
    fVar14 = *(float *)(lVar4 + 0x1c);
    fVar12 = *(float *)(lVar4 + 0x20);
    if (DAT_0482f8ab == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                        );
      DAT_0482f8ab = '\x01';
    }
    fVar10 = fVar12 * fVar12 + fVar15 * fVar15 + fVar14 * fVar14;
    if (**(float **)
          (*(long *)
            Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
          0xb8) <= fVar10) {
      fVar11 = param_3 * fVar12 + fVar9 * fVar15 + fVar13 * fVar14;
      fVar9 = fVar9 - (fVar15 * fVar11) / fVar10;
      fVar13 = fVar13 - (fVar14 * fVar11) / fVar10;
      param_3 = param_3 - (fVar12 * fVar11) / fVar10;
    }
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar12 = SQRT(param_3 * param_3 + fVar9 * fVar9 + fVar13 * fVar13);
    if (fVar12 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar9 = *pfVar5;
      fVar13 = pfVar5[1];
      param_3 = pfVar5[2];
    }
    else {
      fVar9 = fVar9 / fVar12;
      fVar13 = fVar13 / fVar12;
      param_3 = param_3 / fVar12;
    }
    fVar12 = fStack_6c * fStack_6c + local_64 * local_64;
    fVar14 = param_5[1] - param_5[1];
    local_78[0] = local_78[0] - *param_5;
    local_70 = local_70 - param_5[2];
    fVar15 = (fVar14 * fVar14 + local_78[0] * local_78[0] + local_70 * local_70) - fVar12;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (param_1 < fVar15) {
      bVar2 = false;
    }
    else {
      fVar10 = param_3 * fVar14 - fVar13 * local_70;
      fVar15 = fVar9 * local_70 - param_3 * local_78[0];
      fVar13 = fVar13 * local_78[0] - fVar9 * fVar14;
      bVar2 = fVar13 * fVar13 + fVar10 * fVar10 + fVar15 * fVar15 <= fVar12;
    }
  }
  return bVar2;
}


