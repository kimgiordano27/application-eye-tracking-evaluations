/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 02c1c3a4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02c1c43c) */
/* WARNING: Removing unreachable block (ram,0x02c1c684) */
/* WARNING: Removing unreachable block (ram,0x02c1cd70) */

undefined8 OVRPlugin__GetNodeOrientationValid(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
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
  long lVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    FUN_02200638();
LAB_02c1c174:
    do {
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x20) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
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
          lVar7 = *unaff_x21;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_037f3288) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02c1c424;
              }
              uVar9 = uVar9 - 1;
                    /* try { // try from 02c1c400 to 02d1c413 has its CatchHandler @ 02c1c4ec */
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_0185dba8(unaff_x21,*(long *)PTR_DAT_037f3288,0);
                    /* try { // try from 02c1c414 to 02d1c503 has its CatchHandler @ 02c1c2fc */
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
            uVar4 = FUN_0270bdd0();
            return uVar4;
          }
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          unaff_w24 = unaff_w24 + 1;
          plVar5 = (long *)FUN_02c1bb08(in_stack_00000000);
          if (plVar5 != (long *)0x0) {
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_038043d8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
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
                    /* try { // try from 02c1c51c to 02d1c52f has its CatchHandler @ 02c1c2fc */
              FUN_017fc5a8();
            }
            goto LAB_02c1c174;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02c1c21c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0185dba8(unaff_x21,*unaff_x26,0);
LAB_02c1c21c:
      lVar7 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
      if (lVar7 == 0) {
        thunk_FUN_01851c08(PTR_DAT_0380b860);
        uVar4 = thunk_FUN_01861bbc();
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
        FUN_02b0d540(uVar4,uVar6,0);
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar4,uVar6);
      }
      uVar4 = FUN_02b188e0(lVar7,0);
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar9 = FUN_02be74a8();
      if ((uVar9 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c1c400 with catch @ 02c1c4ec
                        */
          FUN_017fc5a8();
        }
        uVar9 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar9 & 1) == 0) goto LAB_02c1c174;
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar9 = FUN_0220216c();
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar11 = FUN_02c1b6b4(uVar4);
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
                    /* try { // try from 02c1c504 to 02d1c51b has its CatchHandler @ 02c1c5cc */
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
            *plVar5 = lVar7;
            thunk_FUN_0188fd20(plVar5,lVar7);
          }
          else {
            FUN_0270a444();
          }
        }
      }
    } while (in_stack_00000008 != 0);
    lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
    *(long *)(lVar7 + 0x10) = lVar11;
    thunk_FUN_0188fd20((long *)(lVar7 + 0x10),lVar11);
    *(int *)(lVar7 + 0x18) = unaff_w24;
  } while( true );
}


