/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$.ctor
ENTRY_POINT: 04d50e1c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>___ctor
                 (long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long *unaff_x24;
  
  uVar7 = **(undefined8 **)(in_x9 + 0xbf8);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(param_1);
  }
  uVar7 = FUN_05afde1c(uVar7,0);
  uVar2 = FUN_05b0716c(param_2,uVar7,0);
  if ((uVar2 & 1) == 0) {
LAB_04d50f70:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    plVar6 = (long *)thunk_FUN_0301080c();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    FUN_04896bd0(plVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return plVar6;
  }
  lVar3 = (**(code **)(*unaff_x20 + 0x478))();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
Meta_XR_ImmersiveDebugger_Utils_ValueContainer<__Il2CppFullySharedGenericType>__GetValue:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    plVar6 = *(long **)(lVar3 + 0x20);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar6);
      }
    }
    uVar7 = *(undefined8 *)PTR_DAT_06f9c1c0;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    plVar4 = (long *)FUN_05afde1c(uVar7,0);
    plVar5 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
    if (plVar5 != (long *)0x0) {
      if ((plVar6 != (long *)0x0) &&
         (lVar3 = thunk_FUN_03010710(plVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
        uVar7 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar7,0);
      }
      if ((int)plVar5[3] == 0)
      goto Meta_XR_ImmersiveDebugger_Utils_ValueContainer<__Il2CppFullySharedGenericType>__GetValue;
      plVar5[4] = (long)plVar6;
      thunk_FUN_03048534(plVar5 + 4,plVar6);
      if ((plVar4 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x928))
                                     (plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x930)),
         plVar4 != (long *)0x0)) {
        uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x2c0));
        if ((uVar2 & 1) != 0) {
          uVar7 = *(undefined8 *)PTR_DAT_06f9c1c8;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar7 = FUN_05afde1c(uVar7,0);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*unaff_x23);
          }
          plVar6 = (long *)FUN_05b31ad8(uVar7,plVar6,0);
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4(lVar3);
          }
          lVar3 = **(long **)(lVar3 + 0xc0);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4(lVar3);
          }
          if (plVar6 == (long *)0x0) {
            return (long *)0x0;
          }
          if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) ==
              lVar3)) {
            return plVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar6);
        }
        goto LAB_04d50f70;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


