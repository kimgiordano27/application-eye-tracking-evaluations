/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_base__set
ENTRY_POINT: 0845eba4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0845ed20) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_base__set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long *unaff_x19;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0845ebd4;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_03d8f370();
LAB_0845ebd4:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) {
            return;
          }
          lVar4 = *unaff_x19;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 == 0) goto LAB_0845ecd0;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0845ecb8;
        }
        lVar4 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x26) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0845ec30;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_03d8f370();
LAB_0845ec30:
        (*(code *)*puVar1)();
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar3 = FUN_071392b4(0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_070d9adc(extraout_x1,uVar3,0);
        FUN_0845eddc();
        FUN_0845e8c4();
        param_1 = *unaff_x19;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_0845ecb8:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0845ecec;
    }
  }
LAB_0845ecd0:
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_0845ecec:
  (*(code *)*puVar1)();
  return;
}


