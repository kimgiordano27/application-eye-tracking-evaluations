/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboard
ENTRY_POINT: 0567a0d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateVirtualKeyboard(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  
  puVar1 = System_Collections_Generic_List<JsonObject>_TypeInfo;
  unaff_x19[5] = unaff_x21;
  LeanTween__value();
  uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x18);
  lVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar1,&stack0x0000000c);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02dd3048(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_0567a1f0:
    uVar4 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4,0);
  }
  if (2 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[6] = lVar2;
    LeanTween__value(unaff_x19 + 6,lVar2);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
LAB_0567a1fc:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = thunk_FUN_06354368(*(long *)(unaff_x20 + 0x20),0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02dd3048(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_0567a1f0;
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffffc) != 0) {
      unaff_x19[7] = lVar2;
      LeanTween__value(unaff_x19 + 7,lVar2);
      if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_0567a1fc;
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x48);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02dd3048(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_0567a1f0;
      puVar1 = System_Collections_Generic_List<RaycastHit>_TypeInfo;
      if (4 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[8] = lVar2;
        LeanTween__value(unaff_x19 + 8,lVar2);
        FUN_0536e164(*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


