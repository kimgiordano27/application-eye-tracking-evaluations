/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 03999214
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  
  lVar3 = FUN_02b76218();
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_039992d4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c();
LAB_039992d4:
  iVar2 = (*(code *)*puVar4)();
  if (0 < iVar2) {
    FUN_0399871c();
    iVar1 = (int)unaff_x19[3] - unaff_w21;
    if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
      FUN_04d9e334(unaff_x19[2],unaff_w21,unaff_x19[2],iVar2 + unaff_w21,iVar1,0);
    }
    if (unaff_x23 == unaff_x19) {
      FUN_04d9e334(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
      FUN_04d9e334(unaff_x19[2],iVar2 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                   (int)unaff_x19[3] - unaff_w21,0);
    }
    else {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      lVar5 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_039993e8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c();
LAB_039993e8:
      (*(code *)*puVar4)();
    }
    *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar2;
  }
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


