/*
FUNCTION_NAME: FUN_079bf524
ENTRY_POINT: 079bf524
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_079bf524(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5
                 ,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_90 [4];
  undefined8 local_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
                    /* try { // try from 079bf55c to 07abf59b has its CatchHandler @ 079bf748 */
  if ((DAT_09894d9a & 1) == 0) {
    FUN_04077588(PTR_DAT_092ee5b8);
    FUN_04077588(PTR_DAT_092ed7f8);
    DAT_09894d9a = 1;
  }
  lVar4 = *(long *)(param_4 + 0x1a0);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_5) {
LAB_079bf7b0:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_5 * 8 + 0x20);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x10) != '\0') {
        return;
      }
      if (*(long *)(param_4 + 0x1a8) != 0) {
        FUN_079bf9ac(*(long *)(param_4 + 0x1a8),param_5,*(undefined8 *)(param_4 + 0x1b0));
        lVar6 = *(long *)(param_4 + 0x1a8);
        if (lVar6 != 0) {
                    /* try { // try from 079bf5cc to 07abf5f7 has its CatchHandler @ 079bf734 */
          FUN_079c1cec(lVar6,param_5,0);
          uVar2 = FUN_079c2018(param_1,param_2,param_3,lVar6,param_6,0,0);
          if ((uVar2 & 1) != 0) {
            return;
          }
                    /* try { // try from 079bf5f8 to 07abf633 has its CatchHandler @ 079bf744 */
          if (*(long *)(param_4 + 0x1a8) != 0) {
            uVar2 = FUN_079bfb1c(param_1,param_2,param_3,*(long *)(param_4 + 0x1a8),param_5,
                                 *(undefined8 *)(param_4 + 0x1b0),*(undefined8 *)(param_4 + 0x1b8),
                                 param_6);
            if ((uVar2 & 1) == 0) {
              return;
            }
            *(undefined4 *)(lVar4 + 0x2c) = 0;
            *(undefined2 *)(lVar4 + 0x10) = 0x101;
            if (*(long *)(param_4 + 0x1a8) != 0) {
                    /* try { // try from 079bf634 to 07abf643 has its CatchHandler @ 079bf724 */
              FUN_079bfe74(*(long *)(param_4 + 0x1a8),*(undefined8 *)(lVar4 + 0x18),
                           *(undefined8 *)(lVar4 + 0x20),1);
              if (*(long *)(lVar4 + 0x18) != 0) {
                lVar6 = FUN_04077674(*(undefined8 *)PTR_DAT_092ed7f8,
                                     *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18));
                lVar5 = *(long *)(lVar4 + 0x18);
                if (lVar5 != 0) {
                  uVar2 = 0;
                  lVar7 = 0x20;
                  while ((long)uVar2 < (long)(int)*(uint *)(lVar5 + 0x18)) {
                    if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_079bf790;
                    /* try { // try from 079bf688 to 07abf6b3 has its CatchHandler @ 079bf73c */
                    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_079bf7b0;
                    lVar3 = *(long *)(*(long *)(param_4 + 0x1a8) + 0x10);
                    if ((lVar3 == 0) ||
                       (OVRPlugin_LayerDesc__ToString
                                  (&local_6c,lVar3,*(undefined4 *)(lVar5 + uVar2 * 4 + 0x20),0),
                       lVar6 == 0)) goto LAB_079bf790;
                    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_079bf7b0;
                    puVar1 = (undefined8 *)(lVar6 + lVar7);
                    lVar7 = lVar7 + 0x1c;
                    uVar2 = uVar2 + 1;
                    *(undefined4 *)(puVar1 + 3) = local_54;
                    puVar1[2] = CONCAT44(uStack_58,local_5c);
                    puVar1[1] = CONCAT44(uStack_60,uStack_64);
                    *puVar1 = local_6c;
                    lVar5 = *(long *)(lVar4 + 0x18);
                    if (lVar5 == 0) goto LAB_079bf790;
                  }
                  if (*(int *)(*(long *)PTR_DAT_092ee5b8 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar8 = FUN_079f383c(lVar6,0);
                  lVar6 = *(long *)(lVar4 + 0x18);
                  *(undefined4 *)(lVar4 + 0x28) = uVar8;
                  if (lVar6 != 0) {
                    uVar2 = 0;
                    goto LAB_079bf71c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_079bf790;
  while( true ) {
    lVar7 = *(long *)(param_4 + 0x1b0);
    uVar8 = *(undefined4 *)(lVar6 + uVar2 * 4 + 0x20);
    FUN_07a5ce6c(&local_6c,lVar5,uVar8,0);
    if (lVar7 == 0) break;
    local_90[0] = local_6c;
    FUN_07a5ceac(lVar7,uVar8,local_90,0);
    lVar6 = *(long *)(lVar4 + 0x18);
    uVar2 = uVar2 + 1;
    if (lVar6 == 0) break;
LAB_079bf71c:
    if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar2) {
      return;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_079bf7b0;
    if ((*(long *)(param_4 + 0x1a8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_4 + 0x1a8) + 0x10), lVar5 == 0)) break;
  }
LAB_079bf790:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


