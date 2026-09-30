/*
FUNCTION_NAME: FUN_0201b694
ENTRY_POINT: 0201b694
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_0201b694(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0378097a & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_6785);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    DAT_0378097a = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x188))(param_1,param_2,param_5,*(undefined8 *)(*param_1 + 400));
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
    if (param_4 != (long *)0x0) {
      if (*(byte *)(*param_4 + 300) < *(byte *)(lVar3 + 300)) {
        param_4 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(lVar3 + 300) * 8 + -8) !=
               lVar3) {
        param_4 = (long *)0x0;
      }
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_01fc427c(param_4,0,0);
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if ((uVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
      ;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01780344(uVar6,0);
      uVar2 = FUN_01789ac0(param_5,uVar6,0);
      if ((uVar2 & 1) != 0) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
                    /* WARNING: Could not recover jumptable at 0x0201b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
        return plVar4;
      }
      uVar6 = *(undefined8 *)StringLiteral_6785;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01780344(uVar6,0);
      uVar2 = FUN_01789ac0(param_5,uVar6,0);
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
    }
  }
  uVar6 = thunk_FUN_00d48444(PTR_DAT_033ef050);
  uVar6 = FUN_015e2390(uVar6,0);
  thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_0176c578(uVar5,uVar6,0);
  uVar6 = thunk_FUN_00d48444(
                            Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar6);
}


