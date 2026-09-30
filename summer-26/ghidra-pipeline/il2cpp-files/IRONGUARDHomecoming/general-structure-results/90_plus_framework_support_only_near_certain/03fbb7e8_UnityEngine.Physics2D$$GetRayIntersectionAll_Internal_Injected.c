/*
FUNCTION_NAME: UnityEngine.Physics2D$$GetRayIntersectionAll_Internal_Injected
ENTRY_POINT: 03fbb7e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03fbba60) */

void UnityEngine_Physics2D__GetRayIntersectionAll_Internal_Injected(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar9;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  puVar9 = *(undefined8 **)(unaff_x21 + 0x4f0);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045834e0);
    thunk_FUN_01efb3a4(PTR_DAT_045834d8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045834f0);
    thunk_FUN_01efb3a4(PTR_DAT_045834f8);
    thunk_FUN_01efb3a4(PTR_DAT_04583500);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_045834e8);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<SimpleCapsuleWithStickMovement>__);
    *(undefined1 *)(unaff_x24 + 0x893) = 1;
  }
  uVar4 = thunk_FUN_01f117cc(*unaff_x25);
  FUN_02e6c748(uVar4,param_2,*unaff_x20,0);
  uVar4 = FUN_02444b9c(param_2,*unaff_x22,uVar4,*unaff_x23);
  *(undefined8 *)(param_2 + 0xa0) = uVar4;
  thunk_FUN_01f51358();
  FUN_032be218(param_2,*puVar9);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (*(long *)(param_2 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_0265d924(*(long *)(param_2 + 0x98),
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
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03fbb950;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03fbb950:
    uVar7 = (*(code *)*puVar9)(plVar5,puVar9[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03fbb9ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03fbb9ac:
    uVar4 = (*(code *)*puVar9)(plVar5,puVar9[1]);
    thunk_FUN_03fe9acc(param_2,uVar4,*(undefined8 *)(param_2 + 0xa0),0);
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03fbba24;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03fbba24:
    (*(code *)*puVar9)(plVar5,puVar9[1]);
  }
  FUN_032be3a4(param_2,*(undefined8 *)PTR_DAT_045834f8);
  return;
}


