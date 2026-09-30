/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$.cctor
ENTRY_POINT: 056a012c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0___cctor(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 uVar4;
  float fVar5;
  undefined8 uStack0000000000000000;
  float fStack0000000000000008;
  
  *(undefined1 *)(unaff_x22 + 0x89f) = in_w8;
  fStack0000000000000008 = 0.0;
  uStack0000000000000000 = 0;
  uVar2 = FUN_054e5768(&stack0x0000000c,0);
  FUN_05362cb4(*unaff_x21,uVar2,0);
  lVar3 = FUN_02d966a4(*unaff_x20,5);
  uVar4 = FUN_0564288c();
  uStack0000000000000000 = CONCAT44(param_2,uVar4);
  fStack0000000000000008 = param_3;
  uVar2 = FUN_02ea8208();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
    LeanTween__value((undefined8 *)(lVar3 + 0x20),uVar2);
    puVar1 = PTR_DAT_069fc558;
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_069fc558;
      LeanTween__value((undefined8 *)(lVar3 + 0x28));
      FUN_0565771c(unaff_x19 + 0xc,0);
      fVar5 = (float)FUN_0633f818(0);
      param_2 = param_2 * DAT_010fcf40;
      param_3 = param_3 * DAT_010fcf40;
      uVar4 = FUN_0633ff58(fVar5 * DAT_010fcf40,0);
      uStack0000000000000000 = CONCAT44(param_2,uVar4);
      fStack0000000000000008 = param_3;
      uVar2 = FUN_02ea8208();
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = uVar2;
        LeanTween__value((undefined8 *)(lVar3 + 0x30),uVar2);
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)puVar1;
          LeanTween__value((undefined8 *)(lVar3 + 0x38));
          uVar4 = FUN_0564288c(unaff_x19 + 0x1c,0);
          uStack0000000000000000 = CONCAT44(param_2,uVar4);
          fStack0000000000000008 = param_3;
          uVar2 = FUN_02ea8208();
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) = uVar2;
            LeanTween__value();
            FUN_0536dde4(lVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


