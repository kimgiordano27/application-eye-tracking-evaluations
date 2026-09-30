/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerWriter$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 04dad764
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerWriter__SerializeNetworkSerializable<NetworkDeltaPosition>
               (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000010 = param_3;
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0c18);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_03d8f2c8(param_5);
    }
  }
  uVar1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_1,0);
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_03d2ee44(param_1,*(undefined8 *)PTR_DAT_091a0c18);
    if (plVar2 == (long *)0x0) {
      FUN_03d2d34c(param_1,param_2,&stack0x00000010);
    }
    else {
      lVar3 = thunk_FUN_03d2eb70(**(undefined8 **)(param_5 + 0x38));
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_03d1023c(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
  uVar6 = thunk_FUN_03d2ef40();
  uVar5 = thunk_FUN_03d1e194(PTR_DAT_091b4480);
  FUN_070ccddc(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar6,param_5);
}


