/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 0572d9f8
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0572db0c) */

undefined8 OVRManager__remove_TrackingAcquired(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_0572d980;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572d980:
        (*(code *)*puVar2)();
        FUN_0572d83c();
        lVar4 = *unaff_x23;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0572d9cc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572d9cc:
        uVar5 = (*(code *)*puVar2)();
        puVar1 = PTR_DAT_06d01f60;
        if ((uVar5 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_02ef170c();
          if (plVar3 == (long *)0x0) {
            return 1;
          }
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_0572daa8;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0572da90;
        }
        param_1 = *unaff_x23;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_0572da90:
    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0572dac4;
    }
  }
LAB_0572daa8:
  puVar2 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
LAB_0572dac4:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return 1;
}


