/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 01db92f0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01db952c) */
/* WARNING: Removing unreachable block (ram,0x01db94cc) */
/* WARNING: Removing unreachable block (ram,0x01db9538) */
/* WARNING: Removing unreachable block (ram,0x01db94f0) */

void OVRPlugin_OVRP_1_68_0__ovrp_SetInsightPassthroughKeyboardHandsIntensity
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_01db9314;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar4 = (undefined8 *)FUN_0103c348();
LAB_01db9314:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = PTR_DAT_0235a748;
  puVar2 = PTR_DAT_0234bef8;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  do {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_68_0___cctor;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348(plVar5,*(long *)puVar2,0);
OVRPlugin_OVRP_1_68_0___cctor:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_01db94bc;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_01db9494;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01db93e0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348(plVar5,*(long *)puVar3,0);
LAB_01db93e0:
    lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(lVar6 + 0x38);
    thunk_FUN_00ffe618();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar6 + 0x38), thunk_FUN_00ffe618(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar6 = *(long *)(lVar6 + 0x48);
      thunk_FUN_00ffe618();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar6 = *(long *)(lVar6 + 0x20);
      thunk_FUN_00ffe618();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01dbf094(lVar6,0,0,0);
      FUN_01db8bac();
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_01db94b0;
    }
  }
LAB_01db9494:
  puVar4 = (undefined8 *)FUN_0103c348(plVar5,*(long *)PTR_DAT_0234bef0,0);
LAB_01db94b0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_01db94bc:
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0102a860();
  }
  thunk_FUN_00ffe618();
  *unaff_x19 = 0;
  thunk_FUN_0106e12c();
  return;
}


