/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddSharedComponentQuery_00000F98$BurstDirectCall$$Constructor
ENTRY_POINT: 030a76bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Entities_StructuralChange_AddSharedComponentQuery_00000F98_BurstDirectCall__Constructor
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_01ab69ac(System_Action<FocusExitEventArgs>_TypeInfo);
  FUN_01ab69ac(System_Action<FVRHandSide>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x5a8) = 1;
  lVar5 = thunk_FUN_01a89e68(*unaff_x22);
  FUN_027b3d9c(lVar5,0);
  uVar9 = unaff_x21[4];
  uVar7 = unaff_x21[7];
  uVar6 = unaff_x21[6];
  uVar13 = unaff_x21[1];
  uVar12 = *unaff_x21;
  uVar11 = unaff_x21[3];
  uVar10 = unaff_x21[2];
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x38) = unaff_x21[5];
    *(undefined8 *)(lVar5 + 0x30) = uVar9;
    *(undefined8 *)(lVar5 + 0x48) = uVar7;
    *(undefined8 *)(lVar5 + 0x40) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar13;
    *(undefined8 *)(lVar5 + 0x10) = uVar12;
    *(undefined8 *)(lVar5 + 0x28) = uVar11;
    *(undefined8 *)(lVar5 + 0x20) = uVar10;
    puVar4 = System_Action<FVRHttpRequestEntry>_TypeInfo;
    puVar3 = System_Xml_Schema_XmlSchemaChoice_var;
    puVar2 = System_Xml_Schema_XmlSchema_var;
    puVar1 = _Common_UpdateManager_UpdateJobManager<TData>_var;
    if (unaff_x19 != 0) {
      uVar6 = FUN_036a45c0();
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_021de1ac(uVar7,lVar5,*(undefined8 *)puVar4,0);
      uVar6 = FUN_01f6d39c(uVar6,uVar7,*(undefined8 *)puVar2);
      FUN_01f70920(uVar6,*(undefined8 *)puVar1);
      FUN_036a460c();
      lVar8 = FUN_036a466c();
      if (lVar8 != 0) {
        lVar8 = FUN_036a466c();
        if (lVar8 == 0) goto LAB_030a78e4;
        if (*(long *)(lVar8 + 0x18) != 0) {
          uVar6 = FUN_036a466c();
          uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
          FUN_021de1ac(uVar7,lVar5,*(undefined8 *)System_Action<FocusEnterEventArgs>_TypeInfo,0);
          uVar6 = FUN_01f6d39c(uVar6,uVar7,*(undefined8 *)puVar2);
          FUN_01f70920(uVar6,*(undefined8 *)puVar1);
          FUN_036a46b8();
        }
      }
      lVar8 = FUN_036a4718();
      if (lVar8 != 0) {
        lVar8 = FUN_036a4718();
        if (lVar8 == 0) goto LAB_030a78e4;
        if (*(long *)(lVar8 + 0x18) != 0) {
          uVar6 = FUN_036a4718();
          uVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Unity_Physics_GraphicsIntegration_CopyPhysicsVelocityToSmoothing___codegen__OnCreate_00000A4D_PostfixBurstDelegate_var
                                    );
          FUN_021de1ac(uVar7,lVar5,*(undefined8 *)System_Action<FocusExitEventArgs>_TypeInfo,0);
          uVar6 = FUN_01f6d39c(uVar6,uVar7,
                               *(undefined8 *)
                                Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_PostfixBurstDelegate_var
                              );
          FUN_01f70920(uVar6,*(undefined8 *)
                              Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_PostfixBurstDelegate_var
                      );
          FUN_036a4764();
          return;
        }
      }
      return;
    }
  }
LAB_030a78e4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


