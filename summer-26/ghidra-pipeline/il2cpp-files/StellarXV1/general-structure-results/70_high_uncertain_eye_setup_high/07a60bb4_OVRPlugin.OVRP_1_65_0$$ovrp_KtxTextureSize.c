/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize
ENTRY_POINT: 07a60bb4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  
  if (param_1 != 0) {
    uVar1 = thunk_FUN_089dc5b4(param_1,0);
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
    }
    uVar2 = FUN_089ca704(uVar1,0,0);
    fVar8 = 1.0;
    if ((uVar2 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x30) == 0) ||
          (lVar3 = FUN_089ca988(*(long *)(unaff_x19 + 0x30),0), lVar3 == 0)) ||
         (lVar3 = thunk_FUN_089dc5b4(lVar3,0), lVar3 == 0)) goto LAB_07a60d24;
      fVar8 = (float)FUN_089de258(lVar3,0);
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar3 = FUN_089ca988(*(long *)(unaff_x19 + 0x30),0);
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_07a60cb8;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar7,*unaff_x21,1);
LAB_07a60cb8:
        fVar9 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
        if (DAT_098854f0 == '\0') {
          FUN_04077588(PTR_DAT_09285d60);
          DAT_098854f0 = '\x01';
        }
        if (lVar3 != 0) {
          fVar9 = fVar9 / fVar8;
          lVar5 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
          FUN_089dc428(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                       fVar9 * *(float *)(lVar5 + 0x14),lVar3,0);
          return;
        }
      }
    }
  }
LAB_07a60d24:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


