/*
FUNCTION_NAME: FUN_0309799c
ENTRY_POINT: 0309799c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_20;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


undefined1  [16] FUN_0309799c(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if ((DAT_0412b535 & 1) == 0) {
    FUN_01ab69ac(
                Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnCreate_00000A86_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(UnityEngine_Vector2_var);
    FUN_01ab69ac(UnityEngine_InputSystem_Composites_Vector2Composite_var);
    FUN_01ab69ac(ExitGames_Client_Photon_Protocol18_GpType_var);
    FUN_01ab69ac(PTR_DAT_03cd8108);
    FUN_01ab69ac(
                Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnCreate_00000A5B_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnDestroy_00000A5D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnUpdate_00000A5C_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_var);
    FUN_01ab69ac(UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_var);
    FUN_01ab69ac(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var);
    FUN_01ab69ac(UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var);
    DAT_0412b535 = 1;
  }
  if (((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar2 != 0)) {
    FUN_02215a88(lVar2,param_2,&local_28,*(undefined8 *)PTR_DAT_03cd8108);
    lVar2 = CONCAT44(uStack_24,local_28);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x28);
      if (iVar1 != 0x1406) {
        if (iVar1 == 0x1403) {
          lVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                                      UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_var
                                    );
          FUN_027b3d9c(lVar2,0);
          auVar6 = FUN_01f7f7e8(param_1,param_2,
                                *(undefined8 *)
                                 UnityEngine_InputSystem_Composites_Vector2Composite_var);
          if (lVar2 == 0) goto LAB_03097c00;
          *(undefined1 (*) [16])(lVar2 + 0x10) = auVar6;
          uVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnCreate_00000A86_PostfixBurstDelegate_var
                                    );
          puVar5 = (undefined8 *)
                   Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnUpdate_00000A5C_PostfixBurstDelegate_var
          ;
        }
        else {
          if (iVar1 != 0x1401) {
            FUN_018748a8(lVar2);
            local_28 = *(undefined4 *)(lVar2 + 0x28);
            uVar3 = thunk_FUN_01a6ca08(System_NullReferenceException_var);
            uVar3 = thunk_FUN_01a89a98(uVar3,&local_28);
            uVar4 = thunk_FUN_01a6ca08(UnityEngine_UI_ReflectionMethodsCache_Raycast3DCallback_var);
            uVar3 = FUN_025b4d3c(uVar4,uVar3,0);
            thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
            uVar4 = thunk_FUN_01a89e68();
            FUN_0276e9b0(uVar4,uVar3,0);
            uVar3 = thunk_FUN_01a6ca08(UnityEngine_UI_ReflectionMethodsCache_RaycastAllCallback_var)
            ;
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar4,uVar3);
          }
          lVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnDestroy_00000A5D_PostfixBurstDelegate_var
                                    );
          FUN_027b3d9c(lVar2,0);
          auVar6 = FUN_01f7f7e8(param_1,param_2,*(undefined8 *)UnityEngine_Vector2_var);
          if (lVar2 == 0) goto LAB_03097c00;
          *(undefined1 (*) [16])(lVar2 + 0x10) = auVar6;
          uVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnCreate_00000A86_PostfixBurstDelegate_var
                                    );
          puVar5 = (undefined8 *)
                   Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnCreate_00000A5B_PostfixBurstDelegate_var
          ;
        }
LAB_03097bb4:
        FUN_03097e48(uVar3,lVar2,*puVar5);
        local_28 = *(undefined4 *)(lVar2 + 0x18);
        local_38 = 0;
        uStack_30 = 0;
        FUN_020f03e8(&local_38,uVar3,&local_28,
                     *(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var);
        auVar6._8_8_ = uStack_30;
        auVar6._0_8_ = local_38;
        return auVar6;
      }
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                                  UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var
                                );
      FUN_027b3d9c(lVar2,0);
      auVar6 = FUN_01f7f7e8(param_1,param_2,
                            *(undefined8 *)ExitGames_Client_Photon_Protocol18_GpType_var);
      if (lVar2 != 0) {
        *(undefined1 (*) [16])(lVar2 + 0x10) = auVar6;
        uVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                    Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnCreate_00000A86_PostfixBurstDelegate_var
                                  );
        puVar5 = (undefined8 *)
                 UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_var;
        goto LAB_03097bb4;
      }
    }
  }
LAB_03097c00:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


