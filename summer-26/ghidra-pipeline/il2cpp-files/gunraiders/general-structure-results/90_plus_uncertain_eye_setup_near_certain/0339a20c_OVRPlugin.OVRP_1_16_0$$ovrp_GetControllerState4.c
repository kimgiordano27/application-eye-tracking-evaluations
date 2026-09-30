/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetControllerState4
ENTRY_POINT: 0339a20c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetControllerState4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long unaff_x26;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  do {
    if (*(char *)(unaff_x26 + 0x80) == '\0') {
      if (*(long *)(unaff_x26 + 0x48) == 0) {
        uVar3 = FUN_03395dc8();
        *(undefined8 *)(unaff_x26 + 0x48) = uVar3;
      }
      FUN_03396234();
      uVar4 = FUN_0339bdf8();
      if ((uVar4 & 1) != 0) goto LAB_0339a300;
      FUN_0335c934();
      goto LAB_0339a300;
    }
    do {
      uVar3 = (**(code **)(*unaff_x19 + 0x188))();
      uVar4 = FUN_0337d8fc(uVar3,0);
      if ((uVar4 & 1) == 0) {
        uVar3 = *unaff_x29;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032e04b8(uVar3,0);
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
        uVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        if ((uVar4 & 1) == 0) goto LAB_0339a2c8;
        FUN_033962a0();
      }
      FUN_03391ddc();
LAB_0339a300:
      uVar4 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar4 & 1) == 0) {
        FUN_0339d160();
LAB_0339a59c:
        FUN_0339cf34();
        return;
      }
      iVar1 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar1 != 4) {
        if (iVar1 != 0xd) {
          FUN_019b2708();
          uVar2 = (**(code **)(*unaff_x19 + 0x188))();
          in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
          in_stack_00000020 = 0xffffffffffffffff;
          in_stack_00000028 = uVar2;
          uVar3 = FUN_03307544(&stack0x00000018,0);
          uVar7 = thunk_FUN_01c273e8(
                                    Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                    );
          FUN_03146988(uVar7,uVar3,0);
          uVar3 = FUN_0335cdc4();
          uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar7);
        }
        goto LAB_0339a59c;
      }
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      uVar4 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar4 & 1) == 0) {
        lVar6 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_03295500(0);
        uVar8 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
        FUN_0336f2b8(uVar8,uVar7,uVar3,0);
        uVar3 = FUN_0335cdc4();
        uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar3,uVar7);
      }
      if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      unaff_x26 = FUN_033936cc(*(long *)(unaff_x20 + 0xc0),uVar3);
    } while ((unaff_x26 == 0) || (*(char *)(unaff_x26 + 0x82) == '\0'));
  } while( true );
}


