/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRTask.CallbackWithState<Int32Enum,-object>>$$Dispose
ENTRY_POINT: 0159b858
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * System_Array_InternalEnumerator<OVRTask_CallbackWithState<Int32Enum,_object>>__Dispose
                 (undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  int in_w10;
  long unaff_x19;
  undefined8 uVar12;
  long *unaff_x25;
  
  if (in_w10 == 0) {
    thunk_FUN_01022c14(param_1);
  }
  puVar2 = PTR_DAT_0234bce0;
  plVar4 = (long *)FUN_01d5e86c();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_0159bd68;
  }
  uVar5 = FUN_01d5e86c(*(undefined8 *)PTR_DAT_0234bd38,0);
  uVar6 = FUN_01d603ec(plVar4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = *(undefined8 *)PTR_DAT_0234bda8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar5 = FUN_01d5e86c(uVar5,0);
    uVar6 = FUN_01d603ec(plVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf40);
      FUN_01d33adc(plVar4,0);
      goto LAB_0159b94c;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0103c244();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x25);
    }
    plVar10 = (long *)FUN_01d5e86c(uVar5,0);
    if (plVar10 == (long *)0x0) {
LAB_0159bd70:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar6 = (**(code **)(*plVar10 + 0x288))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x290));
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_0159bd70;
      uVar6 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
      if ((uVar6 & 1) == 0) {
LAB_0159bc4c:
        uVar6 = (**(code **)(*plVar4 + 0x568))(plVar4,*(undefined8 *)(*plVar4 + 0x570));
        if ((uVar6 & 1) == 0) {
switchD_0159bccc_default:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0103c244();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          plVar4 = (long *)thunk_FUN_010400dc();
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0103c244(lVar7);
          }
          FUN_01942388(plVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
          return plVar4;
        }
        if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar5 = OVRPlugin__get_positionSupported(plVar4,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x25);
        }
        uVar3 = FUN_01d62dc0(uVar5,0);
        switch(uVar3) {
        case 5:
          lVar7 = *unaff_x25;
          puVar11 = (undefined8 *)PTR_DAT_0234cf58;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar7 = *unaff_x25;
          puVar11 = (undefined8 *)PTR_DAT_0234cf28;
          break;
        case 7:
          lVar7 = *unaff_x25;
          puVar11 = (undefined8 *)PTR_DAT_0234cf60;
          break;
        case 0xb:
        case 0xc:
          lVar7 = *unaff_x25;
          puVar11 = (undefined8 *)PTR_DAT_0234cf48;
          break;
        default:
          goto switchD_0159bccc_default;
        }
        goto LAB_0159b9c4;
      }
      uVar5 = (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
      uVar12 = *(undefined8 *)PTR_DAT_0234cb98;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x25);
      }
      uVar12 = FUN_01d5e86c(uVar12,0);
      uVar6 = FUN_01d603ec(uVar5,uVar12,0);
      if ((uVar6 & 1) == 0) goto LAB_0159bc4c;
      lVar7 = (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
      if (lVar7 == 0) goto LAB_0159bd70;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0159bd74:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar10 = *(long **)(lVar7 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar10);
        }
      }
      uVar5 = *(undefined8 *)PTR_DAT_0234cf38;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      plVar8 = (long *)FUN_01d5e86c(uVar5,0);
      plVar9 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
      if (plVar9 == (long *)0x0) goto LAB_0159bd70;
      if ((plVar10 != (long *)0x0) &&
         (lVar7 = thunk_FUN_0103ffe0(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
        uVar5 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar5,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_0159bd74;
      plVar9[4] = (long)plVar10;
      thunk_FUN_0106e12c(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x898))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x8a0)),
         plVar8 == (long *)0x0)) goto LAB_0159bd70;
      uVar6 = (**(code **)(*plVar8 + 0x288))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x290));
      if ((uVar6 & 1) == 0) goto LAB_0159bc4c;
      uVar5 = *(undefined8 *)PTR_DAT_0234cf50;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar5 = FUN_01d5e86c(uVar5,0);
      plVar4 = plVar10;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar2);
      }
    }
    else {
      lVar7 = *unaff_x25;
      puVar11 = (undefined8 *)PTR_DAT_0234cf30;
LAB_0159b9c4:
      uVar5 = *puVar11;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar5 = FUN_01d5e86c(uVar5,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar2);
      }
    }
    plVar4 = (long *)FUN_01d8868c(uVar5,plVar4,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0103c244(lVar7);
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf20);
    FUN_01d339dc(plVar4,0);
LAB_0159b94c:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0103c244();
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar10;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0103c244(lVar7);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_0159bd68:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar4);
    }
  }
  return plVar4;
}


