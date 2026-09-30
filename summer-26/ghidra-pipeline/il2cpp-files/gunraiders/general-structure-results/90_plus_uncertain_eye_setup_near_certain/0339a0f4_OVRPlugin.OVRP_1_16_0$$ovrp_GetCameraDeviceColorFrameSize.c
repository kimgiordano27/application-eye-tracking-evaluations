/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameSize
ENTRY_POINT: 0339a0f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameSize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  undefined8 uVar11;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  if (param_1 == 0) {
LAB_0339a5e4:
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar11 = FUN_03295500(0);
    FUN_019b2708();
    uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>__ctor__);
    FUN_0336f2b8(uVar9,uVar11,uVar10,0);
  }
  else {
    if (*(char *)(unaff_x20 + 0x88) != '\0') {
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339a5e0;
      if (*(int *)(*(long *)(unaff_x21 + 0x20) + 0x30) != 1) goto LAB_0339a5e4;
    }
    lVar5 = (**(code **)(param_1 + 0x18))
                      (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      uVar11 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_Dispose__
      ;
      lVar6 = thunk_FUN_01c495e4(lVar5,uVar11);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar5,uVar11);
      }
    }
    if (unaff_x24 != 0) {
      FUN_0339c944();
    }
    FUN_0339cd08();
    puVar2 = Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__;
    puVar1 = PTR_DAT_0422fb28;
    if (unaff_x19 == (long *)0x0) {
LAB_0339a5e0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(*unaff_x19 + 0x1b8))();
    while (iVar3 = (**(code **)(*unaff_x19 + 0x188))(), iVar3 == 4) {
      plVar7 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar7 == (long *)0x0) goto LAB_0339a5e0;
      uVar11 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar8 & 1) == 0) {
        lVar5 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_03295500(0);
        uVar10 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
        FUN_0336f2b8(uVar10,uVar9,uVar11,0);
        uVar11 = FUN_0335cdc4();
        uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar11,uVar9);
      }
      if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = FUN_033936cc(*(long *)(unaff_x20 + 0xc0),uVar11);
      if (((lVar5 == 0) || (*(char *)(lVar5 + 0x82) == '\0')) || (*(char *)(lVar5 + 0x80) != '\0'))
      {
        uVar11 = (**(code **)(*unaff_x19 + 0x188))();
        uVar8 = FUN_0337d8fc(uVar11,0);
        if ((uVar8 & 1) == 0) {
          uVar11 = *(undefined8 *)puVar2;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_032e04b8(uVar11,0);
        }
        else {
          (**(code **)(*unaff_x19 + 0x1a8))();
        }
        FUN_03395dc8();
        plVar7 = (long *)FUN_03396234();
        if ((plVar7 == (long *)0x0) ||
           (uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
           (uVar8 & 1) == 0)) {
          FUN_033966b4();
        }
        else {
          FUN_033962a0();
        }
        FUN_03391ddc();
      }
      else {
        if (*(long *)(lVar5 + 0x48) == 0) {
          uVar11 = FUN_03395dc8();
          *(undefined8 *)(lVar5 + 0x48) = uVar11;
        }
        FUN_03396234();
        uVar8 = FUN_0339bdf8();
        if ((uVar8 & 1) == 0) {
          FUN_0335c934();
        }
      }
      uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar8 & 1) == 0) {
        FUN_0339d160();
LAB_0339a59c:
        FUN_0339cf34();
        return lVar6;
      }
    }
    if (iVar3 == 0xd) goto LAB_0339a59c;
    FUN_019b2708();
    uVar4 = (**(code **)(*unaff_x19 + 0x188))();
    in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
    in_stack_00000020 = 0xffffffffffffffff;
    in_stack_00000028 = uVar4;
    uVar11 = FUN_03307544(&stack0x00000018,0);
    uVar9 = thunk_FUN_01c273e8(
                              Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                              );
    FUN_03146988(uVar9,uVar11,0);
  }
  uVar11 = FUN_0335cdc4();
  uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar11,uVar9);
}


