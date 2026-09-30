/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0586a944
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


uint System_Array_InternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w26;
  uint uVar7;
  
                    /* catch() { ... } // from try @ 0586a938 with catch @ 0586a948 */
  FUN_0586a320();
                    /* try { // try from 0586a94c to 0596a953 has its CatchHandler @ 0586a970 */
                    /* try { // try from 0586a954 to 0596a973 has its CatchHandler @ 0586a380 */
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
                    /* catch() { ... } // from try @ 0586a94c with catch @ 0586a970 */
  FUN_0586a320();
  if (unaff_x20 == 0) {
LAB_0586ab54:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (unaff_w26 < *(uint *)(unaff_x20 + 0x18)) {
    lVar6 = unaff_x20 + (long)(int)unaff_w26 * 0x10;
    uVar7 = unaff_w23 - 1;
    uVar1 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_0586a40c();
    if ((int)uVar7 <= (int)unaff_w19) {
LAB_0586aad4:
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      FUN_0586a40c();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_0586ab54;
      lVar6 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
      uVar2 = *(undefined8 *)(lVar6 + 0x20);
      uVar4 = *(undefined8 *)(lVar6 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      iVar5 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar2,uVar4,uVar1,uVar3,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar5) {
        do {
          uVar7 = uVar7 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_0586ab50;
          lVar6 = unaff_x20 + (long)(int)uVar7 * 0x10;
          uVar2 = *(undefined8 *)(lVar6 + 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 0x28);
          if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_040b1acc();
          }
          iVar5 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar3,uVar2,uVar4,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar5 < 0);
        if ((int)uVar7 <= (int)unaff_w19) goto LAB_0586aad4;
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_040b1acc();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_040b1acc();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        FUN_0586a40c();
      }
    }
  }
LAB_0586ab50:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


