/*
FUNCTION_NAME: FUN_07cddebc
ENTRY_POINT: 07cddebc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_07cddebc(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  
  puVar4 = PTR_DAT_092fef28;
  puVar3 = PTR_DAT_092fef20;
  if ((DAT_09899a1a & 1) == 0) {
    FUN_04077588(PTR_DAT_09300198);
    FUN_04077588(PTR_DAT_092fef18);
    FUN_04077588(PTR_DAT_092ff118);
    FUN_04077588(PTR_DAT_093001a0);
    FUN_04077588(PTR_DAT_092fef20);
    FUN_04077588(PTR_DAT_092ff4f0);
    FUN_04077588(PTR_DAT_092fef28);
                    /* try { // try from 07cddf48 to 07dddf77 has its CatchHandler @ 07cde0c0 */
    DAT_09899a1a = 1;
  }
  puVar2 = PTR_DAT_092fef18;
  lVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
  FUN_05c26520(lVar6,*(undefined8 *)puVar3);
  if ((param_2 & 1) == 0) {
LAB_07cde038:
    puVar4 = PTR_DAT_093001a0;
    puVar3 = PTR_DAT_092ff118;
    plVar7 = *(long **)(param_1 + 0x28);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 07cde040 to 07dde09b has its CatchHandler @ 07cddea8 */
      iVar13 = 0;
      do {
        iVar5 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        if (iVar5 <= iVar13) {
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) == 0) {
              lVar8 = *(long *)PTR_DAT_09300198;
              lVar6 = *(long *)(lVar8 + 0x38);
              if (lVar6 == 0) {
                FUN_040b1b28(lVar8);
                lVar6 = *(long *)(lVar8 + 0x38);
              }
              lVar6 = *(long *)(lVar6 + 0x10);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_040b1acc();
              }
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_040b1acc();
              }
              return **(undefined8 **)(lVar6 + 0xb8);
            }
            uVar10 = FUN_05c287cc(lVar6,*(undefined8 *)puVar4);
            return uVar10;
          }
          break;
        }
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar8 = FUN_07cf8f34(*(long *)(param_1 + 0x28),iVar13,0), lVar8 == 0)) break;
        iVar5 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar8,0);
        if (iVar5 == 0) {
          if (lVar6 == 0) break;
                    /* try { // try from 07cde09c to 07dde09f has its CatchHandler @ 07cde0bc */
                    /* try { // try from 07cde0a0 to 07dde0a3 has its CatchHandler @ 07cde0b4 */
          uVar9 = FUN_05c27124(lVar6,lVar8,*(undefined8 *)puVar3);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07cddfe8 with catch @ 07cde0a4
                       try { // try from 07cde0a4 to 07dde0d7 has its CatchHandler @ 07cddea8 */
          if ((uVar9 & 1) == 0) {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07cddffc with catch @ 07cde0a8
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07cddfc8 with catch @ 07cde0ac
                        */
            lVar11 = *(long *)(lVar6 + 0x10);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07cddfbc with catch @ 07cde0b0
                        */
            lVar12 = *(long *)puVar2;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07cddfb4 with catch @ 07cde0b4
                       catch(type#1 @ 08d635d8) { ... } // from try @ 07cde0a0 with catch @ 07cde0b4
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07cde034 with catch @ 07cde0b8
                        */
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07cde09c with catch @ 07cde0bc
                        */
            if (lVar11 == 0) break;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07cddf48 with catch @ 07cde0c0
                        */
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar8;
              thunk_FUN_040ec700(plVar7,lVar8);
            }
            else {
              FUN_05c26d88(lVar6,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        plVar7 = *(long **)(param_1 + 0x28);
        iVar13 = iVar13 + 1;
      } while (plVar7 != (long *)0x0);
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 0x28);
    if (plVar7 != (long *)0x0) {
      iVar13 = 0;
      do {
        iVar5 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        if (iVar5 <= iVar13) goto LAB_07cde038;
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar8 = FUN_07cf8f34(*(long *)(param_1 + 0x28),iVar13,0), lVar8 == 0)) break;
        iVar5 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar8,0);
                    /* try { // try from 07cddfb4 to 07dddfb7 has its CatchHandler @ 07cde0b4 */
                    /* try { // try from 07cddfbc to 07dddfc3 has its CatchHandler @ 07cde0b0 */
        if ((1 < iVar5) || (uVar9 = FUN_07cb5b00(lVar8,0), (uVar9 & 1) != 0)) {
                    /* try { // try from 07cddfc8 to 07dddfd3 has its CatchHandler @ 07cde0ac */
          if (lVar6 == 0) break;
          lVar11 = *(long *)(lVar6 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 07cddfe8 to 07dddfef has its CatchHandler @ 07cde0a4 */
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 07cddffc to 07dde01b has its CatchHandler @ 07cde0a8 */
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = lVar8;
            thunk_FUN_040ec700(plVar7,lVar8);
          }
          else {
            FUN_05c26d88(lVar6,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        plVar7 = *(long **)(param_1 + 0x28);
        iVar13 = iVar13 + 1;
      } while (plVar7 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


