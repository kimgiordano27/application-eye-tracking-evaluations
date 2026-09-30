/*
FUNCTION_NAME: Unity.Mathematics.Random$$NextDouble3Direction
ENTRY_POINT: 05b254d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05b256fc) */
/* WARNING: Removing unreachable block (ram,0x05b2571c) */

void Unity_Mathematics_Random__NextDouble3Direction(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long *unaff_x21;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x2c8));
  FUN_02f08768(PTR_DAT_067c91b0);
  FUN_02f08768(PTR_DAT_067c99a8);
  FUN_02f08768(
              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
              );
  *(undefined1 *)(unaff_x20 + 0x920) = 1;
  lVar3 = *unaff_x21;
  iVar2 = *(int *)(lVar3 + 0xe4);
  *(undefined1 *)(unaff_x19 + 0x9d) = 0;
  if (iVar2 == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *unaff_x21;
  }
  iVar2 = FUN_032efe3c(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8));
  puVar1 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
  if (iVar2 != -1) {
    lVar3 = *unaff_x21;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *unaff_x21;
    }
    FUN_032ee2e8(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),*(long *)(lVar3 + 0xb8),iVar2,
                 *(undefined8 *)puVar1);
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *unaff_x21;
  }
  piVar6 = *(int **)(lVar3 + 0xb8);
  if (*piVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *unaff_x21;
      piVar6 = *(int **)(lVar3 + 0xb8);
    }
    lVar8 = *(long *)(piVar6 + 4);
    if (lVar8 != 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_067c99a8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05b25768(lVar8);
    }
  }
  FUN_05b2061c();
  FUN_05b2542c();
  if (DAT_06bc29c7 == '\0') {
    FUN_02f08768(Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__);
    DAT_06bc29c7 = '\x01';
  }
  if (**(long **)(*(long *)Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__ + 0xb8)
      != 0) {
    Unity_Mathematics_Random__CheckNextIntMinMax();
  }
  plVar4 = (long *)FUN_05a8075c(0);
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    FUN_05a7cc04(*(long *)(unaff_x19 + 0x90),0);
  }
  *(undefined1 *)(unaff_x19 + 0x9c) = 0;
  FUN_05b24020();
  FUN_05b1f658();
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05b256e4;
        }
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)PTR_DAT_067c91b0,0);
LAB_05b256e4:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  *(undefined4 *)(unaff_x19 + 0x98) = 0xffffffff;
  return;
}


