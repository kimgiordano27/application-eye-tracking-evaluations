/*
FUNCTION_NAME: System.Array.InternalEnumerator<SendMouseEvents.HitInfo>$$MoveNext
ENTRY_POINT: 015dc950
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 123
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


long * System_Array_InternalEnumerator<SendMouseEvents_HitInfo>__MoveNext
                 (long param_1,undefined8 param_2,long param_3)

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
  long *unaff_x25;
  
  if (*(long *)(param_1 + -8) != param_3) goto LAB_015dce18;
  FUN_01d5e86c(*(undefined8 *)PTR_DAT_0234bd38,0);
  uVar3 = FUN_01d603ec();
  if ((uVar3 & 1) == 0) {
    uVar9 = *(undefined8 *)PTR_DAT_0234bda8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01d5e86c(uVar9,0);
    uVar3 = FUN_01d603ec();
    if ((uVar3 & 1) != 0) {
      unaff_x20 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf40);
      FUN_01d33adc(unaff_x20,0);
      goto FUN_015dc9fc;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x25);
    }
    plVar7 = (long *)FUN_01d5e86c(uVar9,0);
    if (plVar7 == (long *)0x0) {
LAB_015dce20:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar3 = (**(code **)(*plVar7 + 0x288))();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_015dce20;
      uVar3 = (**(code **)(*unaff_x20 + 0x3a8))();
      if ((uVar3 & 1) == 0) {
LAB_015dccfc:
        uVar3 = (**(code **)(*unaff_x20 + 0x568))();
        if ((uVar3 & 1) == 0) {
switchD_015dcd7c_default:
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          plVar7 = (long *)thunk_FUN_010400dc();
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244(lVar4);
          }
          FUN_01956b44(plVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          return plVar7;
        }
        if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar9 = OVRPlugin__get_positionSupported();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x25);
        }
        uVar2 = FUN_01d62dc0(uVar9,0);
        switch(uVar2) {
        case 5:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_0234cf58;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_0234cf28;
          break;
        case 7:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_0234cf60;
          break;
        case 0xb:
        case 0xc:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_0234cf48;
          break;
        default:
          goto switchD_015dcd7c_default;
        }
        goto LAB_015dca74;
      }
      uVar9 = (**(code **)(*unaff_x20 + 0x428))();
      uVar10 = *(undefined8 *)PTR_DAT_0234cb98;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x25);
      }
      uVar10 = FUN_01d5e86c(uVar10,0);
      uVar3 = FUN_01d603ec(uVar9,uVar10,0);
      if ((uVar3 & 1) == 0) goto LAB_015dccfc;
      lVar4 = (**(code **)(*unaff_x20 + 0x448))();
      if (lVar4 == 0) goto LAB_015dce20;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_015dce24:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar7 = *(long **)(lVar4 + 0x20);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar7);
        }
      }
      uVar9 = *(undefined8 *)PTR_DAT_0234cf38;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      plVar5 = (long *)FUN_01d5e86c(uVar9,0);
      plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
      if (plVar6 == (long *)0x0) goto LAB_015dce20;
      if ((plVar7 != (long *)0x0) &&
         (lVar4 = thunk_FUN_0103ffe0(plVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar9,0);
      }
      if ((int)plVar6[3] == 0) goto LAB_015dce24;
      plVar6[4] = (long)plVar7;
      thunk_FUN_0106e12c(plVar6 + 4,plVar7);
      if ((plVar5 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x898))
                                     (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x8a0)),
         plVar5 == (long *)0x0)) goto LAB_015dce20;
      uVar3 = (**(code **)(*plVar5 + 0x288))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x290));
      if ((uVar3 & 1) == 0) goto LAB_015dccfc;
      uVar9 = *(undefined8 *)PTR_DAT_0234cf50;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar9 = FUN_01d5e86c(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x24);
      }
    }
    else {
      lVar4 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf30;
LAB_015dca74:
      uVar9 = *puVar8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar9 = FUN_01d5e86c(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x24);
      }
    }
    unaff_x20 = (long *)FUN_01d8868c(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  else {
    unaff_x20 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf20);
    FUN_01d339dc(unaff_x20,0);
FUN_015dc9fc:
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  lVar4 = *plVar7;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
    {
LAB_015dce18:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(unaff_x20);
    }
  }
  return unaff_x20;
}


