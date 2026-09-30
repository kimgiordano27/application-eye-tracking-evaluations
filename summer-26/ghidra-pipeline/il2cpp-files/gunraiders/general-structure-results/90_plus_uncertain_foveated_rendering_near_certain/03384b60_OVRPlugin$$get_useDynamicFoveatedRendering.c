/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 03384b60
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

uint OVRPlugin__get_useDynamicFoveatedRendering(void)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int in_w8;
  long lVar4;
  int *piVar5;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint uVar6;
  
code_r0x03384b60:
  if (in_w8 == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_032ea0d4(unaff_x22,0,0);
  if ((uVar3 & 1) == 0) goto LAB_03384a7c;
  uVar3 = FUN_0338493c(unaff_x22);
  if ((uVar3 & 1) == 0) goto LAB_03384a7c;
LAB_03384b8c:
  unaff_w24 = 1;
  uVar6 = 7;
  do {
    if (unaff_x21 != (long *)0x0) {
      lVar4 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03384bf8;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(unaff_x21,*unaff_x23,0);
LAB_03384bf8:
      (*(code *)*puVar2)(unaff_x21,puVar2[1]);
    }
    if ((uVar6 | 8) != 8) {
LAB_03384c78:
      return unaff_w24 & 1;
    }
    unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x858))
                                  (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x860));
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = FUN_032ea0d4(unaff_x20,0,0);
    if ((uVar3 & 1) == 0) {
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
    lVar4 = *plVar1;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03384a68;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar1,*unaff_x26,0);
LAB_03384a68:
    unaff_x21 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_03384a7c:
    lVar4 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03384ac8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(unaff_x21,*unaff_x27,0);
LAB_03384ac8:
    uVar3 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
    if ((uVar3 & 1) != 0) break;
    uVar6 = 8;
  } while( true );
  lVar4 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x28) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03384b24;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c72498(unaff_x21,*unaff_x28,0);
LAB_03384b24:
  unaff_x22 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_032e935c(unaff_x22);
  if ((uVar3 & 1) == 0) goto code_r0x03384b58;
  goto LAB_03384b8c;
code_r0x03384b58:
  in_w8 = *(int *)(*unaff_x25 + 0xe0);
  goto code_r0x03384b60;
}


