/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 047df6fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plStack0000000000000000;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  plStack0000000000000000 = (long *)(in_x9 + 0x10);
  if (*plStack0000000000000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  iVar1 = *(int *)(*plStack0000000000000000 + 0x18);
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  uVar2 = iVar1 << 1 | 1;
  lVar4 = FUN_03642a4c(lVar4,uVar2);
  lVar5 = *plStack0000000000000000;
  if (lVar5 != 0) {
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar6) {
        *plStack0000000000000000 = lVar4;
        thunk_FUN_036b7ad0(plStack0000000000000000,lVar4);
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar5 = *(long *)(lVar5 + uVar6 * 8 + 0x20);
      while (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0x20);
        lVar9 = *plVar7;
        uVar3 = FUN_047df900(param_1,*(undefined4 *)(lVar5 + 0x10),uVar2,
                             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar8 = (long *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
        *plVar7 = *plVar8;
        thunk_FUN_036b7ad0(plVar7);
        if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        *plVar8 = lVar5;
        thunk_FUN_036b7ad0(lVar4 + 0x20 + (long)(int)uVar3 * 8,lVar5);
        lVar5 = lVar9;
      }
      lVar5 = *plStack0000000000000000;
      uVar6 = uVar6 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


