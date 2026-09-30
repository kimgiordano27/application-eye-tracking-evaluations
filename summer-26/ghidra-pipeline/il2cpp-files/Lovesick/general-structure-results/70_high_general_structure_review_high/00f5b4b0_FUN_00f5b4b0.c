/*
FUNCTION_NAME: FUN_00f5b4b0
ENTRY_POINT: 00f5b4b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_00f5b4b0(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0377575d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
    thunk_FUN_00d48444(StringLiteral_11446);
    thunk_FUN_00d48444(StringLiteral_6915);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
                      );
    thunk_FUN_00d48444(Method_System_Data_DataView_CheckSort__);
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<Light>__);
    thunk_FUN_00d48444(PTR_DAT_033eebf0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                      );
    DAT_0377575d = 1;
  }
  uStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  lVar11 = *(long *)(param_1 + 0x38);
  if (lVar11 != 0) {
    lVar10 = *(long *)
              Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(lVar11 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
      }
    }
    uVar8 = FUN_0268b6ac(param_1,0);
    if ((param_2 != 0) &&
       (lVar11 = FUN_00f25898(param_2,uVar8,*(undefined8 *)PTR_DAT_033eebf0,0),
       puVar2 = Method_UnityEngine_Component_GetComponent<Light>__, lVar11 != 0)) {
      uVar6 = FUN_0176ee4c(*(undefined8 *)(lVar11 + 0x30),0);
      *(undefined4 *)(param_1 + 0x28) = uVar6;
      uVar8 = FUN_0268b6ac(param_1,0);
      lVar11 = FUN_00f25898(param_2,uVar8,*(undefined8 *)puVar2,0);
      puVar2 = Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__;
      if (lVar11 != 0) {
        uVar6 = FUN_0176ee4c(*(undefined8 *)(lVar11 + 0x30),0);
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
        uVar8 = FUN_0268b6ac(param_1,0);
        lVar11 = FUN_00f25898(param_2,uVar8,*(undefined8 *)puVar2,0);
        puVar2 = Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__;
        if (lVar11 != 0) {
          uVar6 = FUN_0176ee4c(*(undefined8 *)(lVar11 + 0x30),0);
          *(undefined4 *)(param_1 + 0x30) = uVar6;
          uVar8 = FUN_0268b6ac(param_1,0);
          lVar11 = FUN_00f2599c(param_2,uVar8,*(undefined8 *)puVar2,1,0);
          puVar5 = StringLiteral_11446;
          puVar4 = StringLiteral_6915;
          puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
          puVar2 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
          if (lVar11 != 0) {
            FUN_01323390(lVar11,&local_78,*(undefined8 *)Method_System_Data_DataView_CheckSort__);
            uStack_58 = uStack_70;
            local_60 = local_78;
            local_50 = local_68;
            while( true ) {
              uVar7 = FUN_012b894c(&local_60,*(undefined8 *)puVar5);
              if ((uVar7 & 1) == 0) {
                FUN_012b8948(&local_60,*(undefined8 *)puVar2);
                return;
              }
              lVar11 = FUN_00acea78(&local_60,*(undefined8 *)puVar4);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              plVar9 = *(long **)(lVar11 + 0x30);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar11 = *(long *)(param_1 + 0x38);
              uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
              if (lVar11 == 0) break;
              FUN_00ac1158(lVar11,uVar8,*(undefined8 *)puVar3);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar8,uVar8);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


