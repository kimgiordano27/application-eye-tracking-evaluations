/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 0339a480
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(void)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  __cxa_end_catch();
  (**(code **)(*unaff_x19 + 0x1c8))();
  thunk_FUN_01c273e8(Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__);
  thunk_FUN_01c495e4();
  uVar8 = FUN_03393b30();
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80();
  }
  FUN_03396b58();
  do {
    uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar8 & 1) == 0) {
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
        uVar4 = FUN_03307544(&stack0x00000018,0);
        uVar6 = thunk_FUN_01c273e8(
                                  Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                  );
        FUN_03146988(uVar6,uVar4,0);
        uVar4 = FUN_0335cdc4();
        uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar4,uVar6);
      }
      goto LAB_0339a59c;
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar8 & 1) == 0) {
      lVar5 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_03295500(0);
      uVar7 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
      FUN_0336f2b8(uVar7,uVar6,uVar4,0);
      uVar4 = FUN_0335cdc4();
      uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar6);
    }
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar5 = FUN_033936cc(*(long *)(unaff_x20 + 0xc0),uVar4);
    if (((lVar5 == 0) || (*(char *)(lVar5 + 0x82) == '\0')) || (*(char *)(lVar5 + 0x80) != '\0')) {
      uVar4 = (**(code **)(*unaff_x19 + 0x188))();
      uVar8 = FUN_0337d8fc(uVar4,0);
      if ((uVar8 & 1) == 0) {
        uVar4 = *unaff_x29;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032e04b8(uVar4,0);
      }
      else {
        (**(code **)(*unaff_x19 + 0x1a8))();
      }
      FUN_03395dc8();
      plVar3 = (long *)FUN_03396234();
      if (plVar3 == (long *)0x0) {
LAB_0339a2c8:
        FUN_033966b4();
      }
      else {
        uVar8 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        if ((uVar8 & 1) == 0) goto LAB_0339a2c8;
        FUN_033962a0();
      }
      FUN_03391ddc();
    }
    else {
      if (*(long *)(lVar5 + 0x48) == 0) {
        uVar4 = FUN_03395dc8();
        *(undefined8 *)(lVar5 + 0x48) = uVar4;
      }
      FUN_03396234();
      uVar8 = FUN_0339bdf8();
      if ((uVar8 & 1) == 0) {
        FUN_0335c934();
      }
    }
  } while( true );
}


