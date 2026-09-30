/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$Load
ENTRY_POINT: 04d50890
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__Load(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x23;
  long *unaff_x24;
  
  thunk_FUN_02fdcff0();
  plVar1 = (long *)FUN_05afde1c();
  lVar2 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
  if (lVar2 != 0) {
    if ((unaff_x20 != 0) && (lVar3 = thunk_FUN_03010710(), lVar3 == 0)) {
      uVar5 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar5,0);
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(long *)(lVar2 + 0x20) = unaff_x20;
    thunk_FUN_03048534();
    if (plVar1 != (long *)0x0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x928))(plVar1,lVar2,*(undefined8 *)(*plVar1 + 0x930))
      ;
      if (plVar1 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar1 + 0x2b8))();
        if ((uVar4 & 1) == 0) {
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02feb2c4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          plVar1 = (long *)thunk_FUN_0301080c();
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02feb2c4(lVar2);
          }
          FUN_04896a4c(plVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
        }
        else {
          uVar5 = *(undefined8 *)PTR_DAT_06f9c1c8;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar5 = FUN_05afde1c(uVar5,0);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*unaff_x23);
          }
          plVar1 = (long *)FUN_05b31ad8(uVar5);
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02feb2c4(lVar2);
          }
          lVar2 = **(long **)(lVar2 + 0xc0);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02feb2c4(lVar2);
          }
          if (plVar1 != (long *)0x0) {
            if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
               (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) !=
                lVar2)) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe9884(plVar1);
            }
          }
        }
        return plVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


