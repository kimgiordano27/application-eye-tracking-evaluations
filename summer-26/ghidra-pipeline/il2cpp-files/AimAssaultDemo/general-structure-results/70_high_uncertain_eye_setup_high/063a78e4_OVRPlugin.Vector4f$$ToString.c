/*
FUNCTION_NAME: OVRPlugin.Vector4f$$ToString
ENTRY_POINT: 063a78e4
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


void OVRPlugin_Vector4f__ToString(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x9;
  code *pcVar12;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long *unaff_x26;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
                    /* try { // try from 063a78e4 to 064a78e7 has its CatchHandler @ 063a7948 */
  piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
                    /* try { // try from 063a78f0 to 064a78f3 has its CatchHandler @ 063a7950 */
    if (*(long *)(piVar13 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar13 + 3) * 0x10 + 0x138);
      goto LAB_063a7924;
    }
                    /* try { // try from 063a78f8 to 064a78ff has its CatchHandler @ 063a7944 */
    in_x9 = in_x9 + -1;
    piVar13 = piVar13 + 4;
                    /* try { // try from 063a7900 to 064a793f has its CatchHandler @ 063a7844 */
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7924:
  lVar6 = (*(code *)*puVar5)();
  if (lVar6 == 0) goto LAB_063a817c;
                    /* try { // try from 063a7940 to 064a7943 has its CatchHandler @ 063a7950 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a78f8 with catch @ 063a7944
                       try { // try from 063a7944 to 064a7967 has its CatchHandler @ 063a7844 */
  FUN_049cf910(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_07db6d30);
  puVar3 = PTR_DAT_07db6d20;
  puVar2 = PTR_DAT_07d9b228;
  puVar1 = PTR_DAT_07d9b220;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a78e4 with catch @ 063a7948
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a78d4 with catch @ 063a794c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a78f0 with catch @ 063a7950
                       catch(type#1 @ 078dda18) { ... } // from try @ 063a7940 with catch @ 063a7950
                        */
                    /* try { // try from 063a7968 to 064a796b has its CatchHandler @ 063a7978 */
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
                    /* catch() { ... } // from try @ 063a7968 with catch @ 063a7978 */
  while (uVar7 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar3), plVar9 = in_stack_00000030,
        (uVar7 & 1) != 0) {
                    /* try { // try from 063a7984 to 064a7997 has its CatchHandler @ 063a79ec */
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *in_stack_00000030;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a788c with catch @ 063a7998
                       try { // try from 063a7998 to 064a79b3 has its CatchHandler @ 063a7844 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a789c with catch @ 063a799c
                        */
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
                    /* try { // try from 063a79d0 to 064a79d7 has its CatchHandler @ 063a79ec */
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 8) * 0x10 + 0x138);
          goto LAB_063a79d8;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
                    /* try { // try from 063a79b4 to 064a79b7 has its CatchHandler @ 063a79c4 */
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(in_stack_00000030,*unaff_x26,8);
                    /* catch() { ... } // from try @ 063a79b4 with catch @ 063a79c4 */
LAB_063a79d8:
                    /* try { // try from 063a79d8 to 064a79e3 has its CatchHandler @ 063a7844 */
    uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                    /* try { // try from 063a79e4 to 064a79eb has its CatchHandler @ 063a79ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063a7984 with catch @ 063a79ec
                       catch(type#2 @ 00000000) { ... } // from try @ 063a79d0 with catch @ 063a79ec
                       catch(type#2 @ 00000000) { ... } // from try @ 063a79e4 with catch @ 063a79ec
                        */
    uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar8,*(undefined8 *)puVar1,0);
    if ((uVar7 & 1) != 0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_063a7a44;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x26,1);
LAB_063a7a44:
                    /* try { // try from 063a7a44 to 064a7c3b has its CatchHandler @ 063a7a44
                       catch() { ... } // from try @ 063a7a44 with catch @ 063a7a44
                       catch() { ... } // from try @ 063a7d08 with catch @ 063a7a44
                       catch() { ... } // from try @ 063a7d9c with catch @ 063a7a44
                       catch() { ... } // from try @ 063a7ddc with catch @ 063a7a44
                       catch() { ... } // from try @ 063a7e54 with catch @ 063a7a44
                       catch() { ... } // from try @ 063a7ed8 with catch @ 063a7a44
                       catch() { ... } // from try @ 063a7ef4 with catch @ 063a7a44
                       catch() { ... } // from try @ 063a7f30 with catch @ 063a7a44 */
      uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      uVar7 = FUN_060bf954(uVar8,*(undefined8 *)puVar2,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_063a7ac8;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x26,1);
LAB_063a7ac8:
        uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_06a0dde8(uVar8,0);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 5) * 0x10 + 0x138);
            goto LAB_063a7b50;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x26,5);
LAB_063a7b50:
      auVar14 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (auVar14._0_8_ == 0) {
        thunk_FUN_037a15ac(PTR_DAT_07d98df0,auVar14._8_8_,0);
        uVar8 = thunk_FUN_037788cc();
        uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6da8);
        thunk_FUN_062d6d20(uVar8,uVar10,0);
        uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6db0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar8,uVar10);
      }
      (**(code **)(*unaff_x20 + 0x1f8))();
    }
  }
  FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
  if ((unaff_x23 & 1) != 0) {
    FUN_063a8640();
    if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
    (**(code **)(*unaff_x19 + 0x5d8))();
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
        goto LAB_063a7c0c;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7c0c:
  uVar8 = (*(code *)*puVar5)();
  uVar7 = FUN_063a9cc0(uVar8,uVar8);
  if ((uVar7 & 1) == 0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_063a7c74;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7c74:
    lVar6 = (*(code *)*puVar5)();
    if (lVar6 == 0) goto LAB_063a817c;
    if (*(int *)(lVar6 + 0x18) == 1) {
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_063a7ce0;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7ce0:
      lVar6 = (*(code *)*puVar5)();
      puVar1 = PTR_DAT_07db6c18;
      if ((lVar6 == 0) ||
         (plVar9 = (long *)FUN_049cec24(lVar6,0,*(undefined8 *)PTR_DAT_07db6c18),
         plVar9 == (long *)0x0)) goto LAB_063a817c;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_063a7d58;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x26,0);
LAB_063a7d58:
      iVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (iVar4 == 3) {
        lVar6 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_063a8078;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a8078:
        lVar6 = (*(code *)*puVar5)();
        if ((lVar6 != 0) &&
           (plVar9 = (long *)FUN_049cec24(lVar6,0,*(undefined8 *)puVar1), plVar9 != (long *)0x0)) {
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                goto LAB_063a80ec;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x26,5);
LAB_063a80ec:
          (*(code *)*puVar5)(plVar9,puVar5[1]);
          if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_063a7fc4;
        }
        goto LAB_063a817c;
      }
    }
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
        goto LAB_063a7dfc;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7dfc:
  lVar6 = (*(code *)*puVar5)();
  if (lVar6 == 0) goto LAB_063a817c;
  if (*(int *)(lVar6 + 0x18) == 0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_063a7e64;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7e64:
    lVar6 = (*(code *)*puVar5)();
    puVar1 = PTR_DAT_07db6d50;
    if (lVar6 == 0) goto LAB_063a817c;
    if (*(int *)(lVar6 + 0x18) == 0) {
      lVar6 = thunk_FUN_037787d0();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar6 = *(long *)puVar1;
      plVar9 = (long *)thunk_FUN_037787d0();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar11 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_063a8128;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar9,lVar6,2);
LAB_063a8128:
      uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if ((uVar7 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_063a7fc4;
        }
      }
      else if (unaff_x19 != (long *)0x0) {
        pcVar12 = *(code **)(*unaff_x19 + 0x658);
LAB_063a7fbc:
        (*pcVar12)();
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
    iVar4 = 0;
    do {
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_063a7ef0;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7ef0:
      lVar6 = (*(code *)*puVar5)();
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) <= iVar4) {
        FUN_063a8e18();
        pcVar12 = *(code **)(*unaff_x19 + 0x588);
        goto LAB_063a7fbc;
      }
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_063a7f5c;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7f5c:
      lVar6 = (*(code *)*puVar5)();
      if (lVar6 == 0) break;
      FUN_049cec24(lVar6,iVar4,*(undefined8 *)puVar1);
      FUN_063a6bb4();
      iVar4 = iVar4 + 1;
    } while( true );
  }
LAB_063a817c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


