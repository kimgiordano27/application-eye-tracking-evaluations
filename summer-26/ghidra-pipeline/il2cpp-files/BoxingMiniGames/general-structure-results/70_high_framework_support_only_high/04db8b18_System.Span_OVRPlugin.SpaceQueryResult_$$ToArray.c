/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 04db8b18
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceQueryResult>__ToArray(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined4 uStack000000000000000c;
  
  FUN_03642964(&DAT_07bdf850);
  *(undefined1 *)(unaff_x21 + 0x864) = 1;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38);
  if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
    thunk_FUN_036a1978(DAT_07ef5fb8);
  }
  uVar5 = FUN_05e26f18(uVar5,0);
  uVar2 = FUN_05e26f18(DAT_07ef5f60 + 0x20,0);
  uVar3 = FUN_05e30794(uVar5,uVar2,0);
  if ((uVar3 & 1) != 0) {
    FUN_05c9e098(0,*unaff_x19,0,*(undefined4 *)(unaff_x19 + 1),0);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38);
  if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
    thunk_FUN_036a1978(DAT_07ef5fb8);
  }
  plVar4 = (long *)FUN_05e26f18(uVar5,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + 1);
    uVar2 = thunk_FUN_0367fa58(DAT_07ef5f20,&stack0x0000000c);
    FUN_05c98b2c(*(undefined8 *)PTR_DAT_07a00f30,uVar5,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


