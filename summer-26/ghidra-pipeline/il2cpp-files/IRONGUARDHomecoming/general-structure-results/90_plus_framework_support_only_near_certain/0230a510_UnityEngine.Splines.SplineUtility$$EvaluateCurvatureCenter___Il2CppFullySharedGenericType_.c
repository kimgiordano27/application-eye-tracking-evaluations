/*
FUNCTION_NAME: UnityEngine.Splines.SplineUtility$$EvaluateCurvatureCenter<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0230a510
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0230a6e4) */

void UnityEngine_Splines_SplineUtility__EvaluateCurvatureCenter<__Il2CppFullySharedGenericType>
               (code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  do {
    (*param_1)(param_2);
    memcpy(unaff_x23,unaff_x25,unaff_x24);
    memcpy(unaff_x26,unaff_x23,unaff_x24);
    puVar7 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x48) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x26;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x50);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x28;
    (*(code *)puVar2[2])(uVar1,puVar2,*(undefined8 *)(unaff_x29 + -0x20),unaff_x29 + -0x18);
    memcpy(unaff_x27,unaff_x23,unaff_x24);
    puVar7 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x48) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x27;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x60);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x22;
    (*(code *)puVar2[2])(uVar1,puVar2,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x18);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(unaff_x19 + 0x38);
    puVar7 = unaff_x28;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x28;
    }
    puVar2 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x68) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0x70);
    uVar1 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar2;
    (*(code *)puVar3[2])(uVar1);
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0230a484;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_0230a484:
    uVar6 = (*(code *)*puVar7)();
    if ((uVar6 & 1) == 0) break;
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar4 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar4 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0230a4f8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar5 = FUN_01ecb238();
LAB_0230a4f8:
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    param_2 = *(undefined8 *)(*(long *)(lVar5 + 8) + 8);
    param_1 = *(code **)(*(long *)(lVar5 + 8) + 0x10);
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0230a660;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_0230a660:
    (*(code *)*puVar7)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


