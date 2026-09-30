/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContext
ENTRY_POINT: 0786fea8
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


long Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContext(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092dbf60);
  FUN_04077588(PTR_DAT_092b9698);
  *(undefined1 *)(unaff_x22 + 0x4f1) = 1;
  puVar3 = PTR_DAT_092e5828;
  puVar2 = PTR_DAT_092e5820;
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *unaff_x21;
  }
  *unaff_x19 = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_040ec700();
  lVar4 = FUN_04077674(*(undefined8 *)puVar2,5);
  lVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_078615f4(lVar5,0,0);
  *(undefined8 *)(lVar5 + 0x18) = unaff_x20;
  thunk_FUN_040ec700();
  *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(long *)(lVar4 + 0x20) = lVar5;
      thunk_FUN_040ec700((long *)(lVar4 + 0x20),lVar5);
      lVar5 = *(long *)(PTR_DAT_09285980 + 0x10);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar6 = FUN_0768890c(lVar5 + 0x20,0);
      lVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
      FUN_078615f4(lVar5,0,0);
      *(undefined8 *)(lVar5 + 0x18) = uVar6;
      thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x18),uVar6);
      *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
      puVar2 = PTR_DAT_092e5b60;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(long *)(lVar4 + 0x28) = lVar5;
        thunk_FUN_040ec700((long *)(lVar4 + 0x28),lVar5);
        uVar6 = FUN_0768890c(*(undefined8 *)puVar2,0);
        lVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
        FUN_078615f4(lVar5,0,0);
        *(undefined8 *)(lVar5 + 0x18) = uVar6;
        thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x18),uVar6);
        uVar1 = *(uint *)(lVar4 + 0x18);
        *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
        puVar2 = PTR_DAT_092dbf60;
        if (2 < uVar1) {
          *(long *)(lVar4 + 0x30) = lVar5;
          thunk_FUN_040ec700((long *)(lVar4 + 0x30),lVar5);
          uVar6 = FUN_0768890c(*(undefined8 *)puVar2,0);
          lVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
          FUN_078615f4(lVar5,0,0);
          *(undefined8 *)(lVar5 + 0x18) = uVar6;
          thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x18),uVar6);
          *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
          puVar2 = PTR_DAT_092b9698;
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(long *)(lVar4 + 0x38) = lVar5;
            thunk_FUN_040ec700((long *)(lVar4 + 0x38),lVar5);
            uVar6 = FUN_0768890c(*(undefined8 *)puVar2,0);
            lVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
            FUN_078615f4(lVar5,0,0);
            *(undefined8 *)(lVar5 + 0x18) = uVar6;
            thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x18),uVar6);
            uVar1 = *(uint *)(lVar4 + 0x18);
            *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
            if (4 < uVar1) {
              *(long *)(lVar4 + 0x40) = lVar5;
              thunk_FUN_040ec700((long *)(lVar4 + 0x40),lVar5);
              return lVar4;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


