/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$ThrowArgumentError
ENTRY_POINT: 053ce2f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__ThrowArgumentError(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (**(code **)(*param_1 + 0x2a8))();
  if ((uVar3 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_053ce6c0;
    uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
    if ((uVar3 & 1) != 0) {
      uVar9 = (**(code **)(*unaff_x20 + 0x448))();
      uVar10 = *(undefined8 *)PTR_DAT_09f21c88;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(unaff_x25 + 0xe0));
      }
      uVar10 = FUN_07a4ce38(uVar10,0);
      uVar3 = FUN_07a5629c(uVar9,uVar10,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = (**(code **)(*unaff_x20 + 0x468))();
        if (lVar4 == 0) {
LAB_053ce6c0:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_053ce6c4:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar5 = *(long **)(lVar4 + 0x20);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(plVar5);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_09f283f8;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        plVar6 = (long *)FUN_07a4ce38(uVar9,0);
        plVar7 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f211e8,1);
        if (plVar7 == (long *)0x0) goto LAB_053ce6c0;
        if ((plVar5 != (long *)0x0) &&
           (lVar4 = thunk_FUN_04485110(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
          uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_053ce6c4;
        plVar7[4] = (long)plVar5;
        thunk_FUN_044bb4b4(plVar7 + 4,plVar5);
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x968))
                                       (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x970)),
           plVar6 == (long *)0x0)) goto LAB_053ce6c0;
        uVar3 = (**(code **)(*plVar6 + 0x2a8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2b0));
        if ((uVar3 & 1) != 0) {
          uVar9 = *(undefined8 *)PTR_DAT_09f28410;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar9 = FUN_07a4ce38(uVar9,0);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*unaff_x24);
          }
          goto LAB_053ce358;
        }
      }
    }
    uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
    if ((uVar3 & 1) == 0) {
switchD_053ce61c_default:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_0448520c();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8(lVar4);
      }
      FUN_0624de3c(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return plVar5;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar9 = FUN_07a72548();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_07a58d74(uVar9,0);
    switch(uVar2) {
    case 5:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_09f28418;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_09f283e8;
      break;
    case 7:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_09f28420;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_09f28408;
      break;
    default:
      goto switchD_053ce61c_default;
    }
  }
  else {
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_09f283f0;
  }
  uVar9 = *puVar8;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar9 = FUN_07a4ce38(uVar9,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x24);
  }
LAB_053ce358:
  plVar5 = (long *)FUN_07a7fc4c(uVar9);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04481fb8(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04481fb8(lVar4);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar5);
    }
  }
  return plVar5;
}


