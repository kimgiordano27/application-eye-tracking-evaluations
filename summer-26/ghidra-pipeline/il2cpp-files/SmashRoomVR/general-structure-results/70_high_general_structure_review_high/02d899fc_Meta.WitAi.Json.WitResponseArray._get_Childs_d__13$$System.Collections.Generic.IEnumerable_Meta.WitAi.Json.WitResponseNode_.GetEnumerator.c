/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray.<get_Childs>d__13$$System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator
ENTRY_POINT: 02d899fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02d89bdc) */

void Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_Collections_Generic_IEnumerable<Meta_WitAi_Json_WitResponseNode>_GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong in_x9;
  long lVar9;
  int *in_x10;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_02d89a30;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_02d89a30:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar6 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 == 0) goto LAB_02d89b84;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02d89b6c;
      }
      lVar6 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02d89a8c;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_02d89a8c:
      lVar6 = (*(code *)*puVar2)();
      if (lVar6 != 0) {
        uVar4 = thunk_FUN_01acfdbc(lVar6,0);
        uVar11 = *unaff_x27;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar11 = FUN_0304eec0(uVar11,0);
        uVar3 = FUN_03057a60(uVar4,uVar11,0);
        if ((uVar3 & 1) == 0) {
          lVar5 = *unaff_x20;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar9 = *unaff_x29;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lVar6;
            thunk_FUN_01b4f09c(plVar8,lVar6);
          }
          else {
            FUN_02b599e4(lVar5,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      param_1 = *unaff_x19;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
LAB_02d89b6c:
    if (*(long *)(piVar10 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02d89ba0;
    }
  }
LAB_02d89b84:
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_02d89ba0:
  (*(code *)*puVar2)();
  return;
}


