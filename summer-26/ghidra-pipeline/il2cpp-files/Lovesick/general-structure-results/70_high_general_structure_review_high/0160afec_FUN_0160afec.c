/*
FUNCTION_NAME: FUN_0160afec
ENTRY_POINT: 0160afec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0160afec(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar13;
  undefined *puVar12;
  
  if ((DAT_037780c8 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      );
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndp_f64__);
    thunk_FUN_00d48444(ushort___var);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EdgeLookup>_get_Item__);
    DAT_037780c8 = 1;
  }
  FUN_017b46ec(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar11 = thunk_FUN_00d48444(
                               DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                               );
    FUN_016ec5b8(uVar10,uVar11,0);
    goto LAB_0160b298;
  }
  lVar8 = FUN_0166b5c0(param_2,0);
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrndp_f64__;
  puVar4 = Method_System_Collections_Generic_List<EdgeLookup>_get_Item__;
  puVar12 = ushort___var;
  if (lVar8 == 0) {
LAB_0160b260:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar6 = 0;
  lVar13 = 0;
  bVar3 = false;
  iVar7 = 0x7fffffff;
  while (uVar9 = FUN_0166b7d0(lVar8,0), (uVar9 & 1) != 0) {
    uVar10 = FUN_0166b654(lVar8,0);
    uVar9 = thunk_FUN_015fe514(uVar10,*(undefined8 *)puVar5,0);
    if ((uVar9 & 1) == 0) {
      uVar9 = thunk_FUN_015fe514(uVar10,*(undefined8 *)puVar12,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = thunk_FUN_015fe514(uVar10,*(undefined8 *)puVar4,0);
        if ((uVar9 & 1) != 0) {
          iVar6 = FUN_016844dc(param_2,*(undefined8 *)puVar4,0);
          bVar3 = true;
        }
      }
      else {
        lVar13 = FUN_01684938(param_2,*(undefined8 *)puVar12,0);
      }
    }
    else {
      iVar7 = FUN_016844dc(param_2,*(undefined8 *)puVar5,0);
    }
  }
  if (lVar13 == 0) {
    lVar13 = **(long **)(*(long *)
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                        + 0xb8);
  }
  if (iVar7 < 1) {
LAB_0160b264:
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar12 = System_Linq_Expressions_Interpreter_EnterExceptionFilterInstruction_TypeInfo;
  }
  else {
    if (lVar13 == 0) goto LAB_0160b260;
    iVar1 = *(int *)(lVar13 + 0x10);
    if (iVar7 < iVar1) goto LAB_0160b264;
    if (!bVar3) {
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_017724a8(0x10,iVar1,0);
      iVar6 = FUN_017726a0(uVar10,iVar7,0);
    }
    if (((-1 < iVar6) && (iVar6 <= iVar7)) && (*(int *)(lVar13 + 0x10) <= iVar6)) {
      *(int *)(param_1 + 0x28) = iVar7;
      uVar10 = FUN_00da4fb8(*(undefined8 *)
                             Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                            ,iVar6);
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      FUN_015ff62c(lVar13,0,uVar10,0,*(undefined4 *)(lVar13 + 0x10),0);
      uVar2 = *(undefined4 *)(lVar13 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      return;
    }
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar12 = StringLiteral_839;
  }
  uVar11 = thunk_FUN_00d48444(puVar12);
  FUN_01679968(uVar10,uVar11,0);
LAB_0160b298:
  uVar11 = thunk_FUN_00d48444(System_Collections_Generic_IList<UILineInfo>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar11);
}


