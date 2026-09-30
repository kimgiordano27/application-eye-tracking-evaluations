/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$HideLogDetailsPanel
ENTRY_POINT: 072854a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07285ad0) */
/* WARNING: Removing unreachable block (ram,0x072859f0) */

long Meta_XR_ImmersiveDebugger_UserInterface_Console__HideLogDetailsPanel
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x21;
  long unaff_x23;
  undefined8 *puVar12;
  long *plVar13;
  long unaff_x24;
  long *plVar14;
  undefined8 in_stack_00000018;
  
  plVar14 = *(long **)(unaff_x24 + 0x728);
  puVar12 = *(undefined8 **)(unaff_x23 + 0x698);
  if ((*(byte *)(unaff_x21 + 0x79c) & 1) == 0) {
    FUN_04077588(PTR_DAT_092c1b68);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092c1490);
    FUN_04077588(PTR_DAT_092c1498);
    FUN_04077588(PTR_DAT_092860c8);
    FUN_04077588(PTR_DAT_092c1600);
    FUN_04077588(PTR_DAT_092c1550);
    FUN_04077588(PTR_DAT_092c18e0);
    FUN_04077588(PTR_DAT_092c1728);
    FUN_04077588(PTR_DAT_092c1af8);
    FUN_04077588(PTR_DAT_092c1b80);
    FUN_04077588(PTR_DAT_092c1b88);
    FUN_04077588(PTR_DAT_092c1990);
    FUN_04077588(PTR_DAT_0928e698);
    FUN_04077588(PTR_DAT_0928bfe0);
    FUN_04077588(PTR_DAT_092ab9f0);
    *(undefined1 *)(unaff_x21 + 0x79c) = 1;
  }
  in_stack_00000018 = 0;
  lVar6 = thunk_FUN_040b4efc(*plVar14);
  FUN_07284930();
  uVar5 = FUN_0727aa64(param_1,*puVar12);
  puVar1 = PTR_DAT_092ab9f0;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x10) = uVar5;
    uVar7 = FUN_07dfb290(*(undefined8 *)puVar1,0);
    if (param_1 != 0) {
      lVar8 = FUN_07df8920(param_1,uVar7,0);
      puVar1 = PTR_DAT_092c1af8;
      if (lVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar8 + 0x30);
      }
      if (*(int *)(*plVar14 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      puVar2 = PTR_DAT_0928bfe0;
      uVar5 = FUN_07285b7c(uVar7);
      uVar7 = *(undefined8 *)puVar1;
      *(undefined4 *)(lVar6 + 0x14) = uVar5;
      uVar7 = FUN_07dfb290(uVar7,0);
      lVar8 = FUN_07df8920(param_1,uVar7,0);
      if (lVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar8 + 0x30);
      }
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      thunk_FUN_040ec700();
      uVar7 = FUN_07dfb290(*(undefined8 *)puVar2,0);
      lVar8 = FUN_07df8920(param_1,uVar7,0);
      if (lVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar8 + 0x30);
      }
      *(undefined8 *)(lVar6 + 0x30) = uVar7;
      thunk_FUN_040ec700();
      lVar8 = *plVar14;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar8 = *plVar14;
      }
      puVar1 = PTR_DAT_092c1b80;
      lVar8 = FUN_07df3f40(param_1,**(undefined8 **)(lVar8 + 0xb8),0);
      if (lVar8 != 0) {
        if (*(int *)(*(long *)PTR_DAT_092c18e0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar7 = FUN_07280cbc(lVar8,param_2);
        FUN_072848c4(lVar6,uVar7);
      }
      uVar7 = FUN_07dfb290(*(undefined8 *)puVar1,0);
      lVar8 = FUN_07df8920(param_1,uVar7,0);
      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) {
        if (*(int *)(*(long *)PTR_DAT_092c1600 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar7 = FUN_07285ca0(param_3,lVar8);
        *(undefined8 *)(lVar6 + 0x40) = uVar7;
        thunk_FUN_040ec700();
      }
      lVar8 = *plVar14;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar8 = *plVar14;
      }
      lVar8 = FUN_07df3f40(param_1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
      if (lVar8 == 0) goto LAB_072859f4;
      plVar14 = (long *)FUN_07df4024(lVar8,0);
      if (plVar14 != (long *)0x0) {
        lVar8 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c1490) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_072857e4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092c1490,0);
LAB_072857e4:
        puVar4 = PTR_DAT_092c1b68;
        puVar3 = PTR_DAT_092c1550;
        puVar2 = PTR_DAT_092c1498;
        puVar1 = PTR_DAT_092860c8;
        plVar14 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
        do {
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *plVar14;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_07285870;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)puVar1,0);
LAB_07285870:
          uVar10 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar14 == (long *)0x0) goto LAB_072859f4;
            lVar8 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 == 0) goto LAB_072859bc;
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_072859a4;
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *plVar14;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_072858d4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)puVar2,0);
LAB_072858d4:
          uVar7 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar7 = FUN_0727bfcc(uVar7,param_2);
          plVar13 = *(long **)(lVar6 + 0x58);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_UserInterface_Console__RegisterCount;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)puVar4,2);
Meta_XR_ImmersiveDebugger_UserInterface_Console__RegisterCount:
          (*(code *)*puVar12)(plVar13,uVar7,puVar12[1]);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_072859a4:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_072859d8;
    }
  }
LAB_072859bc:
  puVar12 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092860c0,0);
LAB_072859d8:
  (*(code *)*puVar12)(plVar14,puVar12[1]);
LAB_072859f4:
  puVar1 = PTR_DAT_092c1990;
  uVar10 = Meta_XR_ImmersiveDebugger_UserInterface_Console__EnqueueLogEntry
                     (param_2,param_1,*(undefined8 *)PTR_DAT_092c1990,&stack0x00000018);
  if ((uVar10 & 1) == 0) {
    uVar7 = FUN_07dfb290(*(undefined8 *)puVar1,0);
    lVar8 = FUN_07df8920(param_1,uVar7,0);
    if (lVar8 == 0) {
      uVar7 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1b88,0);
      lVar8 = FUN_07df8920(param_1,uVar7,0);
      if (lVar8 != 0) {
        thunk_FUN_040dedf8(PTR_DAT_092c1430);
        uVar7 = thunk_FUN_040b4efc();
        uVar9 = thunk_FUN_040dedf8(PTR_DAT_092c1bb0);
        FUN_0727b03c(uVar7,uVar9);
        uVar9 = thunk_FUN_040dedf8(PTR_DAT_092c1bb8);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar7,uVar9);
      }
    }
  }
  else {
    *(undefined8 *)(lVar6 + 0x18) = in_stack_00000018;
    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x18));
    uVar7 = in_stack_00000018;
    uVar5 = FUN_0727aa64(param_1,*(undefined8 *)PTR_DAT_092c1b88);
    FUN_07288a94(uVar7,uVar5);
    *(undefined4 *)(lVar6 + 0x20) = uVar5;
  }
  return lVar6;
}


