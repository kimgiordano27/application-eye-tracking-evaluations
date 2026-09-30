/*
FUNCTION_NAME: FUN_027b1f2c
ENTRY_POINT: 027b1f2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_027b1f2c(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_54;
  
  if ((DAT_037887fd & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<IObserver<InputEventPtr>>_RemoveAtWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ICanvasElement>__ctor__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable_MovementType_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_GetTokenValue<double>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_s32__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<SendInvitesResult>__ctor__);
    thunk_FUN_00d48444(Method_OVRSpaceQuery_Options_ToQueryInfo2__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_WithControlsHavingToMatchPath__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<AudioSource>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileBinaryExpression__
                      );
    DAT_037887fd = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_70 = (long *)0x0;
  if (param_2 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<ICanvasElement>__ctor__);
    if (lVar9 == 0) goto LAB_027b21a0;
    FUN_027b194c(lVar9,param_2);
  }
  if (param_1 != 0) {
    lVar10 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x18) = lVar9;
    puVar8 = 
    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_WithControlsHavingToMatchPath__
    ;
    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_s32__;
    puVar6 = Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileBinaryExpression__;
    puVar5 = Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_GetTokenValue<double>__;
    puVar4 = Method_Oculus_Platform_Request<SendInvitesResult>__ctor__;
    puVar3 = 
    Method_UnityEngine_InputSystem_Utilities_InlinedArray<IObserver<InputEventPtr>>_RemoveAtWithCapacity__
    ;
    puVar2 = UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable_MovementType_TypeInfo;
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) != 0) {
        FUN_01323390(lVar10,&local_88,*(undefined8 *)Method_OVRSpaceQuery_Options_ToQueryInfo2__);
        uStack_68 = uStack_80;
        local_70 = local_88;
        local_60 = local_78;
        while (uVar11 = FUN_012b894c(&local_70,*(undefined8 *)puVar7), (uVar11 & 1) != 0) {
          plVar12 = (long *)FUN_00ce8c48(&local_70,*(undefined8 *)puVar4);
          if (plVar12 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar3 + 300);
            if ((bVar1 <= *(byte *)(*plVar12 + 300)) &&
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
              lVar9 = plVar12[7];
              plVar12[4] = *(long *)(param_1 + 0x18);
              if (lVar9 == 0) {
                uVar13 = 8;
              }
              else {
                (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),plVar12,&local_54,
                           *(undefined8 *)(lVar9 + 0x28));
                uVar13 = local_54;
              }
              *(undefined4 *)(plVar12 + 3) = uVar13;
            }
          }
        }
        FUN_012b8948(&local_70,*(undefined8 *)puVar5);
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 == 0) goto LAB_027b21a0;
        FUN_0132138c(lVar9,*(int *)(lVar9 + 0x18) + -1,&local_88,*(undefined8 *)puVar6);
        if (local_88 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 300);
          if ((bVar1 <= *(byte *)(*local_88 + 300)) &&
             (*(long *)(*(long *)(*local_88 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
            lVar9 = *(long *)(param_1 + 0x10);
            if (lVar9 == 0) goto LAB_027b21a0;
            FUN_01324ac8(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar8);
          }
        }
      }
      return;
    }
  }
LAB_027b21a0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


