/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$UnityEngine.UIElements.IResolvedStyle.get_unitySliceScale
ENTRY_POINT: 04122354
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04122478) */

void UnityEngine_UIElements_VisualElement__UnityEngine_UIElements_IResolvedStyle_get_unitySliceScale
               (void)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  
  plVar2 = (long *)FUN_0422f9c4();
  if (plVar2 != (long *)0x0) {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_0458a198 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*unaff_x19 != *(long *)Method_System_Char_Parse__) {
      unaff_x19 = (long *)0x0;
    }
    plVar3 = (long *)FUN_041e516c(unaff_x19,uVar1,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar3,plVar2,0);
    (**(code **)(*plVar2 + 0x198))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x1a0));
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04122448;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_04122448:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


