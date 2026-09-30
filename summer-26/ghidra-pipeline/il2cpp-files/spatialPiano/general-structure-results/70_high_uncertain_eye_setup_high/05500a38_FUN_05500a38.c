/*
FUNCTION_NAME: FUN_05500a38
ENTRY_POINT: 05500a38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05500a38(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_06bbf54f & 1) == 0) {
    FUN_02f08768(OVRPlugin_Hand_TypeInfo);
    DAT_06bbf54f = 1;
  }
  FUN_0552a844(param_2,0);
  if (param_2 != (long *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (0 < iVar2) {
      iVar7 = 0;
      do {
        uVar3 = (**(code **)(*param_2 + 0x238))(param_2,iVar7,*(undefined8 *)(*param_2 + 0x240));
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_05500c04;
        uVar3 = FUN_05512e44(*(long *)(param_1 + 0x18),uVar3,0,0);
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_05500c04;
        FUN_054f8f54(*(long *)(param_1 + 0x10),uVar3);
        iVar7 = iVar7 + 1;
      } while (iVar2 != iVar7);
    }
    FUN_05500c08(param_1,param_2[2]);
    plVar4 = (long *)param_2[2];
    if (plVar4 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      puVar1 = PTR_DAT_067c9338;
      lVar9 = *(long *)(PTR_DAT_067c9338 + 0x20);
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
      }
      uVar5 = FUN_050e4454(lVar9 + 0x20,0);
      uVar6 = FUN_050edfb8(uVar3,uVar5,0);
      if ((uVar6 & 1) != 0) {
        uVar3 = FUN_054e3704(param_2,0);
        lVar9 = *(long *)(puVar1 + 0xe0);
        lVar8 = *(long *)(puVar1 + 0x20);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar9);
        }
        uVar5 = FUN_050e4454(lVar8 + 0x20,0);
        uVar6 = FUN_050ed374(uVar3,uVar5,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_05500c04;
          FUN_054f7a84();
        }
      }
      puVar1 = OVRPlugin_Hand_TypeInfo;
      uVar3 = FUN_054e36e4(param_2,0);
      uVar3 = FUN_05500c50(param_1,uVar3);
      uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0550e3e0(uVar5,uVar3,param_2,0);
      return uVar5;
    }
  }
LAB_05500c04:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


