/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Quatf>
ENTRY_POINT: 024000f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
System_Array__InternalArray__ICollection_Remove<OVRPlugin_Quatf>
          (void *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  memcpy(param_1,param_2,param_3);
  uVar1 = thunk_FUN_01f113fc(*unaff_x25);
  if ((unaff_x23 != 0) && (lVar2 = FUN_04070398(), lVar2 != 0)) {
    FUN_0407cee0(unaff_x29 + -0x70,lVar2,0);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
    uVar8 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x50);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x40);
    unaff_x19[9] = *(undefined8 *)(unaff_x29 + -0x68);
    unaff_x19[8] = uVar3;
    unaff_x19[0xb] = uVar6;
    unaff_x19[10] = uVar5;
    unaff_x19[0xd] = uVar8;
    unaff_x19[0xc] = uVar7;
    unaff_x19[0xf] = uVar10;
    unaff_x19[0xe] = uVar9;
    FUN_03c8e558(unaff_x29 + -0x70,unaff_x19 + 8,0);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
    uVar8 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x50);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x40);
    unaff_x19[1] = *(undefined8 *)(unaff_x29 + -0x68);
    *unaff_x19 = uVar3;
    unaff_x19[3] = uVar6;
    unaff_x19[2] = uVar5;
    unaff_x19[5] = uVar8;
    unaff_x19[4] = uVar7;
    unaff_x19[7] = uVar10;
    unaff_x19[6] = uVar9;
    Unity_VisualScripting_GreaterThanHandler_<>c__<_ctor>b__0_88
              (unaff_x19 + 0x10,uVar1,unaff_x19,2,0);
    uVar1 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_SerializeSection__;
    memcpy((void *)(unaff_x29 + -0x70),unaff_x19 + 0x10,0x48);
    auVar4 = FUN_0240a9dc(unaff_x29 + -0x70,uVar1);
    uVar1 = auVar4._8_8_;
    FUN_03e1c250(unaff_x19 + 0x10,0);
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x28)) {
      auVar4._8_8_ = uVar1;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


