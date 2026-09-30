/*
FUNCTION_NAME: FUN_072ed564
ENTRY_POINT: 072ed564
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_072ed564(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  if ((DAT_07ef2aee & 1) == 0) {
    FUN_03642964(PTR_DAT_079f5b88);
    FUN_03642964(PTR_DAT_079f5b90);
    DAT_07ef2aee = 1;
  }
  if ((param_1 != 0) && (iVar2 = FUN_05e310c0(param_1,0), param_2 != 0)) {
    iVar8 = *(int *)(param_2 + 0x18);
    iVar9 = iVar2 - iVar8;
    if (iVar9 < 0) {
      thunk_FUN_036aa1c8(PTR_DAT_079f7680);
      uVar5 = thunk_FUN_0367fe20();
      uVar7 = thunk_FUN_036aa1c8(
                                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
                                );
      FUN_05e177c8(uVar5,uVar7,0);
      uVar7 = thunk_FUN_036aa1c8(
                                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar5,uVar7);
    }
    plVar4 = (long *)thunk_FUN_03652da4(param_1,0);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x418))(plVar4,*(undefined8 *)(*plVar4 + 0x420));
      if (iVar2 == iVar8) {
        lVar6 = FUN_05e3e46c(uVar5,0,0);
        return lVar6;
      }
      lVar6 = FUN_05e3e46c(uVar5,iVar9,0);
      iVar2 = FUN_05e310c0(param_1,0);
      puVar1 = PTR_DAT_079f5b90;
      if (0 < iVar2) {
        iVar8 = 0;
        iVar2 = 0;
        iVar9 = 0;
        do {
          if ((iVar2 < *(int *)(param_2 + 0x18)) &&
             (iVar3 = FUN_04526cc0(param_2,iVar2,*(undefined8 *)puVar1), iVar9 == iVar3)) {
            iVar2 = iVar2 + 1;
          }
          else {
            uVar5 = FUN_05e31120(param_1,iVar9,0);
            if (lVar6 == 0) goto LAB_072ed6d0;
            FUN_05e3ae5c(lVar6,uVar5,iVar8,0);
            iVar8 = iVar8 + 1;
          }
          iVar9 = iVar9 + 1;
          iVar3 = FUN_05e310c0(param_1,0);
        } while (iVar9 < iVar3);
      }
      return lVar6;
    }
  }
LAB_072ed6d0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


