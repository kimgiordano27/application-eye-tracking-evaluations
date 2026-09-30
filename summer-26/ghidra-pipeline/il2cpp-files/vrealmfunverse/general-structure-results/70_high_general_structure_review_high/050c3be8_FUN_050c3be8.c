/*
FUNCTION_NAME: FUN_050c3be8
ENTRY_POINT: 050c3be8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_050c3be8(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int local_24;
  
  if ((DAT_066cd7a5 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo);
    FUN_02b3c81c(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_AtlasAllocator_TypeInfo);
    DAT_066cd7a5 = 1;
  }
  if (*(long *)(param_1 + 0x128) == 0) {
LAB_050c3d44:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar1 = *param_2;
  iVar3 = FUN_044589c8(*(long *)(param_1 + 0x128),
                       *(undefined8 *)
                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo);
  if (iVar1 < iVar3) {
    if ((*(long *)(param_1 + 0x128) == 0) ||
       (lVar4 = FUN_04458c90(*(long *)(param_1 + 0x128),*param_2,
                             *(undefined8 *)Mono_Net_Security_AsyncWriteRequest_TypeInfo),
       lVar4 == 0)) goto LAB_050c3d44;
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar2) {
      lVar7 = 0;
      do {
        if (uVar2 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar5 = *(long *)(lVar4 + 0x20 + lVar7 * 8);
        if (lVar5 == 0) goto LAB_050c3d44;
        FUN_05008654(param_2[1],lVar5,0,0);
        uVar2 = *(uint *)(lVar4 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar2);
    }
  }
  else {
    local_24 = *param_2;
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_24);
    uVar6 = FUN_04c00984(*(undefined8 *)UnityEngine_Rendering_AtlasAllocator_TypeInfo,uVar6,0);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
    }
    FUN_05c41e34(uVar6,0);
  }
  return;
}


