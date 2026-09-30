/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$.cctor
ENTRY_POINT: 02c4c114
PROGRAM: sharks-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02c4c048) */

void OVRPlugin_OVRP_0_1_2___cctor(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  long *unaff_x22;
  long lVar9;
  
  plVar5 = (long *)__cxa_begin_catch();
  lVar9 = *plVar5;
  __cxa_end_catch();
  if (unaff_x22 != (long *)0x0) {
    lVar6 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_037f3288) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose:
    (*(code *)*puVar1)();
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0(lVar9);
  }
  lVar9 = thunk_FUN_01861ac0();
  if (lVar9 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar2 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c968);
    uVar4 = thunk_FUN_01851c08(PTR_DAT_0380c970);
    FUN_02b3cc64(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c978);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar2,uVar3);
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  FUN_028267ec();
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_02c4c1b4();
    return;
  }
  return;
}


