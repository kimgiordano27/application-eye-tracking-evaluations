/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContextNative
ENTRY_POINT: 0786ff24
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContextNative
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  undefined8 *unaff_x23;
  
  FUN_078615f4(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0x18) = unaff_x20;
  thunk_FUN_040ec700();
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x20) = param_1;
    thunk_FUN_040ec700((long *)(unaff_x19 + 0x20),param_1);
    lVar4 = *(long *)(PTR_DAT_09285980 + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = FUN_0768890c(lVar4 + 0x20,0);
    lVar4 = thunk_FUN_040b4efc(*unaff_x23);
    FUN_078615f4(lVar4,0,0);
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x18),uVar3);
    *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
    puVar2 = PTR_DAT_092e5b60;
    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
      *(long *)(unaff_x19 + 0x28) = lVar4;
      thunk_FUN_040ec700((long *)(unaff_x19 + 0x28),lVar4);
      uVar3 = FUN_0768890c(*(undefined8 *)puVar2,0);
      lVar4 = thunk_FUN_040b4efc(*unaff_x23);
      FUN_078615f4(lVar4,0,0);
      *(undefined8 *)(lVar4 + 0x18) = uVar3;
      thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x18),uVar3);
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
      puVar2 = PTR_DAT_092dbf60;
      if (2 < uVar1) {
        *(long *)(unaff_x19 + 0x30) = lVar4;
        thunk_FUN_040ec700((long *)(unaff_x19 + 0x30),lVar4);
        uVar3 = FUN_0768890c(*(undefined8 *)puVar2,0);
        lVar4 = thunk_FUN_040b4efc(*unaff_x23);
        FUN_078615f4(lVar4,0,0);
        *(undefined8 *)(lVar4 + 0x18) = uVar3;
        thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x18),uVar3);
        *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
        puVar2 = PTR_DAT_092b9698;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
          *(long *)(unaff_x19 + 0x38) = lVar4;
          thunk_FUN_040ec700((long *)(unaff_x19 + 0x38),lVar4);
          uVar3 = FUN_0768890c(*(undefined8 *)puVar2,0);
          lVar4 = thunk_FUN_040b4efc(*unaff_x23);
          FUN_078615f4(lVar4,0,0);
          *(undefined8 *)(lVar4 + 0x18) = uVar3;
          thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x18),uVar3);
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
          if (4 < uVar1) {
            *(long *)(unaff_x19 + 0x40) = lVar4;
            thunk_FUN_040ec700((long *)(unaff_x19 + 0x40),lVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


