/*
FUNCTION_NAME: FUN_01e2ebac
ENTRY_POINT: 01e2ebac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_01e2ebac(long param_1,long param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long local_58;
  
  puVar2 = StringLiteral_1962;
  if ((DAT_0377fb88 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<MoveToClosestPointOnCollider>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputControlLayout_<>c_<FromType>b__52_0__
                      );
    thunk_FUN_00d48444(System_Text_RegularExpressions_RegexCharClass_LowerCaseMapping___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1962);
    DAT_0377fb88 = 1;
  }
  local_58 = 0;
  uVar3 = thunk_FUN_015fe514(param_2,*(undefined8 *)puVar2,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x120) == 0) goto LAB_01e2edd0;
  uVar1 = *(uint *)(param_1 + 0xe0);
  FUN_0129eff4(*(long *)(param_1 + 0x120),param_2,&local_58,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<MoveToClosestPointOnCollider>_MoveNext__
              );
  if (local_58 != 0) {
    uVar3 = thunk_FUN_015fe514(*(undefined8 *)(local_58 + 0x18),param_3,0);
    if ((uVar3 & 1) != 0) {
      if ((param_4 & 1) != 0) {
        return;
      }
      if (local_58 != 0) {
        if (*(char *)(local_58 + 0x34) == '\0') {
          return;
        }
        if (*(uint *)(local_58 + 0x30) != uVar1) {
          return;
        }
        *(undefined1 *)(local_58 + 0x34) = 0;
        return;
      }
      goto LAB_01e2edd0;
    }
    FUN_01e2edd8(param_1 + 0xb8,param_2,param_3);
    if (param_2 == 0) goto LAB_01e2edd0;
    if ((*(int *)(param_2 + 0x10) != 0) && (iVar4 = *(int *)(param_1 + 0xf8), 0 < iVar4)) {
      uVar6 = 0;
      lVar7 = 0x20;
      do {
        lVar5 = *(long *)(param_1 + 0xe8);
        if (lVar5 == 0) goto LAB_01e2edd0;
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_01e2edd4;
        if (*(long *)(lVar5 + lVar7) == 0) goto LAB_01e2edd0;
        if (*(int *)(*(long *)(lVar5 + lVar7) + 0x10) != 0) {
          FUN_01e2edd8(lVar5 + lVar7,param_2,param_3);
          iVar4 = *(int *)(param_1 + 0xf8);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x30;
      } while ((int)uVar6 < iVar4);
    }
  }
  lVar7 = local_58;
  lVar5 = *(long *)(param_1 + 0xd8);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_01e2edd4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar8 = *(undefined8 *)(lVar5 + (long)(int)uVar1 * 0x30 + 0x48);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Text_RegularExpressions_RegexCharClass_LowerCaseMapping___TypeInfo
                              );
    if (lVar5 != 0) {
      FUN_017b46ec(lVar5,0);
      *(long *)(lVar5 + 0x10) = param_2;
      *(undefined8 *)(lVar5 + 0x18) = param_3;
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      *(long *)(lVar5 + 0x28) = lVar7;
      *(uint *)(lVar5 + 0x30) = uVar1;
      *(byte *)(lVar5 + 0x34) = param_4 & 1;
      lVar7 = *(long *)(param_1 + 0xd8);
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_01e2edd4;
        *(long *)(lVar7 + (long)(int)uVar1 * 0x30 + 0x48) = lVar5;
        if (*(long *)(param_1 + 0x120) != 0) {
          FUN_01299e64(*(long *)(param_1 + 0x120),param_2,lVar5,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Layouts_InputControlLayout_<>c_<FromType>b__52_0__
                      );
          return;
        }
      }
    }
  }
LAB_01e2edd0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


