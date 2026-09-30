/*
FUNCTION_NAME: Unity.Serialization.Json.JsonTypeStack$$Dispose
ENTRY_POINT: 066b4034
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Unity_Serialization_Json_JsonTypeStack__Dispose(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  
  thunk_FUN_03048534();
  if ((*unaff_x20 != 0) && (plVar4 = *(long **)(unaff_x21 + -0x18), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x5e8))
              (plVar4,*(undefined8 *)(*unaff_x20 + 0x28),*(undefined8 *)(*plVar4 + 0x5f0));
    puVar3 = PTR_DAT_06f7c078;
    puVar2 = PTR_DAT_06f78ce8;
    if (*unaff_x20 != 0) {
      lVar8 = *(long *)(*unaff_x20 + 0x60);
      if (lVar8 != 0) {
        uVar9 = *(ulong *)(lVar8 + 0x18);
        iVar7 = (int)uVar9;
        if (0 < iVar7) {
          uVar11 = 0;
          do {
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_066b42bc;
            uVar5 = FUN_068f5db8(*(long *)(unaff_x19 + 0x60),0);
            lVar8 = FUN_03bbe5d0();
            if (lVar8 == 0) goto LAB_066b42bc;
            uVar10 = *(undefined8 *)(lVar8 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
            }
            lVar8 = FUN_03d297a0(uVar5,uVar10,*(undefined8 *)PTR_DAT_06f6de38);
            if ((lVar8 == 0) ||
               (plVar4 = (long *)FUN_03c732ac(lVar8,*(undefined8 *)
                                                                                                          
                                                  System_Collections_Generic_List<RangePositionInfo>_TypeInfo
                                             ), plVar4 == (long *)0x0)) goto LAB_066b42bc;
            (**(code **)(*plVar4 + 0x2f8))(plVar4,1,*(undefined8 *)(*plVar4 + 0x300));
            plVar4 = (long *)FUN_068f8a88(lVar8,0);
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_066b42bc;
            plVar6 = (long *)FUN_068f5d7c(*(long *)(unaff_x19 + 0x60),0);
            if (plVar6 == (long *)0x0) {
              plVar6 = (long *)0x0;
            }
            else if (*plVar6 != *(long *)puVar2) {
              plVar6 = (long *)0x0;
            }
            if ((plVar4 == (long *)0x0) || (*plVar4 != *(long *)puVar2)) goto LAB_066b42bc;
            UnityEngine_UIElements_BaseVerticalCollectionView__InitializeDragAndDropController
                      (0,0x3f800000,plVar4,0);
            FUN_06903474(0,0x3f800000,plVar4,0);
            FUN_069036ac(0x42c80000,0x41d00000,plVar4,0);
            if (plVar6 == (long *)0x0) goto LAB_066b42bc;
            fVar12 = (float)FUN_06903500(plVar6,0);
            uVar1 = uVar11 + 1;
            FUN_06903590((230.0 / (float)iVar7) * (float)(int)uVar1 + 215.0 + fVar12,plVar4,0);
            FUN_069037c8(0,0x3f000000,plVar4,0);
            FUN_069044f4(0,0,0x41500000,plVar4,0);
            plVar4 = (long *)FUN_03c73394(lVar8,*(undefined8 *)puVar3);
            if (plVar4 == (long *)0x0) goto LAB_066b42bc;
            FUN_06b54028(plVar4,0xf,0);
            if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0))
            goto LAB_066b42bc;
            if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            (**(code **)(*plVar4 + 0x5e8))
                      (plVar4,*(undefined8 *)(lVar8 + uVar11 * 8 + 0x20),
                       *(undefined8 *)(*plVar4 + 0x5f0));
            uVar11 = uVar1;
          } while ((uVar9 & 0xffffffff) != uVar1);
        }
      }
      FUN_066b42c4();
      return;
    }
  }
LAB_066b42bc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


