/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonTypeReflector$$GetAttribute<object>
ENTRY_POINT: 05b9b050
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b9b5e0) */

long Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>(void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar11;
  uint uVar12;
  long in_stack_00000018;
  long *in_stack_00000028;
  
  FUN_04980b90();
                    /* try { // try from 05b9b05c to 05c9b05f has its CatchHandler @ 05b9b064 */
  in_stack_00000028 = (long *)0x0;
                    /* try { // try from 05b9b060 to 05c9b083 has its CatchHandler @ 05b9ab5c */
  in_stack_00000018 = 0;
                    /* catch() { ... } // from try @ 05b9afcc with catch @ 05b9b064
                       catch() { ... } // from try @ 05b9b05c with catch @ 05b9b064 */
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    FUN_04980b34(lVar6);
  }
                    /* try { // try from 05b9b084 to 05c9b087 has its CatchHandler @ 05b9b0a8 */
  plVar3 = (long *)thunk_FUN_04983e64();
  if (plVar3 == (long *)0x0) {
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = **(long **)(unaff_x20 + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 05b9b104 to 05c9b107 has its CatchHandler @ 05b9b110 */
      lVar6 = FUN_04980b34(lVar6);
    }
                    /* catch() { ... } // from try @ 05b9b104 with catch @ 05b9b110 */
    lVar7 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 05b9b118 to 05c9b11f has its CatchHandler @ 05b9b200 */
    if (uVar9 != 0) {
                    /* try { // try from 05b9b120 to 05c9b15f has its CatchHandler @ 05b9ab5c */
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 05b9ac78 with catch @ 05b9b124
                       catch() { ... } // from try @ 05b9ad5c with catch @ 05b9b124 */
                    /* catch() { ... } // from try @ 05b9ac44 with catch @ 05b9b128 */
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05b9b224;
        }
        uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 05b9af9c with catch @ 05b9b134 */
        piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 05b9b040 with catch @ 05b9b138 */
      } while (uVar9 != 0);
    }
                    /* catch() { ... } // from try @ 05b9b094 with catch @ 05b9b13c */
                    /* catch() { ... } // from try @ 05b9af88 with catch @ 05b9b140 */
    puVar4 = (undefined8 *)FUN_04980e68();
LAB_05b9b224:
    plVar3 = (long *)(*(code *)*puVar4)();
    puVar1 = PTR_DAT_0ac09ba8;
    in_stack_00000028 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac09ba8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05b9b298;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac09ba8,0);
LAB_05b9b298:
    uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar9 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34();
      }
      lVar6 = FUN_04947fd0(lVar6,4);
      plVar3 = in_stack_00000028;
      in_stack_00000018 = lVar6;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34(lVar7);
      }
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05b9b350;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar3,lVar7,0);
LAB_05b9b350:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      *(undefined8 *)(lVar6 + 0x20) = uVar5;
      if (in_stack_00000028 != (long *)0x0) {
        uVar2 = 1;
        do {
          plVar3 = in_stack_00000028;
          lVar6 = *in_stack_00000028;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto UnityEngine_JsonUtility__FromJson<object>;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000028,*(long *)puVar1,0);
UnityEngine_JsonUtility__FromJson<object>:
          uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar9 & 1) == 0) {
            *unaff_x19 = uVar2;
            iVar11 = 0xb;
            lVar6 = in_stack_00000018;
            goto LAB_05b9b4cc;
          }
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          if (uVar2 == *(uint *)(in_stack_00000018 + 0x18)) {
            uVar12 = 0x7fefffff;
            if (0x7feffffe < (int)uVar2) {
              uVar12 = uVar2 + 1;
            }
            if (uVar2 << 1 < 0x7ff00000) {
              uVar12 = uVar2 << 1;
            }
            FUN_059af6e8(&stack0x00000018,uVar12,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50)
                        );
          }
          plVar3 = in_stack_00000028;
          lVar6 = in_stack_00000018;
          if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_04980b34(lVar7);
          }
          lVar8 = *plVar3;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto FUN_05b9b488;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_04980e68(plVar3,lVar7,0);
FUN_05b9b488:
          uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
          uVar2 = uVar2 + 1;
        } while (in_stack_00000028 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = 0;
    iVar11 = 3;
LAB_05b9b4cc:
    plVar3 = in_stack_00000028;
    if (in_stack_00000028 != (long *)0x0) {
      lVar7 = *in_stack_00000028;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac09b90) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05b9b52c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000028,*(long *)PTR_DAT_0ac09b90,0);
LAB_05b9b52c:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if ((iVar11 != 3) && (iVar11 != 0)) {
      return lVar6;
    }
  }
  else {
                    /* try { // try from 05b9b094 to 05c9b09b has its CatchHandler @ 05b9b13c */
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
                    /* try { // try from 05b9b09c to 05c9b09f has its CatchHandler @ 05b9b0d0 */
                    /* try { // try from 05b9b0a0 to 05c9b0a3 has its CatchHandler @ 05b9b0e4 */
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 05b9b0a4 to 05c9b0a7 has its CatchHandler @ 05b9b0c8 */
                    /* catch() { ... } // from try @ 05b9b084 with catch @ 05b9b0a8 */
      lVar6 = FUN_04980b34(lVar6);
    }
                    /* try { // try from 05b9b0b0 to 05c9b0b7 has its CatchHandler @ 05b9b200 */
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 05b9b0b8 to 05c9b103 has its CatchHandler @ 05b9ab5c */
    if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 05b9ade0 with catch @ 05b9b0bc */
                    /* catch() { ... } // from try @ 05b9af30 with catch @ 05b9b0c0 */
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 05b9af4c with catch @ 05b9b0c4 */
                    /* catch() { ... } // from try @ 05b9b0a4 with catch @ 05b9b0c8 */
                    /* catch() { ... } // from try @ 05b9ad04 with catch @ 05b9b0cc
                       catch() { ... } // from try @ 05b9aef8 with catch @ 05b9b0cc */
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05b9b158;
        }
                    /* catch() { ... } // from try @ 05b9b09c with catch @ 05b9b0d0 */
        uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 05b9acd0 with catch @ 05b9b0d4 */
        piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 05b9aed0 with catch @ 05b9b0d8 */
      } while (uVar9 != 0);
    }
                    /* catch() { ... } // from try @ 05b9ade4 with catch @ 05b9b0dc */
                    /* catch() { ... } // from try @ 05b9adb8 with catch @ 05b9b0e0
                       catch() { ... } // from try @ 05b9ae18 with catch @ 05b9b0e0 */
                    /* catch() { ... } // from try @ 05b9ae60 with catch @ 05b9b0e4
                       catch() { ... } // from try @ 05b9b0a0 with catch @ 05b9b0e4 */
    puVar4 = (undefined8 *)FUN_04980e68(plVar3,lVar6,0);
LAB_05b9b158:
                    /* try { // try from 05b9b160 to 05c9b163 has its CatchHandler @ 05b9b1bc */
    uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (uVar2 != 0) {
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
                    /* try { // try from 05b9b174 to 05c9b177 has its CatchHandler @ 05b9b204 */
                    /* try { // try from 05b9b178 to 05c9b1b7 has its CatchHandler @ 05b9ab5c */
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34();
      }
      lVar6 = FUN_04947fd0(lVar6,uVar2);
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34(lVar7);
      }
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 05b9b1b8 to 05c9b1bb has its CatchHandler @ 05b9b204 */
      if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 05b9b160 with catch @ 05b9b1bc */
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 05b9b1c4 to 05c9b1cb has its CatchHandler @ 05b9b200 */
                    /* try { // try from 05b9b1cc to 05c9b1e3 has its CatchHandler @ 05b9ab5c */
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_05b9b1fc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar3,lVar7,5);
LAB_05b9b1fc:
      (*(code *)*puVar4)(plVar3,lVar6,0,puVar4[1]);
      *unaff_x19 = uVar2;
      return lVar6;
    }
  }
  *unaff_x19 = 0;
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_04980b90(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
  }
  return **(long **)(lVar6 + 0xb8);
}


