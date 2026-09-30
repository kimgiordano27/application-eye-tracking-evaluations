/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerWriter$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 044d1378
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerWriter__SerializeNetworkSerializable<NetworkDeltaPosition>
               (long param_1,int param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_2 < 0) {
    puVar1 = PTR_DAT_08e805f0;
    if (-1 < param_2) {
      puVar1 = PTR_DAT_08e80610;
    }
    uVar6 = thunk_FUN_03ce5214(puVar1);
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar3 = thunk_FUN_03cf5234();
    uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e80608);
    FUN_070619b8(uVar3,uVar6,uVar7,0);
  }
  else {
    if ((int)param_3 <= *(int *)(param_1 + 0x18) - param_2) {
      if (1 < (int)param_3) {
        puVar4 = (undefined8 *)(((ulong)param_3 * 0x28 + (long)param_2 * 0x28 + param_1) - 8);
        puVar5 = (undefined8 *)(param_1 + (long)param_2 * 0x28 + 0x48);
        do {
          uVar6 = puVar5[-1];
          uVar9 = puVar5[-2];
          uVar3 = puVar5[-3];
          uVar12 = puVar5[-4];
          uVar10 = puVar5[-5];
          uVar13 = puVar4[1];
          uVar11 = *puVar4;
          uVar8 = puVar4[2];
          uVar7 = puVar4[4];
          puVar5[-2] = puVar4[3];
          puVar5[-3] = uVar8;
          puVar5[-1] = uVar7;
          puVar5[-4] = uVar13;
          puVar5[-5] = uVar11;
          puVar4[4] = uVar6;
          puVar4[1] = uVar12;
          *puVar4 = uVar10;
          puVar4[3] = uVar9;
          puVar4[2] = uVar3;
          puVar4 = puVar4 + -5;
          bVar2 = puVar5 < puVar4;
          puVar5 = puVar5 + 5;
        } while (bVar2);
      }
      return;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar3 = thunk_FUN_03cf5234();
    uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e80618);
    FUN_07064ba8(uVar3,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar3,param_4);
}


