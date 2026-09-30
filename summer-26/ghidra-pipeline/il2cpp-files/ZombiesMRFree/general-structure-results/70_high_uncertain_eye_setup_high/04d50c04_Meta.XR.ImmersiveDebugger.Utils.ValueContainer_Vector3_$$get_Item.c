/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$get_Item
ENTRY_POINT: 04d50c04
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


long * Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__get_Item(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_07393a52 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9c1b8);
    FUN_02fe925c(PTR_DAT_06f9c1c0);
    FUN_02fe925c(PTR_DAT_06f9c1c8);
    FUN_02fe925c(PTR_DAT_06f80bf8);
    FUN_02fe925c(PTR_DAT_06f98ef0);
    FUN_02fe925c(PTR_DAT_06f6f008);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    DAT_07393a52 = 1;
  }
  puVar2 = PTR_DAT_06f6d6a0;
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_06f98ef0;
  plVar5 = (long *)FUN_05afde1c(uVar10,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_04d50fe0;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  plVar6 = (long *)FUN_05afde1c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),0);
  if (plVar6 == (long *)0x0) goto LAB_04d50fdc;
  uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2c0));
  if ((uVar7 & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_04d50fdc;
    uVar7 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
    if ((uVar7 & 1) != 0) {
      uVar10 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
      uVar11 = *(undefined8 *)PTR_DAT_06f80bf8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar2);
      }
      uVar11 = FUN_05afde1c(uVar11,0);
      uVar7 = FUN_05b0716c(uVar10,uVar11,0);
      if ((uVar7 & 1) != 0) {
        lVar4 = (**(code **)(*plVar5 + 0x478))(plVar5,*(undefined8 *)(*plVar5 + 0x480));
        if (lVar4 == 0) goto LAB_04d50fdc;
        if (*(int *)(lVar4 + 0x18) == 0) {
Meta_XR_ImmersiveDebugger_Utils_ValueContainer<__Il2CppFullySharedGenericType>__GetValue:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar5 = *(long **)(lVar4 + 0x20);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_04d50fe0:
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(plVar5);
          }
        }
        uVar10 = *(undefined8 *)PTR_DAT_06f9c1c0;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        plVar6 = (long *)FUN_05afde1c(uVar10,0);
        plVar8 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
        if (plVar8 == (long *)0x0) goto LAB_04d50fdc;
        if ((plVar5 != (long *)0x0) &&
           (lVar4 = thunk_FUN_03010710(plVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
          uVar10 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar10,0);
        }
        if ((int)plVar8[3] == 0)
        goto 
        Meta_XR_ImmersiveDebugger_Utils_ValueContainer<__Il2CppFullySharedGenericType>__GetValue;
        plVar8[4] = (long)plVar5;
        thunk_FUN_03048534(plVar8 + 4,plVar5);
        if (plVar6 == (long *)0x0) {
LAB_04d50fdc:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x928))
                                   (plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x930));
        if (plVar6 == (long *)0x0) goto LAB_04d50fdc;
        uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2c0));
        if ((uVar7 & 1) != 0) {
          lVar4 = *(long *)puVar2;
          puVar9 = (undefined8 *)PTR_DAT_06f9c1c8;
          goto LAB_04d50d34;
        }
      }
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    plVar5 = (long *)thunk_FUN_0301080c();
    lVar4 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    FUN_04896bd0(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  }
  else {
    lVar4 = *(long *)puVar2;
    puVar9 = (undefined8 *)PTR_DAT_06f9c1b8;
LAB_04d50d34:
    uVar10 = *puVar9;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar10 = FUN_05afde1c(uVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar3);
    }
    plVar5 = (long *)FUN_05b31ad8(uVar10,plVar5,0);
    lVar4 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar5);
      }
    }
  }
  return plVar5;
}


