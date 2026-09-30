/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsNetworkData$$AddNGOPlayerServerRpc
ENTRY_POINT: 06470628
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsNetworkData__AddNGOPlayerServerRpc
               (undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  
  plVar1 = (long *)FUN_03a8a804(*param_1);
  lVar2 = FUN_04520a28(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)PTR_DAT_08497560);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_06470734:
    uVar4 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_03afed3c(plVar1 + 4,lVar2);
    lVar2 = *(long *)(unaff_x22 + 0x20);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_06470734;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = lVar2;
      thunk_FUN_03afed3c(plVar1 + 5,lVar2);
      lVar2 = *(long *)(unaff_x22 + 0x28);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_06470734;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        thunk_FUN_03afed3c(plVar1 + 6,lVar2);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
                    /* WARNING: Could not recover jumptable at 0x0647072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18))();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


