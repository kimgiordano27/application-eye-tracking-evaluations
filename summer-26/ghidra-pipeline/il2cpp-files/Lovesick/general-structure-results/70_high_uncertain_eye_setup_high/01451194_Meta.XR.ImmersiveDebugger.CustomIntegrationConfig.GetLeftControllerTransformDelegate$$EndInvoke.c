/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetLeftControllerTransformDelegate$$EndInvoke
ENTRY_POINT: 01451194
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate__EndInvoke
               (void)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x25;
  long *unaff_x27;
  long *unaff_x29;
  float fStack000000000000002c;
  
  puVar2 = StringLiteral_12992;
  unaff_x27[7] = unaff_x25;
  fStack000000000000002c = (float)FUN_02684384();
  lVar5 = FUN_017841b4(&stack0x0000002c,*(undefined8 *)puVar2,0);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x27 + 0x40)), lVar6 == 0))
  goto LAB_014514ec;
  puVar2 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_6__;
  if (*(uint *)(unaff_x27 + 3) < 5) goto LAB_014514e8;
  unaff_x27[8] = lVar5;
  uVar7 = FUN_01600be4(*(undefined8 *)puVar2);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x29);
  }
  FUN_02660dac(uVar7,0);
  puVar2 = System_Nullable<short>_TypeInfo;
  FUN_02685a6c();
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo;
  if (lVar5 != 0) {
    FUN_02040640(lVar5,0);
    FUN_02040900(lVar5,0);
    uVar3 = (**(code **)(*unaff_x19 + 0x188))();
    uVar4 = (**(code **)(*unaff_x19 + 0x1a8))();
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar6 != 0) {
      FUN_02671b60(lVar6,uVar3,uVar4,5,1,0,0);
      FUN_013e5518(*(undefined4 *)(unaff_x22 + 0x20),0);
      FUN_013e663c();
      if (*(int *)(unaff_x22 + 0x20) < 5) {
LAB_014514b0:
        FUN_0142deac();
        return lVar6;
      }
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
      puVar2 = Method_System_Tuple_Create<TaskCompletionSource<int>,_byte[]>__;
      if (plVar8 != (long *)0x0) {
        if ((*(long *)Method_System_Tuple_Create<TaskCompletionSource<int>,_byte[]>__ != 0) &&
           (lVar9 = thunk_FUN_00d6225c(*(long *)
                                        Method_System_Tuple_Create<TaskCompletionSource<int>,_byte[]>__
                                       ,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_014514ec;
        uVar11 = *(uint *)(plVar8 + 3);
        if (uVar11 == 0) goto LAB_014514e8;
        plVar8[4] = *(long *)puVar2;
        if (unaff_x20 != 0) {
          lVar9 = *(long *)(unaff_x20 + 0x10);
          if (lVar9 != 0) {
            lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar10 == 0) goto LAB_014514ec;
            uVar11 = *(uint *)(plVar8 + 3);
          }
          puVar2 = DigitalOpus_MB_Core_MB3_MeshCombinerSingle_BoneAndBindpose_TypeInfo;
          if (uVar11 < 2) goto LAB_014514e8;
          plVar8[5] = lVar9;
          lVar9 = *(long *)puVar2;
          if (lVar9 != 0) {
            lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar9 == 0) goto LAB_014514ec;
            uVar11 = *(uint *)(plVar8 + 3);
          }
          if (2 < uVar11) {
            plVar8[6] = *(long *)puVar2;
            lVar9 = FUN_020407b0();
            fVar1 = DAT_028aa290;
            fStack000000000000002c = (float)lVar9 * DAT_028aa290;
            lVar9 = FUN_017840ac(&stack0x0000002c,0);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_014514ec:
              uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar7,0);
            }
            puVar2 = Method_System_Data_RBTree<int>_get_Item__;
            uVar11 = *(uint *)(plVar8 + 3);
            if (3 < uVar11) {
              plVar8[7] = lVar9;
              lVar9 = *(long *)puVar2;
              if (lVar9 != 0) {
                lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar9 == 0) goto LAB_014514ec;
                uVar11 = *(uint *)(plVar8 + 3);
              }
              if (4 < uVar11) {
                plVar8[8] = *(long *)puVar2;
                lVar5 = FUN_020407b0(lVar5,0);
                fStack000000000000002c = (float)lVar5 * fVar1;
                lVar5 = FUN_017840ac(&stack0x0000002c,0);
                if ((lVar5 != 0) &&
                   (lVar9 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_014514ec;
                if (5 < *(uint *)(plVar8 + 3)) {
                  plVar8[9] = lVar5;
                  uVar7 = FUN_01600844(plVar8,0);
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x29);
                  }
                  FUN_02660dac(uVar7,0);
                  goto LAB_014514b0;
                }
              }
            }
          }
LAB_014514e8:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


