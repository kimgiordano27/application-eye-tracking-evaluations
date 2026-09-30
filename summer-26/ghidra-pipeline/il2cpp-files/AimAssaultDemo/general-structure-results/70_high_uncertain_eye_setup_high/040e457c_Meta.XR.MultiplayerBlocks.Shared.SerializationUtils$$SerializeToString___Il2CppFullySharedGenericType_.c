/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 040e457c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (void)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07d97490);
  FUN_0373b518(PTR_DAT_07d96ac8);
  FUN_0373b518(PTR_DAT_07d97498);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_037756d4();
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x22 != 0) {
    FUN_04c65050(&stack0x00000040,*(int *)(unaff_x22 + 0x18) + 4,unaff_w23,1,
                 *(undefined8 *)PTR_DAT_07d97498);
    puVar2 = (undefined4 *)
             FUN_040938f8(in_stack_00000040,in_stack_00000048,*(undefined8 *)PTR_DAT_07d97490);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    *puVar2 = unaff_w21;
    iVar3 = (int)uVar4;
    lVar1 = 0;
    if (iVar3 != 0) {
      lVar1 = unaff_x22 + 0x20;
    }
    FUN_0754e55c(puVar2 + 1,lVar1,(long)iVar3,0);
    if (*(int *)(*(long *)PTR_DAT_07d889a0 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0407116c(&stack0x00000008,puVar2,**(undefined8 **)(unaff_x20 + 0x38));
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    FUN_04c65310(&stack0x00000040,*(undefined8 *)PTR_DAT_07d96ac8);
    unaff_x19[2] = in_stack_00000030;
    unaff_x19[1] = in_stack_00000028;
    *unaff_x19 = in_stack_00000020;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


