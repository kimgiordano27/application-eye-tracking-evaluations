/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<RequestSceneHeader>
ENTRY_POINT: 0377b6f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<RequestSceneHeader>
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float unaff_w25;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  float fVar17;
  float unaff_s12;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
code_r0x0377b6f0:
  *(undefined4 *)(unaff_x21 + 0xa0) = param_1;
  uVar15 = FUN_068f321c(0x41200000,unaff_w25,0);
  *(undefined4 *)(unaff_x21 + 0x5c) = uVar15;
  uVar15 = FUN_068f321c(0,0);
  do {
    *(undefined4 *)(unaff_x21 + 100) = uVar15;
    uVar15 = FUN_068f325c(0xc,0x24,0);
    *(undefined4 *)(unaff_x21 + 0x70) = uVar15;
    uVar15 = FUN_068f321c(0x3f800000,0x40f00000,0);
    *(undefined4 *)(unaff_x21 + 0xbc) = uVar15;
    *(uint *)(unaff_x21 + 0xc0) = (uint)*(byte *)(unaff_x19 + 0x30);
    lVar11 = FUN_03c73394(unaff_x20,*unaff_x24);
    iVar5 = FUN_068f325c(0xfffffe0c,500,0);
    if (lVar11 == 0) goto LAB_0377b7d8;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(float *)(lVar11 + 0x24) = (float)iVar5;
    *(undefined4 *)(lVar11 + 0x28) = 0;
    iStack0000000000000008 = iStack0000000000000008 + 1;
    if (*(int *)(unaff_x19 + 0x24) <= iStack0000000000000008) {
      do {
        iStack000000000000000c = iStack000000000000000c + 1;
        if (*(int *)(unaff_x19 + 0x20) <= iStack000000000000000c) {
          return;
        }
        iStack0000000000000008 = 0;
      } while (*(int *)(unaff_x19 + 0x24) < 1);
    }
    cVar1 = *(char *)(unaff_x19 + 0x31);
    uVar6 = FUN_05aec914((long)&stack0x00000008 + 4,0);
    uVar7 = FUN_05aec914(&stack0x00000008,0);
    uVar6 = FUN_059721e8(*(undefined8 *)PTR_DAT_06f95750,uVar6,*(undefined8 *)PTR_DAT_06f6d5e8,uVar7
                         ,0);
    if (cVar1 == '\0') {
      plVar8 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,2);
      uVar12 = *(undefined8 *)PTR_DAT_06f95748;
      uVar7 = param_4;
      if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d6a0);
        uVar7 = param_4;
      }
      lVar11 = FUN_05afde1c(uVar12,0);
      if (plVar8 == (long *)0x0) goto LAB_0377b7d8;
      if ((lVar11 != 0) &&
         (lVar9 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_0377b7e0;
      if ((int)plVar8[3] == 0) goto LAB_0377b7dc;
      plVar8[4] = lVar11;
      thunk_FUN_03048534(plVar8 + 4,lVar11);
      lVar11 = FUN_05afde1c(*unaff_x28,0);
      if ((lVar11 != 0) &&
         (lVar9 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_0377b7e0;
      if (*(uint *)(plVar8 + 3) < 2) goto LAB_0377b7dc;
      plVar10 = plVar8 + 5;
      *plVar10 = lVar11;
    }
    else {
      plVar8 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,3);
      uVar12 = *(undefined8 *)PTR_DAT_06f7e4d8;
      uVar7 = param_4;
      if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d6a0);
        uVar7 = param_4;
      }
      lVar11 = FUN_05afde1c(uVar12,0);
      if (plVar8 == (long *)0x0) goto LAB_0377b7d8;
      if ((lVar11 != 0) &&
         (lVar9 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_0377b7e0:
        uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar6,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_0377b7dc:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar8[4] = lVar11;
      thunk_FUN_03048534(plVar8 + 4,lVar11);
      lVar11 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f95748,0);
      if ((lVar11 != 0) &&
         (lVar9 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_0377b7e0;
      if (*(uint *)(plVar8 + 3) < 2) goto LAB_0377b7dc;
      plVar8[5] = lVar11;
      thunk_FUN_03048534(plVar8 + 5,lVar11);
      lVar11 = FUN_05afde1c(*unaff_x28,0);
      if ((lVar11 != 0) &&
         (lVar9 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_0377b7e0;
      if (*(uint *)(plVar8 + 3) < 3) goto LAB_0377b7dc;
      plVar10 = plVar8 + 6;
      *plVar10 = lVar11;
    }
    thunk_FUN_03048534(plVar10,lVar11);
    unaff_x20 = thunk_FUN_0301080c(*unaff_x29);
    FUN_068f8e6c(unaff_x20,uVar6,plVar8,0);
    if (unaff_x20 == 0) goto LAB_0377b7d8;
    lVar11 = FUN_068f8a88(unaff_x20,0);
    iVar2 = iStack000000000000000c;
    iVar5 = iStack0000000000000008;
    fVar17 = *(float *)(unaff_x19 + 0x28);
    uVar15 = *(undefined4 *)(unaff_x19 + 0x2c);
    iVar3 = FUN_068f325c(0xffffffd3,0x2d,0);
    iVar4 = FUN_068f325c(0,0x168,0);
    uVar16 = (ulong)(uint)((float)iVar4 * unaff_s12);
    uVar6 = 0;
    param_4 = FUN_068ecdd4(((float)iVar3 + unaff_w25) * unaff_s12,uVar16,0,0);
    if (lVar11 == 0) goto LAB_0377b7d8;
    FUN_06904e58(fVar17 * (float)iVar2,uVar15,fVar17 * (float)iVar5,param_4,uVar16,uVar6,uVar7,
                 lVar11,0);
    unaff_x21 = FUN_03c73394(unaff_x20,*unaff_x23);
    if (*(char *)(unaff_x19 + 0x31) == '\0') break;
    lVar11 = FUN_03c73394(unaff_x20,*(undefined8 *)PTR_DAT_06f95728);
    if (lVar11 == 0) goto LAB_0377b7d8;
    FUN_068d30f8(lVar11,0,0);
    uVar6 = FUN_068f32e4(0);
    uVar7 = FUN_068f32e4(0);
    uVar12 = FUN_068f32e4(0);
    param_4 = 0x3f800000;
    FUN_068d329c(uVar6,uVar7,uVar12,lVar11,0);
    FUN_068f321c(0x40400000,0x41000000,0);
    FUN_068d375c(lVar11,0);
    FUN_068f321c(0);
    FUN_068d3434(lVar11,0);
    FUN_068f321c(0x41200000,unaff_w25,0);
    FUN_068d3178(lVar11,0);
    lVar9 = FUN_03770444(0);
    if (lVar9 == 0) goto LAB_0377b7d8;
    if (*(char *)(lVar9 + 0x18) != '\0') {
      lVar9 = FUN_03770444(0);
      if (lVar9 == 0) goto LAB_0377b7d8;
      FUN_068d3998(lVar11,~(1 << (ulong)(*(uint *)(lVar9 + 0x1c) & 0x1f)),0);
    }
    uVar15 = FUN_068f321c(0,0);
    if (unaff_x21 == 0) goto LAB_0377b7d8;
  } while( true );
  uVar15 = FUN_068f32e4(0);
  uVar13 = FUN_068f32e4(0);
  uVar14 = FUN_068f32e4(0);
  if (unaff_x21 == 0) {
LAB_0377b7d8:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  *(undefined4 *)(unaff_x21 + 0x30) = uVar14;
  *(undefined4 *)(unaff_x21 + 0x28) = uVar15;
  *(undefined4 *)(unaff_x21 + 0x2c) = uVar13;
  *(undefined4 *)(unaff_x21 + 0x34) = 0x3f800000;
  param_1 = FUN_068f321c(0x40400000,0x41000000,0);
  goto code_r0x0377b6f0;
}


