/*
FUNCTION_NAME: OVRPlugin$$get_productName
ENTRY_POINT: 0693dba0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_productName(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w8;
  undefined8 *puVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar7;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9e200();
  if ((uVar2 & 1) != 0) {
    puVar5 = (undefined8 *)PTR_DAT_084b61b0;
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = (undefined8 *)PTR_DAT_084b61b0;
    }
LAB_0693dc44:
    FUN_07c4fb40(*puVar5,0);
    return 0;
  }
  if (unaff_x20 != 0) {
    lVar3 = FUN_045614d0();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x22);
    }
    uVar2 = FUN_07c9e200(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      puVar5 = (undefined8 *)PTR_DAT_084b61a0;
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar5 = (undefined8 *)PTR_DAT_084b61a0;
      }
      goto LAB_0693dc44;
    }
    if (lVar3 != 0) {
      FUN_07c35770(lVar3);
      (**(code **)(*unaff_x19 + 0x2a8))();
      FUN_07c35d4c(lVar3,0);
      uVar1 = (**(code **)(*unaff_x19 + 0x2c8))();
      FUN_07c35f4c(lVar3,uVar1 & 1,0);
      uVar1 = (**(code **)(*unaff_x19 + 0x278))();
      FUN_07c35e88(lVar3,uVar1 & 1,0);
      fVar7 = (float)(**(code **)(*unaff_x19 + 0x298))();
      if ((unaff_x19[2] != 0) && (lVar6 = *(long *)(unaff_x19[2] + 0xf0), lVar6 != 0)) {
        FUN_07c35150(fVar7 * *(float *)(lVar6 + 0x108),lVar3,0);
        uVar4 = (**(code **)(*unaff_x19 + 0x288))();
        thunk_FUN_07c3556c(lVar3,uVar4,0);
        FUN_07c3637c(lVar3,100,0);
        (**(code **)(*unaff_x19 + 0x2b8))();
        FUN_07c362a8(lVar3,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


