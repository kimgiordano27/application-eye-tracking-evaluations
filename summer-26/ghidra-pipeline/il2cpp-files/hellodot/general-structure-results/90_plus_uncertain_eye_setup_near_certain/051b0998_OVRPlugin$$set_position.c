/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 051b0998
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__set_position(undefined8 param_1,long param_2,long param_3)

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
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000009c;
  
  if ((DAT_06a712dc & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f68);
    DAT_06a712dc = 1;
  }
  puVar2 = PTR_DAT_065c9f68;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack000000000000009c = 0;
  if ((param_2 != 0) && (lVar6 = *(long *)(param_2 + 0x138), lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    bVar7 = 0 < (int)uVar1;
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        lVar5 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_051b0b6c;
        uVar3 = FUN_05f52d2c(lVar5,0);
        if ((uVar3 & 1) != 0) {
          if ((param_3 == 0) || (lVar4 = FUN_05ef2cb4(param_3,0), lVar4 == 0)) goto LAB_051b0b6c;
          uVar9 = FUN_05f01910(lVar4,0);
          lVar4 = FUN_05ef2cb4(param_3,0);
          if (lVar4 == 0) goto LAB_051b0b6c;
          FUN_05f00104(lVar4,0);
          lVar4 = FUN_05ef2cb4(lVar5,0);
          if (lVar4 == 0) goto LAB_051b0b6c;
          FUN_05f01910(lVar4,0);
          lVar4 = FUN_05ef2cb4(lVar5,0);
          if (lVar4 == 0) goto LAB_051b0b6c;
          FUN_05f00104(lVar4,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar3 = FUN_05f4e314(uVar9,param_3,lVar5,&stack0x00000040,&stack0x0000009c,0);
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
LAB_051b0b6c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


