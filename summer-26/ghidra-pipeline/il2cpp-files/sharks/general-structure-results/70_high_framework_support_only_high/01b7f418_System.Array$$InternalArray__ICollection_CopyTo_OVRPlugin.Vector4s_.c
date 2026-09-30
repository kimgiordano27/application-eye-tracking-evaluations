/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector4s>
ENTRY_POINT: 01b7f418
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector4s>
               (void *param_1,undefined8 param_2,undefined8 ****param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *__dest;
  void *apvStack_30 [2];
  undefined1 auStack_20 [16];
  undefined8 ***pppuStack_10;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  puVar7 = *(undefined8 **)(param_4 + 0x38);
  pppuStack_10 = param_3;
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0185db00(param_4);
    puVar7 = *(undefined8 **)(param_4 + 0x38);
  }
  uVar1 = *(uint *)(puVar7[4] + 0xfc);
  __dest = (undefined8 *)((long)apvStack_30 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  auStack_20._0_8_ = 0;
  auStack_20._8_8_ = 0;
  auStack_20 = (**(code **)*puVar7)(param_1,param_2);
  lVar3 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x10))(auStack_20);
  if ((uVar4 & 1) == 0) {
    lVar3 = *(long *)(param_4 + 0x38);
    if (-1 < *(int *)(*(long *)(lVar3 + 0x20) + 0x28)) {
      param_3 = &pppuStack_10;
    }
    memcpy(__dest,param_3,(ulong)uVar1);
    lVar3 = *(long *)(lVar3 + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    puVar7 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x28);
    if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x20) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    apvStack_30[0] = __dest;
    (*(code *)puVar7[2])(*puVar7,puVar7,auStack_20,apvStack_30,__dest);
    if (*(long *)(lVar2 + 0x28) == lStack_8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  apvStack_30[0] = param_1;
  apvStack_30[1] = (void *)param_2;
  uVar5 = thunk_FUN_01851c08(PTR_DAT_037f9268);
  uVar5 = thunk_FUN_018617ec(uVar5,apvStack_30);
  uVar6 = thunk_FUN_01851c08(PTR_DAT_037f93c0);
  uVar5 = FUN_02a473b8(uVar6,uVar5,0);
  thunk_FUN_01851c08(PTR_DAT_037f8d50);
  uVar6 = thunk_FUN_01861bbc();
  FUN_02bcf690(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar6,param_4);
}


