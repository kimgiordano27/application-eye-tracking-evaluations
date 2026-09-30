/*
FUNCTION_NAME: FUN_083c5334
ENTRY_POINT: 083c5334
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_083c5334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_09287040;
  if ((DAT_0989cd41 & 1) == 0) {
    FUN_04077588(PTR_DAT_09287040);
    FUN_04077588(PTR_DAT_093241d8);
    DAT_0989cd41 = 1;
  }
  plVar2 = (long *)FUN_04077674(*(undefined8 *)puVar1,4);
  lVar3 = FUN_0768ca3c(param_1,param_2,param_3,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
UnityEngine_Rendering_GPUInstanceDataBufferUploader__SubmitToGpu:
    uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_040ec700(plVar2 + 4,lVar3);
    lVar3 = FUN_0768ca3c(param_1 + 4,param_2,param_3,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto UnityEngine_Rendering_GPUInstanceDataBufferUploader__SubmitToGpu;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar3;
      thunk_FUN_040ec700(plVar2 + 5,lVar3);
      lVar3 = FUN_0768ca3c(param_1 + 8,param_2,param_3,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto UnityEngine_Rendering_GPUInstanceDataBufferUploader__SubmitToGpu;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_040ec700(plVar2 + 6,lVar3);
        lVar3 = FUN_0768ca3c(param_1 + 0xc,param_2,param_3,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto UnityEngine_Rendering_GPUInstanceDataBufferUploader__SubmitToGpu;
        puVar1 = PTR_DAT_093241d8;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar3;
          thunk_FUN_040ec700(plVar2 + 7,lVar3);
          FUN_074e752c(*(undefined8 *)puVar1,plVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


