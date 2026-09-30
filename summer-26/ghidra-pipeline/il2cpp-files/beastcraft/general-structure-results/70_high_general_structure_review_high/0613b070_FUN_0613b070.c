/*
FUNCTION_NAME: FUN_0613b070
ENTRY_POINT: 0613b070
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_0613b070(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_38;
  
  if ((bRam0000000006e9564e & 1) == 0) {
    FUN_02e3ca1c(System_ValueTuple<Vector3,_Vector3,_int,_int>_TypeInfo);
    FUN_02e3ca1c(UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo);
    bRam0000000006e9564e = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_38 = 0;
  *(undefined1 *)((long)param_4 + 0x2d1) = 0;
  if (param_4[0x50] != 0) {
    FUN_052e8944(param_4[0x50],
                 *(undefined8 *)UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo);
    lVar11 = (**(code **)(*param_4 + 0x4c8))(param_4,0,*(undefined8 *)(*param_4 + 0x4d0));
    if ((param_4[0x54] != 0) && (FUN_062f0164(param_4[0x54],0), lVar11 != 0)) {
      uVar16 = FUN_06275160(lVar11,0);
      uStack_90 = param_4[0x56];
      uStack_88 = (undefined4)param_4[0x57];
      uStack_98 = param_3;
      uStack_a0 = uVar16;
      uStack_9c = param_2;
      if (param_4[0x54] != 0) {
        fVar17 = (float)FUN_062f0240(param_4[0x54],0);
        if ((param_4[0x54] != 0) && (lVar11 = FUN_06264d40(param_4[0x54],0), lVar11 != 0)) {
          fVar18 = (float)FUN_0627938c(lVar11,0);
          thunk_FUN_060f3b60(&uStack_90,&uStack_a0,&uStack_b0,(long)&uStack_38 + 4,&uStack_38,0);
          uVar6 = uStack_88;
          uVar4 = uStack_98;
          uVar3 = uStack_9c;
          uVar2 = uStack_a0;
          uVar10 = uStack_a8;
          if (((char)param_4[0x5a] != '\0') || (uStack_38._4_4_ < DAT_01317ca0)) {
            lVar11 = param_4[0x58];
            uVar10 = FUN_062690a4(*(undefined4 *)((long)param_4 + 0x26c),0);
            uVar9 = FUN_062ebb94(uVar2,uVar3,uVar4,fVar17 * fVar18,param_4 + 0x55,lVar11,uVar10,
                                 (int)param_4[0x4e],0);
            puVar1 = System_ValueTuple<Vector3,_Vector3,_int,_int>_TypeInfo;
            if (0 < (int)uVar9) {
              uVar15 = 0;
              do {
                lVar11 = param_4[0x58];
                if (lVar11 == 0) goto LAB_0613b37c;
                if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_0613b380;
                if (param_4[0x50] == 0) goto LAB_0613b37c;
                FUN_052e9494(param_4[0x50],*(undefined8 *)(lVar11 + uVar15 * 8 + 0x20),
                             *(undefined8 *)puVar1);
                uVar15 = uVar15 + 1;
              } while (uVar9 != uVar15);
            }
          }
          else {
            uVar4 = (undefined4)uStack_90;
            uVar5 = uStack_90._4_4_;
            uVar2 = (undefined4)uStack_b0;
            uVar3 = uStack_b0._4_4_;
            lVar11 = param_4[0x59];
            uVar7 = (undefined4)uStack_38;
            uVar8 = FUN_062690a4(*(undefined4 *)((long)param_4 + 0x26c),0);
            uVar9 = FUN_062ede4c(uVar4,uVar5,uVar6,fVar17 * fVar18,uVar2,uVar3,uVar10,uVar7,
                                 param_4 + 0x55,lVar11,uVar8,(int)param_4[0x4e],0);
            puVar1 = System_ValueTuple<Vector3,_Vector3,_int,_int>_TypeInfo;
            if (0 < (int)uVar9) {
              uVar15 = 0;
              lVar11 = 0x20;
              do {
                lVar13 = param_4[0x59];
                if (lVar13 == 0) goto LAB_0613b37c;
                if (*(uint *)(lVar13 + 0x18) <= uVar15) {
LAB_0613b380:
                    /* WARNING: Subroutine does not return */
                  FUN_02e3cccc();
                }
                lVar14 = param_4[0x50];
                uVar12 = FUN_062ee308(lVar13 + lVar11,0);
                if (lVar14 == 0) goto LAB_0613b37c;
                FUN_052e9494(lVar14,uVar12,*(undefined8 *)puVar1);
                uVar15 = uVar15 + 1;
                lVar11 = lVar11 + 0x2c;
              } while (uVar9 != uVar15);
            }
          }
          if (param_4[0x51] != 0) {
            FUN_060f9360(param_4[0x51],param_4[0x50],0);
            *(undefined4 *)(param_4 + 0x56) = uVar16;
            *(undefined4 *)((long)param_4 + 0x2b4) = param_2;
            *(undefined4 *)(param_4 + 0x57) = param_3;
            *(undefined1 *)(param_4 + 0x5a) = 0;
            return;
          }
        }
      }
    }
  }
LAB_0613b37c:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


