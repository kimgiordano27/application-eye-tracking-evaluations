/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03b0b308
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong __n;
  void *__dest;
  void *__s;
  long unaff_x29;
  undefined1 auStack_40 [64];
  
  *(undefined4 *)(unaff_x29 + -0x34) = param_4;
  lVar4 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar4 + 0x28);
  lVar10 = *(long *)(param_5 + 0x38);
  if (lVar10 == 0) {
    FUN_02f07e70(PTR_DAT_06d36e00);
    lVar10 = *(long *)(param_5 + 0x38);
    if (lVar10 == 0) {
      FUN_02eea7c4(param_5);
      lVar10 = *(long *)(param_5 + 0x38);
    }
  }
  lVar8 = *(long *)(lVar10 + 0x28);
  uVar3 = *(ushort *)(lVar8 + 0x135);
  uVar1 = *(uint *)(*(long *)(lVar10 + 0x18) + 0xfc);
  __n = (ulong)uVar1;
  lVar10 = lVar8;
  if ((uVar3 & 1) == 0) {
    lVar8 = FUN_02eea768(lVar8);
    lVar10 = *(long *)(*(long *)(param_5 + 0x38) + 0x28);
    uVar3 = *(ushort *)(lVar10 + 0x135);
  }
  iVar2 = *(int *)(lVar8 + 0xfc);
  if ((uVar3 & 1) == 0) {
    lVar10 = FUN_02eea768(lVar10);
  }
  lVar10 = (long)(auStack_40 + -((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0)) -
           ((ulong)(*(int *)(lVar10 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)(lVar10 - uVar11);
  __s = (void *)((long)__dest - uVar11);
  memset(__s,0,__n);
  *param_1 = 0;
  param_1[1] = 0;
  memset(__s,0,__n);
  memcpy(__dest,__s,__n);
  if (*(int *)(*(long *)PTR_DAT_06d36e00 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar6 = *(undefined8 **)(*(long *)(param_5 + 0x38) + 0x20);
  uVar5 = *puVar6;
  *(undefined4 *)(unaff_x29 + -0xc) = param_2;
  *(undefined8 *)(unaff_x29 + -0x30) = param_3;
  *(void **)(unaff_x29 + -0x28) = __dest;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  (*(code *)puVar6[2])(uVar5,puVar6,0,unaff_x29 + -0x30,unaff_x29 + -0x18);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = uVar5;
  lVar9 = *(long *)(param_5 + 0x38);
  lVar8 = *(long *)(lVar9 + 0x28);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
    lVar9 = *(long *)(param_5 + 0x38);
  }
  FUN_02f08988(lVar8,*(undefined8 *)(lVar9 + 0x30),
               auStack_40 + -((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0),param_3,0,unaff_x29 + -0x30
              );
  if (*(char *)(unaff_x29 + -0x30) == '\0') {
    lVar9 = *(long *)(param_5 + 0x38);
    lVar8 = *(long *)(lVar9 + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768();
      lVar9 = *(long *)(param_5 + 0x38);
    }
    FUN_02f08988(lVar8,*(undefined8 *)(lVar9 + 0x38),lVar10,param_3,0,unaff_x29 + -0x30);
    uVar7 = *(undefined4 *)(unaff_x29 + -0x30);
  }
  else {
    uVar7 = 1;
  }
  iVar2 = *(int *)(unaff_x29 + -0x34);
  *(undefined4 *)((long)param_1 + 0xc) = uVar7;
  if (iVar2 == 1) {
    FUN_0668bf60(*param_1,(long)*(int *)(param_1 + 1) * (long)(int)uVar1,0);
  }
  if (*(long *)(lVar4 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


