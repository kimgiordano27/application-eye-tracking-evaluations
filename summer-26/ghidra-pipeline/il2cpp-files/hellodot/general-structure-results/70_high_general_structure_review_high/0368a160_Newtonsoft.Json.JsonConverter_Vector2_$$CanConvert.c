/*
FUNCTION_NAME: Newtonsoft.Json.JsonConverter<Vector2>$$CanConvert
ENTRY_POINT: 0368a160
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

void Newtonsoft_Json_JsonConverter<Vector2>__CanConvert
               (void *param_1,undefined1 *param_2,size_t param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  int unaff_w26;
  
  do {
    memcpy(param_1,param_2,param_3);
    uVar1 = unaff_w24 + 1;
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0368a060;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_0368a060:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_0368a1a4;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0368a0e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_0368a0e4:
    (*(code *)*puVar2)(&stack0x00000220);
    memcpy(&stack0x00000440,&stack0x00000220,0x220);
    if (uVar1 == 0) {
      param_2 = &stack0x00000440;
      param_3 = 0x220;
      param_1 = unaff_x22;
      unaff_w24 = uVar1;
    }
    else {
      lVar3 = *(long *)(unaff_x21 + 0x228);
      memcpy(&stack0x00000220,&stack0x00000440,0x220);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      memcpy(&stack0x00000000,&stack0x00000220,0x220);
      if (*(uint *)(lVar3 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      param_3 = 0x220;
      param_1 = (void *)(lVar3 + (long)(int)unaff_w24 * (long)unaff_w26 + 0x20);
      param_2 = (undefined1 *)register0x00000008;
      unaff_w24 = uVar1;
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0368a1c0;
    }
  }
LAB_0368a1a4:
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_0368a1c0:
  (*(code *)*puVar2)();
  return;
}


