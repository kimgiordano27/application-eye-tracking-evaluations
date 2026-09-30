/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$get_Current
ENTRY_POINT: 046e23d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x046e2740) */

void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__get_Current(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  
  plVar9 = *(long **)(unaff_x22 + 0x9e8);
  uVar3 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*plVar9 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*plVar9);
  }
  uVar10 = FUN_04f3fb68(uVar10,0);
  uVar4 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar3,uVar10,0);
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978(lVar6);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar6 = unaff_x21[3];
    if (lVar6 != 0) {
      uVar4 = 0;
      lVar7 = lVar6 + 0x30;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        if (-1 < *(int *)(lVar7 + -0x10)) {
          FUN_046e3750();
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar1 != uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar6 = *(long *)(lVar6 + 0x88);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978(lVar6);
  }
  lVar7 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_046e255c;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_046e255c:
  plVar9 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_065c8d08;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar6 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_046e25cc;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar2,0);
LAB_046e25cc:
    uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar4 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978(lVar6);
    }
    lVar7 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_046e2644;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar6,0);
LAB_046e2644:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
    FUN_046e3750();
  } while( true );
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_046e26f8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065c8a48,0);
LAB_046e26f8:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  return;
}


