/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 05ea62e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom(undefined8 param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int in_w8;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  
  if (in_w8 < 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    plVar11 = (long *)*unaff_x20;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
LAB_05ea65d8:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar11);
    }
    lVar4 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    lVar7 = *plVar11;
    if ((*(byte *)(lVar7 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
    goto LAB_05ea65d8;
    auVar13 = (**(code **)(lVar7 + 0x178))(plVar11,*(undefined8 *)(lVar7 + 0x180));
    lVar4 = *(long *)(param_2 + 0x20);
    uVar1 = *(uint *)(unaff_x20 + 1);
    uVar8 = *(uint *)((long)unaff_x20 + 0xc);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xb0);
    uVar9 = (uint)((ulong)uVar1 & 0x7fffffff);
    if ((auVar13._8_4_ < uVar9) || (auVar13._8_4_ - uVar9 < uVar8)) {
      FUN_0769a508(0);
    }
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    lVar4 = auVar13._0_8_ + ((ulong)uVar1 & 0x7fffffff);
    goto LAB_05ea65c0;
  }
  lVar4 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  puVar3 = PTR_DAT_09285980;
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
  }
  uVar10 = FUN_0768890c(uVar10,0);
  uVar5 = FUN_0768890c(*(long *)(puVar3 + 0x88) + 0x20,0);
  uVar6 = FUN_07691f40(uVar10,uVar5,0);
  plVar11 = (long *)*unaff_x20;
  if ((uVar6 & 1) == 0) {
    if (plVar11 == (long *)0x0) goto LAB_05ea65b8;
  }
  else {
    if (plVar11 == (long *)0x0) {
LAB_05ea65b8:
      uVar8 = 0;
      lVar4 = 0;
      goto LAB_05ea65c0;
    }
    if (*plVar11 == *(long *)(puVar3 + 0x90)) {
      lVar4 = FUN_074e3264(plVar11,0);
      lVar7 = *(long *)(param_2 + 0x20);
      uVar1 = *(uint *)(plVar11 + 2);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      if ((uVar2 & 1) == 0) {
        FUN_040b1acc(lVar7);
        lVar7 = *(long *)(param_2 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      uVar9 = *(uint *)(unaff_x20 + 1);
      uVar8 = *(uint *)((long)unaff_x20 + 0xc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_040b1acc(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xb0);
      if ((uVar1 < uVar9) || (uVar1 - uVar9 < uVar8)) {
        FUN_0769a508(0);
      }
      if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      lVar4 = lVar4 + (int)uVar9;
      goto LAB_05ea65c0;
    }
  }
  lVar4 = *(long *)(param_2 + 0x20);
  uVar1 = *(uint *)(unaff_x20 + 1);
  uVar8 = *(uint *)((long)unaff_x20 + 0xc);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  lVar7 = thunk_FUN_040b4e00(plVar11,lVar4);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(plVar11,lVar4);
  }
  if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar8 = uVar8 & 0x7fffffff;
  if ((*(uint *)(lVar7 + 0x18) < uVar1) || (*(uint *)(lVar7 + 0x18) - uVar1 < uVar8)) {
    FUN_0769a508(0);
  }
  lVar4 = lVar7 + (int)uVar1 + 0x20;
LAB_05ea65c0:
  auVar12._8_4_ = uVar8;
  auVar12._0_8_ = lVar4;
  auVar12._12_4_ = 0;
  return auVar12;
}


