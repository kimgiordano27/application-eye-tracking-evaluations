/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 057127ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  char in_stack_00000028;
  
  if (unaff_x21 == 0) {
LAB_057129c4:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  in_stack_00000018 = &stack0x00000008;
  in_stack_00000010 = &stack0x0000002c;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x60) + 0x10))(uVar6);
  if (in_stack_00000028 == '\0') {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar6 = thunk_FUN_0367fe20();
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar2 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    (*pcVar7)(uVar6,unaff_w19,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
    lVar2 = *(long *)(unaff_x20 + 0x20);
    in_stack_00000008 = uVar6;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    uVar6 = in_stack_00000008;
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 == 0) goto LAB_057129c4;
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x78);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
    in_stack_00000010 = &stack0x0000002c;
    in_stack_00000018 = (undefined8 *)uVar6;
    (**(code **)(lVar3 + 0x10))(uVar5,lVar3,lVar2,&stack0x00000010,uVar6);
  }
  return in_stack_00000008;
}


