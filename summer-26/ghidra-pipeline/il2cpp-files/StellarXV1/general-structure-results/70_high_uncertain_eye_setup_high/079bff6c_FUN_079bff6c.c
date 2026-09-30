/*
FUNCTION_NAME: FUN_079bff6c
ENTRY_POINT: 079bff6c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_079bff6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5
                 ,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined4 local_64;
  
                    /* try { // try from 079bff6c to 07abff83 has its CatchHandler @ 079c00a0 */
                    /* try { // try from 079bff84 to 07ac008f has its CatchHandler @ 079bfc70 */
  if ((DAT_09894d9b & 1) == 0) {
    FUN_04077588(PTR_DAT_092ee5b8);
    FUN_04077588(PTR_DAT_092ed7f8);
    DAT_09894d9b = 1;
  }
  lVar4 = *(long *)(param_4 + 0x1a0);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_5) {
LAB_079c0144:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_5 * 8 + 0x20);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        return;
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar3 = FUN_04077674(*(undefined8 *)PTR_DAT_092ed7f8,
                             *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18));
        puVar2 = PTR_DAT_092ee5b8;
        lVar5 = *(long *)(lVar4 + 0x18);
        if (lVar5 != 0) {
          uVar6 = 0;
          lVar7 = 0x20;
          while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18)) {
            if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_079c0144;
            if ((*(long *)(param_4 + 0x1b8) == 0) ||
               (OVRPlugin_LayerDesc__ToString
                          (&local_7c,*(long *)(param_4 + 0x1b8),
                           *(undefined4 *)(lVar5 + uVar6 * 4 + 0x20),0), lVar3 == 0))
            goto LAB_079c009c;
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_079c0144;
            puVar1 = (undefined8 *)(lVar3 + lVar7);
            lVar7 = lVar7 + 0x1c;
            uVar6 = uVar6 + 1;
            *(undefined4 *)(puVar1 + 3) = local_64;
            puVar1[2] = local_6c;
            puVar1[1] = uStack_74;
            *puVar1 = local_7c;
            lVar5 = *(long *)(lVar4 + 0x18);
            if (lVar5 == 0) goto LAB_079c009c;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          fVar8 = (float)FUN_079f383c(lVar3,0);
          if (fVar8 < *(float *)(lVar4 + 0x28) - *(float *)(param_4 + 0x15c)) {
            if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_079c009c;
            uVar6 = FUN_079c0148(param_1,param_2,param_3,*(long *)(param_4 + 0x1a8),param_5,
                                 *(undefined8 *)(param_4 + 0x1b0),*(undefined8 *)(param_4 + 0x1b8),
                                 param_6);
            if ((uVar6 & 1) != 0) {
              fVar8 = *(float *)(lVar4 + 0x2c) + *(float *)(param_4 + 0x1d0);
              fVar9 = *(float *)(param_4 + 0x160);
              *(float *)(lVar4 + 0x2c) = fVar8;
              if (fVar8 < fVar9) {
                return;
              }
              *(undefined2 *)(lVar4 + 0x10) = 0;
              return;
            }
          }
          *(undefined4 *)(lVar4 + 0x2c) = 0;
          return;
        }
      }
    }
  }
LAB_079c009c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


