/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$.cctor
ENTRY_POINT: 0603abc0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_7_0___cctor(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  float fVar7;
  float fVar8;
  
  lVar1 = thunk_FUN_06e6b484();
  if (lVar1 != 0) {
    fVar7 = (float)FUN_06e6e3cc(lVar1,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar1 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0);
      plVar6 = *(long **)(unaff_x19 + 0x28);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x21) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_0603ac68;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*unaff_x21,1);
LAB_0603ac68:
        fVar8 = (float)(*(code *)*puVar2)(plVar6,puVar2[1]);
        if (DAT_07a3caf1 == '\0') {
          FUN_031f20f4(PTR_DAT_0759b378);
          DAT_07a3caf1 = '\x01';
        }
        if (lVar1 != 0) {
          fVar8 = fVar8 / fVar7;
          lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
          FUN_06e6b2fc(fVar8 * *(float *)(lVar3 + 0xc),fVar8 * *(float *)(lVar3 + 0x10),
                       fVar8 * *(float *)(lVar3 + 0x14),lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


