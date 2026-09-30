/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 05d16d00
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetAppCpuStartToGpuEndTime(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_34;
  
  if ((DAT_0739887c & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6ddb8);
    DAT_0739887c = 1;
  }
  puVar2 = PTR_DAT_06f6ddb8;
  local_88 = 0;
  local_90 = 0;
  local_34 = 0;
  if ((param_2 != 0) && (lVar6 = *(long *)(param_2 + 0x138), lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    bVar7 = 0 < (int)uVar1;
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar5 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_05d16ee4;
        uVar3 = FUN_06975d28(lVar5,0);
        if ((uVar3 & 1) != 0) {
          if ((param_3 == 0) || (lVar4 = FUN_068f5d7c(param_3,0), lVar4 == 0)) goto LAB_05d16ee4;
          uVar9 = FUN_069042b4(lVar4,0);
          lVar4 = FUN_068f5d7c(param_3,0);
          if (lVar4 == 0) goto LAB_05d16ee4;
          FUN_0690449c(lVar4,0);
          lVar4 = FUN_068f5d7c(lVar5,0);
          if (lVar4 == 0) goto LAB_05d16ee4;
          FUN_069042b4(lVar4,0);
          lVar4 = FUN_068f5d7c(lVar5,0);
          if (lVar4 == 0) goto LAB_05d16ee4;
          FUN_0690449c(lVar4,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar3 = FUN_06971770(uVar9,param_3,lVar5,&local_90,&local_34,0);
          if ((uVar3 & 1) != 0) {
            return bVar7;
          }
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar8 = uVar8 + 1;
        bVar7 = (int)uVar8 < (int)uVar1;
      } while ((int)uVar8 < (int)uVar1);
    }
    return bVar7;
  }
LAB_05d16ee4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


