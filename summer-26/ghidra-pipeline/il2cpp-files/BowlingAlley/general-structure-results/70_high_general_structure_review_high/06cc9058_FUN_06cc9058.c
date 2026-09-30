/*
FUNCTION_NAME: FUN_06cc9058
ENTRY_POINT: 06cc9058
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_06cc9058(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  
  if ((DAT_076e9545 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07283b18);
    thunk_FUN_032e1da0(PTR_DAT_072845b8);
    thunk_FUN_032e1da0(PTR_DAT_07284488);
    thunk_FUN_032e1da0(PTR_DAT_07286228);
    thunk_FUN_032e1da0(PTR_DAT_07284490);
    thunk_FUN_032e1da0(PTR_DAT_07283ae0);
    thunk_FUN_032e1da0(PTR_DAT_07284390);
    thunk_FUN_032e1da0(PTR_DAT_07283830);
    thunk_FUN_032e1da0(PTR_DAT_07284398);
    thunk_FUN_032e1da0(PTR_DAT_07284480);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<Dictionary<string,_string>>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<AssetBodyShape>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<AssetColor>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<Attribute>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<Camera>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<Color>__);
    thunk_FUN_032e1da0(PTR_DAT_072834a8);
    thunk_FUN_032e1da0(System_Security_Util_TokenizerStream_TypeInfo);
    DAT_076e9545 = 1;
  }
  puVar2 = Method_System_Linq_Enumerable_ToArray<Attribute>__;
  puVar1 = PTR_DAT_07284398;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x88) == 0) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x7a8))(plVar4,*(undefined8 *)(*plVar4 + 0x7b0));
      FUN_06cd067c(uVar5,*(undefined8 *)(param_1 + 0x50),0);
      lVar9 = *(long *)(param_1 + 0x18);
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_05545524(uVar5,param_1,*(undefined8 *)puVar2,0);
      puVar2 = Method_System_Linq_Enumerable_ToArray<Camera>__;
      puVar1 = PTR_DAT_07284390;
      if (lVar9 != 0) {
        FUN_0394ce20(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_07284488);
        lVar9 = *(long *)(param_1 + 0x18);
        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
        FUN_05545524(uVar5,param_1,*(undefined8 *)puVar2,0);
        puVar2 = Method_System_Linq_Enumerable_ToArray<Color>__;
        puVar1 = PTR_DAT_07284480;
        if (lVar9 != 0) {
          FUN_0394ce20(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_07286228);
          lVar9 = *(long *)(param_1 + 0x18);
          uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_05545524(uVar5,param_1,*(undefined8 *)puVar2,0);
          if (lVar9 != 0) {
            FUN_0394ce20(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_07284490);
            puVar2 = Method_System_Linq_Enumerable_ToArray<AssetColor>__;
            puVar1 = PTR_DAT_07283ae0;
            plVar4 = *(long **)(param_2 + 0x88);
            if (plVar4 != (long *)0x0) {
              lVar9 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072834a8) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_06cc92fc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_032937ac(plVar4,*(long *)PTR_DAT_072834a8,0);
LAB_06cc92fc:
              lVar9 = (*(code *)*puVar6)(plVar4,puVar6[1]);
              uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
              FUN_05545524(uVar5,param_1,*(undefined8 *)puVar2,0);
              puVar3 = Method_System_Linq_Enumerable_ToArray<Dictionary<string,_string>>__;
              puVar2 = PTR_DAT_072845b8;
              if (lVar9 != 0) {
                FUN_0394ce20(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_072845b8);
                lVar9 = *(long *)(param_1 + 0x28);
                uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                FUN_05545524(uVar5,param_1,*(undefined8 *)puVar3,0);
                puVar3 = Method_System_Linq_Enumerable_ToArray<AssetBodyShape>__;
                puVar1 = PTR_DAT_07283830;
                if (lVar9 != 0) {
                  FUN_0394ce20(lVar9,uVar5,0,*(undefined8 *)puVar2);
                  lVar9 = *(long *)(param_1 + 0x28);
                  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                  FUN_05545524(uVar5,param_1,*(undefined8 *)puVar3,0);
                  if (lVar9 != 0) {
                    FUN_0394ce20(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_07283b18);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


