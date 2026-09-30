/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$GetRaycastRay
ENTRY_POINT: 05b40208
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


long * Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__GetRaycastRay
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  if (*(long *)(param_1 + in_x9 * 8 + -8) != param_3) goto LAB_05b40784;
  FUN_05e26f18(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar4 = FUN_05e30794();
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_05e26f18(lVar5 + 0x20,0);
    uVar4 = FUN_05e30794();
    if ((uVar4 & 1) != 0) {
      unaff_x20 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
      FUN_05dc2944(unaff_x20,0);
      goto LAB_05b402ac;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
    }
    plVar8 = (long *)FUN_05e26f18(uVar10,0);
    if (plVar8 == (long *)0x0) {
LAB_05b4078c:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar4 = (**(code **)(*plVar8 + 0x298))();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_05b4078c;
      uVar4 = (**(code **)(*unaff_x20 + 0x3b8))();
      if ((uVar4 & 1) != 0) {
        uVar10 = (**(code **)(*unaff_x20 + 0x438))();
        uVar11 = *(undefined8 *)PTR_DAT_07a02540;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
        }
        uVar11 = FUN_05e26f18(uVar11,0);
        uVar4 = FUN_05e30794(uVar10,uVar11,0);
        if ((uVar4 & 1) != 0) {
          lVar5 = (**(code **)(*unaff_x20 + 0x458))();
          if (lVar5 == 0) goto LAB_05b4078c;
          if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05b40790:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar8 = *(long **)(lVar5 + 0x20);
          if (plVar8 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x24 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar8);
            }
          }
          uVar10 = *(undefined8 *)PTR_DAT_07a03000;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar6 = (long *)FUN_05e26f18(uVar10,0);
          plVar7 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
          if (plVar7 == (long *)0x0) goto LAB_05b4078c;
          if ((plVar8 != (long *)0x0) &&
             (lVar5 = thunk_FUN_0367fd24(plVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
            uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar10,0);
          }
          if ((int)plVar7[3] == 0) goto LAB_05b40790;
          plVar7[4] = (long)plVar8;
          thunk_FUN_036b7ad0(plVar7 + 4,plVar8);
          if ((plVar6 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar6 + 0x948))
                                         (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950)),
             plVar6 == (long *)0x0)) goto LAB_05b4078c;
          uVar4 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x2a0));
          if ((uVar4 & 1) != 0) {
            uVar10 = *(undefined8 *)PTR_DAT_07a03018;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar10 = FUN_05e26f18(uVar10,0);
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_036a1978(*unaff_x24);
            }
            goto FUN_05b406c0;
          }
        }
      }
      uVar4 = (**(code **)(*unaff_x20 + 0x598))();
      if ((uVar4 & 1) == 0) goto LAB_05b40720;
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_05e4c8a4();
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
      }
      uVar3 = FUN_05e32ff8(uVar10,0);
      if (uVar3 < 0xd) {
        uVar2 = 1 << (ulong)(uVar3 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar3 != 7) goto LAB_05b40670;
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_07a03028;
          }
          else {
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_07a03010;
          }
        }
        else {
          lVar5 = *(long *)(unaff_x25 + 0xe0);
          puVar9 = (undefined8 *)PTR_DAT_07a02ff0;
        }
      }
      else {
LAB_05b40670:
        if (uVar3 != 5) {
LAB_05b40720:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          plVar8 = (long *)thunk_FUN_0367fe20();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0367c9fc(lVar5);
          }
          FUN_04a701a4(plVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar8;
        }
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03020;
      }
      uVar10 = *puVar9;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_05e26f18(uVar10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978(*unaff_x24);
      }
FUN_05b406c0:
      uVar10 = FUN_05e59d90(uVar10);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
      }
      lVar5 = **(long **)(lVar5 + 0xc0);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
      }
      plVar8 = (long *)FUN_03156018(uVar10,lVar5);
      return plVar8;
    }
    uVar10 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar10 = FUN_05e26f18(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x24);
    }
    unaff_x20 = (long *)FUN_05e59d90(uVar10);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    plVar8 = *(long **)(lVar5 + 0xc0);
  }
  else {
    unaff_x20 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a02fe8);
    FUN_05dc2844(unaff_x20,0);
LAB_05b402ac:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    plVar8 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar8;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
    {
LAB_05b40784:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(unaff_x20);
    }
  }
  return unaff_x20;
}


