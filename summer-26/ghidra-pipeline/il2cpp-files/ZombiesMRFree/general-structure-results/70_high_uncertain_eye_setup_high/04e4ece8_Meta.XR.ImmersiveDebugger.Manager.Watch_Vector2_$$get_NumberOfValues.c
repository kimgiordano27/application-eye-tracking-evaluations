/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 04e4ece8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    FUN_05b0fe5c(6,0);
  }
  uVar1 = FUN_05b07bb4();
  if (uVar1 < unaff_w19) {
    FUN_05b106dc(0);
  }
  iVar2 = FUN_05b07bb4();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_053f07d0(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar2 - unaff_w19) < iVar3) {
      FUN_05b0fe5c(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      FUN_02feb2c4(lVar8);
    }
    lVar8 = thunk_FUN_03010710();
    if (lVar8 != 0) {
      FUN_04e4ea38();
      return;
    }
    plVar4 = (long *)thunk_FUN_03010710();
    if (plVar4 == (long *)0x0) {
      FUN_05b10714();
    }
    lVar8 = *(long *)(unaff_x21 + 0x10);
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar1) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar9 = 0;
        puVar10 = (undefined8 *)(lVar8 + 0x30);
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          if (-1 < *(int *)(puVar10 + -2)) {
            in_stack_00000008 = *puVar10;
            lVar5 = thunk_FUN_0301043c(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                       &stack0x00000008);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_03010710(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                ();
                    /* WARNING: Subroutine does not return */
              FUN_02fe93c0(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar5;
            thunk_FUN_03048534(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 3;
        } while (uVar1 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


