/*
FUNCTION_NAME: FUN_018426d4
ENTRY_POINT: 018426d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_018426d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = Method_System_Collections_Generic_List<CwInputManager_Finger>_RemoveAt__;
  puVar2 = Method_System_Collections_Generic_LinkedList<WebConnection>_get_First__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_get_Values__;
  if ((DAT_037795a1 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2090);
    thunk_FUN_00d48444(Method_System_Collections_Generic_LinkedList<WebConnection>_get_First__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_get_Values__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_FovfPair_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CharacterManagerSaveData>_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_FieldInfo>__ctor__);
    thunk_FUN_00d48444(
                      Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<XRInputModalityManager_InputMode>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CwInputManager_Finger>_RemoveAt__);
    thunk_FUN_00d48444(StringLiteral_2293);
    DAT_037795a1 = 1;
  }
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,8);
  lVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,10);
  FUN_016a34e8(lVar5,*(undefined8 *)puVar3,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_01842a20:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    puVar2 = Method_OVRPlugin_FovfPair_get_Item__;
    lVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,10);
    FUN_016a34e8(lVar5,*(undefined8 *)puVar2,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_01842a20;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar5;
      puVar2 = Method_System_Collections_Generic_List<CharacterManagerSaveData>_Add__;
      lVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,10);
      FUN_016a34e8(lVar5,*(undefined8 *)puVar2,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_01842a20;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        puVar2 = Method_System_Collections_Generic_Dictionary<string,_FieldInfo>__ctor__;
        lVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,10);
        FUN_016a34e8(lVar5,*(undefined8 *)puVar2,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_01842a20;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar5;
          puVar2 = Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__;
          lVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,10);
          FUN_016a34e8(lVar5,*(undefined8 *)puVar2,0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_01842a20;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = lVar5;
            puVar2 = 
            Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<XRInputModalityManager_InputMode>_TypeInfo
            ;
            lVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,10);
            FUN_016a34e8(lVar5,*(undefined8 *)puVar2,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_01842a20;
            if (5 < *(uint *)(plVar4 + 3)) {
              plVar4[9] = lVar5;
              lVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,10);
              FUN_016a34e8(lVar5,*(undefined8 *)puVar2,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
              goto LAB_01842a20;
              if (6 < *(uint *)(plVar4 + 3)) {
                plVar4[10] = lVar5;
                puVar2 = StringLiteral_2293;
                lVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,10);
                FUN_016a34e8(lVar5,*(undefined8 *)puVar2,0);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto LAB_01842a20;
                puVar1 = PTR_DAT_033f2090;
                if (7 < *(uint *)(plVar4 + 3)) {
                  plVar4[0xb] = lVar5;
                  *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = plVar4;
                  uVar7 = FUN_018424dc();
                  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar7;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


