/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$Setup
ENTRY_POINT: 04e4f978
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__Setup(void)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  int unaff_w23;
  ulong uVar8;
  long *plVar9;
  
  iVar2 = FUN_053f6d4c();
  if ((int)(unaff_w23 - unaff_w19) < iVar2) {
    FUN_05b0fe5c(5,0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    FUN_02feb2c4(lVar6);
  }
  lVar6 = thunk_FUN_03010710();
  if (lVar6 != 0) {
    FUN_04e4f668();
    return;
  }
  plVar3 = (long *)thunk_FUN_03010710();
  if (plVar3 == (long *)0x0) {
    FUN_05b10714();
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar1 = *(uint *)(lVar6 + 0x20);
  if (0 < (int)uVar1) {
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar8 = 0;
    plVar9 = (long *)(lVar6 + 0x38);
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (-1 < (int)plVar9[-3]) {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar7 = *plVar9;
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03010710(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
          uVar5 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar5,0);
        }
        if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar3[(long)(int)unaff_w19 + 4] = lVar7;
        thunk_FUN_03048534(plVar3 + (long)(int)unaff_w19 + 4,lVar7);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar8 = uVar8 + 1;
      plVar9 = plVar9 + 4;
    } while (uVar1 != uVar8);
  }
  return;
}


