/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.BoneCapsule>
ENTRY_POINT: 02400060
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Array__InternalArray__ICollection_Remove<OVRPlugin_BoneCapsule>(void)

{
  void *__src;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  undefined8 *__dest;
  long unaff_x23;
  ulong __n;
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
  
  plVar5 = *(long **)(unaff_x21 + 0x38);
  __n = (ulong)*(uint *)(*plVar5 + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  unaff_x19[0x18] = 0;
  unaff_x19[0x15] = 0;
  unaff_x19[0x14] = 0;
  unaff_x19[0x17] = 0;
  unaff_x19[0x16] = 0;
  unaff_x19[0x11] = 0;
  unaff_x19[0x10] = 0;
  unaff_x19[0x13] = 0;
  unaff_x19[0x12] = 0;
  __src = unaff_x20;
  if (-1 < *(int *)(*plVar5 + 0x28)) {
    __src = (void *)(unaff_x29 + -0xa0);
  }
  memcpy(__dest,__src,__n);
  uVar2 = FUN_01f089f8(*plVar5,__dest);
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
      memcpy(__dest,unaff_x20,__n);
      puVar1 = (undefined8 *)plVar5[1];
      uVar3 = *puVar1;
      if (-1 < *(int *)(*plVar5 + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      *(undefined4 *)(unaff_x29 + -0x84) = unaff_s8;
      *(undefined8 **)(unaff_x29 + -0x98) = __dest;
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
    memcpy(__dest,unaff_x20,__n);
    uVar3 = thunk_FUN_01f113fc(*plVar5,__dest);
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


