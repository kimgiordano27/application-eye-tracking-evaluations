/*
FUNCTION_NAME: RequestPermissions$$Microphone_PermissionCallbacks_PermissionDeniedAndDontAskAgain
ENTRY_POINT: 07d3fab8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void RequestPermissions__Microphone_PermissionCallbacks_PermissionDeniedAndDontAskAgain
               (long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  do {
    do {
      if (unaff_w20 <= unaff_w19) {
        iVar1 = *(int *)(param_1 + 0x18);
                    /* try { // try from 07d3fb60 to 07e3fb87 has its CatchHandler @ 07d40040 */
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_07a61000(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
          return;
        }
        return;
      }
      plVar2 = (long *)FUN_05badb74(param_1,unaff_w19,*unaff_x22);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_07d3fb24;
            }
                    /* try { // try from 07d3faf8 to 07e3fb1f has its CatchHandler @ 07d40048 */
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar2,*unaff_x23,3);
LAB_07d3fb24:
        uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_07d3fb98(plVar2);
        }
      }
      unaff_w19 = unaff_w19 + 1;
      lVar4 = *unaff_x21;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar4);
        lVar4 = *unaff_x21;
      }
      param_1 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_07d3fb94;
      unaff_w20 = *(int *)(param_1 + 0x18);
    } while (*(int *)(lVar4 + 0xe4) != 0);
    thunk_FUN_044a54b4(lVar4);
    param_1 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
  } while (param_1 != 0);
LAB_07d3fb94:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


