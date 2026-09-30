/*
FUNCTION_NAME: OVRPlugin.OVRP_1_93_0$$ovrp_IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 0697a7d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */

void OVRPlugin_OVRP_1_93_0__ovrp_IsWideMotionModeHandPosesEnabled
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_6) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_0697a810:
  (*(code *)*puVar2)();
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
     (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar4 = (long *)FUN_07cae9b8(lVar3,0);
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0697a8a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x22,0);
LAB_0697a8a0:
    uVar6 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_03ac73c0(plVar4,*unaff_x24);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_0697a9c4;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0697a908;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x22,1);
LAB_0697a908:
    plVar5 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
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
    fVar8 = (float)FUN_07cac280(plVar5,0);
    param_3 = param_3 - unaff_s9;
    param_4 = param_4 - unaff_s10;
    FUN_07cac358(fVar8 - unaff_s8,param_3,param_4,plVar5,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar2 = (undefined8 *)FUN_03ac43c4(plVar4,*unaff_x24,0);
LAB_0697a9e0:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


