/*
FUNCTION_NAME: FUN_035618d8
ENTRY_POINT: 035618d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_gaze_interaction_hits_1
*/


void FUN_035618d8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_0412df7e & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    DAT_0412df7e = 1;
  }
  puVar2 = OVRPlugin_Media_TypeInfo;
  if (*(long *)(param_1 + 0x368) == 0) {
LAB_03561ae4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x368) + 0x34);
  if (0 < (int)uVar1) {
    lVar5 = 0;
    lVar6 = 4;
    do {
      uVar7 = lVar6 - 4;
      if (lVar5 == 0) {
        lVar4 = *(long *)(param_1 + 0x3a0);
      }
      else {
        if ((*(long *)(param_1 + 0x368) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar4 == 0)) goto LAB_03561ae4;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_03561ae8;
        FUN_03596a20(lVar4 + lVar5 + 0x20,0);
        lVar4 = *(long *)(param_1 + 0x708);
        if (lVar4 == 0) goto LAB_03561ae4;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_03561ae8;
        lVar4 = *(long *)(lVar4 + lVar6 * 8);
        if (lVar4 == 0) goto LAB_03561ae4;
        lVar4 = UnityEngine_Material__GetColorArray(lVar4,0);
      }
      if ((*(long *)(param_1 + 0x368) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar3 == 0)) goto LAB_03561ae4;
      if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_03561ae8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (lVar4 == 0) goto LAB_03561ae4;
      FUN_036a460c(lVar4,*(undefined8 *)(lVar3 + lVar5 + 0x30),0);
      if ((*(long *)(param_1 + 0x368) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar3 == 0)) goto LAB_03561ae4;
      if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_03561ae8;
      FUN_036a4810(lVar4,*(undefined8 *)(lVar3 + lVar5 + 0x48),0);
      if ((*(long *)(param_1 + 0x368) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar3 == 0)) goto LAB_03561ae4;
      if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_03561ae8;
      FUN_036a48bc(lVar4,*(undefined8 *)(lVar3 + lVar5 + 0x50),0);
      if ((*(long *)(param_1 + 0x368) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar3 == 0)) goto LAB_03561ae4;
      if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_03561ae8;
      FUN_036a4e24(lVar4,*(undefined8 *)(lVar3 + lVar5 + 0x58),0);
      FUN_036aa280(lVar4,0);
      if (lVar5 == 0) {
        lVar3 = *(long *)(param_1 + 0x720);
      }
      else {
        lVar3 = *(long *)(param_1 + 0x708);
        if (lVar3 == 0) goto LAB_03561ae4;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_03561ae8;
        lVar3 = *(long *)(lVar3 + lVar6 * 8);
        if (lVar3 == 0) goto LAB_03561ae4;
        lVar3 = FUN_037b514c(lVar3,0);
      }
      if (lVar3 == 0) goto LAB_03561ae4;
      FUN_0390f3a4(lVar3,lVar4,0);
      lVar5 = lVar5 + 0x50;
      lVar6 = lVar6 + 1;
    } while ((ulong)uVar1 * 0x50 - lVar5 != 0);
  }
  return;
}


