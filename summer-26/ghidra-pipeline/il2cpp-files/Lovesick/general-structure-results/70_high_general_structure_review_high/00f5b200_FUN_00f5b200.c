/*
FUNCTION_NAME: FUN_00f5b200
ENTRY_POINT: 00f5b200
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_00f5b200(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long local_58;
  
  if ((DAT_0377575b & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
                      );
    thunk_FUN_00d48444(StringLiteral_14102);
    thunk_FUN_00d48444(StringLiteral_659);
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<Light>__);
    thunk_FUN_00d48444(PTR_DAT_033eebf0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                      );
    DAT_0377575b = 1;
  }
  lVar12 = *(long *)(param_1 + 0x38);
  if (lVar12 != 0) {
    lVar10 = *(long *)
              Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(lVar12 + 0x18) = 0;
    }
    else {
      iVar11 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      if (0 < iVar11) {
        FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar11,0);
        if (param_2 == 0) goto LAB_00f5b4ac;
        goto LAB_00f5b2f8;
      }
    }
    if (param_2 != 0) {
LAB_00f5b2f8:
      puVar6 = StringLiteral_659;
      puVar5 = Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__;
      puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
      puVar3 = Method_UnityEngine_Component_GetComponent<Light>__;
      puVar2 = Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__;
      puVar1 = PTR_DAT_033eebf0;
      if (0 < *(int *)(param_2 + 0x18)) {
        iVar11 = 0;
        do {
          FUN_0132138c(param_2,iVar11,&local_58,*(undefined8 *)puVar6);
          if (local_58 == 0) goto LAB_00f5b4ac;
          uVar13 = *(undefined8 *)(local_58 + 0x18);
          uVar8 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar1,0);
          if ((uVar8 & 1) == 0) {
            uVar8 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar3,0);
            if ((uVar8 & 1) == 0) {
              uVar8 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar2,0);
              if ((uVar8 & 1) == 0) {
                uVar8 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar5,0);
                if ((uVar8 & 1) != 0) {
                  lVar12 = *(long *)(param_1 + 0x38);
                  FUN_0132138c(param_2,iVar11,&local_58,*(undefined8 *)puVar6);
                  if (((local_58 == 0) ||
                      (plVar9 = *(long **)(local_58 + 0x30), plVar9 == (long *)0x0)) ||
                     (uVar13 = (**(code **)(*plVar9 + 0x168))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x170)), lVar12 == 0))
                  goto LAB_00f5b4ac;
                  FUN_00ac1158(lVar12,uVar13,*(undefined8 *)puVar4);
                }
              }
              else {
                FUN_0132138c(param_2,iVar11,&local_58,*(undefined8 *)puVar6);
                if (local_58 == 0) goto LAB_00f5b4ac;
                uVar7 = FUN_0176ee4c(*(undefined8 *)(local_58 + 0x30),0);
                *(undefined4 *)(param_1 + 0x30) = uVar7;
              }
            }
            else {
              FUN_0132138c(param_2,iVar11,&local_58,*(undefined8 *)puVar6);
              if (local_58 == 0) goto LAB_00f5b4ac;
              uVar7 = FUN_0176ee4c(*(undefined8 *)(local_58 + 0x30),0);
              *(undefined4 *)(param_1 + 0x2c) = uVar7;
            }
          }
          else {
            FUN_0132138c(param_2,iVar11,&local_58,*(undefined8 *)puVar6);
            if (local_58 == 0) goto LAB_00f5b4ac;
            uVar7 = FUN_0176ee4c(*(undefined8 *)(local_58 + 0x30),0);
            *(undefined4 *)(param_1 + 0x28) = uVar7;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_2 + 0x18));
      }
      return;
    }
  }
LAB_00f5b4ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


