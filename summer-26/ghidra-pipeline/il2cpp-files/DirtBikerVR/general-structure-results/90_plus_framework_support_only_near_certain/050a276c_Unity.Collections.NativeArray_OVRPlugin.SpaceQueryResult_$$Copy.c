/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 050a276c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x27;
  uint uVar5;
  ulong unaff_x28;
  ulong uVar6;
  long unaff_x29;
  undefined8 uVar7;
  ulong in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  
  while( true ) {
    uVar7 = *unaff_x21;
    *(undefined8 *)(in_x9 + 0x28) = unaff_x21[1];
    *(undefined8 *)(in_x9 + 0x20) = uVar7;
    thunk_FUN_03afed3c(unaff_x29 + (long)(int)in_w8 * 0x10 + 8,0);
    uVar5 = (int)unaff_x28 - 1;
    unaff_x28 = (ulong)uVar5;
    if (in_stack_00000018 <= (int)uVar5)
    goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
    do {
      uVar5 = *(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
        uVar2 = (int)uVar6 + 1;
        if (uVar5 <= uVar2) goto LAB_050a27ec;
        lVar1 = unaff_x22 + (long)(int)uVar2 * 0x10;
        *(undefined8 *)(lVar1 + 0x20) = unaff_x23;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x24;
        thunk_FUN_03afed3c(unaff_x29 + (long)(int)uVar2 * 0x10 + 8,0);
        if (unaff_x28 == in_stack_00000008) {
          return;
        }
        uVar5 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if (uVar5 <= (uint)unaff_x27) goto LAB_050a27ec;
        lVar1 = unaff_x22 + unaff_x27 * 0x10;
        unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
        unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
        uVar6 = unaff_x28;
      } while ((long)unaff_x28 < in_stack_00000010);
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy:
      uVar5 = (uint)unaff_x28;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_050a27ec;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar1 = unaff_x22 + (long)(int)uVar5 * 0x10;
      unaff_x21 = (undefined8 *)(lVar1 + 0x20);
      uVar7 = *unaff_x21;
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      iVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar7,uVar3,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while (-1 < iVar4);
    if ((*(uint *)(unaff_x22 + 0x18) <= uVar5) ||
       (in_w8 = uVar5 + 1, *(uint *)(unaff_x22 + 0x18) <= in_w8)) break;
    in_x9 = unaff_x22 + (long)(int)in_w8 * 0x10;
  }
LAB_050a27ec:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


