/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularAcceleration
ENTRY_POINT: 02c1c18c
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

undefined8 OVRPlugin__GetNodeAngularAcceleration(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  int *piVar10;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long lVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_02c1c1c0;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_0185dba8(unaff_x21,param_3,0);
LAB_02c1c1c0:
      uVar4 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
      if ((uVar4 & 1) == 0) {
        if (unaff_x21 != (long *)0x0) {
          lVar8 = *unaff_x21;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_037f3288) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02c1c424;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_0185dba8(unaff_x21,*(long *)PTR_DAT_037f3288,0);
LAB_02c1c424:
          (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        }
        puVar2 = PTR_DAT_03804428;
        if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        in_stack_00000000 = FUN_02c1b2f0(in_stack_00000000);
        if (in_stack_00000000 == 0) {
          if (unaff_x23 != 0) {
            uVar5 = FUN_0270bdd0();
            return uVar5;
          }
LAB_02c1cd6c:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        unaff_w24 = unaff_w24 + 1;
        plVar6 = (long *)FUN_02c1bb08(in_stack_00000000);
        if (plVar6 == (long *)0x0) goto LAB_02c1cd6c;
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_038043d8) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02c1c160;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)PTR_DAT_038043d8,0);
LAB_02c1c160:
        unaff_x21 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
      }
      else {
        lVar8 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02c1c21c;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_0185dba8(unaff_x21,*unaff_x26,0);
LAB_02c1c21c:
        lVar8 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if (lVar8 == 0) {
          thunk_FUN_01851c08(PTR_DAT_0380b860);
          uVar5 = thunk_FUN_01861bbc();
          uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
          FUN_02b0d540(uVar5,uVar7,0);
          uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar5,uVar7);
        }
        uVar5 = FUN_02b188e0(lVar8,0);
        if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar4 = FUN_02be74a8();
        if ((uVar4 & 1) != 0) {
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar4 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar4 & 1) == 0) goto LAB_02c1c174;
        }
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar4 = FUN_0220216c();
        if ((uVar4 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar11 = FUN_02c1b6b4(uVar5);
          if (unaff_w24 == 0) goto LAB_02c1c2f0;
LAB_02c1c2b8:
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          if (*(char *)(lVar11 + 0x15) != '\0') goto LAB_02c1c2f4;
        }
        else {
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar11 = *(long *)(in_stack_00000008 + 0x10);
          if (unaff_w24 != 0) goto LAB_02c1c2b8;
LAB_02c1c2f0:
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
LAB_02c1c2f4:
          if (((*(char *)(lVar11 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
             (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) {
            if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            lVar9 = *(long *)(unaff_x23 + 0x10);
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar1 = *(uint *)(unaff_x23 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar8;
              thunk_FUN_0188fd20(plVar6,lVar8);
            }
            else {
              FUN_0270a444();
            }
          }
        }
        if (in_stack_00000008 == 0) {
          lVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
          *(long *)(lVar8 + 0x10) = lVar11;
          thunk_FUN_0188fd20((long *)(lVar8 + 0x10),lVar11);
          *(int *)(lVar8 + 0x18) = unaff_w24;
          FUN_02200638();
        }
      }
LAB_02c1c174:
      param_1 = *unaff_x21;
      param_3 = *unaff_x20;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


