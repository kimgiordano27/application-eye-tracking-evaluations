/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$Internal_SetSinglePassStereo
ENTRY_POINT: 03f89714
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_Rendering_CommandBuffer__Internal_SetSinglePassStereo(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long in_stack_00000018;
  
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = FUN_03f87db4();
  *(undefined8 *)(in_stack_00000018 + 0x30) = uVar5;
  thunk_FUN_01f51358();
  plVar10 = *(long **)(in_stack_00000018 + 0x30);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  puVar4 = PTR_DAT_045819a8;
  puVar3 = Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__;
  puVar2 = Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f897b4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03f897b4:
    uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if ((uVar8 & 1) == 0) {
      FUN_03f899a8();
      *(undefined8 *)(in_stack_00000018 + 0x30) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x30),0);
      return 0;
    }
    plVar10 = *(long **)(in_stack_00000018 + 0x30);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f89820;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_03f89820:
    lVar7 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(lVar7 + 0x18);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = thunk_FUN_01ecaf38(lVar7,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03eede94(uVar5,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_034b0dd0(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      *(undefined8 *)(in_stack_00000018 + 0x18) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x18),uVar5);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
    plVar10 = *(long **)(in_stack_00000018 + 0x30);
  } while( true );
}


