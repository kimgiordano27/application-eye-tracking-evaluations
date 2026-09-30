/*
FUNCTION_NAME: Oculus.Platform.Callback$$FlushJoinIntentNotificationQueue
ENTRY_POINT: 055ac7d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Platform_Callback__FlushJoinIntentNotificationQueue(long param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong extraout_x1;
  ulong uVar12;
  long *in_x10;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  long *plVar6;
  undefined *puVar11;
  
  uVar12 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *in_x10) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_055ac81c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)FUN_02dd004c();
LAB_055ac81c:
  auVar14 = (*(code *)*puVar5)();
  plVar6 = auVar14._0_8_;
  if (unaff_x19 == (long *)0x0) goto Oculus_Platform_CallbackRunner__Update;
  uVar12 = FUN_05574e1c();
  if ((uVar12 & 1) == 0) {
    thunk_FUN_02dfd288(System_Action<vx_resp_account_control_communications_t>_TypeInfo);
    goto LAB_055acbf0;
  }
  auVar14 = (**(code **)(*unaff_x19 + 0x188))();
  if (auVar14._0_4_ == 2) {
    if (plVar6 == (long *)0x0) goto Oculus_Platform_CallbackRunner__Update;
    if (*(int *)((long)plVar6 + 0x24) == 2) {
      bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) goto LAB_055acb04;
      if (*(char *)((long)plVar6 + 0xf1) == '\0') {
        lVar7 = thunk_FUN_02dd3048();
        if (lVar7 == 0) {
LAB_055acbac:
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0();
        }
      }
      else {
        lVar7 = FUN_055a740c(plVar6);
      }
      auVar14._8_8_ = lVar7;
      auVar14._0_8_ = lVar7;
      if (unaff_x20 != 0) {
        FUN_055acc1c();
        return;
      }
      goto Oculus_Platform_CallbackRunner__Update;
    }
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar9 = FUN_0547e2f8(0);
    puVar11 = System_Action<Allocator2D_Row>_TypeInfo;
LAB_055acbdc:
    uVar10 = thunk_FUN_02dfd288(puVar11);
  }
  else {
    iVar4 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar4 == 1) {
      FUN_05574a40();
      plVar8 = *(long **)(unaff_x20 + 0x20);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1;
      auVar14 = auVar2 << 0x40;
      if (plVar8 == (long *)0x0) {
Oculus_Platform_CallbackRunner__Update:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(auVar14._0_8_,auVar14._8_8_);
      }
      auVar14 = (**(code **)(*plVar8 + 0x288))(plVar8,*(undefined8 *)(*plVar8 + 0x290));
      if ((auVar14._0_4_ != 2) &&
         (auVar14 = (**(code **)(*unaff_x19 + 0x188))(), auVar14._0_4_ == 4)) {
        auVar14 = (**(code **)(*unaff_x19 + 0x198))();
        plVar8 = auVar14._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar14._8_8_;
        auVar14 = auVar3 << 0x40;
        if (plVar8 == (long *)0x0) goto Oculus_Platform_CallbackRunner__Update;
        uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        auVar14 = FUN_0536b7a8(uVar9,*(undefined8 *)System_Action<float3>_TypeInfo,4,0);
        if ((auVar14._0_8_ & 1) != 0) {
          FUN_05574a40();
          plVar8 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          }
          auVar14 = FUN_05574a40();
        }
      }
      if (plVar6 == (long *)0x0) goto Oculus_Platform_CallbackRunner__Update;
      if (*(int *)((long)plVar6 + 0x24) == 1) {
        bVar1 = *(byte *)(*(long *)UnityEngine_SendMouseEvents_HitInfo_var + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)UnityEngine_SendMouseEvents_HitInfo_var)) {
          FUN_055adb88();
          return;
        }
LAB_055acb04:
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar6);
      }
      if (*(int *)((long)plVar6 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
          if ((char)plVar6[0x20] == '\0') {
            lVar7 = thunk_FUN_02dd3048();
            if (lVar7 == 0) goto LAB_055acbac;
          }
          else {
            FUN_055a9a84(plVar6);
          }
          FUN_055ad168();
          return;
        }
        goto LAB_055acb04;
      }
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar9 = FUN_0547e2f8(0);
      puVar11 = System_Action<BestFitAllocator_Block>_TypeInfo;
      goto LAB_055acbdc;
    }
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar9 = FUN_0547e2f8(0);
    FUN_02979e58();
    in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x188))();
    uVar10 = thunk_FUN_02dfd288(System_Drawing_Point_var);
    thunk_FUN_02dd2d7c(uVar10,(long)&stack0x00000008 + 4);
    uVar10 = thunk_FUN_02dfd288(System_Action<ATGTextJobSystem_ManagedJobData>_TypeInfo);
  }
  FUN_055873e0(uVar10,uVar9);
LAB_055acbf0:
  uVar9 = FUN_05574a94();
  uVar10 = thunk_FUN_02dfd288(System_Action<DebugUI_Panel>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar9,uVar10);
}


