/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03539004
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 unaff_x24;
  long lVar14;
  uint uVar15;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(PTR_DAT_0727f3c0);
  thunk_FUN_032e1da0(PTR_DAT_0727f3c8);
  thunk_FUN_032e1da0(PTR_DAT_0727f3d0);
  thunk_FUN_032e1da0(PTR_DAT_0727f3d8);
  thunk_FUN_032e1da0(PTR_DAT_0727f3b8);
  thunk_FUN_032e1da0(PTR_DAT_0727f2e0);
  thunk_FUN_032e1da0(PTR_DAT_0727f2e8);
  thunk_FUN_032e1da0(PTR_DAT_0727f3e0);
  thunk_FUN_032e1da0(PTR_DAT_0727f2f0);
  thunk_FUN_032e1da0(PTR_DAT_0727f2f8);
  *(undefined1 *)(unaff_x19 + 0x2df) = 1;
  lVar7 = thunk_FUN_032a56a0(*unaff_x20);
  FUN_059660a0(lVar7,0);
  puVar2 = PTR_DAT_0727f3d0;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = unaff_x24;
    thunk_FUN_0333a630();
    lVar8 = FUN_03536b0c();
    plVar12 = (long *)(lVar7 + 0x18);
    *plVar12 = lVar8;
    thunk_FUN_0333a630(plVar12,lVar8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_0353927c();
    plVar11 = (long *)(lVar7 + 0x20);
    *plVar11 = lVar8;
    thunk_FUN_0333a630(plVar11,lVar8);
    puVar6 = PTR_DAT_0727f3c0;
    puVar5 = PTR_DAT_0727f2f8;
    puVar4 = PTR_DAT_0727f2f0;
    puVar3 = PTR_DAT_0727f2e8;
    puVar2 = PTR_DAT_0727f2e0;
    if (*plVar12 != 0) {
      lVar8 = *(long *)(*plVar12 + 0xa0);
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar15 = 0;
          do {
            if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            lVar14 = *(long *)(lVar8 + (long)(int)uVar15 * 8 + 0x20);
            lVar13 = *plVar11;
            lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727f3c8);
            FUN_03539344();
            if ((lVar14 == 0) ||
               (uVar10 = FUN_050f8a90(lVar14,*(undefined8 *)puVar2,*(undefined8 *)puVar6),
               lVar9 == 0)) goto LAB_0353926c;
            FUN_0353940c(lVar9,uVar10);
            uVar10 = FUN_050f8a90(lVar14,*(undefined8 *)puVar3,*(undefined8 *)puVar6);
            FUN_035394e0(lVar9,uVar10);
            uVar10 = FUN_050f8a90(lVar14,*(undefined8 *)puVar5,*(undefined8 *)puVar6);
            FUN_035395b4(lVar9,uVar10);
            uVar10 = FUN_050f8a90(lVar14,*(undefined8 *)puVar4,*(undefined8 *)puVar6);
            FUN_03539688(lVar9,uVar10);
            if (lVar13 == 0) goto LAB_0353926c;
            FUN_0353975c(lVar13,lVar9);
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)uVar1);
        }
        puVar3 = PTR_DAT_0727f3e0;
        puVar2 = PTR_DAT_0727f3d8;
        uVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ee10);
        FUN_0589e07c(uVar10,lVar7,*(undefined8 *)puVar2,0);
        FUN_03538a54(unaff_x24,uVar10,*(undefined8 *)puVar3);
        return;
      }
    }
  }
LAB_0353926c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


