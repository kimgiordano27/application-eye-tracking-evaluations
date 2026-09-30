/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceColorFrameAvailable
ENTRY_POINT: 0339a078
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceColorFrameAvailable
               (long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  if ((DAT_045336c9 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_Dispose__
                );
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__);
    DAT_045336c9 = 1;
  }
  if (param_3 == 0) goto LAB_0339a5e0;
  if (*(char *)(param_3 + 0x2a) == '\0') {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar12 = FUN_03295500(0);
    FUN_019b2708(param_3);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    puVar9 = Method_System_Collections_Generic_HashSet<Guid>__ctor__;
  }
  else {
    lVar11 = *(long *)(param_3 + 0x80);
    if (lVar11 != 0) {
      if (*(char *)(param_3 + 0x88) != '\0') {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0339a5e0;
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x30) != 1) goto LAB_0339a5e4;
      }
      lVar11 = (**(code **)(lVar11 + 0x18))
                         (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      if (lVar11 == 0) {
        lVar4 = 0;
      }
      else {
        uVar12 = *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_Dispose__
        ;
        lVar4 = thunk_FUN_01c495e4(lVar11,uVar12);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar11,uVar12);
        }
      }
      if (param_5 != 0) {
        FUN_0339c944(param_1,param_2,param_5,lVar4);
      }
      FUN_0339cd08(param_1,param_2,param_3,lVar4);
      puVar1 = Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__;
      puVar9 = PTR_DAT_0422fb28;
      if (param_2 == (long *)0x0) {
LAB_0339a5e0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      while (iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400)),
            iVar2 == 4) {
        plVar5 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
        if (plVar5 == (long *)0x0) goto LAB_0339a5e0;
        uVar12 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        uVar6 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        if ((uVar6 & 1) == 0) {
          lVar11 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar7 = FUN_03295500(0);
          uVar8 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
          uVar12 = FUN_0336f2b8(uVar8,uVar7,uVar12,0);
          uVar12 = FUN_0335cdc4(param_2,uVar12,0);
          uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar12,uVar7);
        }
        if (*(long *)(param_3 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar11 = FUN_033936cc(*(long *)(param_3 + 0xc0),uVar12);
        if (((lVar11 == 0) || (*(char *)(lVar11 + 0x82) == '\0')) ||
           (*(char *)(lVar11 + 0x80) != '\0')) {
          uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          uVar6 = FUN_0337d8fc(uVar7,0);
          if ((uVar6 & 1) == 0) {
            uVar7 = *(undefined8 *)puVar1;
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_032e04b8(uVar7,0);
          }
          else {
            uVar7 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
          }
          uVar8 = FUN_03395dc8(param_1,uVar7);
          plVar5 = (long *)FUN_03396234(param_1,uVar8,0,0,param_4);
          if ((plVar5 == (long *)0x0) ||
             (uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0)),
             (uVar6 & 1) == 0)) {
            uVar7 = FUN_033966b4(param_1,param_2,uVar7,uVar8,0,0,param_4,0);
          }
          else {
            uVar7 = FUN_033962a0(param_1,plVar5,param_2,uVar7,0);
          }
          FUN_03391ddc(param_3,lVar4,uVar12,uVar7);
        }
        else {
          lVar10 = *(long *)(lVar11 + 0x48);
          if (lVar10 == 0) {
            lVar10 = FUN_03395dc8(param_1,*(undefined8 *)(lVar11 + 0x40));
            *(long *)(lVar11 + 0x48) = lVar10;
          }
          uVar12 = FUN_03396234(param_1,lVar10,*(undefined8 *)(lVar11 + 0x78),0,0);
          uVar6 = FUN_0339bdf8(param_1,lVar11,uVar12,0,param_4,param_2,lVar4);
          if ((uVar6 & 1) == 0) {
            FUN_0335c934(param_2,0);
          }
        }
        uVar6 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        if ((uVar6 & 1) == 0) {
          FUN_0339d160(param_1,param_2,param_3,lVar4,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__)
          ;
LAB_0339a59c:
          FUN_0339cf34(param_1,param_2,param_3,lVar4);
          return lVar4;
        }
      }
      if (iVar2 == 0xd) goto LAB_0339a59c;
      FUN_019b2708(param_2);
      uVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
      in_stack_00000020 = 0xffffffffffffffff;
      in_stack_00000028 = uVar3;
      uVar12 = FUN_03307544(&stack0x00000018,0);
      uVar7 = thunk_FUN_01c273e8(
                                Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                );
      uVar12 = FUN_03146988(uVar7,uVar12,0);
      goto LAB_0339a550;
    }
LAB_0339a5e4:
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar12 = FUN_03295500(0);
    FUN_019b2708(param_3);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    puVar9 = Method_System_Collections_Generic_HashSet<IClippable>__ctor__;
  }
  uVar8 = thunk_FUN_01c273e8(puVar9);
  uVar12 = FUN_0336f2b8(uVar8,uVar12,uVar7,0);
LAB_0339a550:
  uVar12 = FUN_0335cdc4(param_2,uVar12,0);
  uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar12,uVar7);
}


