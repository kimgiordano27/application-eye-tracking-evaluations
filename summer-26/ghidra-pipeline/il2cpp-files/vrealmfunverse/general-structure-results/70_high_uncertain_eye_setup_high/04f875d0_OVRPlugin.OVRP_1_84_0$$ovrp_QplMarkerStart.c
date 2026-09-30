/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 04f875d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 in_w8;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x22;
  
  *(undefined1 *)(unaff_x20 + 0xd38) = in_w8;
  lVar6 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x44) = 0x41a00000;
  *(undefined4 *)(unaff_x19 + 0x38) = 2;
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(undefined8 *)(unaff_x19 + 0x3c) = 0x420c0000420c0000;
  if (iVar1 == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *unaff_x22;
  }
  puVar4 = System_Reflection_Pointer_var;
  puVar3 = System_Drawing_PointF_var;
  puVar2 = System_Drawing_Point_var;
  puVar8 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar8[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(lVar9,uVar10,
                 *(undefined8 *)System_Func<InteractionGroupRegisteredEventArgs>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar7 = lVar9;
    thunk_FUN_02bb0e9c(plVar7,lVar9);
  }
  *(long *)(unaff_x19 + 0x48) = lVar9;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x48),lVar9);
  uVar10 = *(undefined8 *)puVar3;
  *(undefined8 *)(unaff_x19 + 0x50) = 0xffffffffffffffff;
  uVar5 = FUN_05c220a0(uVar10,0);
  uVar10 = *(undefined8 *)puVar4;
  *(undefined4 *)(unaff_x19 + 0x58) = uVar5;
  uVar5 = FUN_05c220a0(uVar10,0);
  uVar10 = *(undefined8 *)puVar2;
  *(undefined4 *)(unaff_x19 + 0x5c) = uVar5;
  uVar5 = FUN_05c220a0(uVar10,0);
  lVar6 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x60) = uVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar6);
    lVar6 = *unaff_x22;
  }
  puVar8 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar8[2];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar6);
      puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(lVar9,uVar10,
                 *(undefined8 *)System_Func<InteractionGroupUnregisteredEventArgs>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar7 = lVar9;
    thunk_FUN_02bb0e9c(plVar7,lVar9);
  }
  *(long *)(unaff_x19 + 0x88) = lVar9;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x88),lVar9);
  thunk_FUN_05c88cb0();
  return;
}


