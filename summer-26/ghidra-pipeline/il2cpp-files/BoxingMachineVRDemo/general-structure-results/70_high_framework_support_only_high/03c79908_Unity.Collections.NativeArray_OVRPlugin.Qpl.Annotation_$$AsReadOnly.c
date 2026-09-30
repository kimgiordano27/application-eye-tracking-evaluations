/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsReadOnly
ENTRY_POINT: 03c79908
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnly(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint in_w9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_06764930;
  if (in_ZR) {
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x18) == 0) {
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      uVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06767228);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0(lVar4);
      }
      FUN_05069454(uVar3,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x78),0);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18) = uVar3;
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      thunk_FUN_02dd37b4(*(long *)(lVar4 + 0xb8) + 0x18,uVar3);
    }
    FUN_035829e8(*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_06769c60);
                    /* WARNING: Could not recover jumptable at 0x03c79b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x188))();
    return;
  }
                    /* try { // try from 03c79918 to 03d79957 has its CatchHandler @ 03c79918
                       catch() { ... } // from try @ 03c79918 with catch @ 03c79918
                       catch() { ... } // from try @ 03c7996c with catch @ 03c79918
                       catch() { ... } // from try @ 03c799a8 with catch @ 03c79918
                       catch() { ... } // from try @ 03c799e8 with catch @ 03c79918 */
  bVar1 = *(byte *)(*(long *)PTR_DAT_06767888 + 0x130);
  if ((bVar1 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06767888)) {
    if (*(int *)(*(long *)PTR_DAT_06764930 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b7350e == '\0') {
      FUN_02d6084c(PTR_DAT_06764930);
      DAT_06b7350e = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar2;
    }
    uVar3 = *unaff_x19;
    uVar6 = unaff_x19[1];
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06767a30 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_05069828(0);
    if (lVar4 != 0) {
      FUN_05086820(lVar4,uVar3,uVar6,uVar5,8,unaff_x20,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  return;
}


