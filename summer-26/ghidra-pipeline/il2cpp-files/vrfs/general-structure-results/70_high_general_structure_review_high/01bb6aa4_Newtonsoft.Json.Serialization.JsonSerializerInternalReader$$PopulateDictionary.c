/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 01bb6aa4
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bb7028) */
/* WARNING: Removing unreachable block (ram,0x01bb711c) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000040;
  
  while( true ) {
    FUN_01bb4930();
    FUN_0443c2c8(unaff_x23,0);
    FUN_01bb4930();
    FUN_01bb4930();
    FUN_0443c910(unaff_x23,0);
    FUN_01bb4930();
    System_Array__InternalArray__ICollection_Add<OVRTask_CallbackWithState<OVRAnchor,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor>>>
              (unaff_x23,0);
    FUN_01bb4930();
    FUN_01bb4930();
    FUN_0443c8d4(unaff_x23,0);
    FUN_01bb4930();
    FUN_01bb4930();
    if ((*(char *)(unaff_x23 + 0x78) == '\0') &&
       (lVar3 = FUN_0443c8a8(unaff_x23,0), lVar3 < unaff_x19)) {
      FUN_0443c8a8(unaff_x23,0);
      FUN_01bb4930();
      FUN_01bb4930();
    }
    else {
      FUN_01bb4930();
      FUN_01bb4930();
    }
    if ((*(char *)(unaff_x23 + 0x78) == '\0') &&
       (lVar3 = FUN_0443ad6c(unaff_x23,0), lVar3 < unaff_x19)) {
      FUN_0443ad6c(unaff_x23,0);
      FUN_01bb4930();
      FUN_01bb4930();
    }
    else {
      FUN_01bb4930();
      FUN_01bb4930();
    }
    uVar1 = *(undefined4 *)(unaff_x23 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x23 + 0x20);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar3 = FUN_01bb5b9c(uVar1,uVar10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (0xffff < *(int *)(lVar3 + 0x18)) {
      thunk_FUN_0159f088(PTR_DAT_06e516c8);
      lVar3 = thunk_FUN_015d056c();
      if (lVar3 != 0) {
        uVar10 = thunk_FUN_0159f088(PTR_DAT_06e15fa0);
        thunk_FUN_04437484(lVar3,uVar10,0);
        uVar10 = thunk_FUN_0159f088(PTR_DAT_06dd99f0);
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(lVar3,uVar10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar10 = *(undefined8 *)(unaff_x23 + 0x50);
    lVar4 = thunk_FUN_015d056c(*unaff_x21);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_0443cc50(lVar4,uVar10,0);
    uVar5 = FUN_0443c418(unaff_x23,0);
    if ((uVar5 & 1) == 0) {
      FUN_0443fc68(lVar4,1,0);
    }
    else {
      FUN_0443fdc4(lVar4,0);
      if ((*(char *)(unaff_x23 + 0x78) != '\0') ||
         (lVar6 = FUN_0443ad6c(unaff_x23,0), unaff_x19 <= lVar6)) {
        uVar10 = FUN_0443ad6c(unaff_x23,0);
        FUN_0443ffac(lVar4,uVar10,0);
      }
      if ((*(char *)(unaff_x23 + 0x78) != '\0') ||
         (lVar6 = FUN_0443c8a8(unaff_x23,0), unaff_x19 <= lVar6)) {
        uVar10 = FUN_0443c8a8(unaff_x23,0);
        FUN_0443ffac(lVar4,uVar10,0);
      }
      if (unaff_x19 <= *(long *)(unaff_x23 + 0x70)) {
        FUN_0443ffac(lVar4,*(long *)(unaff_x23 + 0x70),0);
      }
      FUN_0443fe2c(lVar4,1,0);
    }
    iVar2 = FUN_0443c388(unaff_x23,0);
    if (0 < iVar2) {
      if (*(int *)(*(long *)PTR_DAT_06db70f0 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_01bb5c44(unaff_x23,lVar4);
    }
    lVar4 = FUN_0443f62c(lVar4,0);
    lVar6 = *(long *)(unaff_x23 + 0x58);
    if (lVar6 == 0) {
      lVar6 = FUN_0432db40(*(undefined8 *)PTR_DAT_06dc2890);
    }
    else {
      uVar1 = *(undefined4 *)(unaff_x23 + 0x60);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar6 = FUN_01bb5b9c(uVar1,lVar6);
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (0xffff < *(int *)(lVar6 + 0x18)) {
      thunk_FUN_0159f088(PTR_DAT_06e516c8);
      lVar3 = thunk_FUN_015d056c();
      if (lVar3 != 0) {
        uVar10 = thunk_FUN_0159f088(PTR_DAT_06de2b78);
        thunk_FUN_04437484(lVar3,uVar10,0);
        uVar10 = thunk_FUN_0159f088(PTR_DAT_06dd99f0);
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(lVar3,uVar10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_01bb4930();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_01bb4930();
    FUN_01bb4930();
    FUN_01bb4930();
    FUN_01bb4930();
    iVar2 = FUN_0443ada4(unaff_x23,0);
    if (iVar2 == -1) {
      uVar5 = FUN_04439d74(unaff_x23,0);
      if ((uVar5 & 1) == 0) {
        FUN_01bb4930();
        FUN_01bb4930();
      }
      else {
        FUN_01bb4930();
        FUN_01bb4930();
      }
    }
    else {
      FUN_0443ada4(unaff_x23,0);
      FUN_01bb4930();
      FUN_01bb4930();
    }
    if (*(long *)(unaff_x23 + 0x70) < unaff_x19) {
      FUN_01bb4930();
      FUN_01bb4930();
    }
    else {
      FUN_01bb4930();
      FUN_01bb4930();
    }
    if (*(long *)(lVar3 + 0x18) != 0) {
      plVar7 = *(long **)(unaff_x20 + 0x50);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar7 + 0x398))
                (plVar7,lVar3,0,*(long *)(lVar3 + 0x18),*(undefined8 *)(*plVar7 + 0x3a0));
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar7 = *(long **)(unaff_x20 + 0x50);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar7 + 0x398))
                (plVar7,lVar4,0,*(long *)(lVar4 + 0x18),*(undefined8 *)(*plVar7 + 0x3a0));
    }
    if (*(long *)(lVar6 + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      plVar7 = *(long **)(unaff_x20 + 0x50);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar7 + 0x398))
                (plVar7,lVar6,0,*(long *)(lVar6 + 0x18),*(undefined8 *)(*plVar7 + 0x3a0));
      iVar2 = (int)*(undefined8 *)(lVar6 + 0x18);
    }
    unaff_x22 = unaff_x22 + (*(int *)(lVar3 + 0x18) + *(int *)(lVar4 + 0x18) + iVar2 + 0x2e);
    uVar5 = FUN_03e1bcc4(&stack0x00000030,*unaff_x29);
    unaff_x23 = in_stack_00000040;
    if ((uVar5 & 1) == 0) break;
    FUN_01bb4930();
    FUN_01bb4930();
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_0443c288(unaff_x23,0);
    FUN_0443c280(unaff_x23,0);
  }
  FUN_03e1bcc0(&stack0x00000030,*(undefined8 *)PTR_DAT_06e06c28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  plVar7 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06da2988);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  FUN_0443e0d0(plVar7,uVar10,0);
  FUN_0444623c(plVar7,in_stack_00000010,unaff_x22,*(undefined8 *)(unaff_x20 + 0x90),
               *(undefined8 *)(unaff_x20 + 0x98),0);
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06e636c0) {
        puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_01bb700c;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)PTR_DAT_06e636c0,0);
LAB_01bb700c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  *in_stack_00000008 = 0;
  thunk_FUN_01656ef8(in_stack_00000008,0);
  return;
}


