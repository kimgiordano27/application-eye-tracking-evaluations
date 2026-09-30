/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 024000a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 253
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_collection
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;functionality_gaze_retrieval_or_extraction
*/


undefined1  [16]
System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
          (void *param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  void *__src;
  undefined8 *puVar1;
  char in_NG;
  char in_OV;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  long *plVar5;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 unaff_s8;
  
  __src = unaff_x20;
  if (in_NG == in_OV) {
    __src = param_1;
  }
  memcpy(param_2,__src,param_4);
  uVar2 = FUN_01f089f8(*unaff_x25);
  if ((uVar2 & 1) == 0) {
    auVar8 = ZEXT816(0x7f800000);
LAB_02400268:
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x28)) {
      return auVar8;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar2 = FUN_03e2525c();
  if ((uVar2 & 1) == 0) {
    if (unaff_x23 != 0) {
      lVar4 = FUN_04070398();
      plVar5 = *(long **)(unaff_x21 + 0x38);
      if (-1 < *(int *)(*plVar5 + 0x28)) {
        unaff_x20 = (void *)(unaff_x29 + -0xa0);
      }
      memcpy(unaff_x22,unaff_x20,unaff_x24);
      puVar1 = (undefined8 *)plVar5[1];
      uVar3 = *puVar1;
      if (-1 < *(int *)(*plVar5 + 0x28)) {
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      *(undefined4 *)(unaff_x29 + -0x84) = unaff_s8;
      *(undefined8 **)(unaff_x29 + -0x98) = unaff_x22;
      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x84;
      (*(code *)puVar1[2])(uVar3,puVar1,0,unaff_x29 + -0x98,unaff_x29 + -0x80);
      FUN_03c7c6bc(*(undefined4 *)(unaff_x29 + -0x80),*(undefined4 *)(unaff_x29 + -0x7c),
                   *(undefined4 *)(unaff_x29 + -0x78),0);
      if (lVar4 != 0) {
        FUN_0407ba80(lVar4,0);
        auVar8 = FUN_03c7c6c0(0);
        goto LAB_02400268;
      }
    }
  }
  else {
    plVar5 = *(long **)(unaff_x21 + 0x38);
    if (-1 < *(int *)(*plVar5 + 0x28)) {
      unaff_x20 = (void *)(unaff_x29 + -0xa0);
    }
    memcpy(unaff_x22,unaff_x20,unaff_x24);
    uVar3 = thunk_FUN_01f113fc(*plVar5);
    if ((unaff_x23 != 0) && (lVar4 = FUN_04070398(), lVar4 != 0)) {
      FUN_0407cee0(unaff_x29 + -0x70,lVar4,0);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x58);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x60);
      uVar12 = *(undefined8 *)(unaff_x29 + -0x48);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x50);
      uVar14 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar13 = *(undefined8 *)(unaff_x29 + -0x40);
      unaff_x19[9] = *(undefined8 *)(unaff_x29 + -0x68);
      unaff_x19[8] = uVar6;
      unaff_x19[0xb] = uVar10;
      unaff_x19[10] = uVar9;
      unaff_x19[0xd] = uVar12;
      unaff_x19[0xc] = uVar11;
      unaff_x19[0xf] = uVar14;
      unaff_x19[0xe] = uVar13;
      FUN_03c8e558(unaff_x29 + -0x70,unaff_x19 + 8,0);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x58);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x60);
      uVar12 = *(undefined8 *)(unaff_x29 + -0x48);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x50);
      uVar14 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar13 = *(undefined8 *)(unaff_x29 + -0x40);
      unaff_x19[1] = *(undefined8 *)(unaff_x29 + -0x68);
      *unaff_x19 = uVar6;
      unaff_x19[3] = uVar10;
      unaff_x19[2] = uVar9;
      unaff_x19[5] = uVar12;
      unaff_x19[4] = uVar11;
      unaff_x19[7] = uVar14;
      unaff_x19[6] = uVar13;
      Unity_VisualScripting_GreaterThanHandler_<>c__<_ctor>b__0_88
                (unaff_x19 + 0x10,uVar3,unaff_x19,2,0);
      uVar3 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_SerializeSection__;
      memcpy((void *)(unaff_x29 + -0x70),unaff_x19 + 0x10,0x48);
      auVar7 = FUN_0240a9dc(unaff_x29 + -0x70,uVar3);
      uVar3 = auVar7._8_8_;
      FUN_03e1c250(unaff_x19 + 0x10,0);
      auVar8._8_8_ = uVar3;
      auVar8._0_8_ = auVar7._0_8_;
      goto LAB_02400268;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


