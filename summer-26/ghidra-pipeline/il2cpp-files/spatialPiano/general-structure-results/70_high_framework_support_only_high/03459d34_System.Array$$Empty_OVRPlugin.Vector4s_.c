/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4s>
ENTRY_POINT: 03459d34
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_Vector4s>
               (undefined8 param_1,void *param_2,void *param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong __n;
  void *__dest;
  long lVar9;
  long unaff_x29;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar2 + 0x28);
  lVar9 = *(long *)(param_4 + 0x38);
  *(void **)(unaff_x29 + -0x20) = param_3;
  if (lVar9 == 0) {
    FUN_02f41ef8(param_4);
    lVar9 = *(long *)(param_4 + 0x38);
  }
  uVar7 = *(uint *)(*(long *)(lVar9 + 8) + 0xfc);
  __n = (ulong)uVar7;
  if ((*(ushort *)(*(long *)(lVar9 + 8) + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
    lVar9 = *(long *)(param_4 + 0x38);
    uVar7 = *(uint *)(lVar3 + 0xfc);
  }
  lVar3 = (long)&stack0x00000000 - ((ulong)(uVar7 + 0x10) + 0xf & 0x1fffffff0);
  __dest = (void *)(lVar3 - (__n + 0xf & 0x1fffffff0));
  memcpy(__dest,param_2,__n);
  uVar4 = FUN_02f08978(*(undefined8 *)(lVar9 + 8),__dest);
  if ((uVar4 & 1) == 0) {
    lVar9 = *(long *)(param_4 + 0x38);
    pvVar1 = param_3;
    if (-1 < *(int *)(*(long *)(lVar9 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,pvVar1,__n);
    uVar4 = FUN_02f08978(*(undefined8 *)(lVar9 + 8),__dest);
    if ((uVar4 & 1) == 0) goto LAB_03459f0c;
  }
  memcpy(__dest,param_2,__n);
  uVar4 = FUN_02f08978(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),__dest);
  if ((uVar4 & 1) != 0) {
    lVar9 = *(long *)(param_4 + 0x38);
    pvVar1 = param_3;
    if (-1 < *(int *)(*(long *)(lVar9 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,pvVar1,__n);
    uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(lVar9 + 8),__dest);
    lVar8 = *(long *)(param_4 + 0x38);
    lVar9 = *(long *)(lVar8 + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02f41e9c(lVar9);
      lVar8 = *(long *)(param_4 + 0x38);
    }
    uVar6 = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
    FUN_02f0939c(lVar9,uVar6,lVar3,param_2,unaff_x29 + -0x18,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03459f0c;
  }
  if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28)) {
    param_3 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest,param_3,__n);
  memmove(param_2,param_3,__n);
  if ((*(ushort *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  FUN_063c3774(param_1,0);
LAB_03459f0c:
  if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


