/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$.cctor
ENTRY_POINT: 05bf7f74
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_96_0___cctor(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338(param_1);
  }
  uVar1 = FUN_069d69b8();
  fVar7 = 1.0;
  if ((uVar1 & 1) != 0) {
    if (((*(long *)(unaff_x19 + 0x30) == 0) ||
        (lVar2 = FUN_069d6e00(*(long *)(unaff_x19 + 0x30),0), lVar2 == 0)) ||
       (lVar2 = thunk_FUN_069e7970(lVar2,0), lVar2 == 0)) goto LAB_05bf80c8;
    fVar7 = (float)FUN_069e9470(lVar2,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar2 = FUN_069d6e00(*(long *)(unaff_x19 + 0x30),0);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_05bf805c;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*unaff_x21,1);
LAB_05bf805c:
      fVar8 = (float)(*(code *)*puVar3)(plVar6,puVar3[1]);
      if (DAT_075457b6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457b6 = '\x01';
      }
      if (lVar2 != 0) {
        fVar8 = fVar8 / fVar7;
        lVar4 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
        FUN_069e77e4(fVar8 * *(float *)(lVar4 + 0xc),fVar8 * *(float *)(lVar4 + 0x10),
                     fVar8 * *(float *)(lVar4 + 0x14),lVar2,0);
        return;
      }
    }
  }
LAB_05bf80c8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


