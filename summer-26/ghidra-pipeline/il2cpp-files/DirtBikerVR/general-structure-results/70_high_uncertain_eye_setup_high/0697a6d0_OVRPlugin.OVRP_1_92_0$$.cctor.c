/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$.cctor
ENTRY_POINT: 0697a6d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */
/* WARNING: Removing unreachable block (ram,0x0697aa44) */

void OVRPlugin_OVRP_1_92_0___cctor
               (code *param_1,undefined1 param_2 [16],float param_3,float param_4,long *param_5,
               undefined8 param_6)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  long *in_stack_00000028;
  
  while (uVar3 = (*param_1)(param_5,param_6), puVar2 = PTR_DAT_08488550, (uVar3 & 1) != 0) {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *in_stack_00000028;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0697a730;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*unaff_x22,1);
LAB_0697a730:
    plVar5 = (long *)(*(code *)*puVar4)(in_stack_00000028,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar5);
    }
    fVar9 = (float)FUN_07cac280(plVar5,0);
    param_3 = param_3 - unaff_s9;
    param_4 = param_4 - unaff_s10;
    FUN_07cac358(fVar9 - unaff_s8,param_3,param_4,plVar5,0);
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *in_stack_00000028;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0697a6c8;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*unaff_x22,0);
LAB_0697a6c8:
    param_1 = (code *)*puVar4;
    param_6 = puVar4[1];
    param_5 = in_stack_00000028;
  }
  plVar5 = (long *)thunk_FUN_03ac73c0(in_stack_00000028,*(undefined8 *)PTR_DAT_08488550);
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0697a810;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar2,0);
LAB_0697a810:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
     (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar5 = (long *)FUN_07cae9b8(lVar7,0);
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0697a8a0;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*unaff_x22,0);
LAB_0697a8a0:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar3 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_03ac73c0(plVar5,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 == 0) goto LAB_0697a9c4;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0697a908;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*unaff_x22,1);
LAB_0697a908:
    plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar6);
    }
    fVar9 = (float)FUN_07cac280(plVar6,0);
    param_3 = param_3 - unaff_s9;
    param_4 = param_4 - unaff_s10;
    FUN_07cac358(fVar9 - unaff_s8,param_3,param_4,plVar6,0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar2,0);
LAB_0697a9e0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


