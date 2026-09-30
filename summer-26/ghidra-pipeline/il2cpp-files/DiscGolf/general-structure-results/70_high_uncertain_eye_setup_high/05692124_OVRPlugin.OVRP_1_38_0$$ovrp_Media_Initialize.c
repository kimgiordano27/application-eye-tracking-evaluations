/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Initialize
ENTRY_POINT: 05692124
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Initialize(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  int unaff_w21;
  long lVar7;
  
  (**(code **)(*unaff_x19 + 0x188))();
  FUN_0569154c();
  (**(code **)(*unaff_x19 + 0x188))();
                    /* try { // try from 05692164 to 057921f3 has its CatchHandler @ 05692164
                       catch() { ... } // from try @ 05692164 with catch @ 05692164
                       catch() { ... } // from try @ 05692254 with catch @ 05692164
                       catch() { ... } // from try @ 056922c8 with catch @ 05692164 */
  FUN_0569154c();
  iVar3 = (**(code **)(*unaff_x19 + 0x198))();
  if (iVar3 != unaff_w21) {
    (**(code **)(*unaff_x19 + 0x198))();
    FUN_05692370();
  }
  puVar2 = System_Collections_Generic_Dictionary<string,_UriParser>_TypeInfo;
  if (unaff_x19[5] != 0) {
    thunk_FUN_0631c714(unaff_x19[5],unaff_x19[0xd],0);
    lVar7 = unaff_x19[0xd];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*unaff_x20 != 0) && (lVar7 != 0)) {
      FUN_0631a9d8(lVar7,**(undefined4 **)(*(long *)puVar2 + 0xb8),
                   *(undefined1 *)(*unaff_x20 + 0xd4),0);
      lVar7 = *(long *)puVar2;
      lVar6 = unaff_x19[0xd];
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar2;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar4 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar6 != 0) {
        FUN_0631a9d8(lVar6,uVar1,uVar4 & 1,0);
        lVar7 = *(long *)puVar2;
        lVar6 = unaff_x19[0xd];
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar2;
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 4);
        uVar5 = (**(code **)(*unaff_x19 + 0x198))();
        if (lVar6 != 0) {
          FUN_0631a9d8(lVar6,uVar1,uVar5,0);
          if (unaff_x19[5] != 0) {
            thunk_FUN_0631c648(unaff_x19[5],unaff_x19[0xd],0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


