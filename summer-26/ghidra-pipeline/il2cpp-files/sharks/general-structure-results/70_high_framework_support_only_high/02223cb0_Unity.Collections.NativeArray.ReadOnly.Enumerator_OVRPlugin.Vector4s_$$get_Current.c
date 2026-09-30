/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 02223cb0
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__get_Current(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  puVar3 = PTR_DAT_037f2c78;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02be0698(4,0);
  }
  FUN_02ae16b4();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    FUN_01abe7cc(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar5,0);
  FUN_02adff8c();
  FUN_02ae16b4();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x28);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    FUN_017fc3f4(lVar4,iVar2 - iVar1);
    Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__Reset();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02bddb5c(uVar5,0);
    FUN_02adff8c();
    return;
  }
  return;
}


