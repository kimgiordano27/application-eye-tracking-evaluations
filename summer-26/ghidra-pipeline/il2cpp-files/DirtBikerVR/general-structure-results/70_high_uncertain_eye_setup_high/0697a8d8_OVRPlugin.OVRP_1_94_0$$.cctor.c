/*
FUNCTION_NAME: OVRPlugin.OVRP_1_94_0$$.cctor
ENTRY_POINT: 0697a8d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */

void OVRPlugin_OVRP_1_94_0___cctor
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  long *in_stack_00000028;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_0697a908;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_03ac43c4(unaff_x19,param_6,1);
LAB_0697a908:
        plVar3 = (long *)(*(code *)*puVar2)(unaff_x19,puVar2[1]);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        bVar1 = *(byte *)(*unaff_x23 + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar3);
        }
        fVar7 = (float)FUN_07cac280(plVar3,0);
        param_3 = param_3 - unaff_s9;
        param_4 = param_4 - unaff_s10;
        FUN_07cac358(fVar7 - unaff_s8,param_3,param_4,plVar3,0);
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
          goto LAB_0697a9ac;
        }
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        param_1 = *in_stack_00000028;
        param_6 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x19 = in_stack_00000028;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_6;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_0697a9ac:
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


