/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryNode
ENTRY_POINT: 03398730
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long *unaff_x23;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (unaff_x19 == (long *)0x0) {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((char)unaff_x23[2] != '\0') {
      return 0;
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
    uVar5 = FUN_03370a3c();
    return uVar5;
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
    lVar8 = unaff_x23[3];
    uVar5 = *(undefined8 *)PTR_DAT_0422fb68;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_032e04b8(uVar5,0);
    uVar6 = FUN_032e935c(lVar8,uVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_03398950;
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
      uVar6 = FUN_03375048();
      if ((uVar6 & 1) != 0) {
        uVar2 = *(undefined4 *)(unaff_x20 + 0x48);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03373a90(in_stack_00000008,uVar2,0);
        uVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422f960);
        return uVar5;
      }
    }
  }
  else {
    if ((unaff_x19 != (long *)0x0) && (*unaff_x19 == *(long *)PTR_DAT_0422fc38)) {
      lVar8 = unaff_x23[3];
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_03378ae0(lVar8,0);
      return uVar5;
    }
    uVar5 = thunk_FUN_01c49334(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Edge>_Contains__);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_033706b8(uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = unaff_x23[3];
      if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_03305530(lVar8);
      return uVar5;
    }
LAB_03398950:
    if (unaff_x19 == (long *)0x0) goto LAB_0339896c;
  }
  if (*unaff_x19 == *(long *)PTR_DAT_04230358) {
    puVar7 = (undefined8 *)thunk_FUN_01c49834();
    uVar5 = *puVar7;
    uVar1 = puVar7[1];
    lVar8 = unaff_x23[3];
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                        );
    }
    uVar5 = FUN_0336f360(uVar5,uVar1,lVar8,0);
    return uVar5;
  }
LAB_0339896c:
  if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar5 = FUN_0324f628();
  return uVar5;
}


