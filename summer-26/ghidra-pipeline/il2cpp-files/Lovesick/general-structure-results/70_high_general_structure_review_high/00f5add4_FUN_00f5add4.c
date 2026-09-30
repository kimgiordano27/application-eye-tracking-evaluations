/*
FUNCTION_NAME: FUN_00f5add4
ENTRY_POINT: 00f5add4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_00f5add4(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_0377575c & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
                      );
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<Light>__);
    thunk_FUN_00d48444(PTR_DAT_033eebf0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                      );
    DAT_0377575c = 1;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 != 0) {
    lVar7 = *(long *)Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
    ;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
    }
    uVar5 = FUN_0268b6ac(param_1,0);
    if ((param_2 != 0) &&
       (lVar8 = FUN_00f25898(param_2,uVar5,*(undefined8 *)PTR_DAT_033eebf0,0),
       puVar2 = Method_UnityEngine_Component_GetComponent<Light>__, lVar8 != 0)) {
      uVar3 = FUN_0176ee4c(*(undefined8 *)(lVar8 + 0x30),0);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      uVar5 = FUN_0268b6ac(param_1,0);
      lVar8 = FUN_00f25898(param_2,uVar5,*(undefined8 *)puVar2,0);
      puVar2 = Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__;
      if (lVar8 != 0) {
        uVar3 = FUN_0176ee4c(*(undefined8 *)(lVar8 + 0x30),0);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        uVar5 = FUN_0268b6ac(param_1,0);
        lVar8 = FUN_00f25898(param_2,uVar5,*(undefined8 *)puVar2,0);
        puVar2 = Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__;
        if (lVar8 != 0) {
          uVar3 = FUN_0176ee4c(*(undefined8 *)(lVar8 + 0x30),0);
          lVar7 = *(long *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x30) = uVar3;
          uVar5 = FUN_0268b6ac(param_1,0);
          lVar8 = FUN_00f25898(param_2,uVar5,*(undefined8 *)puVar2,0);
          if ((lVar8 != 0) && (plVar6 = *(long **)(lVar8 + 0x30), plVar6 != (long *)0x0)) {
            uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            if (lVar7 != 0) {
              FUN_00ac1158(lVar7,uVar5,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


