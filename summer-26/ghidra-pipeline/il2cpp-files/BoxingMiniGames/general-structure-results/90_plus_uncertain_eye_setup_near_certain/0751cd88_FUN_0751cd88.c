/*
FUNCTION_NAME: FUN_0751cd88
ENTRY_POINT: 0751cd88
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0751d1d0) */
/* WARNING: Removing unreachable block (ram,0x0751cfd4) */
/* WARNING: Removing unreachable block (ram,0x0751d2a8) */
/* WARNING: Removing unreachable block (ram,0x0751d180) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0751cd88(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,uint param_8)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *local_70;
  long *local_68;
  
                    /* try { // try from 0751cdb4 to 0761cdc7 has its CatchHandler @ 0751ced8 */
  if ((DAT_07ef4b9e & 1) == 0) {
                    /* try { // try from 0751cdd0 to 0761cddf has its CatchHandler @ 0751ced0 */
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079fd4b0);
                    /* try { // try from 0751cde4 to 0761cdf3 has its CatchHandler @ 0751cec4 */
    FUN_03642964(PTR_DAT_079fdb90);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                );
                    /* try { // try from 0751cdfc to 0761ce07 has its CatchHandler @ 0751cec8 */
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_get_pointerId__
                );
                    /* try { // try from 0751ce08 to 0761ce9b has its CatchHandler @ 0751cc70 */
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b9e = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (param_4 != 0) {
    if (*(long *)(param_4 + 0x30) != 0) {
      FUN_0751cd88(param_1,param_2,param_3,*(long *)(param_4 + 0x30),param_5,param_6,param_7,
                   param_8 & 1);
    }
    lVar7 = *(long *)(param_4 + 0x18);
    if (lVar7 != 0) {
      uVar9 = 0;
      do {
        if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar7 = *(long *)(lVar7 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar7 == 0) || (lVar12 = *(long *)(lVar7 + 0x20), lVar12 == 0)) break;
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                    + 0xe4) == 0) {
                    /* try { // try from 0751ce9c to 0761ce9f has its CatchHandler @ 0751cee0 */
          thunk_FUN_036a1978();
        }
                    /* try { // try from 0751cea0 to 0761cea3 has its CatchHandler @ 0751cc70 */
                    /* try { // try from 0751cea4 to 0761cea7 has its CatchHandler @ 0751cecc */
                    /* try { // try from 0751cea8 to 0761ceab has its CatchHandler @ 0751cec0 */
                    /* try { // try from 0751ceac to 0761ceaf has its CatchHandler @ 0751cebc */
                    /* try { // try from 0751ceb0 to 0761ceb3 has its CatchHandler @ 0751ceb4 */
        local_68 = (long *)FUN_03fc49a0(*(undefined4 *)(lVar12 + 0x18),
                                        *(undefined8 *)
                                         Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_get_pointerId__
                                       );
                    /* catch() { ... } // from try @ 0751ceb0 with catch @ 0751ceb4
                       try { // try from 0751ceb4 to 0761cef3 has its CatchHandler @ 0751cc70 */
        lVar12 = *(long *)(lVar7 + 0x20);
                    /* catch() { ... } // from try @ 0751cd78 with catch @ 0751ceb8 */
                    /* catch() { ... } // from try @ 0751ceac with catch @ 0751cebc */
                    /* catch() { ... } // from try @ 0751cea8 with catch @ 0751cec0 */
                    /* catch() { ... } // from try @ 0751cde4 with catch @ 0751cec4 */
        if (lVar12 == 0) {
LAB_0751d198:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
                    /* catch() { ... } // from try @ 0751cdfc with catch @ 0751cec8 */
        uVar11 = 0;
                    /* catch() { ... } // from try @ 0751cea4 with catch @ 0751cecc */
                    /* catch() { ... } // from try @ 0751cdd0 with catch @ 0751ced0 */
                    /* catch() { ... } // from try @ 0751cd5c with catch @ 0751ced4 */
        while ((int)uVar11 < (int)*(uint *)(lVar12 + 0x18)) {
                    /* catch() { ... } // from try @ 0751cdb4 with catch @ 0751ced8 */
                    /* catch() { ... } // from try @ 0751cd48 with catch @ 0751cedc */
          if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
                    /* catch() { ... } // from try @ 0751ce9c with catch @ 0751cee0 */
          lVar13 = (long)(int)uVar11;
          lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
                    /* try { // try from 0751cef4 to 0761cef7 has its CatchHandler @ 0751cf10 */
                    /* try { // try from 0751cef8 to 0761cf13 has its CatchHandler @ 0751cc70 */
          uVar2 = FUN_0750e42c(param_5,*(undefined8 *)(lVar12 + 0x30),&local_70);
          if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0751cef4 with catch @ 0751cf10 */
                    /* try { // try from 0751cf14 to 0761cf1b has its CatchHandler @ 0751cf24 */
            if (*(int *)(*(long *)
                          Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                        + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
                    /* try { // try from 0751cf1c to 0761cf27 has its CatchHandler @ 0751cc70 */
                    /* catch() { ... } // from try @ 0751cf14 with catch @ 0751cf24 */
            plVar3 = (long *)FUN_07538544(param_1,lVar12,param_6,param_2,param_3,param_7,0);
            local_70 = (long *)FUN_0751abdc(param_1);
            if (plVar3 != (long *)0x0) {
              lVar8 = *plVar3;
              uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar2 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0751cfbc;
                  }
                  uVar2 = uVar2 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar2 != 0);
              }
              puVar4 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079f4598,0);
LAB_0751cfbc:
              (*(code *)*puVar4)(plVar3,puVar4[1]);
            }
          }
          plVar5 = local_68;
          plVar3 = local_70;
          if (local_70 == (long *)0x0) {
            if (local_68 == (long *)0x0) {
LAB_0751d1b8:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
LAB_0751d03c:
            if (*(uint *)(plVar5 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar5 = plVar5 + lVar13 + 4;
            *plVar5 = (long)plVar3;
            thunk_FUN_036b7ad0(plVar5,plVar3);
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_079fdb90 + 0x130);
            if ((*(byte *)(*local_70 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*local_70 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_079fdb90)) {
              if (local_68 == (long *)0x0) goto LAB_0751d1b8;
              lVar12 = thunk_FUN_0367fd24(local_70,*(undefined8 *)(*local_68 + 0x40));
              if (lVar12 == 0) {
                uVar6 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar6,0);
              }
              goto LAB_0751d03c;
            }
            FUN_074ee0ac(*(undefined1 *)(param_1 + 0x9a),0);
            plVar3 = local_68;
            uVar6 = *(undefined8 *)(lVar12 + 0x30);
            if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            lVar12 = FUN_074f00e4(uVar6,0);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((lVar12 != 0) &&
               (lVar8 = thunk_FUN_0367fd24(lVar12,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0)) {
              uVar6 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar6,0);
            }
            if (*(uint *)(plVar3 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar3[lVar13 + 4] = lVar12;
            thunk_FUN_036b7ad0(plVar3 + lVar13 + 4,lVar12);
          }
          lVar12 = *(long *)(lVar7 + 0x20);
          uVar11 = uVar11 + 1;
          if (lVar12 == 0) goto LAB_0751d198;
        }
        if ((param_8 & 1) == 0) {
          lVar7 = *(long *)(lVar7 + 0x18);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          (**(code **)(lVar7 + 0x18))
                    (*(undefined8 *)(lVar7 + 0x40),param_2,local_68,*(undefined8 *)(lVar7 + 0x28));
        }
        plVar3 = local_68;
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                    + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_03fc43e0(plVar3,*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                    );
        uVar9 = uVar9 + 1;
        lVar7 = *(long *)(param_4 + 0x18);
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


