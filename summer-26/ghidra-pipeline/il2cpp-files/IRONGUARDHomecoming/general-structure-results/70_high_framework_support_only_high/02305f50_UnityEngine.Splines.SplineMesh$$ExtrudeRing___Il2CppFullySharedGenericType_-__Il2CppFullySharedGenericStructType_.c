/*
FUNCTION_NAME: UnityEngine.Splines.SplineMesh$$ExtrudeRing<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericStructType>
ENTRY_POINT: 02305f50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023060ec) */
/* WARNING: Removing unreachable block (ram,0x023060f8) */

bool UnityEngine_Splines_SplineMesh__ExtrudeRing<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long in_x9;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02305f98;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02305f98:
  uVar2 = (*(code *)*puVar1)();
  iVar3 = 0xc;
  if ((uVar2 & 1) == 0) {
    iVar3 = 0xe;
  }
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02306010;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02306010:
    (*(code *)*puVar1)();
  }
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0230608c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0230608c:
    (*(code *)*puVar1)();
  }
  return iVar3 != 0xc;
}


