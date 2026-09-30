/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02400138
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceQueryResult>
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
          undefined1 param_4 [16])

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  unaff_x19[9] = param_1._8_8_;
  unaff_x19[8] = param_1._0_8_;
  unaff_x19[0xb] = param_2._8_8_;
  unaff_x19[10] = param_2._0_8_;
  unaff_x19[0xd] = param_3._8_8_;
  unaff_x19[0xc] = param_3._0_8_;
  unaff_x19[0xf] = param_4._8_8_;
  unaff_x19[0xe] = param_4._0_8_;
  FUN_03c8e558();
  uVar1 = *(undefined8 *)(unaff_x29 + -0x70);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x58);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x60);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x48);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x50);
  uVar8 = *(undefined8 *)(unaff_x29 + -0x38);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x40);
  unaff_x19[1] = *(undefined8 *)(unaff_x29 + -0x68);
  *unaff_x19 = uVar1;
  unaff_x19[3] = uVar4;
  unaff_x19[2] = uVar3;
  unaff_x19[5] = uVar6;
  unaff_x19[4] = uVar5;
  unaff_x19[7] = uVar8;
  unaff_x19[6] = uVar7;
  Unity_VisualScripting_GreaterThanHandler_<>c__<_ctor>b__0_88(unaff_x19 + 0x10);
  uVar1 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_SerializeSection__;
  memcpy((void *)(unaff_x29 + -0x70),unaff_x19 + 0x10,0x48);
  auVar2 = FUN_0240a9dc(unaff_x29 + -0x70,uVar1);
  uVar1 = auVar2._8_8_;
  FUN_03e1c250(unaff_x19 + 0x10,0);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x28)) {
    auVar2._8_8_ = uVar1;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


