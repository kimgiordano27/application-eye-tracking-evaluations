/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Equality
ENTRY_POINT: 06e25580
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Equality(ushort *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if ((*param_1 & 1) == 0) {
    FUN_04980b34();
  }
  lVar2 = thunk_FUN_04983f60();
  FUN_06e2433c(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_06e256ec;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_06e256f0:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (unaff_x20 == 0) goto LAB_06e256ec;
      memcpy(&stack0x00000008,(void *)(lVar4 + lVar6),0x48);
      memcpy(&stack0x00000098,&stack0x00000008,0x48);
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(unaff_x21 + 0x10);
        if (lVar4 == 0) goto LAB_06e256ec;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_06e256f0;
        if (lVar2 == 0) {
LAB_06e256ec:
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        memcpy(&stack0x00000050,(void *)(lVar4 + lVar6),0x48);
        lVar4 = *(long *)(lVar2 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_06e256ec;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x48;
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar4 + 0x20),&stack0x00000050,0x48);
          thunk_FUN_049ee3d8(lVar4 + 0x20,0);
        }
        else {
          memcpy(&stack0x00000098,&stack0x00000050,0x48);
          FUN_06e24c64(lVar2,&stack0x00000098,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((long)uVar5 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return lVar2;
}


