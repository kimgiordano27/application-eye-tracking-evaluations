/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<XmlTextWriter.Namespace>
ENTRY_POINT: 030489fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<XmlTextWriter_Namespace>
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float unaff_s11;
  float fVar10;
  float fVar11;
  float fVar12;
  
  do {
    fVar8 = (float)FUN_05f01910(unaff_x22,0);
    lVar3 = *(long *)(unaff_x19 + 0xa0);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w25) {
LAB_03048bb0:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar3 = lVar3 + unaff_x28 * unaff_x29;
    fVar12 = *(float *)(lVar3 + 0x20);
    fVar11 = *(float *)(lVar3 + 0x24);
    fVar10 = *(float *)(lVar3 + 0x28);
    if (*(char *)(unaff_x21 + 0x30d) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(unaff_x23);
      *(undefined1 *)(unaff_x21 + 0x30d) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar8 = fVar8 - fVar12;
    fVar11 = param_2 - fVar11;
    param_3 = param_3 - fVar10;
    param_2 = param_3 * param_3;
    if (unaff_s11 < SQRT(param_2 + fVar8 * fVar8 + fVar11 * fVar11)) {
      plVar4 = *(long **)(unaff_x19 + 0x20);
      if (plVar4 != (long *)0x0) {
        uVar1 = FUN_05ef2cf0();
        if (plVar4 == (long *)0x0) break;
        lVar3 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        uVar7 = *(undefined8 *)PTR_DAT_065cde70;
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065ca6b8) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 7) * 0x10 + 0x138);
              goto System_Array__InternalArray__ICollection_Remove<XmlWellFormedWriter_Namespace>;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065ca6b8,7);
System_Array__InternalArray__ICollection_Remove<XmlWellFormedWriter_Namespace>:
        (*(code *)*puVar2)(0,plVar4,uVar7,uVar1,puVar2[1]);
        unaff_x29 = 0xc;
      }
      lVar3 = *(long *)(unaff_x19 + 0xa0);
      uVar9 = FUN_05f01910(unaff_x22,0);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w25) goto LAB_03048bb0;
      lVar3 = lVar3 + unaff_x28 * unaff_x29;
      *(undefined4 *)(lVar3 + 0x20) = uVar9;
      *(float *)(lVar3 + 0x24) = param_2;
      *(float *)(lVar3 + 0x28) = param_3;
      unaff_x27 = (long *)PTR_DAT_065caaf0;
    }
    plVar4 = *(long **)(unaff_x19 + 0x78);
    unaff_w25 = unaff_w25 + 1;
    if (plVar4 == (long *)0x0) break;
    lVar3 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0x1a) * 0x10 + 0x138);
          goto LAB_0304886c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,*unaff_x26,0x1a);
LAB_0304886c:
    plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    if (plVar4 == (long *)0x0) break;
    lVar3 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_030488d0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,*unaff_x27,7);
LAB_030488d0:
    lVar3 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x18) <= (int)unaff_w25) {
      return;
    }
    plVar4 = *(long **)(unaff_x19 + 0x78);
    if (plVar4 == (long *)0x0) break;
    lVar3 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0x1a) * 0x10 + 0x138);
          goto LAB_03048944;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,*unaff_x26,0x1a);
LAB_03048944:
    plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    if (plVar4 == (long *)0x0) break;
    lVar3 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_030489a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,*unaff_x27,7);
LAB_030489a8:
    lVar3 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w25) goto LAB_03048bb0;
    unaff_x28 = (long)(int)unaff_w25;
    unaff_x22 = *(long *)(lVar3 + unaff_x28 * 8 + 0x20);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*unaff_x24);
    }
    uVar5 = FUN_05ef739c(unaff_x22,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  } while (unaff_x22 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


