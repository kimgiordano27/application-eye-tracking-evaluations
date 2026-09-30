/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_message_body_set
ENTRY_POINT: 0789014c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_message_body_set
               (undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined4 *unaff_x19;
  int in_stack_00000018;
  
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03b79cbc(param_1);
    }
    puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar4 = thunk_FUN_03af1434(PTR_DAT_08488858);
    uVar5 = thunk_FUN_03aed0c4(uVar4,*(undefined8 *)*puVar3);
    if ((uVar5 & 1) != 0) {
      uVar4 = *puVar3;
      *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000018 * 8) = uVar4;
      in_stack_00000018 = in_stack_00000018 + 1;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar6 = thunk_FUN_03af1434(
                                System_Collections_Generic_List<List<UIRenderDevice_AllocToFree>>_TypeInfo
                                );
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<ArmModelTransition>_TypeInfo);
      FUN_05338d34(unaff_x19 + 2,uVar4,uVar7);
      return;
    }
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *puVar3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&PTR_PTR_07fde6e8,0);
  }
  plVar9 = (long *)__cxa_begin_catch(param_1);
  uVar4 = thunk_FUN_03af1434(System_Collections_Generic_List<List<Vector3>>_TypeInfo);
  uVar5 = thunk_FUN_03aed0c4(uVar4,*(undefined8 *)*plVar9);
  if ((uVar5 & 1) == 0) {
    uVar4 = thunk_FUN_03af1434(System_Collections_Generic_List<AssetBundle>_TypeInfo);
    uVar10 = thunk_FUN_03aed0c4(uVar4,*(undefined8 *)*plVar9);
    if ((uVar10 & 1) == 0) {
      plVar11 = (long *)__cxa_allocate_exception(8);
      *plVar11 = *plVar9;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar11,&PTR_PTR_07fde6e8,0);
    }
  }
  iVar1 = in_stack_00000018;
  lVar6 = *plVar9;
  *(long *)(&stack0x00000008 + (long)in_stack_00000018 * 8) = lVar6;
  in_stack_00000018 = in_stack_00000018 + 1;
  __cxa_end_catch();
  if ((uVar5 & 1) != 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar2 = FUN_0788e7e4(*(undefined8 *)(lVar6 + 0x98));
    uVar4 = FUN_0788ea04(*(undefined8 *)(lVar6 + 0x98));
    thunk_FUN_03af1434(PTR_DAT_0848b038);
    lVar12 = thunk_FUN_03ac74bc();
    FUN_0784fa10(lVar12,uVar2,uVar4,lVar6,0);
    *(undefined4 *)(lVar12 + 0x90) = uVar2;
    in_stack_00000018 = iVar1;
    uVar4 = thunk_FUN_03af1434(System_Collections_Generic_List<Anchor>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(lVar12,uVar4);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar12 = *(long *)(lVar6 + 0x90);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(char *)(lVar12 + 0x20) != '\0') {
    uVar2 = FUN_0788e91c();
    if (*(long *)(lVar6 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x90) + 0x30);
    thunk_FUN_03af1434(PTR_DAT_0848b038);
    lVar12 = thunk_FUN_03ac74bc();
    FUN_0784fa10(lVar12,uVar2,uVar4,lVar6,0);
    *(undefined4 *)(lVar12 + 0x90) = uVar2;
    in_stack_00000018 = iVar1;
    uVar4 = thunk_FUN_03af1434(System_Collections_Generic_List<Anchor>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(lVar12,uVar4);
  }
  if (*(char *)(lVar12 + 0x21) == '\0') {
    thunk_FUN_03af1434(System_Action<Task,_object>_TypeInfo);
    uVar4 = thunk_FUN_03ac74bc();
    uVar7 = thunk_FUN_03af1434(System_Collections_Generic_HashSet<Object>_TypeInfo);
    FUN_0784fa10(uVar4,15999,uVar7,lVar6,0);
    in_stack_00000018 = iVar1;
    uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<Anchor>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,uVar7);
  }
  uVar4 = *(undefined8 *)(lVar12 + 0x30);
  thunk_FUN_03af1434(PTR_DAT_0848b038);
  lVar6 = thunk_FUN_03ac74bc();
  FUN_0784fa08(lVar6,0x3e7e,uVar4,0);
  *(undefined4 *)(lVar6 + 0x90) = 0x3e7e;
  in_stack_00000018 = iVar1;
  uVar4 = thunk_FUN_03af1434(System_Collections_Generic_List<Anchor>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(lVar6,uVar4);
}


