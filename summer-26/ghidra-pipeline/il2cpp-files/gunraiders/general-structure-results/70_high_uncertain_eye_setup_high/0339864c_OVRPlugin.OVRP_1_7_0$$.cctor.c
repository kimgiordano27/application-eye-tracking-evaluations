/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$.cctor
ENTRY_POINT: 0339864c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_7_0___cctor(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  
  FUN_01c5d288();
  FUN_01c5d288(PTR_DAT_0422f960);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
              );
  FUN_01c5d288(PTR_DAT_04235e88);
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<Edge>_Contains__);
  FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fc38);
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x24 + 0x6bc) = 1;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar5 = FUN_032e935c();
  if ((uVar5 & 1) != 0) {
    return unaff_x19;
  }
  if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar6 = FUN_03370bc0();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x25);
  }
  uVar5 = FUN_032ea0d4(uVar6);
  if ((uVar5 & 1) == 0) {
    return unaff_x19;
  }
  if (unaff_x19 == (long *)0x0) {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((char)unaff_x23[2] != '\0') {
      return (long *)0x0;
    }
  }
  else if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(char *)((long)unaff_x23 + 0x11) == '\0') {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar7 = (long *)FUN_03370a3c();
    return plVar7;
  }
  bVar3 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__
                   + 0x130);
  if ((*(byte *)(*unaff_x23 + 0x130) < bVar3) ||
     (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar3 * 8 + -8) !=
      *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  if (*(char *)((long)unaff_x23 + 0x12) == '\0') {
    lVar9 = unaff_x23[3];
    uVar6 = *(undefined8 *)PTR_DAT_0422fb68;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_032e04b8(uVar6,0);
    uVar5 = FUN_032e935c(lVar9,uVar6,0);
    if ((uVar5 & 1) == 0) goto LAB_03398950;
    if (unaff_x19 == (long *)0x0) goto LAB_0339896c;
    if (*unaff_x19 == *(long *)PTR_DAT_0422fc38) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_033594d8();
      puVar4 = Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_03375048();
      if ((uVar5 & 1) != 0) {
        uVar2 = *(undefined4 *)(unaff_x20 + 0x48);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03373a90(0,uVar2,0);
        plVar7 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422f960);
        return plVar7;
      }
    }
  }
  else {
    if ((unaff_x19 != (long *)0x0) && (*unaff_x19 == *(long *)PTR_DAT_0422fc38)) {
      lVar9 = unaff_x23[3];
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar7 = (long *)FUN_03378ae0(lVar9,0);
      return plVar7;
    }
    uVar6 = thunk_FUN_01c49334(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Edge>_Contains__);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_033706b8(uVar6,0);
    if ((uVar5 & 1) != 0) {
      lVar9 = unaff_x23[3];
      if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar7 = (long *)FUN_03305530(lVar9);
      return plVar7;
    }
LAB_03398950:
    if (unaff_x19 == (long *)0x0) goto LAB_0339896c;
  }
  if (*unaff_x19 == *(long *)PTR_DAT_04230358) {
    puVar8 = (undefined8 *)thunk_FUN_01c49834();
    uVar6 = *puVar8;
    uVar1 = puVar8[1];
    lVar9 = unaff_x23[3];
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                        );
    }
    plVar7 = (long *)FUN_0336f360(uVar6,uVar1,lVar9,0);
    return plVar7;
  }
LAB_0339896c:
  if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar7 = (long *)FUN_0324f628();
  return plVar7;
}


