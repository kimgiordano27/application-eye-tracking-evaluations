/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 076e4414
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x22;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  while (in_x11 != param_6) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_0406ae20();
      goto LAB_076e4448;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
LAB_076e4448:
  fVar8 = (float)(*(code *)*puVar3)();
  plVar7 = *(long **)(unaff_x20 + 0x138);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    fVar10 = param_3;
    fVar11 = param_4;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
                    /* try { // try from 076e44ac to 077e463b has its CatchHandler @ 076e44ac
                       catch() { ... } // from try @ 076e44ac with catch @ 076e44ac
                       catch() { ... } // from try @ 076e466c with catch @ 076e44ac
                       catch() { ... } // from try @ 076e48e8 with catch @ 076e44ac
                       catch() { ... } // from try @ 076e4a00 with catch @ 076e44ac
                       catch() { ... } // from try @ 076e4a80 with catch @ 076e44ac */
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076e44b8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x22,0);
LAB_076e44b8:
    iVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_076e4518;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x22,1);
LAB_076e4518:
    fVar9 = (float)(*(code *)*puVar3)(plVar7,iVar1 + -1,puVar3[1]);
    if (unaff_x19 != 0) {
      uVar5 = FUN_076e33fc((param_4 - fVar11) * (param_4 - fVar11) +
                           (fVar8 - fVar9) * (fVar8 - fVar9) +
                           (param_3 - fVar10) * (param_3 - fVar10));
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_054b609c();
      }
      return uVar2 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


