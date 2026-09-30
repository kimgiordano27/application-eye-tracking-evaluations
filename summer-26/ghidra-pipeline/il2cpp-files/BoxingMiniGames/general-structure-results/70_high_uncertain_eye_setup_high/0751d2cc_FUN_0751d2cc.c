/*
FUNCTION_NAME: FUN_0751d2cc
ENTRY_POINT: 0751d2cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0751d554) */

void FUN_0751d2cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,uint param_8)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  long *local_68;
  
  if ((DAT_07ef4b9f & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079fdb90);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b9f = 1;
  }
  local_68 = (long *)0x0;
  if (param_4 != 0) {
    if (*(long *)(param_4 + 0x30) != 0) {
      FUN_0751d2cc(param_1,param_2,param_3,*(long *)(param_4 + 0x30),param_5,param_6,param_7,
                   param_8 & 1);
    }
    lVar5 = *(long *)(param_4 + 0x20);
    if (lVar5 != 0) {
      uVar8 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar8) {
                    /* try { // try from 0751d540 to 0761d547 has its CatchHandler @ 0751d5b8 */
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar5 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar5 == 0) || (lVar9 = *(long *)(lVar5 + 0x18), lVar9 == 0)) break;
        lVar5 = *(long *)(lVar5 + 0x10);
        uVar2 = FUN_0750e42c(param_5,*(undefined8 *)(lVar9 + 0x30),&local_68);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(*(long *)
                        Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                      + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar3 = (long *)FUN_07538544(param_1,lVar9,param_6,param_2,param_3,param_7,0);
          local_68 = (long *)FUN_0751abdc(param_1,plVar3);
          if (plVar3 != (long *)0x0) {
            lVar6 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
                    /* try { // try from 0751d428 to 0761d53f has its CatchHandler @ 0751d428
                       catch() { ... } // from try @ 0751d428 with catch @ 0751d428
                       catch() { ... } // from try @ 0751d588 with catch @ 0751d428
                       catch() { ... } // from try @ 0751d5b0 with catch @ 0751d428
                       catch() { ... } // from try @ 0751d5dc with catch @ 0751d428
                       catch() { ... } // from try @ 0751d600 with catch @ 0751d428 */
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_0751d464;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079f4598,0);
LAB_0751d464:
            (*(code *)*puVar4)(plVar3,puVar4[1]);
          }
          if (*(char *)(lVar9 + 0x10) == '\0') goto LAB_0751d48c;
          if ((local_68 != (long *)0x0) && ((param_8 & 1) == 0)) {
LAB_0751d498:
            bVar1 = *(byte *)(*(long *)PTR_DAT_079fdb90 + 0x130);
            if ((*(byte *)(*local_68 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*local_68 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_079fdb90)) goto LAB_0751d4cc;
            FUN_074ee0ac(*(undefined1 *)(param_1 + 0x9a),0);
          }
        }
        else {
LAB_0751d48c:
          if ((param_8 & 1) == 0) {
            if (local_68 != (long *)0x0) goto LAB_0751d498;
LAB_0751d4cc:
            if (lVar5 == 0) break;
            (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),param_2,local_68,*(undefined8 *)(lVar5 + 0x28))
            ;
          }
        }
        lVar5 = *(long *)(param_4 + 0x20);
        uVar8 = uVar8 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


