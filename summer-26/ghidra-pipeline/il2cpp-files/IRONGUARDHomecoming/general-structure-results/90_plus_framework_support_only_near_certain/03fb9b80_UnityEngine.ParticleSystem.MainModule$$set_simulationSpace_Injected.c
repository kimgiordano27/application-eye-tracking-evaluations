/*
FUNCTION_NAME: UnityEngine.ParticleSystem.MainModule$$set_simulationSpace_Injected
ENTRY_POINT: 03fb9b80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03fb9d7c) */

void UnityEngine_ParticleSystem_MainModule__set_simulationSpace_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x4f8));
  thunk_FUN_01efb3a4(PTR_DAT_04583418);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CameraProperties_GetCameraCullingPlane__);
  *(undefined1 *)(unaff_x24 + 0x882) = 1;
  thunk_FUN_01f117cc(*unaff_x25);
  FUN_02e6c748();
  uVar4 = FUN_02444b9c();
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar4;
  thunk_FUN_01f51358();
  FUN_032be218();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_0265d924(*(long *)(unaff_x20 + 0x98),
                                *(undefined8 *)
                                 Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                               );
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fb9c78;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03fb9c78:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fb9cd4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03fb9cd4:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    thunk_FUN_03fe9acc();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fb9d4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03fb9d4c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


