/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<XmlTextWriter.Namespace>
ENTRY_POINT: 0380e4c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<XmlTextWriter_Namespace>
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar7;
  float fVar8;
  float fVar9;
  float extraout_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0380e0e8 with catch @ 0380e4c8
                        */
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0380e078 with catch @ 0380e4dc
                        */
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0380e50c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 0380e4f0 to 0390e51f has its CatchHandler @ 0380e4f0
                       catch(type#1 @ 00000000) { ... } // from try @ 0380e4f0 with catch @ 0380e4f0
                       catch(type#1 @ 00000000) { ... } // from try @ 0380e560 with catch @ 0380e4f0
                        */
    puVar2 = (undefined8 *)FUN_0367cd30(unaff_x21,*unaff_x25,1);
LAB_0380e50c:
    lVar3 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
    if (lVar3 == 0) goto LAB_0380e724;
                    /* try { // try from 0380e520 to 0390e52f has its CatchHandler @ 0380e5b4 */
    uVar5 = FUN_071c0ec8(lVar3,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
                    /* try { // try from 0380e53c to 0390e547 has its CatchHandler @ 0380e5a4 */
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0380e574;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
                    /* try { // try from 0380e55c to 0390e55f has its CatchHandler @ 0380e5a0 */
                    /* try { // try from 0380e560 to 0390e9ef has its CatchHandler @ 0380e4f0 */
      puVar2 = (undefined8 *)FUN_0367cd30(unaff_x21,*unaff_x25,0);
LAB_0380e574:
      lVar3 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if (lVar3 == 0) {
LAB_0380e724:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      fVar7 = (float)FUN_071d0360(lVar3,0);
      param_3 = fStack0000000000000008 + param_3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0380e55c with catch @ 0380e5a0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0380e53c with catch @ 0380e5a4
                        */
      param_4 = in_stack_00000000._4_4_ + param_4;
      FUN_071d043c(fStack000000000000000c + fVar7,lVar3,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0380e520 with catch @ 0380e5b4
                        */
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0380e724;
      fVar7 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x40),0);
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0380e724;
      fVar11 = param_3;
      fVar13 = param_4;
      fVar8 = (float)FUN_071d0998(*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0380e724;
      fVar15 = *(float *)(unaff_x19 + 0x48);
      fVar10 = fVar11;
      fVar12 = fVar13;
      fVar9 = (float)FUN_071d0998(*(long *)(unaff_x19 + 0x28),0);
      lVar3 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto FUN_0380e650;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(unaff_x21,*unaff_x25,0);
FUN_0380e650:
      lVar3 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if (lVar3 == 0) goto LAB_0380e724;
      fVar11 = fVar11 * fVar15;
      fVar13 = fVar13 * fVar15;
      fVar14 = param_3 + fVar11;
      param_4 = param_4 + fVar13;
      uVar4 = FUN_071d0360(lVar3,0);
      param_4 = fVar13 - param_4;
      param_3 = fVar12 * param_4;
      if (param_3 + fVar9 * (extraout_s0 - (fVar7 + fVar8 * fVar15)) + fVar10 * (fVar11 - fVar14) <=
          0.0) goto LAB_0380e6e4;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 != 0) {
        uVar4 = (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),unaff_x21,*(undefined8 *)(lVar3 + 0x28));
      }
      FUN_0381fc10(uVar4,unaff_x21);
    }
    do {
      do {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0380e724;
        FUN_045a0804(*(long *)(unaff_x19 + 0x50),unaff_w20,*unaff_x24);
LAB_0380e6e4:
        iVar1 = unaff_w20 + -1;
        if (unaff_w20 < 1) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0380e724;
        unaff_x21 = (long *)FUN_0459ed6c(*(long *)(unaff_x19 + 0x50),iVar1,*unaff_x23);
        unaff_w20 = iVar1;
      } while (unaff_x21 == (long *)0x0);
      lVar3 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0380e484;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(unaff_x21,*unaff_x25,0);
LAB_0380e484:
      uVar4 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_036a1978(*unaff_x26);
      }
      uVar5 = FUN_071c24dc(uVar4,0,0);
    } while ((uVar5 & 1) != 0);
    param_1 = *unaff_x21;
  } while( true );
}


