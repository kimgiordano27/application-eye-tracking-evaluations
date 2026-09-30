/*
FUNCTION_NAME: Unity.Physics.RaycastInput$$ToString
ENTRY_POINT: 03247f68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Physics_RaycastInput__ToString(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x21;
  long lVar7;
  ulong uVar8;
  
  lVar2 = thunk_FUN_01a89e68(*param_1);
  FUN_027b3d9c(lVar2,0);
  puVar1 = OVRPlugin_BodyJointLocation___TypeInfo;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(long *)(lVar2 + 0x10) = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(long **)(lVar2 + 0x18) = unaff_x19;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  FUN_01f279e4(unaff_x21 + 0x20,lVar2,*(undefined8 *)puVar1);
  puVar1 = OVRPlugin_Bone___TypeInfo;
  lVar7 = *(long *)(unaff_x21 + 0x28);
  if ((lVar7 != 0) && (0 < (int)*(ulong *)(lVar7 + 0x18))) {
    uVar8 = 0;
    uVar4 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar5 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03248038;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec();
LAB_03248038:
      (*(code *)*puVar3)();
      uVar4 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  return lVar2;
}


