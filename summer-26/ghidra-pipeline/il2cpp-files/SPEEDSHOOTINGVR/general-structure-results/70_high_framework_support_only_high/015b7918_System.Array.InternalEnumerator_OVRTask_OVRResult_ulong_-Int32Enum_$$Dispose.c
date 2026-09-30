/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRTask<OVRResult<ulong,-Int32Enum>>>$$Dispose
ENTRY_POINT: 015b7918
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


long * System_Array_InternalEnumerator<OVRTask<OVRResult<ulong,_Int32Enum>>>__Dispose
                 (undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long in_x9;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar9 = *(undefined8 *)(in_x9 + 0x28);
  if (in_w10 == 0) {
    thunk_FUN_01022c14(param_1);
  }
  plVar3 = (long *)FUN_01d5e86c(uVar9,0);
  if (plVar3 == (long *)0x0) {
LAB_015b7d08:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar4 = (**(code **)(*plVar3 + 0x288))();
  if ((uVar4 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_015b7d08;
    uVar4 = (**(code **)(*unaff_x20 + 0x3a8))();
    if ((uVar4 & 1) != 0) {
      uVar9 = (**(code **)(*unaff_x20 + 0x428))();
      uVar10 = *(undefined8 *)PTR_DAT_0234cb98;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x25);
      }
      uVar10 = FUN_01d5e86c(uVar10,0);
      uVar4 = FUN_01d603ec(uVar9,uVar10,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = (**(code **)(*unaff_x20 + 0x448))();
        if (lVar5 == 0) goto LAB_015b7d08;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_015b7d0c:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar3 = *(long **)(lVar5 + 0x20);
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(plVar3);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_0234cf38;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        plVar6 = (long *)FUN_01d5e86c(uVar9,0);
        plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
        if (plVar7 == (long *)0x0) goto LAB_015b7d08;
        if ((plVar3 != (long *)0x0) &&
           (lVar5 = thunk_FUN_0103ffe0(plVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
          uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_015b7d0c;
        plVar7[4] = (long)plVar3;
        thunk_FUN_0106e12c(plVar7 + 4,plVar3);
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x898))
                                       (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x8a0)),
           plVar6 == (long *)0x0)) goto LAB_015b7d08;
        uVar4 = (**(code **)(*plVar6 + 0x288))(plVar6,plVar3,*(undefined8 *)(*plVar6 + 0x290));
        if ((uVar4 & 1) != 0) {
          uVar9 = *(undefined8 *)PTR_DAT_0234cf50;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar9 = FUN_01d5e86c(uVar9,0);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01022c14(*unaff_x24);
          }
          goto LAB_015b7998;
        }
      }
    }
    uVar4 = (**(code **)(*unaff_x20 + 0x568))();
    if ((uVar4 & 1) == 0) {
switchD_015b7c64_default:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      plVar3 = (long *)thunk_FUN_010400dc();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244(lVar5);
      }
      FUN_0194b1d4(plVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar3;
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
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf58;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf28;
      break;
    case 7:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf60;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf48;
      break;
    default:
      goto switchD_015b7c64_default;
    }
  }
  else {
    lVar5 = *unaff_x25;
    puVar8 = (undefined8 *)PTR_DAT_0234cf30;
  }
  uVar9 = *puVar8;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar9 = FUN_01d5e86c(uVar9,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x24);
  }
LAB_015b7998:
  plVar3 = (long *)FUN_01d8868c(uVar9);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar3);
    }
  }
  return plVar3;
}


