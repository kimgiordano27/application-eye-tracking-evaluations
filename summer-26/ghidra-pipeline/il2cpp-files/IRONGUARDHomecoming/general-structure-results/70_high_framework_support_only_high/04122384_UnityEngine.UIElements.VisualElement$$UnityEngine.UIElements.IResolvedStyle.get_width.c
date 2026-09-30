/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$UnityEngine.UIElements.IResolvedStyle.get_width
ENTRY_POINT: 04122384
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

void UnityEngine_UIElements_VisualElement__UnityEngine_UIElements_IResolvedStyle_get_width
               (long param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x30);
  if (*(int *)(**(long **)(param_1 + 0x198) + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (*unaff_x19 != *(long *)Method_System_Char_Parse__) {
    unaff_x19 = (long *)0x0;
  }
  plVar2 = (long *)FUN_041e516c(unaff_x19,uVar1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar2,param_2,0);
  (**(code **)(*param_2 + 0x198))(param_2,plVar2,*(undefined8 *)(*param_2 + 0x1a0));
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04122448;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04122448:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


