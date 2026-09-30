/*
FUNCTION_NAME: Amazon.S3.Model.StreamResponse$$Dispose
ENTRY_POINT: 0419db30
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419dc74) */
/* WARNING: Removing unreachable block (ram,0x0419db74) */
/* WARNING: Removing unreachable block (ram,0x0419db7c) */
/* WARNING: Removing unreachable block (ram,0x0419de90) */
/* WARNING: Removing unreachable block (ram,0x0419dc7c) */
/* WARNING: Removing unreachable block (ram,0x0419dc88) */
/* WARNING: Removing unreachable block (ram,0x0419dedc) */
/* WARNING: Removing unreachable block (ram,0x0419dc90) */
/* WARNING: Removing unreachable block (ram,0x0419dee0) */
/* WARNING: Removing unreachable block (ram,0x0419dc98) */
/* WARNING: Removing unreachable block (ram,0x0419df28) */
/* WARNING: Removing unreachable block (ram,0x0419dcac) */
/* WARNING: Removing unreachable block (ram,0x0419dce0) */
/* WARNING: Removing unreachable block (ram,0x0419dd08) */
/* WARNING: Removing unreachable block (ram,0x0419dd0c) */
/* WARNING: Removing unreachable block (ram,0x0419cf90) */
/* WARNING: Removing unreachable block (ram,0x0419dd2c) */

void Amazon_S3_Model_StreamResponse__Dispose(code *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 *unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x25;
  int unaff_w26;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (*param_1)();
  if (*(long *)(unaff_x19 + 0xe) != 0) {
    if (*(long *)(*(long *)(unaff_x19 + 0xe) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05ecf5bc();
  }
  uVar4 = FUN_0419e820(*unaff_x21);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(char *)(*(long *)(unaff_x19 + 10) + 0x58) != '\0') {
      lVar5 = FUN_0419bd6c();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      _in_stack_00000030 = FUN_0636bf60(lVar5,0,*(undefined8 *)PTR_DAT_091b11f8);
      uVar4 = FUN_068a55a8(&stack0x00000030,*(undefined8 *)PTR_DAT_091b11e0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000030;
        thunk_FUN_03d1023c(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_04a4d7e8(unaff_x19 + 2,&stack0x00000030);
        return;
      }
      uVar2 = FUN_068a55f4(&stack0x00000030,*(undefined8 *)PTR_DAT_091b11d8);
      goto LAB_0419d4c8;
    }
  }
  if (*(long *)(unaff_x19 + 0xe) != 0) {
    if (*(long *)(*(long *)(unaff_x19 + 0xe) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_0419c2e8();
    FUN_05ecf5bc();
  }
  if (unaff_w26 == 3) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x1c);
    *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    *(undefined8 *)(unaff_x19 + 0x1e) = 0;
    *unaff_x19 = 0xffffffff;
FUN_0419d8f0:
    uVar2 = FUN_068a55f4(&stack0x00000020,*(undefined8 *)PTR_DAT_091b1f48);
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = FUN_0419be9c(uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x18));
    *(undefined8 *)(unaff_x19 + 0x1a) = uVar2;
    thunk_FUN_03d1023c();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar7 = *(long **)(unaff_x20 + 0x20);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(undefined8 *)(unaff_x19 + 0x1a);
    lVar5 = *plVar7;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x28);
    uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091b1f70) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto Amazon_S3_Model_SSEKMS___ctor;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091b1f70,7);
Amazon_S3_Model_SSEKMS___ctor:
    lVar5 = (*(code *)*puVar3)(plVar7,uVar2,uVar10,uVar9,puVar3[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    _in_stack_00000010 = FUN_071f1178(lVar5,0,0);
    uVar4 = FUN_0708d5f0(&stack0x00000010,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000010;
      thunk_FUN_03d1023c(unaff_x19 + 0x20,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b9a808(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  else {
    if (unaff_w26 != 4) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar7 = *(long **)(unaff_x20 + 0x10);
      uVar2 = FUN_06fd2168(*(undefined8 *)PTR_DAT_091b2020,
                           *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x18),
                           *(undefined8 *)PTR_DAT_091add60,0);
      lVar8 = *(long *)PTR_DAT_091a0c08;
      lVar5 = *(long *)(lVar8 + 0x38);
      if (lVar5 == 0) {
        FUN_03d8f2c8(lVar8);
        lVar5 = *(long *)(lVar8 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar8 = *plVar7;
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091b1498) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
            goto Amazon_S3_Model_SessionCredentials__get_AccessKeyId;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091b1498,0);
Amazon_S3_Model_SessionCredentials__get_AccessKeyId:
      (*(code *)*puVar3)(plVar7,uVar2,uVar9,puVar3[1]);
      plVar7 = *(long **)(unaff_x20 + 0x18);
      uVar2 = FUN_0419bf94(*(undefined8 *)(unaff_x19 + 0x14));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091b1f68) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0419d8a8;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091b1f68,1);
LAB_0419d8a8:
      lVar5 = (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      _in_stack_00000020 = FUN_0636bf60(lVar5,0,*(undefined8 *)PTR_DAT_091b1f78);
      uVar4 = FUN_068a55a8(&stack0x00000020,*(undefined8 *)PTR_DAT_091b1f50);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 3;
        *(undefined1 (*) [16])(unaff_x19 + 0x1c) = _in_stack_00000020;
        thunk_FUN_03d1023c(unaff_x19 + 0x1c,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_04a4d7e8(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      goto FUN_0419d8f0;
    }
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x22) = 0;
    *unaff_x19 = 0xffffffff;
  }
  FUN_0708d63c(&stack0x00000010,0);
  lVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091b1fd0);
  FUN_071bc31c(lVar5,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(unaff_x19 + 0x1a);
  thunk_FUN_03d1023c();
  uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091b1ff0);
  FUN_071bc31c(uVar2,0);
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  thunk_FUN_03d1023c((undefined8 *)(lVar5 + 0x18),uVar2);
  if (*(int *)(*(long *)PTR_DAT_091ae6b8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar4 = FUN_04136320(0);
  if ((uVar4 & 1) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_0419c1a0(*(long *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x19 + 10),lVar5);
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x1a);
LAB_0419d4c8:
  puVar1 = PTR_DAT_091b1f38;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,uVar2,*(undefined8 *)puVar1);
  return;
}


