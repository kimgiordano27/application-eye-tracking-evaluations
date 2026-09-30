/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 033849dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x03384c9c) */

uint OVRPlugin__set_foveatedRenderingLevel(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint uVar7;
  uint uVar8;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar1 = FUN_032ea0d4(unaff_x20,0,0);
    if ((uVar1 & 1) == 0) break;
    if ((unaff_x20 == (long *)0x0) ||
       (plVar2 = (long *)(**(code **)(*unaff_x20 + 0x878))
                                   (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x880)),
       plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar5 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03384a68;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar2,*unaff_x26,0);
LAB_03384a68:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    do {
      lVar5 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03384ac8;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar2,*unaff_x27,0);
LAB_03384ac8:
      uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        uVar8 = 8;
        uVar7 = 8;
        goto joined_r0x03384ba8;
      }
      lVar5 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03384b24;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar2,*unaff_x28,0);
LAB_03384b24:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar1 = FUN_032e935c(uVar4);
      if ((uVar1 & 1) != 0) break;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar1 = FUN_032ea0d4(uVar4,0,0);
    } while (((uVar1 & 1) == 0) || (uVar1 = FUN_0338493c(uVar4), (uVar1 & 1) == 0));
    unaff_w24 = 1;
    uVar8 = 7;
    uVar7 = 7;
joined_r0x03384ba8:
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03384bf8;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar2,*unaff_x23,0);
LAB_03384bf8:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      uVar7 = uVar8;
    }
    if ((uVar7 | 8) != 8) goto LAB_03384c78;
    unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x858))
                                  (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x860));
    param_1 = *unaff_x25;
  }
  unaff_w24 = 0;
LAB_03384c78:
  return unaff_w24 & 1;
}


