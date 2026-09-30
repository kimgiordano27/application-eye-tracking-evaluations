/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerWriter$$SerializeValue<HalfVector3>
ENTRY_POINT: 044d17a4
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


void Unity_Netcode_BufferSerializerWriter__SerializeValue<HalfVector3>
               (long param_1,int param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar5 = thunk_FUN_03cf5234();
    uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e80478);
    FUN_0705a2f8(uVar5,uVar6,0);
  }
  else if (((int)param_3 < 0) || (param_2 < 0)) {
    puVar3 = PTR_DAT_08e805f0;
    if (-1 < param_2) {
      puVar3 = PTR_DAT_08e80610;
    }
    uVar6 = thunk_FUN_03ce5214(puVar3);
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar5 = thunk_FUN_03cf5234();
    uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e80608);
    FUN_070619b8(uVar5,uVar6,uVar4,0);
  }
  else {
    if ((int)param_3 <= *(int *)(param_1 + 0x18) - param_2) {
      if (1 < (int)param_3) {
        lVar7 = (long)param_2 * 0x18;
        lVar8 = param_1 + (ulong)param_3 * 0x18 + 8;
        do {
          lVar1 = param_1 + lVar7;
          uVar6 = *(undefined8 *)(lVar1 + 0x30);
          uVar9 = *(undefined8 *)(lVar1 + 0x28);
          uVar5 = *(undefined8 *)(lVar1 + 0x20);
          puVar2 = (undefined8 *)(lVar8 + lVar7);
          uVar10 = puVar2[1];
          uVar4 = *puVar2;
          *(undefined8 *)(lVar1 + 0x30) = puVar2[2];
          *(undefined8 *)(lVar1 + 0x28) = uVar10;
          *(undefined8 *)(lVar1 + 0x20) = uVar4;
          thunk_FUN_03d233cc(lVar1 + 0x20,0);
          puVar2[2] = uVar6;
          puVar2[1] = uVar9;
          *puVar2 = uVar5;
          thunk_FUN_03d233cc(puVar2,0);
          lVar8 = lVar8 + -0x18;
          param_1 = param_1 + 0x18;
        } while (lVar1 + 0x38U < (ulong)(lVar8 + lVar7));
      }
      return;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar5 = thunk_FUN_03cf5234();
    uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e80618);
    FUN_07064ba8(uVar5,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar5,param_4);
}


