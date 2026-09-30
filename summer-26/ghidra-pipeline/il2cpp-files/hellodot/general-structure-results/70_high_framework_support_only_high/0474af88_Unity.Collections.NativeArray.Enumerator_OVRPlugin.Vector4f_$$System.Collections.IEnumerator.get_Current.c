/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0474af88
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x1e8));
  *(undefined1 *)(unaff_x22 + 0x87d) = 1;
  puVar3 = PTR_DAT_065c89e8;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(4,0);
  }
  FUN_04e3f794();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    FUN_0475d3a8(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f3fb68(uVar5,0);
  FUN_04e3dfc4();
  FUN_04e3f794();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x28);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    FUN_02ce7ad4(lVar4,iVar2 - iVar1);
    FUN_0474ad5c();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f3fb68(uVar5,0);
    FUN_04e3dfc4();
    return;
  }
  return;
}


