/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0407802c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar8;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack000000000000005c = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000064 = 0;
  iVar2 = thunk_FUN_03a9985c();
  if (1 < iVar2) {
    thunk_FUN_03af1434(&DAT_0861d9c0);
    uVar5 = thunk_FUN_03ac74bc();
    uVar6 = thunk_FUN_03af1434(&DAT_08694740);
    FUN_06762458(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar5);
  }
  uVar3 = FUN_06769a04();
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000050,
             (void *)((long)unaff_x21 + uVar8 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
      uStack0000000000000044 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
      uStack0000000000000038 = uStack0000000000000058;
      in_stack_00000030 = uStack0000000000000050;
      uStack000000000000003c = uStack000000000000005c;
      uStack0000000000000040 = uStack0000000000000060;
      thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        FUN_03ac4090(lVar7);
      }
      uVar4 = thunk_FUN_067aa794();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


