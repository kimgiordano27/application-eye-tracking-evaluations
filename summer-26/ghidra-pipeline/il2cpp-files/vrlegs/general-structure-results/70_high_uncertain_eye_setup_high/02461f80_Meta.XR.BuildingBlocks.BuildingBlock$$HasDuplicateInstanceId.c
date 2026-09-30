/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$HasDuplicateInstanceId
ENTRY_POINT: 02461f80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_BuildingBlock__HasDuplicateInstanceId(ulong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ce1d70);
    FUN_01ab69ac(PTR_DAT_03ce6cc8);
    *(undefined1 *)(unaff_x20 + 0x336) = 1;
  }
  lVar4 = *(long *)(unaff_x19 + 0x138);
  if (lVar4 == 0) goto LAB_024620d8;
  if (*(uint *)(lVar4 + 0x18) <= *(uint *)(unaff_x19 + 0x14c)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar3 = *(long **)(lVar4 + (long)(int)*(uint *)(unaff_x19 + 0x14c) * 8 + 0x20);
  if (plVar3 != (long *)0x0) {
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x80), lVar4 == 0)) goto LAB_024620d8;
    lVar5 = *(long *)PTR_DAT_03ce1d70;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3,lVar5);
    }
    *(long **)(lVar4 + 0x48) = plVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_024620d8;
    if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x3c) == 0x8000) {
      if (((*(long *)(unaff_x19 + 0x28) == 0) ||
          (plVar3 = *(long **)(*(long *)(unaff_x19 + 0x28) + 0x80), plVar3 == (long *)0x0)) ||
         (plVar3[9] == 0)) goto LAB_024620d8;
      uVar1 = *(undefined4 *)(plVar3[9] + 0x20);
      lVar4 = *(long *)(unaff_x19 + 0xf0);
      uVar2 = (**(code **)(*plVar3 + 0x358))(plVar3,*(undefined8 *)(*plVar3 + 0x360));
      if (lVar4 == 0) goto LAB_024620d8;
      FUN_023dba94(lVar4,0x213,uVar1,*(undefined8 *)PTR_DAT_03ce6cc8,uVar2,0);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x68),0);
  lVar4 = *(long *)(unaff_x19 + 0x150);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x54) = 1;
    if ((*(char *)(unaff_x19 + 0xe4) != '\0') && (*(int *)(lVar4 + 0xa8) == 2)) {
      FUN_024a0eb0(lVar4,1,0);
      return;
    }
    return;
  }
LAB_024620d8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


