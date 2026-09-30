/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_REQUEST_TYPE_NOT_SUPPORTED_get
ENTRY_POINT: 085326ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_TYPE_NOT_SUPPORTED_get
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x23;
  undefined8 uVar5;
  long *unaff_x24;
  undefined8 uVar6;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_000002e0;
  
  FUN_089b6a44(param_1,param_2,0);
  if (((*(long *)(unaff_x23 + 0x1a0) != 0) && (*unaff_x24 != 0)) &&
     (*(long *)(*unaff_x24 + 0x1a0) != 0)) {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1a0) + 0x88);
    uStack0000000000000064 = in_stack_000002e0;
    lVar2 = FUN_089c7534();
    if (lVar2 != 0) {
      FUN_089db960(lVar2,0);
      puVar1 = PTR_DAT_0932dd00;
      lVar2 = *(long *)PTR_DAT_0932dd00;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar2 = *(long *)puVar1;
      }
      puVar4 = *(undefined8 **)(lVar2 + 0xb8);
      if (puVar4[1] == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar4 = *(undefined8 **)(*(long *)PTR_DAT_0932dd00 + 0xb8);
        }
        uVar5 = *puVar4;
        uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932dce8);
        FUN_05698794(uVar3,uVar5,*(undefined8 *)PTR_DAT_0932dcf0,0);
        puVar4 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_0932dd00 + 0xb8) + 8);
        *puVar4 = uVar3;
        thunk_FUN_040ec700(puVar4,uVar3);
      }
      if (*(int *)(*(long *)PTR_DAT_09326d30 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uStack0000000000000004 = uStack0000000000000064;
      FUN_0843c3f0(unaff_s12,unaff_s13,unaff_s10,uVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


