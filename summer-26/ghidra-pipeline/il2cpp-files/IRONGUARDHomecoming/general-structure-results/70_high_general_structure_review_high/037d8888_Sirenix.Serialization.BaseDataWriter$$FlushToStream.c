/*
FUNCTION_NAME: Sirenix.Serialization.BaseDataWriter$$FlushToStream
ENTRY_POINT: 037d8888
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Sirenix_Serialization_BaseDataWriter__FlushToStream(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_UnitPort<ValueOutput,_IUnitOutputPort,_ValueConnection>_get_key__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Equals__);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  *(undefined1 *)(unaff_x19 + 0x702) = 1;
  plVar7 = (long *)(unaff_x20 + 0x30);
  if (*plVar7 != 0) {
    if (*(long *)(*plVar7 + 0x18) != 0) {
      return;
    }
    lVar1 = FUN_022c59ec();
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<InputAction>__ctor__
                                );
      FUN_034f6754(uVar6,uVar5,0);
      uVar5 = thunk_FUN_01efb3a4(StringLiteral_1271);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar5);
    }
    plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Unity_VisualScripting_UnitPort<ValueOutput,_IUnitOutputPort,_ValueConnection>_get_key__
                                  ,1);
    if (plVar3 != (long *)0x0) {
      if ((lVar1 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar1;
        thunk_FUN_01f51358(plVar3 + 4,lVar1);
        *plVar7 = (long)plVar3;
        thunk_FUN_01f51358(plVar7,plVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


