/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyTo
ENTRY_POINT: 05ea5280
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyTo
               (undefined8 param_1,void *param_2,void *param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong __n;
  undefined1 *__src;
  undefined1 *__dest;
  undefined8 uVar8;
  code *pcVar9;
  long unaff_x29;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_4 + 0x20);
  *(void **)(unaff_x29 + -0x20) = param_2;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar3 = *(long *)(param_4 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar7;
  __src = __dest + -uVar7;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xb0) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar5 = thunk_FUN_040b4efc();
  lVar6 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar3 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar3 = *(long *)(param_4 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0xb8);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  (*pcVar9)(lVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb8));
  lVar3 = *(long *)(param_4 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x28)) {
    param_2 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest,param_2,__n);
  if (lVar5 == 0) {
    if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar3 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    FUN_040775b0(lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xb0) + 0x80),__dest,__n)
    ;
    lVar3 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x78) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar4 = thunk_FUN_040b4efc();
    lVar6 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar3 = *(long *)(param_4 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 200);
    lVar6 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar6 = *(long *)(param_4 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xc0);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    (*pcVar9)(uVar4,lVar5,uVar8,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 200));
    lVar5 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar3 = *(long *)(param_4 + 0x20);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xd0);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xd0);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar4;
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    (**(code **)(lVar3 + 0x10))(uVar8,lVar3,param_1,unaff_x29 + -0x18,__src);
    memcpy(param_3,__src,__n);
    if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


