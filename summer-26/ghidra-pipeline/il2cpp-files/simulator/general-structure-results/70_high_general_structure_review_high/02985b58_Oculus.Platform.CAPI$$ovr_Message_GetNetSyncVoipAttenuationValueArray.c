/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncVoipAttenuationValueArray
ENTRY_POINT: 02985b58
PROGRAM: simulator-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02985d64) */

void Oculus_Platform_CAPI__ovr_Message_GetNetSyncVoipAttenuationValueArray(code *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  int unaff_w26;
  long *unaff_x27;
  long unaff_x29;
  
  (*param_1)();
  if (unaff_x29 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0188c62c();
  }
  if (unaff_w26 != 1) {
    plVar2 = (long *)thunk_FUN_018af234();
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x02985d4c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_018a8460(plVar2,*unaff_x27,0);
code_r0x02985d4c:
      (*(code *)*puVar1)(plVar2,puVar1[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_019698dc();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  plVar2 = (long *)thunk_FUN_018af234();
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionsChangedNotification;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_018a8460(plVar2,*unaff_x27,0);
Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionsChangedNotification:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0188c62c(lVar6);
  }
  return;
}


