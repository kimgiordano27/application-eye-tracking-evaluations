/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager.Mask$$Dispose
ENTRY_POINT: 05f19e0c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07d98328);
  FUN_0373b518(PTR_DAT_07d98330);
  FUN_0373b518(PTR_DAT_07d95eb0);
  FUN_0373b518(PTR_DAT_07d98338);
  FUN_0373b518(PTR_DAT_07d98340);
  FUN_0373b518(PTR_DAT_07d92630);
  *(undefined1 *)(unaff_x20 + 0xfb0) = 1;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  puVar2 = PTR_DAT_07d86548;
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
  }
  puVar3 = PTR_DAT_07d95eb0;
  plVar6 = (long *)FUN_062519f8(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_05f1a388;
  }
  uVar12 = FUN_062519f8(*(long *)(puVar2 + 0x18) + 0x20,0);
  uVar7 = FUN_0625ad04(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)(puVar2 + 0x90);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar12 = FUN_062519f8(lVar5 + 0x20,0);
    uVar7 = FUN_0625ad04(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d98318);
      FUN_061efe40(plVar6,0);
      goto LAB_05f19f74;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(puVar2 + 0xe0));
    }
    plVar10 = (long *)FUN_062519f8(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_05f1a390:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar7 = (**(code **)(*plVar10 + 0x2a8))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2b0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05f1a390;
      uVar7 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
      if ((uVar7 & 1) == 0) {
LAB_05f1a274:
        uVar7 = (**(code **)(*plVar6 + 0x5b8))(plVar6,*(undefined8 *)(*plVar6 + 0x5c0));
        if ((uVar7 & 1) == 0) {
switchD_05f1a2ec_default:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03775678();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03775678();
          }
          plVar6 = (long *)thunk_FUN_037788cc();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03775678(lVar5);
          }
          FUN_04f02378(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar12 = FUN_06276e18(plVar6,0);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)(puVar2 + 0xe0));
        }
        uVar4 = FUN_0625d834(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)(puVar2 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_07d98338;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)(puVar2 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_07d98300;
          break;
        case 7:
          lVar5 = *(long *)(puVar2 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_07d98340;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)(puVar2 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_07d98320;
          break;
        default:
          goto switchD_05f1a2ec_default;
        }
        goto LAB_05f19fec;
      }
      uVar12 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      uVar13 = *(undefined8 *)PTR_DAT_07d98330;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(puVar2 + 0xe0));
      }
      uVar13 = FUN_062519f8(uVar13,0);
      uVar7 = FUN_0625ad04(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_05f1a274;
      lVar5 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
      if (lVar5 == 0) goto LAB_05f1a390;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05f1a394:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar10);
        }
      }
      uVar12 = *(undefined8 *)PTR_DAT_07d98310;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      plVar8 = (long *)FUN_062519f8(uVar12,0);
      plVar9 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
      if (plVar9 == (long *)0x0) goto LAB_05f1a390;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_037787d0(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar12,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_05f1a394;
      plVar9[4] = (long)plVar10;
      thunk_FUN_037aeb94(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x978))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x980)),
         plVar8 == (long *)0x0)) goto LAB_05f1a390;
      uVar7 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2b0));
      if ((uVar7 & 1) == 0) goto LAB_05f1a274;
      uVar12 = *(undefined8 *)PTR_DAT_07d98328;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar12 = FUN_062519f8(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)(puVar2 + 0xe0);
      puVar11 = (undefined8 *)PTR_DAT_07d98308;
LAB_05f19fec:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar12 = FUN_062519f8(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_06284508(uVar12,plVar6,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d982f8);
    FUN_061efd40(plVar6,0);
LAB_05f19f74:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_05f1a388:
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar6);
    }
  }
  return plVar6;
}


