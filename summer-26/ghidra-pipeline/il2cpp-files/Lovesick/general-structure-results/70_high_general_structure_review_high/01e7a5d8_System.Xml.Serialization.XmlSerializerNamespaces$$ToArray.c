/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 01e7a5d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01e7a844) */

void System_Xml_Serialization_XmlSerializerNamespaces__ToArray
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar9 [16];
  
  do {
    piVar7 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_01e7a614;
      }
      in_x9 = in_x9 - 1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
    do {
                    /* try { // try from 01e7a5f4 to 01f7a61b has its CatchHandler @ 01e7a6dc */
      puVar3 = (undefined8 *)FUN_00d59724();
LAB_01e7a614:
      plVar4 = (long *)(*(code *)*puVar3)();
                    /* try { // try from 01e7a620 to 01f7a643 has its CatchHandler @ 01e7a6ec */
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x26 + 300);
                    /* try { // try from 01e7a64c to 01f7a667 has its CatchHandler @ 01e7a6e4 */
        if ((*(byte *)(*plVar4 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar4);
        }
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar4[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 01e7a668 to 01f7a6ab has its CatchHandler @ 01e7a500 */
      if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01299e64(*(long *)(unaff_x19 + 0x48),*(undefined8 *)(plVar4[0xd] + 0x18),&stack0x0000001c,
                   *unaff_x27);
      lVar8 = plVar4[0xd];
      lVar5 = thunk_FUN_00d62348(*unaff_x28);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01e98244(lVar5,lVar8,0);
      auVar9 = NEON_ext(*(undefined1 (*) [16])(plVar4 + 0xb),*(undefined1 (*) [16])(plVar4 + 0xb),8,
                        1);
                    /* try { // try from 01e7a6ac to 01f7a6cb has its CatchHandler @ 01e7a6d4 */
      *(long *)(lVar5 + 0x20) = auVar9._8_8_;
      *(long *)(lVar5 + 0x18) = auVar9._0_8_;
      lVar8 = FUN_01e9238c();
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 01e7a6cc to 01f7a6cf has its CatchHandler @ 01e7a6dc */
                    /* try { // try from 01e7a6d0 to 01f7a703 has its CatchHandler @ 01e7a500 */
      uVar6 = FUN_0129aa60(lVar8,*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10),*unaff_x29);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e7a6ac with catch @ 01e7a6d4
                        */
      if ((uVar6 & 1) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e7a564 with catch @ 01e7a6d8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e7a5f4 with catch @ 01e7a6dc
                       catch(type#1 @ 03274860) { ... } // from try @ 01e7a6cc with catch @ 01e7a6dc
                        */
        lVar8 = FUN_01e9238c();
        if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129a054(lVar8,*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10),lVar5,
                     *(undefined8 *)Sirenix_Serialization_IDataReader_TypeInfo);
      }
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01e7a5b4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724();
LAB_01e7a5b4:
      uVar6 = (*(code *)*puVar3)();
      puVar2 = StringLiteral_10310;
      if ((uVar6 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_00d6225c();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 == 0) goto LAB_01e7a75c;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_01e7a744;
      }
      param_1 = *unaff_x20;
      param_3 = *unaff_x24;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_01e7a744:
    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01e7a778;
    }
  }
LAB_01e7a75c:
  puVar3 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar2,0);
LAB_01e7a778:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


