/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_StringEscapeHandling
ENTRY_POINT: 0709730c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__set_StringEscapeHandling
                (long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = param_1;
  if ((DAT_0941bddf & 1) == 0) {
    lVar3 = FUN_03c8f898(PTR_DAT_08ea2830);
    DAT_0941bddf = 1;
  }
  puVar5 = PTR_DAT_08ea2830;
  if (param_2 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar6 = thunk_FUN_03cf5234();
    puVar5 = PTR_DAT_08e806f0;
  }
  else {
    if (param_3 != 0) {
      iVar1 = *(int *)(param_2 + 0x10);
      if (iVar1 < param_4) {
LAB_0709748c:
        thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
        uVar6 = thunk_FUN_03cf5234();
        uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e80480);
        puVar5 = PTR_DAT_08e80488;
      }
      else {
        if (iVar1 == 0) {
          return (ulong)-(uint)(*(int *)(param_3 + 0x10) != 0);
        }
        if (param_4 < 0) goto LAB_0709748c;
        if ((-1 < param_5) && (param_4 <= iVar1 - param_5)) {
          if (param_6 == 0x10000000) {
            bVar2 = true;
LAB_07097430:
            uVar4 = FUN_070975b4(lVar3,param_2,param_3,param_4,param_5,bVar2);
            return uVar4;
          }
          if ((param_6 < 0x20) || (param_6 == 0x40000000)) {
            if (*(int *)(*(long *)PTR_DAT_08ea2830 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if (DAT_0941be42 == '\0') {
              FUN_03c8f898(PTR_DAT_08ea2830);
              DAT_0941be42 = '\x01';
            }
            lVar3 = *(long *)puVar5;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar3 = *(long *)puVar5;
            }
            if (**(char **)(lVar3 + 0xb8) == '\0') {
              uVar4 = FUN_07098b30(param_1,param_2,param_4,param_5,param_3,param_6,1);
              return uVar4;
            }
            bVar2 = (param_6 & 0x10000001) != 0;
            goto LAB_07097430;
          }
          thunk_FUN_03ce5214(PTR_DAT_08e76350);
          uVar6 = thunk_FUN_03cf5234();
          uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e9d680);
          uVar8 = thunk_FUN_03ce5214(PTR_DAT_08e82ec0);
          FUN_0705df24(uVar6,uVar7,uVar8,0);
          goto LAB_07097554;
        }
        thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
        uVar6 = thunk_FUN_03cf5234();
        uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e80490);
        puVar5 = PTR_DAT_08e80498;
      }
      uVar8 = thunk_FUN_03ce5214(puVar5);
      FUN_070619b8(uVar6,uVar7,uVar8,0);
      goto LAB_07097554;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar6 = thunk_FUN_03cf5234();
    puVar5 = PTR_DAT_08e79260;
  }
  uVar7 = thunk_FUN_03ce5214(puVar5);
  FUN_0705a2f8(uVar6,uVar7,0);
LAB_07097554:
  uVar7 = thunk_FUN_03ce5214(PTR_DAT_08ea28b8);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar6,uVar7);
}


