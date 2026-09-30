/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Allocate
ENTRY_POINT: 047def04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Allocate(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  long *plVar5;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int unaff_w26;
  
  FUN_04195844(param_1,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0xa8));
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = unaff_x24;
    *(undefined8 *)(param_1 + 0x18) = unaff_x23;
    thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x10),0);
    lVar4 = *(long *)(unaff_x22 + 0x20);
    *(int *)(param_1 + 0x20) = unaff_w21;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xb0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    uVar3 = FUN_03642a4c(lVar4,1);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    thunk_FUN_036b7ad0();
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 != 0) {
      iVar2 = 0;
      if (unaff_w26 != 0) {
        iVar2 = unaff_w21 / unaff_w26;
      }
      uVar1 = unaff_w21 - iVar2 * unaff_w26;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar4 + (ulong)uVar1 * 8 + 0x20);
        thunk_FUN_036b7ad0();
        plVar5 = *(long **)(unaff_x19 + 0x18);
        if (plVar5 == (long *)0x0) goto LAB_047df048;
        lVar4 = thunk_FUN_0367fd24(param_1,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar4 == 0) {
          uVar3 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar3,0);
        }
        if (uVar1 < *(uint *)(plVar5 + 3)) {
          plVar5[(ulong)uVar1 + 4] = param_1;
          thunk_FUN_036b7ad0(plVar5 + (ulong)uVar1 + 4,param_1);
          plVar5 = (long *)(unaff_x19 + 0x20);
          lVar4 = param_1;
          if (*plVar5 != 0) {
            *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*plVar5 + 0x40);
            thunk_FUN_036b7ad0();
            lVar4 = *plVar5;
            if (lVar4 == 0) goto LAB_047df048;
          }
          *(long *)(lVar4 + 0x40) = param_1;
          thunk_FUN_036b7ad0((long *)(lVar4 + 0x40),param_1);
          *(long *)(unaff_x19 + 0x20) = param_1;
          thunk_FUN_036b7ad0(plVar5,param_1);
          *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
          return param_1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
  }
LAB_047df048:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


