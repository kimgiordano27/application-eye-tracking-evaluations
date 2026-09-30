/*
FUNCTION_NAME: FUN_03e9bf24
ENTRY_POINT: 03e9bf24
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void FUN_03e9bf24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = StringLiteral_9410;
  puVar2 = Newtonsoft_Json_JsonSerializer_TypeInfo;
  if ((DAT_04542d91 & 1) == 0) {
    FUN_01c5d288(StringLiteral_11263);
    FUN_01c5d288(StringLiteral_11538);
    FUN_01c5d288(StringLiteral_11264);
    FUN_01c5d288(StringLiteral_11256);
    FUN_01c5d288(StringLiteral_11265);
    FUN_01c5d288(StringLiteral_11257);
    FUN_01c5d288(StringLiteral_11266);
    FUN_01c5d288(PTR_DAT_0422fad8);
    FUN_01c5d288(StringLiteral_9410);
    FUN_01c5d288(StringLiteral_11549);
    FUN_01c5d288(StringLiteral_11550);
    FUN_01c5d288(StringLiteral_11551);
    FUN_01c5d288(StringLiteral_11552);
    FUN_01c5d288(StringLiteral_11553);
    FUN_01c5d288(StringLiteral_11554);
    FUN_01c5d288(StringLiteral_11555);
    FUN_01c5d288(StringLiteral_11556);
    FUN_01c5d288(StringLiteral_11557);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializer_TypeInfo);
    DAT_04542d91 = 1;
  }
  FUN_03313b6c(param_1,0);
  lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  UnityEngine_Networking_DownloadHandler__Dispose(lVar6,param_2,param_3,param_4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar5 = StringLiteral_11556;
  puVar4 = StringLiteral_11554;
  puVar3 = StringLiteral_11257;
  puVar1 = PTR_DAT_0422fad8;
  if (lVar6 != 0) {
    FUN_03f1145c(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38),0);
    *(long *)(param_1 + 0x30) = lVar6;
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03245f44(uVar7,param_1,*(undefined8 *)puVar4,0);
    FUN_03e8568c(lVar6,uVar7,0);
    lVar6 = *(long *)(param_1 + 0x30);
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
    FUN_02864148(uVar7,param_1,*(undefined8 *)puVar5,0);
    puVar3 = StringLiteral_11553;
    puVar2 = StringLiteral_11256;
    if (lVar6 != 0) {
      FUN_03e857cc(lVar6,uVar7,0);
      lVar6 = *(long *)(param_1 + 0x30);
      uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_02863800(uVar7,param_1,*(undefined8 *)puVar3,0);
      puVar2 = StringLiteral_11557;
      if (lVar6 != 0) {
        FUN_03e85524(lVar6,uVar7,0);
        lVar6 = *(long *)(param_1 + 0x30);
        uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_03245f44(uVar7,param_1,*(undefined8 *)puVar2,0);
        if (lVar6 != 0) {
          FUN_03e85934(lVar6,uVar7,0);
          puVar2 = StringLiteral_11549;
          if (*(long *)(param_1 + 0x30) != 0) {
            lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x420);
            uVar7 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11265);
            FUN_02863dfc(uVar7,param_1,*(undefined8 *)puVar2,0);
            if (lVar6 != 0) {
              FUN_03e96550(lVar6,uVar7);
              puVar2 = StringLiteral_11551;
              if (*(long *)(param_1 + 0x30) != 0) {
                lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x420);
                uVar7 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11263);
                FUN_0285da04(uVar7,param_1,*(undefined8 *)puVar2,0);
                if (lVar6 != 0) {
                  FUN_03e96600(lVar6,uVar7);
                  puVar2 = StringLiteral_11552;
                  if (*(long *)(param_1 + 0x30) != 0) {
                    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x420);
                    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11266);
                    FUN_02933fa4(uVar7,param_1,*(undefined8 *)puVar2,0);
                    if (lVar6 != 0) {
                      VoxelBusters_CoreLibrary_RestClient_<>c___ctor(lVar6,uVar7);
                      puVar2 = StringLiteral_11555;
                      if (*(long *)(param_1 + 0x30) != 0) {
                        lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x420);
                        uVar7 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11264);
                        System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>__ContainsValue
                                  (uVar7,param_1,*(undefined8 *)puVar2,0);
                        if (lVar6 != 0) {
                          FUN_03e9a694(lVar6,uVar7);
                          puVar2 = StringLiteral_11550;
                          if (*(long *)(param_1 + 0x30) != 0) {
                            lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x420);
                            uVar7 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11538);
                            FUN_0285ce40(uVar7,param_1,*(undefined8 *)puVar2,0);
                            if (lVar6 != 0) {
                              FUN_03e9a39c(lVar6,uVar7);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


