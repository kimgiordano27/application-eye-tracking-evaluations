/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_MaxDepth
ENTRY_POINT: 0744b3bc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_MaxDepth
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  
  if ((DAT_0968e02d & 1) == 0) {
    FUN_03f13384(PTR_DAT_09112dc8);
    FUN_03f13384(PTR_DAT_0910ce18);
    FUN_03f13384(PTR_DAT_091310a0);
    FUN_03f13384(PTR_DAT_0910fe70);
    DAT_0968e02d = 1;
  }
  if ((param_2 != 0) &&
     (lVar5 = FUN_0732950c(param_2,param_3,param_4,0), puVar3 = PTR_DAT_091310a0,
     puVar2 = PTR_DAT_09112dc8, lVar5 != 0)) {
    if (0 < *(int *)(lVar5 + 0x10)) {
      iVar9 = 0;
      do {
        uVar4 = FUN_073213d0(lVar5,iVar9,0);
        if (0x7f < uVar4) {
          if (*(int *)(*(long *)PTR_DAT_0910ce18 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar6 = FUN_07445cc8();
          lVar5 = FUN_0732b9d4(lVar5,uVar6,0);
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar5 + 0x10));
    }
    uVar6 = FUN_03f13470(*(undefined8 *)puVar2,4);
    FUN_073d2898(uVar6,*(undefined8 *)puVar3,0);
    if ((lVar5 != 0) && (lVar5 = FUN_0732a14c(lVar5,uVar6,0), lVar5 != 0)) {
      uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
      if (0 < (int)*(uint *)(lVar5 + 0x18)) {
        iVar9 = 0;
        uVar10 = 0;
        do {
          if ((uint)uVar8 <= uVar10) {
LAB_0744b5bc:
                    /* WARNING: Subroutine does not return */
            FUN_03f13634();
          }
          plVar11 = (long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_0744b5c0;
          uVar1 = uVar10 + 1;
          if (*(int *)(lVar7 + 0x10) != 0 || uVar1 != (uint)uVar8) {
            if ((param_5 & 1) == 0) {
              lVar7 = FUN_0744b7f8(param_1,lVar7,iVar9);
            }
            else {
              lVar7 = FUN_0744b5c4();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_0744b5bc;
            *plVar11 = lVar7;
            thunk_FUN_03f86000(lVar5 + 0x20 + (long)(int)uVar10 * 8);
          }
          uVar8 = *(ulong *)(lVar5 + 0x18);
          if ((uint)uVar8 <= uVar10) goto LAB_0744b5bc;
          if (*plVar11 == 0) goto LAB_0744b5c0;
          iVar9 = *(int *)(*plVar11 + 0x10) + iVar9;
          uVar10 = uVar1;
        } while ((int)uVar1 < (int)(uint)uVar8);
      }
      FUN_07328410(*(undefined8 *)PTR_DAT_0910fe70,lVar5,0);
      return;
    }
  }
LAB_0744b5c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


