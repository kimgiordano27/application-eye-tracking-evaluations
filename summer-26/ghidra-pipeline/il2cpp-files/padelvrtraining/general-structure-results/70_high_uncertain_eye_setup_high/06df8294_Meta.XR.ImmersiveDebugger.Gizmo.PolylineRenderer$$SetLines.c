/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetLines
ENTRY_POINT: 06df8294
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    if ((int)param_1[1] != *(int *)(lVar5 + 0x1c)) {
      thunk_FUN_03d1e194(PTR_DAT_091aa550);
      uVar3 = thunk_FUN_03d2ef40();
      uVar4 = thunk_FUN_03d1e194(PTR_DAT_091fbde0);
      Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar3,param_2);
    }
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (iVar1 == -1) {
      uVar2 = 0;
    }
    else if (iVar1 == -2) {
      iVar1 = *(int *)(lVar5 + 0x18);
      uVar2 = iVar1 - 1;
      *(uint *)((long)param_1 + 0xc) = uVar2;
      if (-1 < (int)uVar2) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) goto LAB_06df8370;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_06df83b4:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar5 = lVar5 + (ulong)uVar2 * 0x10;
        lVar6 = *(long *)(lVar5 + 0x20);
        param_1[3] = *(long *)(lVar5 + 0x28);
        param_1[2] = lVar6;
        thunk_FUN_03d1023c(param_1 + 3,0);
      }
      uVar2 = (uint)-iVar1 >> 0x1f;
    }
    else {
      uVar2 = iVar1 - 1;
      *(uint *)((long)param_1 + 0xc) = uVar2;
      if ((int)uVar2 < 0) {
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) goto LAB_06df8370;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_06df83b4;
        lVar5 = lVar5 + (ulong)uVar2 * 0x10;
        lVar6 = *(long *)(lVar5 + 0x20);
        param_1[3] = *(long *)(lVar5 + 0x28);
        param_1[2] = lVar6;
        thunk_FUN_03d1023c(param_1 + 3,0);
      }
      uVar2 = (uint)-iVar1 >> 0x1f;
    }
    return uVar2;
  }
LAB_06df8370:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


