/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 041cc170
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  iVar1 = thunk_FUN_03a9985c();
  if (1 < iVar1) {
    thunk_FUN_03af1434(&DAT_0861d9c0);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(&DAT_08694740);
    FUN_06762458(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4);
  }
  uVar2 = FUN_06769a04();
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000070,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000048 = unaff_x21[1];
      in_stack_00000040 = *unaff_x21;
      in_stack_00000058 = unaff_x21[3];
      in_stack_00000050 = unaff_x21[2];
      in_stack_00000068 = unaff_x21[5];
      in_stack_00000060 = unaff_x21[4];
      thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000040);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_03ac4090(lVar6);
      }
      uVar3 = thunk_FUN_067aa794();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_03a9981c();
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03a9981c();
  return iVar1 + -1;
}


