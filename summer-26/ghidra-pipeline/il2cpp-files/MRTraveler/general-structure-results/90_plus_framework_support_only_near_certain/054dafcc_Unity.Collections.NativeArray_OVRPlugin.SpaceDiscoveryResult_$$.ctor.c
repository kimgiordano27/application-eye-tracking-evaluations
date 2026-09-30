/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 054dafcc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor
               (ulong param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03cf1244();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar5 = unaff_w19 + (unaff_w24 >> 1);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
                    /* try { // try from 054daff8 to 055db0ef has its CatchHandler @ 054db0f0 */
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054da9a8();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054da9a8();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054da9a8();
  if (unaff_x20 == 0) {
LAB_054db2dc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (uVar5 < *(uint *)(unaff_x20 + 0x18)) {
    lVar2 = unaff_x20 + (long)(int)uVar5 * 0x18;
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar5 = unaff_w23 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054dab14();
    if ((int)uVar5 <= (int)unaff_w19) {
LAB_054db268:
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
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x18;
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
      if (unaff_x22 == 0) goto LAB_054db2dc;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_000000e0 = uVar6;
      in_stack_000000e8 = uVar7;
      in_stack_000000f0 = uVar3;
      in_stack_00000100 = uVar8;
      in_stack_00000108 = uVar9;
      in_stack_00000110 = uVar4;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar5 = uVar5 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_054db2d8;
          lVar2 = unaff_x20 + (long)(int)uVar5 * 0x18;
          uVar4 = *(undefined8 *)(lVar2 + 0x30);
          uVar9 = *(undefined8 *)(lVar2 + 0x28);
          uVar8 = *(undefined8 *)(lVar2 + 0x20);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          in_stack_000000e0 = uVar8;
          in_stack_000000e8 = uVar9;
          in_stack_000000f0 = uVar4;
          in_stack_00000100 = uVar6;
          in_stack_00000108 = uVar7;
          in_stack_00000110 = uVar3;
          iVar1 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar5 <= (int)unaff_w19) goto LAB_054db268;
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
      }
    }
  }
LAB_054db2d8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


