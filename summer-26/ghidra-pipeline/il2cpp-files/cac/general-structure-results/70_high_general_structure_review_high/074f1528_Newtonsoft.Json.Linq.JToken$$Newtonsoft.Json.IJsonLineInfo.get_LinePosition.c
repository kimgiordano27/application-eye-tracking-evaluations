/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 074f1528
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JToken__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x23;
  long *plVar9;
  long unaff_x24;
  long lVar10;
  undefined4 uStack000000000000001c;
  char in_stack_00000020;
  char cStack0000000000000024;
  undefined8 uStack0000000000000028;
  
  plVar9 = *(long **)(unaff_x23 + 0x10);
  uStack0000000000000028 = param_3;
  if ((*(byte *)(unaff_x24 + 0x67d) & 1) == 0) {
    FUN_03f13384(PTR_DAT_091345a0);
    FUN_03f13384(PTR_DAT_091345a8);
    FUN_03f13384(PTR_DAT_09120010);
    *(undefined1 *)(unaff_x24 + 0x67d) = 1;
  }
  cStack0000000000000024 = '\0';
  in_stack_00000020 = '\0';
  uStack000000000000001c = 0;
  if (*(int *)(*plVar9 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  FUN_074efdc0(param_4,&stack0x00000028,param_5 & 1,&stack0x00000024,&stack0x00000020,
               &stack0x0000001c);
  lVar6 = FUN_074f16d0(param_2,uStack0000000000000028);
  if (lVar6 != 0) {
    FUN_054dadac();
    cVar2 = cStack0000000000000024;
    cVar1 = in_stack_00000020;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      lVar10 = 0;
      do {
        if (uVar4 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        lVar8 = *(long *)(lVar6 + 0x20 + lVar10 * 8);
        if (lVar8 == 0) goto LAB_074f16c8;
        uVar4 = thunk_FUN_073ecc14(lVar8,0);
        uVar5 = thunk_FUN_073ecc14(lVar8,0);
        uVar3 = uStack0000000000000028;
        if ((uVar4 & (param_4 ^ 2)) == uVar5) {
          if (cVar2 != '\0') {
            if (*(int *)(*plVar9 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar7 = FUN_074eff84(lVar8,uVar3,cVar1 != '\0');
            if ((uVar7 & 1) == 0) goto LAB_074f1688;
          }
          System_Collections_Generic_List<EasingFunction>__IsCompatibleObject();
        }
LAB_074f1688:
        uVar4 = *(uint *)(lVar6 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar4);
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    return;
  }
LAB_074f16c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


