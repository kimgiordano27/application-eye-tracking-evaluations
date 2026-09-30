/*
FUNCTION_NAME: OVRPlugin$$GetHeadPoseModifier
ENTRY_POINT: 05673dbc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05673ed8) */

void OVRPlugin__GetHeadPoseModifier(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  long unaff_x19;
  undefined4 *unaff_x20;
  int unaff_w21;
  long lVar5;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if (unaff_w21 == param_1) {
    lVar5 = *(long *)System_Collections_Generic_IList<JToken>_TypeInfo;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      FUN_02dcfd74(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 8);
    if (*(long *)(lVar4 + 0x38) == 0) {
      FUN_02dcfd74(lVar4);
    }
    if (((iStack0000000000000028 < 1) || (in_stack_00000020 == 0)) ||
       (lVar4 = FUN_036ec9f8(in_stack_00000020,
                             CONCAT44(uStack000000000000002c,iStack0000000000000028),
                             *(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x28)), lVar4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)
               FUN_036ec90c(in_stack_00000020,
                            CONCAT44(uStack000000000000002c,iStack0000000000000028),
                            *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    }
    puVar1 = System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo;
    for (lVar4 = 0; iVar2 = FUN_0420f3fc(&stack0x00000020,*unaff_x24), lVar4 < iVar2;
        lVar4 = lVar4 + 1) {
      if (*(long *)(unaff_x19 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04df5020(*(long *)(unaff_x19 + 0x100),*unaff_x20,*puVar3,*(undefined8 *)puVar1);
      unaff_x20 = unaff_x20 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_0420f404(&stack0x00000020,*unaff_x23);
  FUN_0423f4f8(in_stack_00000018,*(undefined8 *)System_Collections_Generic_List<Material>_TypeInfo);
  if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(in_stack_00000010);
  }
  return;
}


