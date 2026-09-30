/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 03e31bc0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  int unaff_w20;
  undefined *puVar8;
  
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_02feb320();
  }
  if (unaff_w20 < 0) {
    uVar1 = thunk_FUN_03037804(PTR_DAT_06f6df30);
    uVar1 = thunk_FUN_0301043c(uVar1,&stack0x0000000c);
    uVar6 = thunk_FUN_03037804(PTR_DAT_06f9a498);
    uVar7 = thunk_FUN_03037804(PTR_DAT_06f9a478);
    uVar5 = thunk_FUN_03037804(PTR_DAT_06f98cd8);
    uVar1 = FUN_0597263c(uVar6,uVar7,uVar5,uVar1,0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06f9a048 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar1 = FUN_0697d6f0();
    lVar9 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02feb2c4(lVar9);
    }
    plVar2 = (long *)thunk_FUN_03010710(uVar1,lVar9);
    puVar8 = PTR_DAT_06f6d6a0;
    if (plVar2 != (long *)0x0) {
      lVar9 = **(long **)(unaff_x19 + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02feb2c4(lVar9);
      }
      lVar10 = *plVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03e31d5c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,lVar9,0);
LAB_03e31d5c:
                    /* WARNING: Could not recover jumptable at 0x03e31d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar9 = (*(code *)*puVar3)(plVar2,unaff_w20,puVar3[1]);
      return lVar9;
    }
    uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    plVar2 = (long *)FUN_05afde1c(uVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar11 = FUN_05b08df0(plVar2,0);
    if ((uVar11 & 1) == 0) {
      uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      thunk_FUN_03037804(PTR_DAT_06f6d6a0);
      FUN_02b0e39c();
      plVar2 = (long *)FUN_05afde1c(uVar1,0);
      FUN_02b03c7c();
      uVar1 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      uVar6 = thunk_FUN_03037804(PTR_DAT_06f9a4a0);
      puVar8 = PTR_DAT_06f9a488;
    }
    else {
      uVar1 = (**(code **)(*plVar2 + 0x438))(plVar2,*(undefined8 *)(*plVar2 + 0x440));
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar8);
      }
      uVar11 = FUN_05b0716c(0,uVar1,0);
      if ((uVar11 & 1) == 0) {
        lVar9 = FUN_05b152c8(uVar1,unaff_w20,0);
        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02feb2c4(lVar10);
        }
        if (lVar9 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = thunk_FUN_03010710(lVar9,lVar10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(lVar9,lVar10);
          }
        }
        return lVar4;
      }
      uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      thunk_FUN_03037804(PTR_DAT_06f6d6a0);
      FUN_02b0e39c();
      plVar2 = (long *)FUN_05afde1c(uVar1,0);
      FUN_02b03c7c();
      uVar1 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      uVar6 = thunk_FUN_03037804(PTR_DAT_06f9a4a0);
      puVar8 = PTR_DAT_06f9a490;
    }
    uVar7 = thunk_FUN_03037804(puVar8);
    uVar1 = FUN_05971ec8(uVar6,uVar1,uVar7,0);
  }
  thunk_FUN_03037804(PTR_DAT_06f6d8e8);
  uVar6 = thunk_FUN_0301080c();
  FUN_05a64d00(uVar6,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar6);
}


