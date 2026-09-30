/*
FUNCTION_NAME: OVRManager$$get_boundary
ENTRY_POINT: 073c003c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_boundary(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_08eb54d0;
  puVar1 = PTR_DAT_08e69e98;
  if ((DAT_0941e600 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69e98);
    FUN_03c8f898(PTR_DAT_08eb5458);
    FUN_03c8f898(PTR_DAT_08eb54d8);
    FUN_03c8f898(PTR_DAT_08eb54e0);
    FUN_03c8f898(PTR_DAT_08eb54e8);
    FUN_03c8f898(PTR_DAT_08e6a798);
    FUN_03c8f898(PTR_DAT_08eb54d0);
    FUN_03c8f898(PTR_DAT_08eb54f0);
    DAT_0941e600 = 1;
  }
  uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_07064478(uVar3,param_1,*(undefined8 *)puVar2,0);
  FUN_072f4d80(param_1,param_1 + 0x110,uVar3,0);
  if (*(long *)(param_1 + 0x128) == 0) {
    lVar4 = FUN_085dbb98(param_1,0);
    if (lVar4 == 0) goto LAB_073c0228;
    uVar3 = FUN_0469cb0c(lVar4,*(undefined8 *)PTR_DAT_08eb54e0);
    FUN_073c022c(param_1,uVar3);
  }
  if (*(long *)(param_1 + 0x180) == 0) {
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a798);
    FUN_085df0ec(lVar4,*(undefined8 *)PTR_DAT_08eb54f0,0);
    if ((lVar4 == 0) ||
       (plVar5 = (long *)FUN_0469cb0c(lVar4,*(undefined8 *)PTR_DAT_08eb54e8), plVar5 == (long *)0x0)
       ) {
LAB_073c0228:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(undefined4 *)(plVar5 + 4) = *(undefined4 *)(param_1 + 0x130);
    if (*(long *)(param_1 + 0x140) != 0) {
      lVar6 = FUN_0469cb0c(lVar4,*(undefined8 *)PTR_DAT_08eb54d8);
      if (lVar6 == 0) goto LAB_073c0228;
      thunk_FUN_0739193c(lVar6,*(undefined8 *)(param_1 + 0x140),0);
      lVar4 = FUN_085dee20(lVar4,0);
      plVar5[5] = lVar4;
      thunk_FUN_03d233cc();
    }
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5458);
    FUN_073bdb14(uVar3,plVar5,*(undefined8 *)(*plVar5 + 400));
    *(undefined8 *)(param_1 + 0x180) = uVar3;
    thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x180),uVar3);
  }
  FUN_072f4e24(param_1,param_1 + 0x110,0);
  return;
}


