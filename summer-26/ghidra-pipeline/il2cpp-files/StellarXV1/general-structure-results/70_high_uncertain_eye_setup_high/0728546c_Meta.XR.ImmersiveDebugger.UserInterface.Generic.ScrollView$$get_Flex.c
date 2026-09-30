/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$get_Flex
ENTRY_POINT: 0728546c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072859f0) */
/* WARNING: Removing unreachable block (ram,0x07285ad0) */

long Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__get_Flex
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_58;
  code *pcStack_50;
  
  uVar13 = 0;
  FUN_07f92fac(param_1,param_2,0,0);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar17 = FUN_07279974();
  puVar3 = PTR_DAT_092c1728;
  puVar1 = PTR_DAT_0928e698;
  uVar12 = auVar17._8_8_;
  lVar11 = auVar17._0_8_;
  pcStack_50 = Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_Icon;
  if ((DAT_0988f79c & 1) == 0) {
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
    DAT_0988f79c = 1;
  }
  uStack_58 = 0;
  lVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_07284930();
  uVar5 = FUN_0727aa64(lVar11,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_092ab9f0;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x10) = uVar5;
    uVar7 = FUN_07dfb290(*(undefined8 *)puVar1,0);
    if (lVar11 != 0) {
      lVar8 = FUN_07df8920(lVar11,uVar7,0);
      puVar1 = PTR_DAT_092c1af8;
      if (lVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar8 + 0x30);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      puVar2 = PTR_DAT_0928bfe0;
      uVar5 = FUN_07285b7c(uVar7);
      uVar7 = *(undefined8 *)puVar1;
      *(undefined4 *)(lVar6 + 0x14) = uVar5;
      uVar7 = FUN_07dfb290(uVar7,0);
      lVar8 = FUN_07df8920(lVar11,uVar7,0);
      if (lVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar8 + 0x30);
      }
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      thunk_FUN_040ec700();
      uVar7 = FUN_07dfb290(*(undefined8 *)puVar2,0);
      lVar8 = FUN_07df8920(lVar11,uVar7,0);
      if (lVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar8 + 0x30);
      }
      *(undefined8 *)(lVar6 + 0x30) = uVar7;
      thunk_FUN_040ec700();
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar8 = *(long *)puVar3;
      }
      puVar1 = PTR_DAT_092c1b80;
      lVar8 = FUN_07df3f40(lVar11,**(undefined8 **)(lVar8 + 0xb8),0);
      if (lVar8 != 0) {
        if (*(int *)(*(long *)PTR_DAT_092c18e0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar7 = FUN_07280cbc(lVar8,uVar12);
        FUN_072848c4(lVar6,uVar7);
      }
      uVar7 = FUN_07dfb290(*(undefined8 *)puVar1,0);
      lVar8 = FUN_07df8920(lVar11,uVar7,0);
      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) {
        if (*(int *)(*(long *)PTR_DAT_092c1600 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar13 = FUN_07285ca0(uVar13,lVar8);
        *(undefined8 *)(lVar6 + 0x40) = uVar13;
        thunk_FUN_040ec700();
      }
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = FUN_07df3f40(lVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
      if (lVar8 == 0) goto LAB_072859f4;
      plVar9 = (long *)FUN_07df4024(lVar8,0);
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092c1490) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_072857e4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092c1490,0);
LAB_072857e4:
        puVar4 = PTR_DAT_092c1b68;
        puVar2 = PTR_DAT_092c1550;
        puVar3 = PTR_DAT_092c1498;
        puVar1 = PTR_DAT_092860c8;
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        do {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_07285870;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar1,0);
LAB_07285870:
          uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar14 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_072859f4;
            lVar8 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar14 == 0) goto LAB_072859bc;
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_072859a4;
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_072858d4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar3,0);
LAB_072858d4:
          uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_0727bfcc(uVar13,uVar12);
          plVar16 = *(long **)(lVar6 + 0x58);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar8 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_UserInterface_Console__RegisterCount;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_040b1e00(plVar16,*(long *)puVar4,2);
Meta_XR_ImmersiveDebugger_UserInterface_Console__RegisterCount:
          (*(code *)*puVar10)(plVar16,uVar13,puVar10[1]);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_072859a4:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_072859d8;
    }
  }
LAB_072859bc:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092860c0,0);
LAB_072859d8:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_072859f4:
  puVar1 = PTR_DAT_092c1990;
  uVar14 = Meta_XR_ImmersiveDebugger_UserInterface_Console__EnqueueLogEntry
                     (uVar12,lVar11,*(undefined8 *)PTR_DAT_092c1990,&uStack_58);
  if ((uVar14 & 1) == 0) {
    uVar13 = FUN_07dfb290(*(undefined8 *)puVar1,0);
    lVar8 = FUN_07df8920(lVar11,uVar13,0);
    if (lVar8 == 0) {
      uVar13 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1b88,0);
      lVar11 = FUN_07df8920(lVar11,uVar13,0);
      if (lVar11 != 0) {
        thunk_FUN_040dedf8(PTR_DAT_092c1430);
        uVar13 = thunk_FUN_040b4efc();
        uVar12 = thunk_FUN_040dedf8(PTR_DAT_092c1bb0);
        FUN_0727b03c(uVar13,uVar12);
        uVar12 = thunk_FUN_040dedf8(PTR_DAT_092c1bb8);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar13,uVar12);
      }
    }
  }
  else {
    *(undefined8 *)(lVar6 + 0x18) = uStack_58;
    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x18));
    uVar13 = uStack_58;
    uVar5 = FUN_0727aa64(lVar11,*(undefined8 *)PTR_DAT_092c1b88);
    FUN_07288a94(uVar13,uVar5);
    *(undefined4 *)(lVar6 + 0x20) = uVar5;
  }
  return lVar6;
}


