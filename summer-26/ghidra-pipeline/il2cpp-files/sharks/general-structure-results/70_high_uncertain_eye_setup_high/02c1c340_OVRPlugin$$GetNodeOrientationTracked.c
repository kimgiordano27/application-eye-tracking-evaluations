/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationTracked
ENTRY_POINT: 02c1c340
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c1c43c) */
/* WARNING: Removing unreachable block (ram,0x02c1c684) */
/* WARNING: Removing unreachable block (ram,0x02c1cd70) */

undefined8 OVRPlugin__GetNodeOrientationTracked(long param_1)

{
  undefined *puVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long in_x10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x02c1c340:
  if ((bool)in_CY) {
    FUN_0270a444();
  }
  else {
    *(int *)(unaff_x23 + 0x18) = (int)in_x10 + 1;
    plVar4 = (long *)(param_1 + in_x10 * 8 + 0x20);
    *plVar4 = unaff_x28;
    thunk_FUN_0188fd20(plVar4,unaff_x28);
  }
LAB_02c1c378:
  do {
    if (in_stack_00000008 == 0) {
      lVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
      *(long *)(lVar5 + 0x10) = unaff_x29;
      thunk_FUN_0188fd20((long *)(lVar5 + 0x10),unaff_x29);
      *(int *)(lVar5 + 0x18) = unaff_w24;
      FUN_02200638();
    }
LAB_02c1c174:
    do {
      lVar5 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x20) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02c1c1c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_0185dba8(unaff_x21,*unaff_x20,0);
LAB_02c1c1c0:
      uVar7 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if ((uVar7 & 1) == 0) {
        if (unaff_x21 != (long *)0x0) {
          lVar5 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_037f3288) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_02c1c424;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_0185dba8(unaff_x21,*(long *)PTR_DAT_037f3288,0);
LAB_02c1c424:
          (*(code *)*puVar2)(unaff_x21,puVar2[1]);
        }
        puVar1 = PTR_DAT_03804428;
        if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        in_stack_00000000 = FUN_02c1b2f0(in_stack_00000000);
        if (in_stack_00000000 == 0) {
          if (unaff_x23 != 0) {
            uVar3 = FUN_0270bdd0();
            return uVar3;
          }
        }
        else {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          unaff_w24 = unaff_w24 + 1;
          plVar4 = (long *)FUN_02c1bb08(in_stack_00000000);
          if (plVar4 != (long *)0x0) {
            lVar5 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_038043d8) {
                  puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_02c1c160;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar2 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)PTR_DAT_038043d8,0);
LAB_02c1c160:
            unaff_x21 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            goto LAB_02c1c174;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar5 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02c1c21c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_0185dba8(unaff_x21,*unaff_x26,0);
LAB_02c1c21c:
      unaff_x28 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if (unaff_x28 == 0) {
        thunk_FUN_01851c08(PTR_DAT_0380b860);
        uVar3 = thunk_FUN_01861bbc();
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
        FUN_02b0d540(uVar3,uVar6,0);
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar3,uVar6);
      }
      uVar3 = FUN_02b188e0(unaff_x28,0);
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar7 = FUN_02be74a8();
      if ((uVar7 & 1) == 0) break;
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar7 = (**(code **)(*unaff_x19 + 0x288))();
    } while ((uVar7 & 1) == 0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar7 = FUN_0220216c();
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      unaff_x29 = FUN_02c1b6b4(uVar3);
      if (unaff_w24 == 0) goto LAB_02c1c2f0;
LAB_02c1c2b8:
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(char *)(unaff_x29 + 0x15) == '\0') goto LAB_02c1c378;
    }
    else {
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      unaff_x29 = *(long *)(in_stack_00000008 + 0x10);
      if (unaff_w24 != 0) goto LAB_02c1c2b8;
LAB_02c1c2f0:
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
    }
    if (((*(char *)(unaff_x29 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
       (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) break;
  } while( true );
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  param_1 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  in_x10 = (long)(int)*(uint *)(unaff_x23 + 0x18);
  in_CY = *(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x23 + 0x18);
  goto code_r0x02c1c340;
}


