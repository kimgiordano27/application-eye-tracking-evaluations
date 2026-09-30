/*
FUNCTION_NAME: FUN_06aa2848
ENTRY_POINT: 06aa2848
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_06aa2848(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_073aaf8a & 1) == 0) {
    FUN_02fe925c(IAPDatabase_<FallbackInitialize>d__26_TypeInfo);
    FUN_02fe925c(System_Net_HttpWebRequest_NtlmAuthState_TypeInfo);
    FUN_02fe925c(BNG_HandPhysics_<UnignoreAllCollisions>d__31_TypeInfo);
    DAT_073aaf8a = 1;
  }
  uStack_68 = param_4[1];
  local_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  FUN_06b1a74c(param_1,param_2,param_3,&local_70,0);
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)BNG_HandPhysics_<UnignoreAllCollisions>d__31_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)BNG_HandPhysics_<UnignoreAllCollisions>d__31_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(param_2);
    }
    plVar3 = *(long **)(param_1 + 0x70);
    lVar4 = param_2[0x7a];
    if (plVar3 != (long *)0x0) {
      local_50 = *param_4;
      uStack_48 = param_4[1];
      uStack_40 = param_4[2];
      uStack_38 = param_4[3];
      (**(code **)(*plVar3 + 0x178))(plVar3,param_3,&local_50,*(undefined8 *)(*plVar3 + 0x180));
      if (lVar4 != 0) {
        FUN_04ae21f4(lVar4,*(undefined8 *)System_Net_HttpWebRequest_NtlmAuthState_TypeInfo);
        plVar3 = *(long **)(param_1 + 0x78);
        lVar4 = param_2[0x7a];
        if (plVar3 != (long *)0x0) {
          local_50 = *param_4;
          uStack_48 = param_4[1];
          uStack_40 = param_4[2];
          uStack_38 = param_4[3];
          (**(code **)(*plVar3 + 0x178))(plVar3,param_3,&local_50,*(undefined8 *)(*plVar3 + 0x180));
          if (lVar4 != 0) {
            System_Threading_Tasks_Task<OVRResult<ulong,_Int32Enum>>__InnerInvoke
                      (lVar4,*(undefined8 *)IAPDatabase_<FallbackInitialize>d__26_TypeInfo);
            plVar3 = *(long **)(param_1 + 0x80);
            if (plVar3 != (long *)0x0) {
              local_50 = *param_4;
              uStack_48 = param_4[1];
              uStack_40 = param_4[2];
              uStack_38 = param_4[3];
              uVar2 = (**(code **)(*plVar3 + 0x178))
                                (plVar3,param_3,&local_50,*(undefined8 *)(*plVar3 + 0x180));
              FUN_06aa2090(param_2,uVar2);
              plVar3 = *(long **)(param_1 + 0x88);
              if (plVar3 != (long *)0x0) {
                local_50 = *param_4;
                uStack_48 = param_4[1];
                uStack_40 = param_4[2];
                uStack_38 = param_4[3];
                (**(code **)(*plVar3 + 0x178))
                          (plVar3,param_3,&local_50,*(undefined8 *)(*plVar3 + 0x180));
                plVar3 = (long *)param_2[0x7a];
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x7f8))(plVar3,*(undefined8 *)(*plVar3 + 0x800));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


