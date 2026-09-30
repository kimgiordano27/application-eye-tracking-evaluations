/*
FUNCTION_NAME: FUN_05a7c504
ENTRY_POINT: 05a7c504
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


int FUN_05a7c504(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  lVar2 = param_1;
  if (param_2 - 0x7aU < 3) {
    if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x20)) {
      lVar2 = System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer___cctor
                        (param_1,0);
    }
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) goto LAB_05a7c5c0;
    uVar6 = *(uint *)(param_1 + 0x20);
    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_05a7c5c4;
    iVar7 = 6;
  }
  else {
    if (1 < param_2 - 0x7dU) {
      if (param_2 == 0x7f) {
        return 3;
      }
      uVar3 = FUN_05a78ff0(param_1);
      uVar4 = thunk_FUN_02dfd288(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<StartSessionAsHost>d__57>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar3,uVar4);
    }
    if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x20)) {
      lVar2 = System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer___cctor
                        (param_1,0);
    }
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) {
LAB_05a7c5c0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_05a7c5c4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    iVar7 = 4;
  }
  iVar1 = FUN_05a7c648(lVar2,*(undefined1 *)(lVar5 + (int)uVar6 + 0x20));
  return iVar1 + iVar7;
}


