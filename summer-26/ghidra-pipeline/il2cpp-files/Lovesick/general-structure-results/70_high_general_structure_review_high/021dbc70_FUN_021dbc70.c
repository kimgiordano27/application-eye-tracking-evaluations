/*
FUNCTION_NAME: FUN_021dbc70
ENTRY_POINT: 021dbc70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong FUN_021dbc70(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  
  puVar1 = Method_System_ValueTuple<Vector4,_Vector4>__ctor__;
  if ((DAT_0378172d & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f1538);
    thunk_FUN_00d48444(PTR_DAT_033ebaa0);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(System_Action<string,_ulong>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<object>_Pop__);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPointerImpl__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRControllerState_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<HandJointId>_Contains__);
    thunk_FUN_00d48444(StringLiteral_10513);
    thunk_FUN_00d48444(Method_System_ValueTuple<Vector4,_Vector4>__ctor__);
    DAT_0378172d = 1;
  }
  local_58._8_8_ = 0;
  local_48 = 0;
  local_60 = 0;
  local_58._0_8_ = 0;
  local_68 = 0;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_017b46ec(lVar6,0);
  *(undefined4 *)(lVar6 + 0x10) = param_2;
  puVar3 = Method_System_Collections_Generic_Stack<object>_Pop__;
  puVar2 = System_Action<string,_ulong>_TypeInfo;
  puVar1 = PTR_DAT_033ebaa0;
  piVar10 = (int *)(param_1 + 0x28);
  if (0 < *piVar10) {
    iVar5 = 0;
    do {
      FUN_012f24b4(piVar10,iVar5,&local_88,*(undefined8 *)puVar1);
      local_48 = local_88;
      iVar4 = FUN_00bbd578(&local_48,*(undefined8 *)puVar2);
      if (iVar4 == *(int *)(lVar6 + 0x10)) {
        uVar8 = FUN_00bbd470(&local_48,*(undefined8 *)puVar3);
        return uVar8;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar10);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_58 = FUN_021d82a8();
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPointerImpl__
                              );
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0136b58c(lVar7,lVar6,*(undefined8 *)StringLiteral_10513,0);
    iVar5 = FUN_01380d1c(local_58,lVar7,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_XRControllerState_TypeInfo);
    if (iVar5 != -1) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      auVar11 = FUN_021d82a8();
      local_58 = auVar11;
      FUN_0138116c(local_58,iVar5,&local_88,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<HandJointId>_Contains__)
      ;
      FUN_021f605c(&local_68,local_80,0);
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
      ;
      lVar7 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
      ;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar1;
      }
      uVar8 = FUN_021ea04c(*(long *)(lVar7 + 0xb8) + 0x10,local_68,local_60,0);
      puVar1 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
      ;
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_015ff8a0(local_70,0);
        if ((uVar8 & 1) != 0) goto LAB_021dbec4;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0213e900(local_70,0,0,0,0);
      }
      uVar9 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_68,local_60,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_021401ec(uVar9,0,0,0);
      if (lVar7 != 0) {
        FUN_021dadc0(param_1,*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar7 + 0xe0));
        FUN_012f4018(param_1 + 0x48,lVar7,10,*(undefined8 *)PTR_DAT_033f1538);
        return (ulong)*(uint *)(lVar7 + 0xe0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_021dbec4:
  return (ulong)*(uint *)(lVar6 + 0x10);
}


