/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameBgraPixels
ENTRY_POINT: 0339a178
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  puVar2 = Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__;
  puVar1 = PTR_DAT_0422fb28;
  uStack0000000000000014 = (**(code **)(*unaff_x19 + 0x1b8))();
  do {
    iVar3 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar3 != 4) {
      if (iVar3 != 0xd) {
        FUN_019b2708();
        uVar4 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar4;
        uVar6 = FUN_03307544(&stack0x00000018,0);
        uVar9 = thunk_FUN_01c273e8(
                                  Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                  );
        FUN_03146988(uVar9,uVar6,0);
        uVar6 = FUN_0335cdc4();
        uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar6,uVar9);
      }
      goto LAB_0339a59c;
    }
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar7 & 1) == 0) {
      lVar8 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_03295500(0);
      uVar10 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
      FUN_0336f2b8(uVar10,uVar9,uVar6,0);
      uVar6 = FUN_0335cdc4();
      uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar9);
    }
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar8 = FUN_033936cc(*(long *)(unaff_x20 + 0xc0),uVar6);
    if (((lVar8 == 0) || (*(char *)(lVar8 + 0x82) == '\0')) || (*(char *)(lVar8 + 0x80) != '\0')) {
      uVar6 = (**(code **)(*unaff_x19 + 0x188))();
      uVar7 = FUN_0337d8fc(uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032e04b8(uVar6,0);
      }
      else {
        (**(code **)(*unaff_x19 + 0x1a8))();
      }
      FUN_03395dc8();
      plVar5 = (long *)FUN_03396234();
      if (plVar5 == (long *)0x0) {
LAB_0339a2c8:
        FUN_033966b4();
      }
      else {
        uVar7 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        if ((uVar7 & 1) == 0) goto LAB_0339a2c8;
        FUN_033962a0();
      }
      FUN_03391ddc();
    }
    else {
      if (*(long *)(lVar8 + 0x48) == 0) {
        uVar6 = FUN_03395dc8();
        *(undefined8 *)(lVar8 + 0x48) = uVar6;
      }
      FUN_03396234();
      uVar7 = FUN_0339bdf8();
      if ((uVar7 & 1) == 0) {
        FUN_0335c934();
      }
    }
    uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar7 & 1) != 0);
  FUN_0339d160();
LAB_0339a59c:
  FUN_0339cf34();
  return;
}


