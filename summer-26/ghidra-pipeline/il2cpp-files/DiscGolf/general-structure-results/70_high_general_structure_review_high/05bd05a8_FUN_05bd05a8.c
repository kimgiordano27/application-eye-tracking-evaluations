/*
FUNCTION_NAME: FUN_05bd05a8
ENTRY_POINT: 05bd05a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05bd09d4) */
/* WARNING: Removing unreachable block (ram,0x05bd0978) */

void FUN_05bd05a8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  
                    /* try { // try from 05bd05bc to 05cd05d3 has its CatchHandler @ 05bd06ac */
  if ((DAT_06dc2560 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(PTR_DAT_069fc6f8);
                    /* try { // try from 05bd05f0 to 05cd05f3 has its CatchHandler @ 05bd069c */
    FUN_02d965b8(PTR_DAT_069fbff0);
                    /* try { // try from 05bd0604 to 05cd060f has its CatchHandler @ 05bd0690 */
    FUN_02d965b8(PTR_DAT_069fbff8);
                    /* try { // try from 05bd0610 to 05cd061f has its CatchHandler @ 05bd0698 */
    FUN_02d965b8(PTR_DAT_06a112b0);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_set_Item__
                );
                    /* try { // try from 05bd0624 to 05cd063b has its CatchHandler @ 05bd06a0 */
    FUN_02d965b8(PTR_DAT_06a0aa38);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<LocomotionMediator,_Pose>__ctor__);
                    /* try { // try from 05bd063c to 05cd065f has its CatchHandler @ 05bd06a4 */
    DAT_06dc2560 = 1;
  }
  if (param_2 != 0) {
    FUN_053798ac(param_2,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<LocomotionMediator,_Pose>__ctor__
                 ,0);
    puVar7 = 
    Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_set_Item__
    ;
    puVar6 = PTR_DAT_06a112b0;
    puVar5 = PTR_DAT_06a0aa38;
    puVar4 = PTR_DAT_069fc6f8;
    puVar3 = PTR_DAT_069fc178;
    puVar2 = PTR_DAT_069fbff8;
    puVar1 = PTR_DAT_069fbff0;
                    /* try { // try from 05bd0660 to 05cd0677 has its CatchHandler @ 05bd0054 */
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 != (long *)0x0) {
                    /* try { // try from 05bd0678 to 05cd0687 has its CatchHandler @ 05bd06ac */
                    /* try { // try from 05bd0688 to 05cd068b has its CatchHandler @ 05bd0694 */
                    /* try { // try from 05bd068c to 05cd068f has its CatchHandler @ 05bd06a4 */
                    /* catch() { ... } // from try @ 05bd0604 with catch @ 05bd0690 */
                    /* catch() { ... } // from try @ 05bd0688 with catch @ 05bd0694 */
                    /* catch() { ... } // from try @ 05bd0610 with catch @ 05bd0698 */
                    /* catch() { ... } // from try @ 05bd05f0 with catch @ 05bd069c */
                    /* catch() { ... } // from try @ 05bd0624 with catch @ 05bd06a0 */
                    /* catch() { ... } // from try @ 05bd063c with catch @ 05bd06a4
                       catch() { ... } // from try @ 05bd068c with catch @ 05bd06a4 */
                    /* catch() { ... } // from try @ 05bd05bc with catch @ 05bd06ac
                       catch() { ... } // from try @ 05bd0678 with catch @ 05bd06ac */
      plVar8 = (long *)(**(code **)(*plVar8 + 0x318))(plVar8,*(undefined8 *)(*plVar8 + 800));
                    /* try { // try from 05bd06b4 to 05cd06b7 has its CatchHandler @ 05bd06f4 */
                    /* try { // try from 05bd06b8 to 05cd06d7 has its CatchHandler @ 05bd0054 */
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar15 = *plVar8;
        lVar14 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_05bd0718;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(plVar8,lVar14,0);
LAB_05bd0718:
        uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar16 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_02dd3048(plVar8,*(undefined8 *)puVar1);
          if (plVar8 == (long *)0x0) goto LAB_05bd096c;
          lVar15 = *plVar8;
          lVar14 = *(long *)puVar1;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 == 0) goto LAB_05bd0944;
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_05bd092c;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar15 = *plVar8;
        lVar14 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_05bd0780;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(plVar8,lVar14,1);
LAB_05bd0780:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0();
        }
        plVar11 = (long *)thunk_FUN_02dd328c();
        plVar10 = (long *)*plVar11;
        plVar11 = (long *)plVar11[1];
        plVar12 = (long *)thunk_FUN_02dd3048(plVar10,*(undefined8 *)puVar6);
        lVar14 = *(long *)puVar7;
        if (plVar12 == (long *)0x0) {
          if (plVar11 != (long *)0x0) {
            if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                lVar14)) goto LAB_05bd09ac;
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar13 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        }
        else {
          if (plVar11 != (long *)0x0) {
            if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                lVar14)) {
LAB_05bd09ac:
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar11);
            }
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar13 = FUN_0547e2f8(0);
          lVar15 = *plVar12;
          lVar14 = *(long *)puVar6;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05bd08a4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02dd004c(plVar12,lVar14,0);
LAB_05bd08a4:
          uVar13 = (*(code *)*puVar9)(plVar12,0,uVar13,puVar9[1]);
        }
        lVar14 = FUN_053798ac(param_2,uVar13,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0537a744(lVar14,0x20,0);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05bd721c(plVar11,param_2);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_05bd092c:
    if (*(long *)(piVar17 + -2) == lVar14) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05bd0960;
    }
  }
LAB_05bd0944:
  puVar9 = (undefined8 *)FUN_02dd004c(plVar8,lVar14,0);
LAB_05bd0960:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_05bd096c:
  FUN_053798ac(param_2,*(undefined8 *)puVar5,0);
  return;
}


