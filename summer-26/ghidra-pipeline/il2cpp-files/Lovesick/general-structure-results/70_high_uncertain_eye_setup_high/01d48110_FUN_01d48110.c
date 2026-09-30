/*
FUNCTION_NAME: FUN_01d48110
ENTRY_POINT: 01d48110
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d48274) */

long FUN_01d48110(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long local_48;
  
  if ((DAT_0377f4d8 & 1) == 0) {
    thunk_FUN_00d48444(Mono_Security_ASN1_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_InjectOptionalPointableElement__
                      );
    thunk_FUN_00d48444(OVRPlugin_Hand_TypeInfo);
    DAT_0377f4d8 = 1;
  }
  if (*(long *)(param_1 + 0x210) == 0) {
LAB_01d48270:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01d0916c(*(long *)(param_1 + 0x210),0);
  puVar1 = OVRPlugin_Hand_TypeInfo;
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        lVar2 = 0;
        iVar4 = 6;
LAB_01d481f8:
        if (*(long *)(param_1 + 0x210) == 0) goto LAB_01d48270;
        FUN_01d09924(*(long *)(param_1 + 0x210),0);
        if ((iVar4 == 6) || (iVar4 == 0)) {
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)Mono_Security_ASN1_TypeInfo);
          if (lVar2 == 0) goto LAB_01d48270;
          FUN_01d8a760(lVar2,param_1,param_2,param_3,param_4,0);
          FUN_01d8b3e4(lVar2,0);
        }
        return lVar2;
      }
      FUN_0132138c(lVar2,iVar4,&local_48,*(undefined8 *)puVar1);
      lVar2 = local_48;
      if ((local_48 != 0) &&
         (uVar3 = FUN_01d8af64(local_48,param_2,param_3,param_4,0), (uVar3 & 1) != 0)) {
        iVar4 = 5;
        goto LAB_01d481f8;
      }
      lVar2 = *(long *)(param_1 + 0x70);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


