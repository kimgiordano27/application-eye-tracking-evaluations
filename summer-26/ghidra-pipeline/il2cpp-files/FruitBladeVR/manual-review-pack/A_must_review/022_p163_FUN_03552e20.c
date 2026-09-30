/*
FUNCTION_NAME: FUN_03552e20
ENTRY_POINT: 03552e20
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void FUN_03552e20(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_03ef630e & 1) == 0) {
    FUN_01c5c92c(PTR_DAT_03cde740);
    DAT_03ef630e = 1;
  }
  puVar1 = PTR_DAT_03cde740;
  if (param_2 == 2) {
    lVar3 = *(long *)(param_1 + 0x110);
    if (*(int *)(*(long *)PTR_DAT_03cde740 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    if (lVar3 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_000008E9_PostfixBurstDelegate__EndInvoke
    ;
    FUN_03747fe0(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x110),0);
LAB_03552f18:
    lVar3 = *(long *)(param_1 + 0x110);
    if (lVar3 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_000008E9_PostfixBurstDelegate__EndInvoke
    ;
    uVar2 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x118);
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x110);
      if (*(int *)(*(long *)PTR_DAT_03cde740 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if (lVar3 == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_000008E9_PostfixBurstDelegate__EndInvoke
      ;
      FUN_037481e4(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x110),0);
      goto LAB_03552f18;
    }
    lVar3 = *(long *)(param_1 + 0x110);
    if (*(int *)(*(long *)PTR_DAT_03cde740 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    if (lVar3 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_000008E9_PostfixBurstDelegate__EndInvoke
    ;
    FUN_03747fe0(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x118),0);
    lVar3 = *(long *)(param_1 + 0x110);
    if (lVar3 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_000008E9_PostfixBurstDelegate__EndInvoke
    ;
    uVar2 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x110);
  }
  FUN_037481e4(lVar3,uVar2,0);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_037481e4(*(long *)(param_1 + 0x110),
                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x120),0);
    return;
  }

  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_000008E9_PostfixBurstDelegate__EndInvoke
  :
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


