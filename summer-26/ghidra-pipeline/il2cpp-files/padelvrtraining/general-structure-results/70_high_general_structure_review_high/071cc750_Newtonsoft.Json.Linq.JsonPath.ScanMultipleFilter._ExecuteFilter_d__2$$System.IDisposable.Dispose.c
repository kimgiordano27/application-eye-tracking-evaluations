/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 071cc750
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071ccbb8) */

void Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x20 + 0xd8) = param_2;
  thunk_FUN_03d1023c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar4 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),0x168);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar4;
  thunk_FUN_03d1023c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar3 = FUN_071cce68(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar3;
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar4 = FUN_0717946c(uVar3,0x10,0);
  uVar3 = FUN_07179324(uVar4,1,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar3;
  lVar6 = 0xb8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    lVar6 = 0xc0;
  }
  if (*(long *)(unaff_x20 + lVar6) != 0) {
    unaff_x21 = FUN_06fc5244();
  }
  puVar2 = PTR_DAT_0920fa48;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  if (*(int *)(*(long *)PTR_DAT_0920fa48 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  uVar5 = FUN_03d7a5c8(uVar4,unaff_x21,puVar1,*(undefined8 *)(*(long *)puVar2 + 0xb8));
  if ((uVar5 & 1) == 0) {
    uVar4 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a0f20,0x11);
    *puVar1 = uVar4;
    thunk_FUN_03d1023c(puVar1);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar6 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar6 + 0xb8) = 0;
  }
  puVar2 = PTR_DAT_091b3d30;
  if (*(int *)(*(long *)PTR_DAT_091b3d30 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar4 = FUN_071c1e54(0);
  if (DAT_0984331d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091b3d30);
    DAT_0984331d = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar6 = *(long *)puVar2;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a5b20);
  FUN_070b78f4(uVar7,uVar4,uVar9,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar7;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x20 + 0x60),uVar7);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),5);
  plVar8 = (long *)(unaff_x20 + 0x48);
  *plVar8 = lVar6;
  thunk_FUN_03d1023c(plVar8);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar4 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),1);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar4;
  thunk_FUN_03d1023c();
  if (*plVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),0xc);
    *plVar8 = lVar6;
    thunk_FUN_03d1023c(plVar8);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar4 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),7);
    lVar6 = FUN_06fc5244(uVar7,uVar4,0);
    *plVar8 = lVar6;
    thunk_FUN_03d1023c(plVar8);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),0x10);
  plVar8 = (long *)(unaff_x20 + 0x38);
  *plVar8 = lVar6;
  thunk_FUN_03d1023c(plVar8);
  if (*plVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),0x14);
    *plVar8 = lVar6;
    thunk_FUN_03d1023c(plVar8);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar4 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  thunk_FUN_03d1023c();
  uVar5 = thunk_FUN_06fd18b4(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_092147f8,0);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = thunk_FUN_06fd18b4(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0920c8c0,0
                                ), (uVar5 & 1) == 0)) {
    uVar4 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar5 = FUN_06fd1c0c(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_092144d0,0);
      if ((uVar5 & 1) != 0) goto LAB_071ccab4;
      uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar5 = thunk_FUN_06fd18b4(uVar4,*(undefined8 *)PTR_DAT_092147f0,0);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = thunk_FUN_06fd18b4(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_092147d8
                                   ,0), (uVar5 & 1) == 0)) {
      uVar5 = thunk_FUN_06fd18b4(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_092147e8,0
                                );
      if ((uVar5 & 1) == 0) {
        uVar5 = thunk_FUN_06fd18b4(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_092147c8
                                   ,0);
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_092147d0;
          thunk_FUN_03d1023c();
        }
      }
      else {
        *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_092147e0;
        thunk_FUN_03d1023c();
      }
      goto LAB_071ccacc;
    }
  }
LAB_071ccab4:
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_092147c0;
  thunk_FUN_03d1023c();
LAB_071ccacc:
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar4 = FUN_071ccdd8(*(long *)(unaff_x20 + 0x10),10);
    *(undefined8 *)(unaff_x20 + 200) = uVar4;
    thunk_FUN_03d1023c();
    FUN_071ccec8();
    if (*(char *)(unaff_x20 + 0xec) != '\0') {
      FUN_071cc198();
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
    }
    *(undefined1 *)(unaff_x20 + 0xa0) = 1;
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_03d180a8();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


