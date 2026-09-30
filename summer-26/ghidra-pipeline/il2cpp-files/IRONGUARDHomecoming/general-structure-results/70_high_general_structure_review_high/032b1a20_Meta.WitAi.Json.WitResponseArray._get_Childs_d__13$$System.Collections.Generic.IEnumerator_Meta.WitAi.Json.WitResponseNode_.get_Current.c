/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray.<get_Childs>d__13$$System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current
ENTRY_POINT: 032b1a20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x5d8));
  *(undefined1 *)(unaff_x22 + 0xe46) = 1;
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  puVar1 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  if (**(char **)(lVar3 + 0xb8) != '\0') {
    return;
  }
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_032b1ae4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_032b1ae4:
    iVar2 = (*(code *)*puVar4)();
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_032b1b44;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_032b1b44:
    lVar3 = (*(code *)*puVar4)();
    if (lVar3 != 0) {
      if (-1 < iVar2) {
        FUN_03914a34(lVar3,iVar2);
        return;
      }
      lVar3 = FUN_0390b368(lVar3,0);
      if ((lVar3 != 0) && (lVar3 = FUN_0390b70c(lVar3,0), lVar3 != 0)) {
        FUN_0390b988(lVar3,*(undefined8 *)Method_System_Linq_Enumerable_ElementAt<Column>__,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


