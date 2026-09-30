/*
FUNCTION_NAME: FUN_07183870
ENTRY_POINT: 07183870
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_07183870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = Method_Unity_Properties_ContainerPropertyBag<Rect>__ctor__;
  local_38 = param_3;
  uStack_34 = param_4;
  local_28 = param_1;
  uStack_24 = param_2;
  if ((DAT_07eee26a & 1) == 0) {
    FUN_03642964(PTR_DAT_079f7a50);
    FUN_03642964(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_GetValue__
                );
    FUN_03642964(Method_Unity_Properties_ContainerPropertyBag<Rect>__ctor__);
    DAT_07eee26a = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_0367ca58();
  }
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x10);
  }
  if (*(long *)(*(long *)
                 Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_GetValue__
               + 0x38) == 0) {
    FUN_0367ca58();
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = *(undefined8 *)(param_6 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_079f7a50 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07eee2e0 == (code *)0x0) {
    DAT_07eee2e0 = (code *)FUN_03642928(
                                       "UnityEngine.Graphics::Blit4_Injected(System.IntPtr,System.IntPtr,UnityEngine.Vector2&,UnityEngine.Vector2&)"
                                       );
  }
  (*DAT_07eee2e0)(uVar3,uVar2,&local_28,&local_38);
  return;
}


