/*
FUNCTION_NAME: FUN_027bd8e4
ENTRY_POINT: 027bd8e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint FUN_027bd8e4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_34;
  
  puVar2 = StringLiteral_9536;
  if ((DAT_03788853 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<LocomotionSystem,_Pose>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_0000092F_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(StringLiteral_9536);
    thunk_FUN_00d48444(StringLiteral_7910);
    DAT_03788853 = 1;
  }
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar2;
  }
  uVar6 = uStack_48;
  uVar5 = uStack_50;
  uVar4 = uStack_58;
  uVar3 = local_60;
  puVar1 = System_Collections_Generic_Dictionary<LocomotionSystem,_Pose>_TypeInfo;
  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar9 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar2;
    }
    uVar10 = **(undefined8 **)(lVar8 + 0xb8);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar9 == 0) goto LAB_027bda6c;
    FUN_012d24b0(lVar9,uVar10,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_0000092F_PostfixBurstDelegate_var
                 ,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar9;
  }
  local_34 = FUN_00ce96c0(param_1,*(undefined8 *)
                                   Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
  if (param_1 != 0) {
    local_60 = uVar3;
    uStack_58 = uVar4;
    uStack_50 = uVar5;
    uStack_48 = uVar6;
    uVar7 = FUN_01157030(param_1,param_2,&local_60,lVar9,&local_34,param_4,
                         *(undefined8 *)StringLiteral_7910);
    return uVar7 & 1;
  }
LAB_027bda6c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


