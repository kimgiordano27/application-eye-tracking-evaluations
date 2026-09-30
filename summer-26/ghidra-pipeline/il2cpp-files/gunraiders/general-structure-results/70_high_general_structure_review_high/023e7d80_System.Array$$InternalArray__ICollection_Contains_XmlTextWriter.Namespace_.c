/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<XmlTextWriter.Namespace>
ENTRY_POINT: 023e7d80
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<XmlTextWriter_Namespace>(long param_1)

{
  void *__src;
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *in_x9;
  uint uVar6;
  long unaff_x19;
  void *unaff_x20;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *__dest;
  long unaff_x25;
  long unaff_x29;
  undefined4 unaff_s8;
  undefined4 uVar11;
  
  lVar5 = *in_x9;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar10 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar6 = *(uint *)(lVar5 + 0xfc);
  uVar9 = (ulong)uVar6;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_01c72394(lVar5);
    in_x9 = *(long **)(unaff_x19 + 0x38);
    uVar6 = *(uint *)(lVar5 + 0xfc);
    lVar5 = *in_x9;
    uVar1 = *(ushort *)(lVar5 + 0x135);
  }
  lVar8 = lVar10 - ((ulong)(uVar6 + 0x10) + 0xf & 0x1fffffff0);
  __dest = (undefined8 *)(lVar8 - (uVar9 + 0xf & 0x1fffffff0));
  *(undefined4 *)(unaff_x29 + -0x34) = 0;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_01c72394(lVar5);
    in_x9 = *(long **)(unaff_x19 + 0x38);
  }
  if (-1 < *(int *)(*in_x9 + 0x28)) {
    unaff_x20 = (void *)(unaff_x29 + -0x30);
  }
  FUN_01c5dc8c(lVar5,in_x9[1],lVar10,unaff_x20,0,unaff_x29 + -0x68);
  if (*(int *)(unaff_x29 + -0x68) < 1) {
    uVar9 = (ulong)**(uint **)(*(long *)Unity_Services_Core_Internal_LockedPackageRegistry_TypeInfo
                              + 0xb8);
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x38);
    __src = *(void **)(unaff_x29 + -0x30);
    if (-1 < *(int *)(*plVar7 + 0x28)) {
      __src = (void *)(unaff_x29 + -0x30);
    }
    memcpy(__dest,__src,uVar9);
    puVar3 = (undefined8 *)plVar7[2];
    uVar2 = *puVar3;
    if (-1 < *(int *)(*plVar7 + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    *(undefined4 *)(unaff_x29 + -0x28) = unaff_s8;
    *(undefined8 **)(unaff_x29 + -0x68) = __dest;
    *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x28;
    *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x34;
    (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x68,unaff_x29 + -0x1c);
    plVar7 = *(long **)(unaff_x19 + 0x38);
    uVar11 = *(undefined4 *)(unaff_x29 + -0x1c);
    lVar5 = *plVar7;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
      plVar7 = *(long **)(unaff_x19 + 0x38);
    }
    lVar4 = plVar7[3];
    lVar10 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(*plVar7 + 0x28)) {
      lVar10 = unaff_x29 + -0x30;
    }
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar11;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x1c;
    FUN_01c5dc8c(lVar5,lVar4,lVar8,lVar10,unaff_x29 + -0x28,unaff_x29 + -0x68);
    uVar11 = *(undefined4 *)(unaff_x29 + -0x34);
    if (*(int *)(*(long *)VoxelBusters_EssentialKit_MailComposerResult_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x60);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x58);
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x48);
    uVar9 = FUN_03c4b57c(uVar11,unaff_x29 + -0xa0,0);
  }
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


