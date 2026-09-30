/*
FUNCTION_NAME: FUN_03695db0
ENTRY_POINT: 03695db0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03695db0(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
                 long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  ulong uVar13;
  ulong uVar16;
  
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
  if ((DAT_04833eee & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_04833eee = 1;
  }
  puVar3 = Method_OVRPlugin_FovfPair_get_Item__;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  FUN_03695c0c(&local_d0,param_5);
  uVar4 = CONCAT44(uStack_c0,uStack_c4);
  local_b0 = local_d0;
  uStack_9c = (undefined4)uStack_bc;
  local_98 = (undefined4)((ulong)uStack_bc >> 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0407bb40(&local_b0,0);
  lVar1 = param_5 + 0x148;
  uVar13 = uVar4;
  uVar16 = param_4;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar14 = (float)uVar16;
  fVar10 = (float)uVar13;
  fVar5 = (float)FUN_03694d98(lVar1);
  if (DAT_0482f8ab == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482f8ab = '\x01';
  }
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  fVar11 = fVar14 * fVar14;
  fVar6 = fVar11 + fVar5 * fVar5 + fVar10 * fVar10;
  fVar15 = **(float **)
             (*(long *)
               Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
             + 0xb8);
  if (fVar15 <= fVar6) {
    fVar12 = (float)param_4 * fVar14 + (float)uVar7 * fVar5 + (float)uVar4 * fVar10;
    fVar11 = fVar14 * fVar12;
    fVar15 = (fVar5 * fVar12) / fVar6;
    uVar7 = (ulong)(uint)((float)uVar7 - fVar15);
    uVar4 = (ulong)(uint)((float)uVar4 - (fVar10 * fVar12) / fVar6);
    param_4 = (ulong)(uint)((float)param_4 - fVar11 / fVar6);
  }
  uVar16 = (ulong)(uint)fVar15;
  uVar13 = (ulong)(uint)fVar11;
  uVar8 = FUN_03694d98(lVar1);
  FUN_04067568(uVar7,uVar4,param_4,uVar8,uVar13,uVar16,0);
  FUN_03694cd0(lVar1);
  FUN_0407b788(&local_90,0);
  uVar4 = FUN_02f47b3c(param_5,*(undefined8 *)puVar2);
  if ((uVar4 & 1) == 0) {
    uStack_dc = CONCAT44(local_78,uStack_7c);
    uVar9 = CONCAT44(local_80,uStack_84);
    uVar8 = CONCAT44(uStack_84,uStack_88);
    uStack_f0 = local_90;
  }
  else {
    uStack_fc = CONCAT44(local_78,uStack_7c);
    uStack_c8 = uStack_88;
    local_d0 = local_90;
    uStack_c4 = uStack_84;
    uStack_c0 = local_80;
    uStack_bc = uStack_fc;
    if (*(long *)(param_5 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uStack_108 = uStack_88;
    local_110 = local_90;
    uStack_104 = uStack_84;
    uStack_100 = local_80;
    FUN_0369590c(&uStack_f0,*(long *)(param_5 + 200),&local_110);
    uVar9 = CONCAT44(uStack_e0,local_e4);
    uVar8 = CONCAT44(local_e4,uStack_e8);
  }
  *(undefined8 *)((long)param_1 + 0x14) = uStack_dc;
  *(undefined8 *)((long)param_1 + 0xc) = uVar9;
  param_1[1] = uVar8;
  *param_1 = uStack_f0;
  return;
}


