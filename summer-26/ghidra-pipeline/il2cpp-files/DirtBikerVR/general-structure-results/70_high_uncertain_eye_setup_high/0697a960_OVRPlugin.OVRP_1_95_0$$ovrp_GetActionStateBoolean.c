/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStateBoolean
ENTRY_POINT: 0697a960
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */

void OVRPlugin_OVRP_1_95_0__ovrp_GetActionStateBoolean(float param_1,float param_2,float param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  long *in_stack_00000028;
  
  do {
    FUN_07cac358(param_1,param_2,param_3,unaff_x19,0);
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *in_stack_00000028;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0697a8a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*unaff_x22,0);
LAB_0697a8a0:
    uVar5 = (*(code *)*puVar2)(in_stack_00000028,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_03ac73c0(in_stack_00000028,*unaff_x24);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_0697a9c4;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *in_stack_00000028;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0697a908;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*unaff_x22,1);
LAB_0697a908:
    unaff_x19 = (long *)(*(code *)*puVar2)(in_stack_00000028,puVar2[1]);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(unaff_x19);
    }
    param_1 = (float)FUN_07cac280(unaff_x19,0);
    param_1 = param_1 - unaff_s8;
    param_2 = param_2 - unaff_s9;
    param_3 = param_3 - unaff_s10;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar2 = (undefined8 *)FUN_03ac43c4(plVar3,*unaff_x24,0);
LAB_0697a9e0:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


