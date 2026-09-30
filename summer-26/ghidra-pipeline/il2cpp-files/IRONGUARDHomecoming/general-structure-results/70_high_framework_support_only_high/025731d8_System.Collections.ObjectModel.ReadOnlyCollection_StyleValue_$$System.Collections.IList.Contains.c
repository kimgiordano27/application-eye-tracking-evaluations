/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<StyleValue>$$System.Collections.IList.Contains
ENTRY_POINT: 025731d8
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


void System_Collections_ObjectModel_ReadOnlyCollection<StyleValue>__System_Collections_IList_Contains
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((DAT_0482fe0b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0482fe0b = 1;
  }
  FUN_01bc52e4(param_1,*(undefined8 *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80),
               0xffffffff);
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80
                                               ) + 0xa0);
  plVar3 = (long *)thunk_FUN_01f116d0(*puVar2,*(undefined8 *)puVar1);
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar3;
  lVar4 = *(long *)puVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_025732b0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar4,0);
LAB_025732b0:
                    /* WARNING: Could not recover jumptable at 0x025732c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


