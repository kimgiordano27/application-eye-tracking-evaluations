/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_NullValueHandling
ENTRY_POINT: 058b972c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializerSettings__get_NullValueHandling
          (long *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  
  if ((DAT_076d4ffe & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07291180);
    thunk_FUN_032e1da0(PTR_DAT_07279468);
    thunk_FUN_032e1da0(PTR_DAT_07290a18);
    thunk_FUN_032e1da0(PTR_DAT_072906b8);
    DAT_076d4ffe = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar6 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_0727fe10);
    FUN_05897d14(uVar6,uVar5,0);
  }
  else {
    if ((param_3 & 0xdfffffe0) == 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        lVar8 = *(long *)PTR_DAT_07291180;
        lVar4 = *(long *)(lVar8 + 0x38);
        if (lVar4 == 0) {
          FUN_03293514(lVar8);
          lVar4 = *(long *)(lVar8 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_032934b8();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_032934b8();
        }
        lVar4 = **(long **)(lVar4 + 0xb8);
      }
      else {
        lVar4 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279468,*(int *)(param_2 + 0x10) << 1);
        iVar3 = thunk_FUN_032f8ab8(0);
        puVar1 = PTR_DAT_07290a18;
        if (lVar4 == 0) {
          if ((param_3 & 0x10000001) == 0) {
LAB_058b99bc:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          puVar9 = (ushort *)0x0;
        }
        else {
          puVar9 = (ushort *)0x0;
          if (*(int *)(lVar4 + 0x18) != 0) {
            puVar9 = (ushort *)(lVar4 + 0x20);
          }
          if ((param_3 & 0x10000001) == 0) {
            if (lVar4 == 0) goto LAB_058b99bc;
            FUN_05950414(param_2 + iVar3,puVar9,(long)*(int *)(lVar4 + 0x18),
                         (long)*(int *)(lVar4 + 0x18),0);
            goto LAB_058b98cc;
          }
        }
        if (0 < *(int *)(param_2 + 0x10)) {
          uVar10 = 0;
          do {
            uVar2 = FUN_057a62b4(param_2,uVar10 & 0xffffffff,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)puVar1);
            }
            if (uVar2 - 0x61 < 0x1a) {
              uVar2 = uVar2 - 0x20;
            }
            *puVar9 = uVar2;
            uVar10 = uVar10 + 1;
            puVar9 = puVar9 + 1;
          } while ((long)uVar10 < (long)*(int *)(param_2 + 0x10));
        }
      }
LAB_058b98cc:
      puVar1 = PTR_DAT_072906b8;
      uVar5 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_058dab6c(uVar6,uVar5,param_2,param_3,lVar4,0);
      return uVar6;
    }
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar6 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_072970f0);
    uVar7 = thunk_FUN_032e1da0(PTR_DAT_07296c28);
    FUN_05897d8c(uVar6,uVar5,uVar7,0);
  }
  uVar5 = thunk_FUN_032e1da0(PTR_DAT_072970f8);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar6,uVar5);
}


