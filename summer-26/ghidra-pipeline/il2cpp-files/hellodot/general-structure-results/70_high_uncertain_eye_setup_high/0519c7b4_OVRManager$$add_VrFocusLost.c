/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 0519c7b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0519cc30) */
/* WARNING: Removing unreachable block (ram,0x0519ce40) */
/* WARNING: Removing unreachable block (ram,0x0519ce48) */

undefined8
OVRManager__add_VrFocusLost
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
          long *param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  long *in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  if ((DAT_06a711fd & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066083f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066083f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608400);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a711fd = 1;
  }
  puVar1 = PTR_DAT_06608400;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000078 = 0;
  uStack0000000000000064 = 0x7f800000;
  in_stack_00000068 = param_5;
  in_stack_00000070 = param_4;
  in_stack_000000a8 = param_7;
  if (param_5 == (long *)0x0) goto LAB_0519ce38;
  lVar8 = *param_5;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06608400) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0519c8c4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02ce0a7c(param_5,*(long *)PTR_DAT_06608400,1);
LAB_0519c8c4:
  uStack0000000000000058 = (*(code *)*puVar6)(param_5,0,puVar6[1]);
  uStack000000000000005c = (undefined4)param_2;
  in_stack_00000060 = (undefined4)param_3;
  lVar9 = *param_5;
  lVar8 = *(long *)puVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0519c928;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02ce0a7c(param_5,lVar8,0);
LAB_0519c928:
  iVar4 = (*(code *)*puVar6)(param_5,puVar6[1]);
  lVar9 = *param_5;
  lVar8 = *(long *)puVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0519c988;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02ce0a7c(param_5,lVar8,1);
LAB_0519c988:
  puVar1 = PTR_DAT_065c8c40;
  uVar13 = (*(code *)*puVar6)(param_5,iVar4 + -1,puVar6[1]);
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_0519cfcc(uVar13,param_2,param_3,*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
               *(undefined4 *)(lVar8 + 0x20));
  in_stack_000000a0 = in_stack_00000020;
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  in_stack_00000088 = in_stack_00000008;
  in_stack_00000080 = in_stack_00000000;
  uVar13 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar1 = PTR_DAT_066083f0;
  uVar10 = FUN_05ef59b8(uVar13,0,0);
  if ((uVar10 & 1) != 0) {
    if (param_6 != (long *)0x0) {
      lVar9 = *param_6;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0519ca9c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(param_6,lVar8,0);
LAB_0519ca9c:
      plVar7 = (long *)(*(code *)*puVar6)(param_6,puVar6[1]);
      puVar3 = PTR_DAT_066083f8;
      puVar2 = PTR_DAT_065c8d08;
      uVar12 = 0;
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0519cb10;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_0519cb10:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_0519cc24;
          lVar8 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_0519cbfc;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_0519cbe4;
        }
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0519cb6c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_0519cb6c:
        lVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(char *)(lVar8 + 0xb0) == '\0') {
          if (*(long *)(param_4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          FUN_05f01910(*(long *)(param_4 + 0x28),0);
          uVar5 = FUN_0519d174(param_4,lVar8,&stack0x00000058);
          uVar12 = uVar12 | uVar5;
        }
      } while( true );
    }
    goto LAB_0519ce38;
  }
  goto LAB_0519cc38;
LAB_0519cd74:
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0519cdd0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_0519cdd0:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
LAB_0519cde0:
  memcpy(&stack0x00000000,&stack0x00000058,0x58);
  param_8[1] = in_stack_00000030;
  *param_8 = in_stack_00000028;
  param_8[3] = in_stack_00000040;
  param_8[2] = in_stack_00000038;
  param_8[4] = in_stack_00000048;
  return in_stack_00000078;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0519cbe4:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0519cc18;
    }
  }
LAB_0519cbfc:
  puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_0519cc18:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_0519cc24:
  if ((uVar12 & 1) != 0) goto LAB_0519cde0;
LAB_0519cc38:
  if (param_6 != (long *)0x0) {
    lVar9 = *param_6;
    lVar8 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0519cc88;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(param_6,lVar8,0);
LAB_0519cc88:
    plVar7 = (long *)(*(code *)*puVar6)(param_6,puVar6[1]);
    puVar2 = PTR_DAT_066083f8;
    puVar1 = PTR_DAT_065c8d08;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0519ccf8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar1,0);
LAB_0519ccf8:
      uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar10 & 1) == 0) goto LAB_0519cd74;
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0519cd54;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_0519cd54:
      uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      FUN_0519d2ec(param_4,uVar13,&stack0x00000058);
    } while( true );
  }
LAB_0519ce38:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


