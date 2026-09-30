/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsSpan
ENTRY_POINT: 05ea4c3c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsSpan
               (undefined8 param_1,void *param_2,void *param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong __n;
  undefined1 *__src;
  undefined1 *__dest;
  undefined8 uVar7;
  long unaff_x27;
  code *pcVar8;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x27 + 0x28);
  lVar4 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar2 = *(long *)(param_4 + 0x20);
  }
  __n = (ulong)*(uint *)(**(long **)(lVar4 + 0xc0) + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar6;
  __src = __dest + -uVar6;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar4 = thunk_FUN_040b4efc();
  lVar5 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar2 = *(long *)(param_4 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x58);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  (*pcVar8)(lVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x58));
  memcpy(__dest,param_2,__n);
  if (lVar4 == 0) {
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    FUN_040775b0(lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x80),__dest,__n)
    ;
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar3 = thunk_FUN_040b4efc();
    lVar5 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar2 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar2 = *(long *)(param_4 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x68);
    lVar5 = lVar2;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar5 = *(long *)(param_4 + 0x20);
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    (*pcVar8)(uVar3,lVar4,uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x68));
    lVar4 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar2 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar2 = *(long *)(param_4 + 0x20);
    }
    uVar7 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x70);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    (**(code **)(lVar2 + 0x10))(uVar7,lVar2,param_1,unaff_x29 + -0x18,__src);
    memcpy(param_3,__src,__n);
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


