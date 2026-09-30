/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 0740799c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPoint(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  
  FUN_085eb410(in_stack_00000008._4_4_,in_stack_00000010,param_1,0);
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar1 = FUN_085dee20(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
    uVar2 = FUN_085eb090(lVar1,0);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e68f00);
    }
    uVar3 = FUN_085decd4(uVar2,0,0);
    fVar8 = 1.0;
    if ((uVar3 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x30) == 0) ||
          (lVar1 = FUN_085dee20(*(long *)(unaff_x19 + 0x30),0), lVar1 == 0)) ||
         (lVar1 = FUN_085eb090(lVar1,0), lVar1 == 0)) goto LAB_07407b28;
      fVar8 = (float)FUN_085ecd7c(lVar1,0);
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar1 = FUN_085dee20(*(long *)(unaff_x19 + 0x30),0);
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_07407abc;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar7,*unaff_x21,1);
LAB_07407abc:
        fVar9 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
        if (DAT_0940fff0 == '\0') {
          FUN_03c8f898(PTR_DAT_08e68e18);
          DAT_0940fff0 = '\x01';
        }
        if (lVar1 != 0) {
          fVar9 = fVar9 / fVar8;
          lVar5 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
          FUN_085eb934(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                       fVar9 * *(float *)(lVar5 + 0x14),lVar1,0);
          return;
        }
      }
    }
  }
LAB_07407b28:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


