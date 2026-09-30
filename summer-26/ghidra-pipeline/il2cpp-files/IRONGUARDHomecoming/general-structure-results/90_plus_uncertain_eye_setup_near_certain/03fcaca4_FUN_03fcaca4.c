/*
FUNCTION_NAME: FUN_03fcaca4
ENTRY_POINT: 03fcaca4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03fcaf68) */

void FUN_03fcaca4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04583e38;
  puVar5 = PTR_DAT_045834f8;
  puVar4 = PTR_DAT_045834f0;
  puVar3 = 
  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString512Bytes,_FixedString128Bytes>__;
  puVar2 = Method_DebugUISample_SliderPressed__;
  puVar1 = Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__;
  if ((DAT_0483b9d7 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04583e38);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045834f0);
    thunk_FUN_01efb3a4(PTR_DAT_045834f8);
    thunk_FUN_01efb3a4(PTR_DAT_04583500);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                      );
    thunk_FUN_01efb3a4(Method_DebugUISample_SliderPressed__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString512Bytes,_FixedString128Bytes>__
                      );
    DAT_0483b9d7 = 1;
  }
  FUN_032be218(param_1,*(undefined8 *)puVar4);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_02e6c748(uVar7,param_1,*(undefined8 *)puVar6,0);
  uVar7 = FUN_02444b9c(param_1,*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  thunk_FUN_01f51358();
  FUN_032be3a4(param_1,*(undefined8 *)puVar5);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar8 = (long *)FUN_0265d924(*(long *)(param_1 + 0x98),
                                *(undefined8 *)
                                 Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                               );
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03fcae60;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03fcae60:
    uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar11 & 1) == 0) break;
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03fcaebc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_03fcaebc:
    uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    thunk_FUN_03fe9acc(param_1,uVar7,*(undefined8 *)(param_1 + 0xb8),0);
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03fcaf34;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03fcaf34:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  FUN_03fcab1c(param_1);
  return;
}


