/*
FUNCTION_NAME: System.Array.InternalEnumerator<UIRenderDevice.DeviceToFree>$$Dispose
ENTRY_POINT: 015deaf0
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


long * System_Array_InternalEnumerator<UIRenderDevice_DeviceToFree>__Dispose(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *unaff_x24;
  long *unaff_x25;
  
  bVar1 = *(byte *)(*unaff_x24 + 0x130);
  if ((*(byte *)(param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  uVar8 = *(undefined8 *)PTR_DAT_0234cf38;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  plVar3 = (long *)FUN_01d5e86c(uVar8,0);
  lVar4 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
  if (lVar4 != 0) {
    if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_0103ffe0(), lVar5 == 0)) {
      uVar8 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar8,0);
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(long *)(lVar4 + 0x20) = unaff_x21;
    thunk_FUN_0106e12c();
    if ((plVar3 != (long *)0x0) &&
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x898))
                                   (plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x8a0)),
       plVar3 != (long *)0x0)) {
      uVar6 = (**(code **)(*plVar3 + 0x288))();
      if ((uVar6 & 1) == 0) {
        uVar6 = (**(code **)(*unaff_x20 + 0x568))();
        if ((uVar6 & 1) == 0) {
switchD_015dec98_default:
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          plVar3 = (long *)thunk_FUN_010400dc();
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244(lVar4);
          }
          FUN_0195777c(plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          return plVar3;
        }
        if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar8 = OVRPlugin__get_positionSupported();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x25);
        }
        uVar2 = FUN_01d62dc0(uVar8,0);
        switch(uVar2) {
        case 5:
          lVar4 = *unaff_x25;
          puVar7 = (undefined8 *)PTR_DAT_0234cf58;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar4 = *unaff_x25;
          puVar7 = (undefined8 *)PTR_DAT_0234cf28;
          break;
        case 7:
          lVar4 = *unaff_x25;
          puVar7 = (undefined8 *)PTR_DAT_0234cf60;
          break;
        case 0xb:
        case 0xc:
          lVar4 = *unaff_x25;
          puVar7 = (undefined8 *)PTR_DAT_0234cf48;
          break;
        default:
          goto switchD_015dec98_default;
        }
        uVar8 = *puVar7;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar8 = FUN_01d5e86c(uVar8,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x24);
        }
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_0234cf50;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar8 = FUN_01d5e86c(uVar8,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x24);
        }
      }
      plVar3 = (long *)FUN_01d8868c(uVar8);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244(lVar4);
      }
      lVar4 = **(long **)(lVar4 + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244(lVar4);
      }
      if (plVar3 != (long *)0x0) {
        if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar3);
        }
      }
      return plVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


