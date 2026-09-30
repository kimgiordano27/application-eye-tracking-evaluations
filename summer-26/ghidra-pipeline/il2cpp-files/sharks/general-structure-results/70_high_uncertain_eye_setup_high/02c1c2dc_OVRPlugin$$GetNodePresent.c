/*
FUNCTION_NAME: OVRPlugin$$GetNodePresent
ENTRY_POINT: 02c1c2dc
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c1c43c) */
/* WARNING: Removing unreachable block (ram,0x02c1c684) */
/* WARNING: Removing unreachable block (ram,0x02c1cd70) */

undefined8 OVRPlugin__GetNodePresent(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x02c1c2dc:
  thunk_FUN_01843fdc();
LAB_02c1c2e0:
  lVar4 = FUN_02c1b6b4(unaff_x27);
  if (unaff_w24 != 0) goto LAB_02c1c2b8;
LAB_02c1c2f0:
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  do {
                    /* try { // try from 02c1c2fc to 02d1c3ff has its CatchHandler @ 02c1c2fc
                       catch() { ... } // from try @ 02c1c2fc with catch @ 02c1c2fc
                       catch() { ... } // from try @ 02c1c414 with catch @ 02c1c2fc
                       catch() { ... } // from try @ 02c1c51c with catch @ 02c1c2fc
                       catch() { ... } // from try @ 02c1c580 with catch @ 02c1c2fc
                       catch() { ... } // from try @ 02c1c5d4 with catch @ 02c1c2fc */
    if (((*(char *)(lVar4 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
       (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar8 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = unaff_x28;
        thunk_FUN_0188fd20(plVar5,unaff_x28);
      }
      else {
        FUN_0270a444();
      }
    }
    do {
      if (in_stack_00000008 == 0) {
        lVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
        *(long *)(lVar8 + 0x10) = lVar4;
        thunk_FUN_0188fd20((long *)(lVar8 + 0x10),lVar4);
        *(int *)(lVar8 + 0x18) = unaff_w24;
        FUN_02200638();
      }
LAB_02c1c174:
      do {
        lVar4 = *unaff_x21;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x20) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02c1c1c0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_0185dba8(unaff_x21,*unaff_x20,0);
LAB_02c1c1c0:
        uVar9 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          if (unaff_x21 != (long *)0x0) {
            lVar4 = *unaff_x21;
            uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_037f3288) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_02c1c424;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
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
              uVar6 = FUN_0270bdd0();
              return uVar6;
            }
          }
          else {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            unaff_w24 = unaff_w24 + 1;
            plVar5 = (long *)FUN_02c1bb08(in_stack_00000000);
            if (plVar5 != (long *)0x0) {
              lVar4 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_038043d8) {
                    puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_02c1c160;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)PTR_DAT_038043d8,0);
LAB_02c1c160:
              unaff_x21 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
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
        lVar4 = *unaff_x21;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02c1c21c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_0185dba8(unaff_x21,*unaff_x26,0);
LAB_02c1c21c:
        unaff_x28 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if (unaff_x28 == 0) {
          thunk_FUN_01851c08(PTR_DAT_0380b860);
          uVar6 = thunk_FUN_01861bbc();
          uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
          FUN_02b0d540(uVar6,uVar7,0);
          uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar6,uVar7);
        }
        unaff_x27 = FUN_02b188e0(unaff_x28,0);
        if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar9 = FUN_02be74a8();
        if ((uVar9 & 1) == 0) break;
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar9 = (**(code **)(*unaff_x19 + 0x288))();
      } while ((uVar9 & 1) == 0);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar9 = FUN_0220216c();
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) goto code_r0x02c1c2dc;
        goto LAB_02c1c2e0;
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar4 = *(long *)(in_stack_00000008 + 0x10);
      if (unaff_w24 == 0) goto LAB_02c1c2f0;
LAB_02c1c2b8:
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
    } while (*(char *)(lVar4 + 0x15) == '\0');
  } while( true );
}


