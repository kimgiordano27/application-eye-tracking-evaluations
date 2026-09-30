/*
FUNCTION_NAME: Newtonsoft.Json.JsonConverter<Vector2>$$ReadJson
ENTRY_POINT: 03689fc8
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0368a200) */

void Newtonsoft_Json_JsonConverter<Vector2>__ReadJson(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *__dest;
  undefined1 *__src;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  int iVar9;
  
  puVar3 = (undefined8 *)FUN_02ce0a7c();
  puVar1 = PTR_DAT_065c8a48;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_065c8d08;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  iVar9 = 0;
  do {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0368a060;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar2,0);
LAB_0368a060:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0368a1a4;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0368a0e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,lVar5,0);
LAB_0368a0e4:
    (*(code *)*puVar3)(&stack0x00000220,plVar4,puVar3[1]);
    memcpy(&stack0x00000440,&stack0x00000220,0x220);
    if (iVar9 == 0) {
      __src = &stack0x00000440;
      __dest = (void *)(unaff_x21 + 8);
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x228);
      memcpy(&stack0x00000220,&stack0x00000440,0x220);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      memcpy(&stack0x00000000,&stack0x00000220,0x220);
      if (*(uint *)(lVar5 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      __dest = (void *)(lVar5 + (long)(int)(iVar9 - 1U) * 0x220 + 0x20);
      __src = (undefined1 *)register0x00000008;
    }
    memcpy(__dest,__src,0x220);
    iVar9 = iVar9 + 1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0368a1c0;
    }
  }
LAB_0368a1a4:
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar1,0);
LAB_0368a1c0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


