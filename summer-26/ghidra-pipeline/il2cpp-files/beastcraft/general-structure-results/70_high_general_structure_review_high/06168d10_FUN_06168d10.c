/*
FUNCTION_NAME: FUN_06168d10
ENTRY_POINT: 06168d10
PROGRAM: beastcraft-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_06168d10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  if ((bRam0000000006e957c2 & 1) == 0) {
    FUN_02e3ca1c(System_ValueTuple<Vector3,_Vector3,_int,_int>_TypeInfo);
    FUN_02e3ca1c(UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a62760);
    FUN_02e3ca1c(PTR_DAT_06a62768);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06a2efe0);
    bRam0000000006e957c2 = 1;
  }
  *(undefined1 *)(param_1 + 0x35c) = 1;
  if (*(long *)(param_1 + 0x378) != 0) {
    FUN_052e8944(*(long *)(param_1 + 0x378),
                 *(undefined8 *)UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo);
    puVar4 = System_ValueTuple<Vector3,_Vector3,_int,_int>_TypeInfo;
    puVar3 = PTR_DAT_06a62768;
    puVar2 = PTR_DAT_06a2efe0;
    puVar1 = PTR_DAT_06a2ed80;
    lVar5 = *(long *)(param_1 + 0x370);
    if (lVar5 != 0) {
      iVar7 = 0;
      do {
        if (*(int *)(lVar5 + 0x18) <= iVar7) {
          return;
        }
        lVar5 = FUN_03f2b33c(lVar5,iVar7,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*(long *)puVar1);
        }
        uVar6 = FUN_062696b0(lVar5,0,0);
        if ((uVar6 & 1) == 0) {
          if (lVar5 == 0) break;
          uVar6 = FUN_062e850c(lVar5,0);
          if ((uVar6 & 1) == 0) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar6 = FUN_062e92a4(lVar5,param_2,0);
            if ((uVar6 & 1) == 0) {
              if (*(long *)(param_1 + 0x378) == 0) break;
              FUN_052e9494(*(long *)(param_1 + 0x378),lVar5,*(undefined8 *)puVar4);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_062e8fc8(lVar5,param_2,1,0);
            }
          }
        }
        lVar5 = *(long *)(param_1 + 0x370);
        iVar7 = iVar7 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


