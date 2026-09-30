/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<XmlTextWriter.Namespace>
ENTRY_POINT: 046940f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8 System_Array__InternalArray__IEnumerable_GetEnumerator<XmlTextWriter_Namespace>(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_0403162c(PTR_DAT_08f8a5e8);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_0406ab48();
  }
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x60);
    *(undefined4 *)(lVar5 + 0x50) = 1;
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_075082e0(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
        lVar5 = *(long *)(unaff_x20 + 0x18);
        if (lVar5 == 0) goto LAB_0469423c;
      }
      lVar5 = *(long *)(lVar5 + 0x60);
      uVar9 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar9 = FUN_074f3c94(uVar9,0);
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *(long *)PTR_DAT_08f8a5e0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar3 = *(uint *)(lVar5 + 0x18);
          if (uVar3 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20) = uVar9;
          }
          else {
            FUN_057d53ac(lVar5,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
          uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
          uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
          if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 8) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          uVar4 = thunk_FUN_0406deb8();
          (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(uVar4,uVar9,uVar2,uVar8);
          return uVar4;
        }
      }
    }
  }
LAB_0469423c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


