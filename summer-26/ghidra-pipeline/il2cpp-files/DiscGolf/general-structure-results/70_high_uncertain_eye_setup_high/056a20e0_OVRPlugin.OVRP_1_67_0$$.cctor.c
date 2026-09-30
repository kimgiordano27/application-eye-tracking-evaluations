/*
FUNCTION_NAME: OVRPlugin.OVRP_1_67_0$$.cctor
ENTRY_POINT: 056a20e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_67_0___cctor(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 in_stack_00000018;
  
  lVar3 = FUN_066465f4();
  if (lVar3 != 0) {
    FUN_06644f34(lVar3,0);
    do {
      uVar4 = FUN_06645a34(lVar3,0);
      if ((uVar4 & 1) != 0) break;
      iVar1 = FUN_06645538(lVar3,0);
    } while ((iVar1 == 0) || (iVar1 = FUN_06645538(lVar3,0), iVar1 == 1));
    iVar1 = FUN_06645538(lVar3,0);
    if (iVar1 != 1) {
      return false;
    }
    lVar3 = FUN_06644e7c(lVar3,0);
    if (lVar3 != 0) {
      lVar3 = FUN_06643bd0(lVar3,0);
      if (*(int *)(*(long *)PTR_DAT_06a0f540 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a0f540);
      }
      uVar5 = FUN_054a874c();
      in_stack_00000018 = FUN_0540bf88(lVar3,3,0);
      if (unaff_x19 != 0) {
        uVar2 = FUN_05661968();
        uVar6 = FUN_0540beb8(&stack0x00000018,0);
        if (lVar3 != 0) {
          if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          iVar1 = FUN_0564aff8(uVar2,uVar6,*(undefined4 *)(lVar3 + 0x18),uVar5,&stack0x0000000c,0);
          FUN_0540bf9c(&stack0x00000018,0);
          return iVar1 == 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


