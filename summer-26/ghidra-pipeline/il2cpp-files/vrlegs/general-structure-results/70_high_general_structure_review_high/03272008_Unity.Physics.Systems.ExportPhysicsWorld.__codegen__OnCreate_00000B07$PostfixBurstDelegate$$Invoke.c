/*
FUNCTION_NAME: Unity.Physics.Systems.ExportPhysicsWorld.__codegen__OnCreate_00000B07$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 03272008
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Physics_Systems_ExportPhysicsWorld___codegen__OnCreate_00000B07_PostfixBurstDelegate__Invoke
          (void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000020;
  uint in_stack_00000028;
  
  uVar3 = FUN_025be440(*(undefined8 *)(unaff_x19 + 0x30),0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  uVar3 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x19 + 8),
                             *(undefined8 *)
                              FluffyUnderware_Curvy_Generator_CGMeshResourceLoader_TypeInfo,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  FUN_0327217c(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = in_stack_00000020;
  puVar1 = FluffyUnderware_Curvy_Generator_CGModuleLink_TypeInfo;
  puVar4 = (undefined8 *)FluffyUnderware_Curvy_Generator_CGPath_TypeInfo;
  if ((~in_stack_00000028 & 0x401) == 0) {
    if (in_stack_00000020 != 0) {
      in_stack_00000008 = 0xb;
      uVar3 = FUN_01f65944(in_stack_00000020,&stack0x00000008,
                           *(undefined8 *)FluffyUnderware_Curvy_Generator_CGModuleLink_TypeInfo);
      if ((uVar3 & 1) != 0) {
        in_stack_00000008 = 0xe;
        uVar3 = FUN_01f65944(lVar2,&stack0x00000008,*(undefined8 *)puVar1);
        if ((uVar3 & 1) != 0) {
          in_stack_00000008 = 0xf;
          uVar3 = FUN_01f65944(lVar2,&stack0x00000008,*(undefined8 *)puVar1);
          if ((uVar3 & 1) != 0) {
            in_stack_00000008 = 0x10;
            uVar3 = FUN_01f65944(lVar2,&stack0x00000008,*(undefined8 *)puVar1);
            if (((uVar3 & 1) != 0) &&
               ((puVar4 = (undefined8 *)FluffyUnderware_Curvy_Generator_CGModuleOutputSlot_TypeInfo,
                in_stack_00000010._4_4_ == 0x54c ||
                (puVar4 = (undefined8 *)
                          FluffyUnderware_Curvy_Generator_CGShapeResourceLoader_TypeInfo,
                in_stack_00000010._4_4_ == 0x45e)))) goto LAB_0327215c;
          }
        }
      }
      in_stack_00000008 = 0xf;
      uVar3 = FUN_01f65944(lVar2,&stack0x00000008,*(undefined8 *)puVar1);
      if ((uVar3 & 1) != 0) {
        in_stack_00000008 = 0x10;
        uVar3 = FUN_01f65944(lVar2,&stack0x00000008,*(undefined8 *)puVar1);
        puVar4 = (undefined8 *)FluffyUnderware_Curvy_Generator_CGShape_TypeInfo;
        if ((uVar3 & 1) != 0) goto LAB_0327215c;
      }
    }
    puVar4 = (undefined8 *)FluffyUnderware_Curvy_Generator_CGResourceHandler_TypeInfo;
  }
LAB_0327215c:
  return *puVar4;
}


