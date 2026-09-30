/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 05f17560
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  
  plVar1 = (long *)FUN_070dd334(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8));
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
  {
    FUN_04481fb8();
  }
  uVar2 = thunk_FUN_0448520c();
  lVar3 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
        goto LAB_05f17600;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar3 = FUN_044822ac(plVar1,lVar3,0);
LAB_05f17600:
  FUN_0710fad0(uVar2,plVar1,*(undefined8 *)(lVar3 + 8),
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_05f17d84();
  return;
}


