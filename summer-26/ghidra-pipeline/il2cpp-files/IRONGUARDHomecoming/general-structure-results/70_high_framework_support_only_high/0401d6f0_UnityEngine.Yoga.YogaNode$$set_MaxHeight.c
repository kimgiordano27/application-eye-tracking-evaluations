/*
FUNCTION_NAME: UnityEngine.Yoga.YogaNode$$set_MaxHeight
ENTRY_POINT: 0401d6f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0401d7dc) */

undefined8 UnityEngine_Yoga_YogaNode__set_MaxHeight(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long *unaff_x22;
  
  plVar1 = (long *)thunk_FUN_01f117cc(*param_1);
  uVar6 = *(undefined8 *)Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__
  ;
  FUN_035ac8e8(plVar1,0);
  FUN_0402d3ac(plVar1,uVar6);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_02159f84(plVar1,*(undefined8 *)Method_System_Collections_Generic_Queue<bool>__ctor__,
                       *(undefined8 *)
                        Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Add__);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = uVar6;
  thunk_FUN_01f51358();
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0401d7ac;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0401d7ac:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
}


