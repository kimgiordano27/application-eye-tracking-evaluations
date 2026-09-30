/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Supported
ENTRY_POINT: 0567cc00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_faceTracking2Supported(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x23;
  undefined8 in_stack_00000090;
  
  FUN_05676b8c();
  uVar2 = FUN_0566cc78();
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(unaff_x20 + 0x214) = in_stack_00000090._4_4_;
  }
  uVar3 = FUN_05673ba0();
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  LeanTween__value();
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0567ccf4;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar7,*unaff_x23,0);
LAB_0567ccf4:
    uVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 == 0) goto LAB_0567cbc8;
      FUN_0563e294(unaff_x20 + 0xd8,0);
      uVar3 = 0;
    }
    else {
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_0567cbc8;
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)
               System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0567cd78;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02dd004c(plVar7,*(long *)
                                    System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo
                            ,0);
LAB_0567cd78:
      uVar1 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      *(undefined4 *)(unaff_x19 + 0x10) = 3;
      *(undefined4 *)(unaff_x19 + 0x14) = uVar1;
      uVar3 = 1;
    }
    return uVar3;
  }
LAB_0567cbc8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


