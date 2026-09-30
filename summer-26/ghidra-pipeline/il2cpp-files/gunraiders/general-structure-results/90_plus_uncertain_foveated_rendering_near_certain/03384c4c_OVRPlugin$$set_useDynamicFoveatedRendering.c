/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 03384c4c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x03384d1c) */

uint OVRPlugin__set_useDynamicFoveatedRendering(undefined8 param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long lVar7;
  long *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint uVar8;
  
  if (param_2 == 1) {
    plVar4 = (long *)__cxa_begin_catch();
    lVar7 = *plVar4;
    __cxa_end_catch();
    uVar8 = 0;
joined_r0x03384c6c:
    do {
      if (unaff_x21 != (long *)0x0) {
        lVar5 = *unaff_x21;
        uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03384bf8;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_01c72498(unaff_x21,*unaff_x23,0);
LAB_03384bf8:
        (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      }
      if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c01e80(lVar7);
      }
      if ((uVar8 | 8) != 8) {
LAB_03384c78:
        return unaff_w24 & 1;
      }
      unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x858))
                                    (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x860));
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar1 = FUN_032ea0d4(unaff_x20,0,0);
      if ((uVar1 & 1) == 0) {
        unaff_w24 = 0;
        goto LAB_03384c78;
      }
      if ((unaff_x20 == (long *)0x0) ||
         (plVar4 = (long *)(**(code **)(*unaff_x20 + 0x878))
                                     (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x880)),
         plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar7 = *plVar4;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03384a68;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(plVar4,*unaff_x26,0);
LAB_03384a68:
      unaff_x21 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar7 = *unaff_x21;
        uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03384ac8;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_01c72498(unaff_x21,*unaff_x27,0);
LAB_03384ac8:
        uVar1 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
        if ((uVar1 & 1) == 0) {
          lVar7 = 0;
          uVar8 = 8;
          goto joined_r0x03384c6c;
        }
        lVar7 = *unaff_x21;
        uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03384b24;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_01c72498(unaff_x21,*unaff_x28,0);
LAB_03384b24:
        uVar3 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar1 = FUN_032e935c(uVar3);
        if ((uVar1 & 1) != 0) break;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar1 = FUN_032ea0d4(uVar3,0,0);
      } while (((uVar1 & 1) == 0) || (uVar1 = FUN_0338493c(uVar3), (uVar1 & 1) == 0));
      lVar7 = 0;
      unaff_w24 = 1;
      uVar8 = 7;
    } while( true );
  }
  if (unaff_x21 != (long *)0x0) {
    lVar7 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x03384d04;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
code_r0x03384d04:
    (*(code *)*puVar2)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01cf64e4(param_1);
}


