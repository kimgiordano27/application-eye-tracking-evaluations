/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetEyeTextureArrayEnabled
ENTRY_POINT: 03399cb8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetEyeTextureArrayEnabled(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 *unaff_x21;
  long unaff_x24;
  undefined *puVar5;
  
  if (param_1 == 0) {
    if (*(long *)(unaff_x20 + 0x108) != 0) {
LAB_03399d88:
      *unaff_x21 = 1;
      FUN_0339d294();
      return;
    }
  }
  else {
    if (*(char *)(unaff_x20 + 0x88) != '\0') {
      if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if ((*(int *)(*(long *)(unaff_x24 + 0x20) + 0x30) != 1) && (*(long *)(unaff_x20 + 0x108) != 0)
         ) goto LAB_03399d88;
    }
    lVar2 = (**(code **)(param_1 + 0x18))
                      (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    if (lVar2 != 0) {
      *unaff_x21 = 0;
      return;
    }
  }
  cVar1 = *(char *)(unaff_x20 + 0x2a);
  lVar2 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_03295500(0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar5 = Method_System_Collections_Generic_HashSet<Guid>_Add__;
  if (cVar1 == '\0') {
    puVar5 = Method_System_Collections_Generic_HashSet<Guid>__ctor__;
  }
  uVar4 = thunk_FUN_01c273e8(puVar5);
  FUN_0336f2b8(uVar4,uVar3,uVar6,0);
  uVar3 = FUN_0335cdc4();
  uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Guid>_Clear__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar6);
}


