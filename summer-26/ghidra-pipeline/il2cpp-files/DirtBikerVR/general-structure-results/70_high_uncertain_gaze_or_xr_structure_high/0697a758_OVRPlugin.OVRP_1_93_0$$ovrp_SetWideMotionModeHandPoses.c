/*
FUNCTION_NAME: OVRPlugin.OVRP_1_93_0$$ovrp_SetWideMotionModeHandPoses
ENTRY_POINT: 0697a758
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */
/* WARNING: Removing unreachable block (ram,0x0697aa44) */

void OVRPlugin_OVRP_1_93_0__ovrp_SetWideMotionModeHandPoses
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_CY;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  long *in_stack_00000028;
  
  do {
    if ((!(bool)in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_6)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(unaff_x20);
    }
    fVar9 = (float)FUN_07cac280(unaff_x20,0);
    param_3 = param_3 - unaff_s9;
    param_4 = param_4 - unaff_s10;
    FUN_07cac358(fVar9 - unaff_s8,param_3,param_4,unaff_x20,0);
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0697a6c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*unaff_x22,0);
LAB_0697a6c8:
    uVar7 = (*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
    puVar2 = PTR_DAT_08488550;
    if ((uVar7 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_03ac73c0(in_stack_00000028,*(undefined8 *)PTR_DAT_08488550);
      if (plVar4 == (long *)0x0) goto LAB_0697a81c;
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0697a7f4;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0697a730;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*unaff_x22,1);
LAB_0697a730:
    unaff_x20 = (long *)(*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_6 = *unaff_x23;
    param_1 = *unaff_x20;
    in_x9 = (ulong)*(byte *)(param_6 + 0x130);
    in_CY = *(byte *)(param_6 + 0x130) <= *(byte *)(param_1 + 0x130);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
  }
LAB_0697a7f4:
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0);
LAB_0697a810:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_0697a81c:
  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar4 = (long *)FUN_07cae9b8(lVar6,0);
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0697a8a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x22,0);
LAB_0697a8a0:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_03ac73c0(plVar4,*(undefined8 *)puVar2);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0697a9c4;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0697a908;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x22,1);
LAB_0697a908:
    plVar5 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
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
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0);
LAB_0697a9e0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


