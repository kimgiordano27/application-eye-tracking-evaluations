/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldSerialize
ENTRY_POINT: 01bb528c
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bb4db0) */
/* WARNING: Removing unreachable block (ram,0x01bb4de8) */
/* WARNING: Removing unreachable block (ram,0x01bb4f84) */

void Newtonsoft_Json_Serialization_JsonProperty__get_ShouldSerialize(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  long lVar11;
  int unaff_w26;
  undefined *puVar9;
  
  if (param_1 != (long *)0x0) {
    uVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if ((uVar7 & 1) == 0) {
      *(uint *)(unaff_x20 + 0x60) = *(uint *)(unaff_x20 + 0x60) | 8;
    }
    else {
      *(undefined1 *)(unaff_x19 + 0xa0) = 1;
    }
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      FUN_0443c1b8();
      lVar3 = FUN_0443c8d4();
      if (lVar3 < 0) {
        *(uint *)(unaff_x20 + 0x60) = *(uint *)(unaff_x20 + 0x60) | 8;
      }
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x90);
    *(int *)(unaff_x20 + 0x48) = unaff_w26;
    *(undefined8 *)(unaff_x20 + 0x70) = uVar10;
    *(int *)(unaff_x19 + 0x84) = unaff_w26;
    *(undefined8 *)(unaff_x19 + 0xb0) = 0xffffffffffffffff;
    if ((*(int *)(unaff_x19 + 0xb8) == 1) ||
       ((lVar3 = FUN_0443ad6c(), lVar3 < 0 && (*(int *)(unaff_x19 + 0xb8) == 2)))) {
      FUN_0443c4f4();
    }
    FUN_01bb4930();
    FUN_01bb4930();
    FUN_0443c2c8();
    FUN_01bb4930();
    FUN_01bb4930();
    FUN_0443c910();
    FUN_01bb4930();
    System_Array__InternalArray__ICollection_Add<OVRTask_CallbackWithState<OVRAnchor,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor>>>
              ();
    FUN_01bb4930();
    FUN_01bb4930();
    if (*(char *)(unaff_x19 + 0xa0) != '\0') {
      plVar5 = *(long **)(unaff_x19 + 0x50);
      if (plVar5 == (long *)0x0) goto LAB_01bb52ec;
      uVar10 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
      *(undefined8 *)(unaff_x19 + 0xa8) = uVar10;
    }
    FUN_01bb4930();
    FUN_01bb4930();
    if (*(char *)(unaff_x19 + 0xa0) != '\0') {
      plVar5 = *(long **)(unaff_x19 + 0x50);
      if (plVar5 == (long *)0x0) goto LAB_01bb52ec;
      uVar10 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar10;
    }
    uVar7 = FUN_0443c508();
    if (((uVar7 & 1) == 0) && (*(char *)(unaff_x19 + 0xa0) == '\0')) {
      FUN_01bb4930();
      FUN_01bb4930();
      FUN_01bb4930();
    }
    else {
      FUN_01bb4930();
      FUN_01bb4930();
      FUN_01bb4930();
    }
    puVar9 = PTR_DAT_06da31c8;
    FUN_01bb4930();
    FUN_01bb49e8();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar3 = FUN_01bb5b9c(uVar1,uVar10);
    if (lVar3 != 0) {
      if (0xffff < *(int *)(lVar3 + 0x18)) {
        thunk_FUN_0159f088(PTR_DAT_06e516c8);
        uVar10 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar9 = PTR_DAT_06e29498;
LAB_01bb5424:
        uVar8 = thunk_FUN_0159f088(puVar9);
        thunk_FUN_04437484(uVar10,uVar8,0);
        uVar8 = thunk_FUN_0159f088(PTR_DAT_06e32478);
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar10,uVar8);
      }
      uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
      lVar4 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06d9d720);
      if (lVar4 != 0) {
        FUN_0443cc50(lVar4,uVar10,0);
        uVar7 = FUN_0443c508();
        if ((uVar7 & 1) == 0) {
          FUN_0443fc68(lVar4,1,0);
        }
        else {
          FUN_0443fdc4(lVar4,0);
          FUN_0443ffac(lVar4,0xffffffffffffffff,0);
          FUN_0443ffac(lVar4,0xffffffffffffffff,0);
          FUN_0443fe2c(lVar4,1,0);
          uVar7 = FUN_0443ccc8(lVar4,1,0);
          if ((uVar7 & 1) == 0) {
            thunk_FUN_0159f088(PTR_DAT_06e516c8);
            uVar10 = thunk_FUN_015d056c();
            FUN_011a9bc8();
            puVar9 = PTR_DAT_06e0d330;
            goto LAB_01bb5424;
          }
          if (*(char *)(unaff_x19 + 0xa0) != '\0') {
            *(long *)(unaff_x19 + 0xb0) = (long)*(int *)(lVar4 + 0x10);
          }
        }
        iVar2 = FUN_0443c388();
        if (0 < iVar2) {
          if (*(int *)(*(long *)PTR_DAT_06db70f0 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_01bb5c44();
        }
        lVar4 = FUN_0443f62c(lVar4,0);
        FUN_01bb4930();
        if (lVar4 != 0) {
          FUN_01bb4930();
          if (*(long *)(lVar3 + 0x18) != 0) {
            plVar5 = *(long **)(unaff_x19 + 0x50);
            if (plVar5 == (long *)0x0) goto LAB_01bb52ec;
            (**(code **)(*plVar5 + 0x398))
                      (plVar5,lVar3,0,*(long *)(lVar3 + 0x18),*(undefined8 *)(*plVar5 + 0x3a0));
          }
          uVar7 = FUN_0443c508();
          if (((uVar7 & 1) != 0) && (*(char *)(unaff_x19 + 0xa0) != '\0')) {
            plVar5 = *(long **)(unaff_x19 + 0x50);
            if (plVar5 == (long *)0x0) goto LAB_01bb52ec;
            lVar11 = *(long *)(unaff_x19 + 0xb0);
            lVar6 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
            *(long *)(unaff_x19 + 0xb0) = lVar6 + lVar11;
          }
          if (*(long *)(lVar4 + 0x18) == 0) {
            iVar2 = 0;
          }
          else {
            plVar5 = *(long **)(unaff_x19 + 0x50);
            if (plVar5 == (long *)0x0) goto LAB_01bb52ec;
            (**(code **)(*plVar5 + 0x398))
                      (plVar5,lVar4,0,*(long *)(lVar4 + 0x18),*(undefined8 *)(*plVar5 + 0x3a0));
            iVar2 = (int)*(undefined8 *)(lVar4 + 0x18);
          }
          *(long *)(unaff_x19 + 0x90) =
               *(long *)(unaff_x19 + 0x90) + (long)(*(int *)(lVar3 + 0x18) + iVar2 + 0x1e);
          iVar2 = FUN_0443c388();
          if (0 < iVar2) {
            lVar3 = *(long *)(unaff_x19 + 0x90);
            iVar2 = FUN_0443ca48();
            *(long *)(unaff_x19 + 0x90) = lVar3 + iVar2;
          }
          *(long *)(unaff_x19 + 0x78) = unaff_x20;
          thunk_FUN_01656ef8();
          if (*(long *)(unaff_x19 + 0x70) != 0) {
            FUN_0187fa04(*(long *)(unaff_x19 + 0x70),0);
            if (unaff_w26 != 8) {
LAB_01bb51b4:
              *(undefined8 *)(unaff_x19 + 0x88) = 0;
              uVar7 = FUN_0443c17c();
              if ((uVar7 & 1) == 0) {
                return;
              }
              iVar2 = FUN_0443c388();
              if (iVar2 < 1) {
                lVar3 = FUN_0443c8d4();
                if (lVar3 < 0) {
                  System_Array__InternalArray__ICollection_Add<OVRTask_CallbackWithState<OVRAnchor,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor>>>
                            ();
                }
                else {
                  FUN_0443c8d4();
                }
                FUN_01bb5d8c();
                return;
              }
              FUN_01bb5d0c();
              return;
            }
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              FUN_01bb5cd0();
              if (*(long *)(unaff_x19 + 0x48) != 0) {
                FUN_01bb4838(*(long *)(unaff_x19 + 0x48),unaff_w22);
                goto LAB_01bb51b4;
              }
            }
          }
        }
      }
    }
  }
LAB_01bb52ec:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


