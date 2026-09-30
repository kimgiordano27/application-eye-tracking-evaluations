/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$MoveNext
ENTRY_POINT: 02223c40
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__MoveNext
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_03a23a50 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f2c78);
    FUN_017fc350(PTR_DAT_037fadf0);
    FUN_017fc350(PTR_DAT_037fadf8);
    FUN_017fc350(PTR_DAT_037fae00);
    FUN_017fc350(PTR_DAT_037fae08);
    DAT_03a23a50 = 1;
  }
  puVar4 = PTR_DAT_037fadf8;
  puVar3 = PTR_DAT_037f2c78;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02be0698(4,0);
  }
  FUN_02ae16b4(param_2,*(undefined8 *)PTR_DAT_037fae08,*(undefined4 *)(param_1 + 0x2c),0);
  lVar7 = *(long *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)puVar4;
  if (lVar7 == 0) {
    lVar7 = FUN_01abe7cc(*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
  }
  puVar4 = PTR_DAT_037fadf0;
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x158);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar8 = FUN_02bddb5c(uVar8,0);
  FUN_02adff8c(param_2,uVar6,lVar7,uVar8,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  FUN_02ae16b4(param_2,*(undefined8 *)puVar4,uVar5,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x160);
    iVar2 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4();
    }
    puVar4 = PTR_DAT_037fae00;
    uVar6 = FUN_017fc3f4(lVar7,iVar2 - iVar1);
    Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__Reset
              (param_1,uVar6,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x168))
    ;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x170);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar8 = FUN_02bddb5c(uVar8,0);
    FUN_02adff8c(param_2,*(undefined8 *)puVar4,uVar6,uVar8,0);
    return;
  }
  return;
}


