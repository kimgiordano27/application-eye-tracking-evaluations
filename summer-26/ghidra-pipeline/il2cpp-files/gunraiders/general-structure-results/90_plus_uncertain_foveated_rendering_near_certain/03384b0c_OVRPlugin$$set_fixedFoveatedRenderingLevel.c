/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 03384b0c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x03384c9c) */

uint OVRPlugin__set_fixedFoveatedRenderingLevel(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint uVar7;
  
code_r0x03384b0c:
  puVar2 = (undefined8 *)FUN_01c72498(param_1,param_2,0);
  param_1 = unaff_x21;
LAB_03384b24:
  uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar4 = FUN_032e935c(uVar3);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032ea0d4(uVar3,0,0);
    if ((uVar4 & 1) == 0) goto LAB_03384a7c;
    uVar4 = FUN_0338493c(uVar3);
    if ((uVar4 & 1) == 0) goto LAB_03384a7c;
  }
  unaff_w24 = 1;
  uVar7 = 7;
  do {
    if (param_1 != (long *)0x0) {
      lVar5 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03384bf8;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(param_1,*unaff_x23,0);
LAB_03384bf8:
      (*(code *)*puVar2)(param_1,puVar2[1]);
    }
    if ((uVar7 | 8) != 8) {
LAB_03384c78:
      return unaff_w24 & 1;
    }
    unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x858))
                                  (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x860));
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032ea0d4(unaff_x20,0,0);
    if ((uVar4 & 1) == 0) {
      unaff_w24 = 0;
      goto LAB_03384c78;
    }
    if ((unaff_x20 == (long *)0x0) ||
       (plVar1 = (long *)(**(code **)(*unaff_x20 + 0x878))
                                   (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x880)),
       plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar5 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03384a68;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar1,*unaff_x26,0);
LAB_03384a68:
    param_1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_03384a7c:
    lVar5 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03384ac8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(param_1,*unaff_x27,0);
LAB_03384ac8:
    uVar4 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar4 & 1) != 0) break;
    uVar7 = 8;
  } while( true );
  lVar5 = *param_1;
  param_2 = *unaff_x28;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  unaff_x21 = param_1;
  if (uVar4 == 0) goto code_r0x03384b0c;
  piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  while (*(long *)(piVar6 + -2) != param_2) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) goto code_r0x03384b0c;
  }
  puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
  goto LAB_03384b24;
}


