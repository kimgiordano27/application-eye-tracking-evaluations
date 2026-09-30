/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Write
ENTRY_POINT: 053ce4d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Write(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  
  lVar2 = FUN_04447c90(*param_1,1);
  if (lVar2 != 0) {
    if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_04485110(), lVar3 == 0)) {
      uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar7,0);
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(long *)(lVar2 + 0x20) = unaff_x21;
    thunk_FUN_044bb4b4();
    if ((unaff_x22 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*unaff_x22 + 0x968))(), plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x2a8))();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x20 + 0x5a8))();
        if ((uVar5 & 1) == 0) {
switchD_053ce61c_default:
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_04481fb8();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          plVar4 = (long *)thunk_FUN_0448520c();
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_04481fb8(lVar2);
          }
          FUN_0624de3c(plVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
          return plVar4;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar7 = FUN_07a72548();
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)(unaff_x25 + 0xe0));
        }
        uVar1 = FUN_07a58d74(uVar7,0);
        switch(uVar1) {
        case 5:
          lVar2 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_09f28418;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar2 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_09f283e8;
          break;
        case 7:
          lVar2 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_09f28420;
          break;
        case 0xb:
        case 0xc:
          lVar2 = *(long *)(unaff_x25 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_09f28408;
          break;
        default:
          goto switchD_053ce61c_default;
        }
        uVar7 = *puVar6;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar7 = FUN_07a4ce38(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*unaff_x24);
        }
      }
      else {
        uVar7 = *(undefined8 *)PTR_DAT_09f28410;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar7 = FUN_07a4ce38(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*unaff_x24);
        }
      }
      plVar4 = (long *)FUN_07a7fc4c(uVar7);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8(lVar2);
      }
      lVar2 = **(long **)(lVar2 + 0xc0);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8(lVar2);
      }
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar4);
        }
      }
      return plVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


