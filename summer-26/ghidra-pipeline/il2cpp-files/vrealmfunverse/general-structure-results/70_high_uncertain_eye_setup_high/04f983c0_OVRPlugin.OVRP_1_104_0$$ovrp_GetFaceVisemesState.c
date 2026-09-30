/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceVisemesState
ENTRY_POINT: 04f983c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetFaceVisemesState(void)

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
  
  thunk_FUN_02b9ad44();
  uVar1 = FUN_05c8c45c();
  fVar7 = 1.0;
  if ((uVar1 & 1) != 0) {
    if (((*(long *)(unaff_x19 + 0x30) == 0) ||
        (lVar2 = FUN_05c8c8e0(*(long *)(unaff_x19 + 0x30),0), lVar2 == 0)) ||
       (lVar2 = thunk_FUN_05c9c9cc(lVar2,0), lVar2 == 0)) goto LAB_04f98508;
    fVar7 = (float)FUN_05c9e358(lVar2,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar2 = FUN_05c8c8e0(*(long *)(unaff_x19 + 0x30),0);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_04f9849c;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar6,*unaff_x21,1);
LAB_04f9849c:
      fVar8 = (float)(*(code *)*puVar3)(plVar6,puVar3[1]);
      if (DAT_066c1d98 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1d98 = '\x01';
      }
      if (lVar2 != 0) {
        fVar8 = fVar8 / fVar7;
        lVar4 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
        FUN_05c9c840(fVar8 * *(float *)(lVar4 + 0xc),fVar8 * *(float *)(lVar4 + 0x10),
                     fVar8 * *(float *)(lVar4 + 0x14),lVar2,0);
        return;
      }
    }
  }
LAB_04f98508:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


