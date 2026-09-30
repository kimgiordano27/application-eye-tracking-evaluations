/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 063a7b34
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s__ToString(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar12 [16];
  long *in_stack_00000030;
  
code_r0x063a7b34:
  puVar5 = (undefined8 *)FUN_0377596c(unaff_x24,param_2,param_3);
  do {
    auVar12 = (*(code *)*puVar5)(unaff_x24,puVar5[1]);
    if (auVar12._0_8_ == 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d98df0,auVar12._8_8_,0);
      uVar4 = thunk_FUN_037788cc();
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6da8);
      thunk_FUN_062d6d20(uVar4,uVar7,0);
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6db0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar7);
    }
    (**(code **)(*unaff_x20 + 0x1f8))();
    do {
      uVar3 = FUN_05d64e98(&stack0x00000020,*unaff_x28);
      unaff_x24 = in_stack_00000030;
      if ((uVar3 & 1) == 0) {
        FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
        if ((unaff_x23 & 1) != 0) {
          FUN_063a8640();
          if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
          (**(code **)(*unaff_x19 + 0x5d8))();
        }
        lVar8 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 == 0) goto LAB_063a7bec;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_063a7bd4;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar8 = *in_stack_00000030;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_063a79d8;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(in_stack_00000030,*unaff_x26,8);
LAB_063a79d8:
      uVar4 = (*(code *)*puVar5)(unaff_x24,puVar5[1]);
      uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar4,*unaff_x29,0);
    } while ((uVar3 & 1) == 0);
    lVar8 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_063a7a44;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(unaff_x24,*unaff_x26,1);
LAB_063a7a44:
    uVar4 = (*(code *)*puVar5)(unaff_x24,puVar5[1]);
    uVar3 = FUN_060bf954(uVar4,*unaff_x27,0);
    if ((uVar3 & 1) != 0) {
      lVar8 = *unaff_x24;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_063a7ac8;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(unaff_x24,*unaff_x26,1);
LAB_063a7ac8:
      uVar4 = (*(code *)*puVar5)(unaff_x24,puVar5[1]);
      if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06a0dde8(uVar4,0);
    }
    lVar8 = *unaff_x24;
    param_2 = *unaff_x26;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 == 0) break;
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    while (*(long *)(piVar11 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
      if (uVar3 == 0) goto LAB_063a7b30;
    }
    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
  } while( true );
LAB_063a7b30:
  param_3 = 5;
  goto code_r0x063a7b34;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar11 = piVar11 + 4;
    if (uVar3 == 0) break;
LAB_063a7bd4:
    if (*(long *)(piVar11 + -2) == *unaff_x26) {
      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
      goto LAB_063a7c0c;
    }
  }
LAB_063a7bec:
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7c0c:
  uVar4 = (*(code *)*puVar5)();
  uVar3 = FUN_063a9cc0(uVar4,uVar4);
  if ((uVar3 & 1) == 0) {
    lVar8 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 063a7c3c to 064a7c3f has its CatchHandler @ 063a7e6c */
                    /* try { // try from 063a7c44 to 064a7c4f has its CatchHandler @ 063a7e68 */
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_063a7c74;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 063a7c5c to 064a7c63 has its CatchHandler @ 063a7e88 */
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7c74:
                    /* try { // try from 063a7c74 to 064a7c7f has its CatchHandler @ 063a7e8c */
    lVar8 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_063a817c;
                    /* try { // try from 063a7c88 to 064a7c8f has its CatchHandler @ 063a7e7c */
    if (*(int *)(lVar8 + 0x18) == 1) {
      lVar8 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 063a7cb0 to 064a7cc3 has its CatchHandler @ 063a7e94 */
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
                    /* try { // try from 063a7cd4 to 064a7cd7 has its CatchHandler @ 063a7d20 */
                    /* try { // try from 063a7cd8 to 064a7ce7 has its CatchHandler @ 063a7d1c */
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_063a7ce0;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
                    /* try { // try from 063a7cc4 to 064a7ccb has its CatchHandler @ 063a7e84 */
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7ce0:
      lVar8 = (*(code *)*puVar5)();
      puVar1 = PTR_DAT_07db6c18;
                    /* try { // try from 063a7cf4 to 064a7d07 has its CatchHandler @ 063a7e90 */
      if ((lVar8 == 0) ||
         (plVar6 = (long *)FUN_049cec24(lVar8,0,*(undefined8 *)PTR_DAT_07db6c18),
         plVar6 == (long *)0x0)) goto LAB_063a817c;
                    /* try { // try from 063a7d08 to 064a7d3f has its CatchHandler @ 063a7a44 */
      lVar8 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
                    /* catch() { ... } // from try @ 063a7cd8 with catch @ 063a7d1c */
                    /* catch() { ... } // from try @ 063a7cd4 with catch @ 063a7d20 */
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_063a7d58;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x26,0);
LAB_063a7d58:
      iVar2 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (iVar2 == 3) {
        lVar8 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_063a8078;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a8078:
        lVar8 = (*(code *)*puVar5)();
        if ((lVar8 != 0) &&
           (plVar6 = (long *)FUN_049cec24(lVar8,0,*(undefined8 *)puVar1), plVar6 != (long *)0x0)) {
          lVar8 = *plVar6;
          uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_063a80ec;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x26,5);
LAB_063a80ec:
          (*(code *)*puVar5)(plVar6,puVar5[1]);
          if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_063a7fc4;
        }
        goto LAB_063a817c;
      }
    }
  }
  lVar8 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_063a7dfc;
      }
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7dfc:
  lVar8 = (*(code *)*puVar5)();
  if (lVar8 == 0) goto LAB_063a817c;
  if (*(int *)(lVar8 + 0x18) == 0) {
    lVar8 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_063a7e64;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7e64:
    lVar8 = (*(code *)*puVar5)();
    puVar1 = PTR_DAT_07db6d50;
    if (lVar8 == 0) goto LAB_063a817c;
    if (*(int *)(lVar8 + 0x18) == 0) {
      lVar8 = thunk_FUN_037787d0();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar8 = *(long *)puVar1;
      plVar6 = (long *)thunk_FUN_037787d0();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar9 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_063a8128;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar6,lVar8,2);
LAB_063a8128:
      uVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_063a7fc4;
        }
      }
      else if (unaff_x19 != (long *)0x0) {
        pcVar10 = *(code **)(*unaff_x19 + 0x658);
LAB_063a7fbc:
        (*pcVar10)();
LAB_063a7fc4:
        (**(code **)(*unaff_x20 + 0x1e8))();
        return;
      }
      goto LAB_063a817c;
    }
  }
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x578))();
    puVar1 = PTR_DAT_07db6c18;
    iVar2 = 0;
    do {
      lVar8 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_063a7ef0;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7ef0:
      lVar8 = (*(code *)*puVar5)();
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x18) <= iVar2) {
        FUN_063a8e18();
        pcVar10 = *(code **)(*unaff_x19 + 0x588);
        goto LAB_063a7fbc;
      }
      lVar8 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_063a7f5c;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7f5c:
      lVar8 = (*(code *)*puVar5)();
      if (lVar8 == 0) break;
      FUN_049cec24(lVar8,iVar2,*(undefined8 *)puVar1);
      FUN_063a6bb4();
      iVar2 = iVar2 + 1;
    } while( true );
  }
LAB_063a817c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


