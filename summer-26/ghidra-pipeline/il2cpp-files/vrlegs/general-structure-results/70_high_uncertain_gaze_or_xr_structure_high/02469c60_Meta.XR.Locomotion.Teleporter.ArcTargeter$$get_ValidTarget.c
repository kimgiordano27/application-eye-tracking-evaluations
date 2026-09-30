/*
FUNCTION_NAME: Meta.XR.Locomotion.Teleporter.ArcTargeter$$get_ValidTarget
ENTRY_POINT: 02469c60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_Locomotion_Teleporter_ArcTargeter__get_ValidTarget(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_04123385 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ce2d48);
    FUN_01ab69ac(PTR_DAT_03ce2e10);
    DAT_04123385 = 1;
  }
  puVar3 = PTR_DAT_03ce2d48;
  lVar5 = *(long *)(param_1 + 0x138);
  if (lVar5 != 0) {
    uVar2 = *(int *)(param_1 + 0x14c) - 2;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_02469d98:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar6 = *(long **)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce2e10);
    if (plVar6 != (long *)0x0) {
      lVar4 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar4 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar6);
      }
    }
    FUN_02394e9c(lVar5,plVar6,0);
    lVar4 = *(long *)(param_1 + 0x138);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x14c)) goto LAB_02469d98;
      if (lVar5 != 0) {
        plVar6 = *(long **)(lVar4 + (long)(int)*(uint *)(param_1 + 0x14c) * 8 + 0x20);
        if (plVar6 != (long *)0x0) {
          lVar4 = *(long *)puVar3;
          if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
              lVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar6,lVar4);
          }
        }
        *(long **)(lVar5 + 0x30) = plVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        *(long *)(param_1 + 0x140) = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x140,lVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


