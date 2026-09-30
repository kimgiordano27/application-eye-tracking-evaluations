/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 037091dc
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  int iVar12;
  undefined8 *unaff_x25;
  uint uVar13;
  int iVar14;
  int iVar15;
  long unaff_x27;
  ulong unaff_x29;
  long *in_stack_00000000;
  undefined2 uStack0000000000000008;
  int iStack000000000000000c;
  
  do {
    iVar14 = iStack000000000000000c;
    sVar3 = FUN_02521d48();
    if (sVar3 == 0x5b) {
      iStack000000000000000c = iVar14 + 1;
      uVar4 = FUN_03708c68();
      lVar10 = *(long *)(unaff_x27 + 0x10);
      lVar11 = *(long *)PTR_DAT_06e40f98;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_037094d0;
      uVar13 = *(uint *)(unaff_x27 + 0x18);
      if (uVar13 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x27 + 0x18) = uVar13 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar13 * 8 + 0x20) = uVar4;
        thunk_FUN_01656ef8();
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(unaff_x27);
      }
      iVar14 = iStack000000000000000c;
      FUN_0370a554(iStack000000000000000c);
      sVar3 = FUN_02521d48();
      if (sVar3 != 0x5d) {
        FUN_011a9bc8();
        uStack0000000000000008 = FUN_02521d48();
        uVar4 = FUN_028eee90(&stack0x00000008,0);
        puVar6 = PTR_DAT_06e02228;
        goto LAB_037096c4;
      }
      iStack000000000000000c = iVar14 + 1;
    }
    else {
      uVar4 = FUN_03708c68();
      lVar10 = *(long *)(unaff_x27 + 0x10);
      lVar11 = *(long *)PTR_DAT_06e40f98;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_037094d0;
      uVar13 = *(uint *)(unaff_x27 + 0x18);
      if (uVar13 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x27 + 0x18) = uVar13 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar13 * 8 + 0x20) = uVar4;
        thunk_FUN_01656ef8();
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(unaff_x27);
      }
    }
    iVar14 = iStack000000000000000c;
    FUN_0370a554(iStack000000000000000c);
    sVar3 = FUN_02521d48();
    if (sVar3 == 0x5d) {
      iVar12 = *(int *)(unaff_x20 + 0x10);
      goto LAB_03709384;
    }
    sVar3 = FUN_02521d48();
    if (sVar3 != 0x2c) {
      FUN_011a9bc8();
      uStack0000000000000008 = FUN_02521d48();
      uVar4 = FUN_028eee90(&stack0x00000008,0);
      puVar6 = PTR_DAT_06de0f68;
LAB_037096c4:
      uVar7 = thunk_FUN_0159f088(puVar6);
      uVar4 = FUN_02519a6c(uVar7,uVar4,0);
LAB_037096d4:
      thunk_FUN_0159f088(PTR_DAT_06dde728);
      uVar7 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar8 = thunk_FUN_0159f088(PTR_DAT_06e4c650);
      FUN_028f287c(uVar7,uVar4,uVar8,0);
      uVar4 = thunk_FUN_0159f088(PTR_DAT_06e5ec68);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar7,uVar4);
    }
    iStack000000000000000c = iVar14 + 1;
    iVar14 = iStack000000000000000c;
LAB_037091c4:
    iVar12 = *(int *)(unaff_x20 + 0x10);
    if (iVar12 <= iVar14) {
LAB_03709384:
      if ((iVar12 <= iVar14) || (sVar3 = FUN_02521d48(), sVar3 != 0x5d)) {
        thunk_FUN_0159f088(PTR_DAT_06dde728);
        uVar4 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar6 = PTR_DAT_06e13918;
        goto LAB_037097b4;
      }
      *in_stack_00000000 = unaff_x27;
      thunk_FUN_01656ef8(in_stack_00000000,unaff_x27);
LAB_0370917c:
      while( true ) {
        iVar12 = iVar14 + 1;
        if (*(int *)(unaff_x20 + 0x10) <= iVar12) goto LAB_0370941c;
        iStack000000000000000c = iVar12;
        uVar2 = FUN_02521d48();
        if (0x2a < uVar2) break;
        if (uVar2 == 0x26) {
          if (*(char *)(unaff_x21 + 0x38) != '\0') {
            thunk_FUN_0159f088(PTR_DAT_06dde728);
            uVar4 = thunk_FUN_015d056c();
            FUN_011a9bc8();
            puVar6 = PTR_DAT_06d95878;
            goto LAB_037097b4;
          }
          *(undefined1 *)(unaff_x21 + 0x38) = 1;
          iVar14 = iVar12;
        }
        else {
          if (uVar2 != 0x2a) {
LAB_037094d4:
            FUN_011a9bc8();
            uStack0000000000000008 = FUN_02521d48();
            uVar4 = FUN_028eee90(&stack0x00000008,0);
            uVar7 = FUN_032194f0((long)&stack0x00000008 + 4,0);
            uVar8 = thunk_FUN_0159f088(PTR_DAT_06d8e970);
            uVar5 = thunk_FUN_0159f088(PTR_DAT_06dcedf8);
            uVar4 = FUN_02526f2c(uVar8,uVar4,uVar5,uVar7,0);
            goto LAB_037096d4;
          }
          if (*(char *)(unaff_x21 + 0x38) != '\0') {
            thunk_FUN_0159f088(PTR_DAT_06dde728);
            uVar4 = thunk_FUN_015d056c();
            FUN_011a9bc8();
            puVar6 = PTR_DAT_06dc0978;
            goto LAB_037097b4;
          }
          if (iVar14 + 2 < *(int *)(unaff_x20 + 0x10)) {
            iVar14 = 0;
            do {
              iVar15 = iVar14;
              iVar9 = iVar12 + iVar15 + 1;
              sVar3 = FUN_02521d48();
              if (sVar3 != 0x2a) {
                iVar14 = iVar15 + 1;
                iVar12 = iVar12 + iVar15;
                goto LAB_037090e0;
              }
              iVar1 = iVar12 + iVar15 + 1;
              iVar14 = iVar15 + 1;
              iStack000000000000000c = iVar9;
            } while (iVar1 + 1 < *(int *)(unaff_x20 + 0x10));
            iVar14 = iVar15 + 2;
            iVar12 = iVar1;
          }
          else {
            iVar14 = 1;
          }
LAB_037090e0:
          lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06d8bcf8);
          if (lVar10 == 0) goto LAB_037094d0;
          FUN_02d76b34(lVar10,0);
          *(int *)(lVar10 + 0x10) = iVar14;
LAB_03709178:
          FUN_0370a39c();
          iVar14 = iVar12;
        }
      }
      if (uVar2 == 0x2c) {
        if ((unaff_x29 & 1) != 0) {
          iVar14 = *(int *)(unaff_x20 + 0x10);
          if (iVar12 < iVar14) goto LAB_03709458;
          goto LAB_0370948c;
        }
        if ((unaff_x22 & 1) != 0) goto LAB_0370941c;
        iVar14 = iVar12;
        if ((unaff_x23 & 1) != 0) {
          lVar10 = FUN_0252aef8();
          if (lVar10 == 0) goto LAB_037094d0;
          uVar4 = FUN_0252b348(lVar10,0);
          *unaff_x25 = uVar4;
          thunk_FUN_01656ef8();
          iVar14 = *(int *)(unaff_x20 + 0x10);
        }
        goto LAB_0370917c;
      }
      if (uVar2 != 0x5b) {
        if (uVar2 != 0x5d) goto LAB_037094d4;
        if ((unaff_x22 & 1) != 0) goto LAB_0370941c;
        thunk_FUN_0159f088(PTR_DAT_06dde728);
        uVar4 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar6 = PTR_DAT_06e078b8;
        goto LAB_037097b4;
      }
      if (*(char *)(unaff_x21 + 0x38) != '\0') {
        thunk_FUN_0159f088(PTR_DAT_06dde728);
        uVar4 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar6 = PTR_DAT_06dafb10;
        goto LAB_037097b4;
      }
      iStack000000000000000c = iVar14 + 2;
      if (*(int *)(unaff_x20 + 0x10) <= iStack000000000000000c) {
        thunk_FUN_0159f088(PTR_DAT_06dde728);
        uVar4 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar6 = PTR_DAT_06e17ef0;
        goto LAB_037097b4;
      }
      FUN_0370a4a4();
      iVar14 = iStack000000000000000c;
      sVar3 = FUN_02521d48();
      if (((sVar3 == 0x2c) || (sVar3 = FUN_02521d48(), sVar3 == 0x2a)) ||
         (sVar3 = FUN_02521d48(), sVar3 == 0x5d)) {
        iVar9 = *(int *)(unaff_x20 + 0x10);
        if (iVar14 < iVar9) {
          uVar13 = 0;
          iVar15 = 1;
          do {
            sVar3 = FUN_02521d48();
            if (sVar3 == 0x5d) {
              iVar9 = *(int *)(unaff_x20 + 0x10);
              iVar12 = iVar14;
              break;
            }
            sVar3 = FUN_02521d48();
            if (sVar3 == 0x2a) {
              if (uVar13 != 0) {
                thunk_FUN_0159f088(PTR_DAT_06dde728);
                uVar4 = thunk_FUN_015d056c();
                FUN_011a9bc8();
                puVar6 = PTR_DAT_06dc3590;
                goto LAB_037097b4;
              }
              uVar13 = 1;
            }
            else {
              sVar3 = FUN_02521d48();
              if (sVar3 != 0x2c) {
                FUN_011a9bc8();
                uStack0000000000000008 = FUN_02521d48();
                uVar4 = FUN_028eee90(&stack0x00000008,0);
                puVar6 = PTR_DAT_06df4700;
                goto LAB_037096c4;
              }
              iVar15 = iVar15 + 1;
            }
            iStack000000000000000c = iVar14 + 1;
            FUN_0370a4a4();
            iVar9 = *(int *)(unaff_x20 + 0x10);
            iVar14 = iStack000000000000000c;
            iVar12 = iStack000000000000000c;
          } while (iStack000000000000000c < iVar9);
        }
        else {
          uVar13 = 0;
          iVar15 = 1;
          iVar12 = iVar14;
        }
        if ((iVar12 < iVar9) && (sVar3 = FUN_02521d48(), sVar3 == 0x5d)) {
          if (iVar15 < 2 || ((uVar13 ^ 0xffffffff) & 1) != 0) {
            lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e64340);
            if (lVar10 != 0) {
              FUN_02d8c788(lVar10,iVar15,uVar13,0);
              goto LAB_03709178;
            }
            goto LAB_037094d0;
          }
          thunk_FUN_0159f088(PTR_DAT_06dde728);
          uVar4 = thunk_FUN_015d056c();
          FUN_011a9bc8();
          puVar6 = PTR_DAT_06e14bd0;
        }
        else {
          thunk_FUN_0159f088(PTR_DAT_06dde728);
          uVar4 = thunk_FUN_015d056c();
          FUN_011a9bc8();
          puVar6 = PTR_DAT_06de4188;
        }
        goto LAB_037097b4;
      }
      unaff_x27 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e30510);
      if (unaff_x27 != 0) break;
      goto LAB_037094d0;
    }
    FUN_0370a4a4();
  } while( true );
  FUN_043c1bd8(unaff_x27,*(undefined8 *)PTR_DAT_06e31198);
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar4 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar6 = PTR_DAT_06dbc030;
LAB_037097b4:
    uVar7 = thunk_FUN_0159f088(puVar6);
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06e4c650);
    FUN_028f287c(uVar4,uVar7,uVar8,0);
    goto LAB_037097dc;
  }
  goto LAB_037091c4;
  while( true ) {
    iVar14 = *(int *)(unaff_x20 + 0x10);
    iVar12 = iVar12 + 1;
    if (iVar14 <= iVar12) break;
LAB_03709458:
    sVar3 = FUN_02521d48();
    if (sVar3 == 0x5d) {
      iVar14 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_0370948c:
  if (iVar14 <= iVar12) {
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar4 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06e26c78);
    FUN_028f9010(uVar4,uVar7,0);
LAB_037097dc:
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06e5ec68);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar4,uVar7);
  }
  lVar10 = FUN_025284f8();
  if (lVar10 != 0) {
    uVar4 = FUN_0252b348(lVar10,0);
    *unaff_x25 = uVar4;
    thunk_FUN_01656ef8();
LAB_0370941c:
    *unaff_x19 = iVar12;
    return;
  }
LAB_037094d0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


