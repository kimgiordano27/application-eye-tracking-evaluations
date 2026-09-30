/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 054db1e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_x9;
  undefined8 in_x10;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  
  uVar6 = param_2._8_8_;
  uVar5 = param_2._0_8_;
  uVar3 = param_1._0_8_;
  uVar4 = param_1._8_8_;
  while( true ) {
    uStack00000000000000e0 = uVar5;
    uStack00000000000000e8 = uVar6;
    uStack00000000000000f0 = in_x10;
    uStack0000000000000100 = uVar3;
    uStack0000000000000108 = uVar4;
    uStack0000000000000110 = in_x9;
    iVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                       *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar1) {
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03cf1244();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03cf1244();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        FUN_054dab14();
        return unaff_w19;
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      FUN_054dab14();
      do {
        unaff_w19 = unaff_w19 + 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_054db2d8;
        lVar2 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        uVar5 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = *(undefined8 *)(lVar2 + 0x20);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        uStack00000000000000e8 = in_stack_000000c8;
        uStack00000000000000e0 = in_stack_000000c0;
        uStack00000000000000f0 = in_stack_000000d0;
        uStack0000000000000100 = uVar4;
        uStack0000000000000108 = uVar5;
        uStack0000000000000110 = uVar3;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
    }
    unaff_w24 = unaff_w24 - 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
    lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
    in_x10 = *(undefined8 *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    in_x9 = in_stack_000000d0;
    uVar3 = in_stack_000000c0;
    uVar4 = in_stack_000000c8;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
  }
LAB_054db2d8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


