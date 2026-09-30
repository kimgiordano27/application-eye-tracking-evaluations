/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$get_Path
ENTRY_POINT: 04d50850
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


long * Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__get_Path(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x23;
  long *unaff_x24;
  
  bVar1 = *(byte *)(*unaff_x23 + 0x130);
  if ((*(byte *)(param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884();
  }
  uVar6 = *(undefined8 *)PTR_DAT_06f9c1c0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  plVar2 = (long *)FUN_05afde1c(uVar6,0);
  lVar3 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
  if (lVar3 != 0) {
    if ((unaff_x20 != 0) && (lVar4 = thunk_FUN_03010710(), lVar4 == 0)) {
      uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar6,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(long *)(lVar3 + 0x20) = unaff_x20;
    thunk_FUN_03048534();
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x928))(plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x930))
      ;
      if (plVar2 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x2b8))();
        if ((uVar5 & 1) == 0) {
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          plVar2 = (long *)thunk_FUN_0301080c();
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4(lVar3);
          }
          FUN_04896a4c(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
        }
        else {
          uVar6 = *(undefined8 *)PTR_DAT_06f9c1c8;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar6 = FUN_05afde1c(uVar6,0);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*unaff_x23);
          }
          plVar2 = (long *)FUN_05b31ad8(uVar6);
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4(lVar3);
          }
          lVar3 = **(long **)(lVar3 + 0xc0);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4(lVar3);
          }
          if (plVar2 != (long *)0x0) {
            if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
               (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) !=
                lVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe9884(plVar2);
            }
          }
        }
        return plVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


