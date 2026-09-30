/*
FUNCTION_NAME: FUN_03b4b678
ENTRY_POINT: 03b4b678
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_03b4b678(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_88 [72];
  
  if ((DAT_048394dc & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_12187);
    thunk_FUN_01efb3a4(StringLiteral_12188);
    thunk_FUN_01efb3a4(StringLiteral_12189);
    thunk_FUN_01efb3a4(StringLiteral_12190);
    thunk_FUN_01efb3a4(StringLiteral_12191);
    thunk_FUN_01efb3a4(StringLiteral_12192);
    thunk_FUN_01efb3a4(StringLiteral_12193);
    thunk_FUN_01efb3a4(StringLiteral_12194);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineMesh_Extrude<Spline>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRLipSyncContextBase>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    DAT_048394dc = 1;
  }
  puVar1 = StringLiteral_12194;
  switch(*param_1) {
  case 0:
    puVar7 = (undefined8 *)Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__
    ;
    break;
  case 1:
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_034f92ac(param_1 + 1,0);
    return uVar2;
  case 2:
    if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_03532f80(0);
    uVar2 = FUN_03552d20(param_1 + 2,uVar2,0);
    return uVar2;
  case 3:
    if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_03532f80(0);
    uVar2 = FUN_03569988(param_1 + 4,uVar2,0);
    return uVar2;
  case 4:
    uVar2 = FUN_03b4b0e0(param_1 + 6);
    return uVar2;
  case 5:
    lVar8 = *(long *)(param_1 + 0xc);
    puVar7 = (undefined8 *)Method_UnityEngine_Splines_SplineMesh_Extrude<Spline>__;
    if (lVar8 != 0) {
      lVar3 = *(long *)StringLiteral_12194;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar1;
      }
      lVar9 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      uVar2 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
      uVar6 = *(undefined8 *)
               Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
      ;
      if (lVar9 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *(long *)puVar1;
        }
        uVar5 = **(undefined8 **)(lVar3 + 0xb8);
        lVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_12189);
        FUN_02e71bf0(lVar9,uVar5,*(undefined8 *)StringLiteral_12192,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar4 = lVar9;
        thunk_FUN_01f51358(plVar4,lVar9);
      }
      uVar5 = FUN_023035cc(lVar8,lVar9,*(undefined8 *)StringLiteral_12187);
      uVar2 = FUN_0340f7f4(uVar2,uVar5,0);
      uVar5 = *(undefined8 *)
               Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__;
LAB_03b4ba80:
      uVar2 = FUN_0340ebc0(uVar6,uVar2,uVar5,0);
      return uVar2;
    }
    break;
  case 6:
    lVar8 = *(long *)(param_1 + 0xe);
    puVar7 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OVRLipSyncContextBase>__;
    if (lVar8 != 0) {
      lVar3 = *(long *)StringLiteral_12194;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar1;
      }
      lVar9 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar9 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *(long *)puVar1;
        }
        uVar2 = **(undefined8 **)(lVar3 + 0xb8);
        lVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_12190);
        FUN_02e65eb0(lVar9,uVar2,*(undefined8 *)StringLiteral_12193,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        *plVar4 = lVar9;
        thunk_FUN_01f51358(plVar4,lVar9);
      }
      uVar2 = FUN_022fd060(lVar8,lVar9,*(undefined8 *)StringLiteral_12188);
      uVar2 = FUN_0340f7f4(*(undefined8 *)
                            Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__,uVar2,0)
      ;
      uVar6 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__;
      uVar5 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__;
      goto LAB_03b4ba80;
    }
    break;
  case 7:
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03b4bac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  default:
    memcpy(auStack_88,param_1,0x48);
    uVar2 = thunk_FUN_01f113fc(*(undefined8 *)StringLiteral_12191,auStack_88);
    uVar2 = FUN_035c4490(uVar2,0);
    return uVar2;
  }
  return *puVar7;
}


