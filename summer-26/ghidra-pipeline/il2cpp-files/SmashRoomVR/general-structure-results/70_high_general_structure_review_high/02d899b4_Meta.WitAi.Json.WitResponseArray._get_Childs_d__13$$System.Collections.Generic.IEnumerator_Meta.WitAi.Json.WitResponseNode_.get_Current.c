/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray.<get_Childs>d__13$$System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current
ENTRY_POINT: 02d899b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02d89bdc) */

void Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
               (long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x20;
  undefined8 uVar16;
  long *unaff_x24;
  
  puVar6 = StringLiteral_3890;
  puVar5 = StringLiteral_3886;
  puVar4 = StringLiteral_3885;
  puVar3 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar10 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02d89a30;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(param_1,*(long *)puVar2,0);
LAB_02d89a30:
    uVar13 = (*(code *)*puVar7)(param_1,puVar7[1]);
    if ((uVar13 & 1) == 0) {
      if (param_1 == (long *)0x0) {
        return;
      }
      lVar10 = *param_1;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 == 0) goto LAB_02d89b84;
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02d89a8c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(param_1,*(long *)puVar6,0);
LAB_02d89a8c:
    lVar10 = (*(code *)*puVar7)(param_1,puVar7[1]);
    if (lVar10 != 0) {
      uVar8 = thunk_FUN_01acfdbc(lVar10,0);
      uVar16 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_0304eec0(uVar16,0);
      uVar13 = FUN_03057a60(uVar8,uVar16,0);
      if ((uVar13 & 1) == 0) {
        lVar9 = *unaff_x20;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)puVar5;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *plVar12 = lVar10;
          thunk_FUN_01b4f09c(plVar12,lVar10);
        }
        else {
          FUN_02b599e4(lVar9,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar15 + -2) == *unaff_x24) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02d89ba0;
    }
  }
LAB_02d89b84:
  puVar7 = (undefined8 *)FUN_01ae9f78(param_1,*unaff_x24,0);
LAB_02d89ba0:
  (*(code *)*puVar7)(param_1,puVar7[1]);
  return;
}


