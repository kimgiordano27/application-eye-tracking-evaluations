/*
FUNCTION_NAME: UnityEngine.ParticleSystem.MainModule$$set_startColor_Injected
ENTRY_POINT: 03fb9af8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03fb9d7c) */

void UnityEngine_ParticleSystem_MainModule__set_startColor_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x24;
  long unaff_x25;
  undefined8 *puVar10;
  
  puVar4 = PTR_DAT_04583440;
  puVar3 = PTR_DAT_04583438;
  puVar2 = PTR_DAT_04583418;
  puVar1 = Method_UnityEngine_Rendering_CameraProperties_GetCameraCullingPlane__;
  puVar10 = *(undefined8 **)(unaff_x25 + 0x408);
  if ((*(byte *)(unaff_x24 + 0x882) & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04583408);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04583438);
    thunk_FUN_01efb3a4(PTR_DAT_04583440);
    thunk_FUN_01efb3a4(PTR_DAT_04583448);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04583418);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CameraProperties_GetCameraCullingPlane__);
    *(undefined1 *)(unaff_x24 + 0x882) = 1;
  }
  uVar5 = thunk_FUN_01f117cc(*puVar10);
  FUN_02e6c748(uVar5,param_1,*(undefined8 *)puVar3,0);
  uVar5 = FUN_02444b9c(param_1,*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  thunk_FUN_01f51358();
  FUN_032be218(param_1,*(undefined8 *)puVar4);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = (long *)FUN_0265d924(*(long *)(param_1 + 0x98),
                                *(undefined8 *)
                                 Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                               );
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fb9c78;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03fb9c78:
    uVar8 = (*(code *)*puVar10)(plVar6,puVar10[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fb9cd4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03fb9cd4:
    uVar5 = (*(code *)*puVar10)(plVar6,puVar10[1]);
    thunk_FUN_03fe9acc(param_1,uVar5,*(undefined8 *)(param_1 + 0xa0),0);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fb9d4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03fb9d4c:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  return;
}


