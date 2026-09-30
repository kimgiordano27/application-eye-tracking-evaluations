/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 0419f000
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong uVar4;
  long lVar5;
  
  iVar3 = (int)unaff_x19;
  if ((unaff_w22 < 0) || (*(int *)(unaff_x21 + 0x18) - unaff_w22 < iVar3)) {
    FUN_05509cf8(0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_054fa008(8,0);
  }
  if (iVar3 < unaff_w22 + iVar3) {
    uVar4 = -(unaff_x19 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x19 & 0xffffffff) << 4;
    lVar5 = (long)(unaff_w22 + iVar3) - (long)iVar3;
    do {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
LAB_0419f0a0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (unaff_x20 == 0) goto LAB_0419f0a0;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + uVar4 + 0x20),
                         *(undefined8 *)(lVar2 + uVar4 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) goto LAB_0419f08c;
      lVar5 = lVar5 + -1;
      uVar4 = uVar4 + 0x10;
      unaff_x19 = (ulong)((uint)unaff_x19 + 1);
    } while (lVar5 != 0);
  }
  unaff_x19 = 0xffffffff;
LAB_0419f08c:
  return unaff_x19 & 0xffffffff;
}


