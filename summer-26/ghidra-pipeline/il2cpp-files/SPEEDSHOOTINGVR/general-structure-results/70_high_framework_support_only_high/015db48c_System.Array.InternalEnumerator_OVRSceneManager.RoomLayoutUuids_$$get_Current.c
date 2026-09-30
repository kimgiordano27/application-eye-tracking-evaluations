/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRSceneManager.RoomLayoutUuids>$$get_Current
ENTRY_POINT: 015db48c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * System_Array_InternalEnumerator<OVRSceneManager_RoomLayoutUuids>__get_Current
                 (long param_1,undefined8 param_2,undefined8 param_3)

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
  
  uVar3 = (**(code **)(param_1 + 0x288))(param_2,param_3,*(undefined8 *)(param_1 + 0x290));
  if ((uVar3 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_015db854;
    uVar3 = (**(code **)(*unaff_x20 + 0x3a8))();
    if ((uVar3 & 1) != 0) {
      uVar9 = (**(code **)(*unaff_x20 + 0x428))();
      uVar10 = *(undefined8 *)PTR_DAT_0234cb98;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x25);
      }
      uVar10 = FUN_01d5e86c(uVar10,0);
      uVar3 = FUN_01d603ec(uVar9,uVar10,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = (**(code **)(*unaff_x20 + 0x448))();
        if (lVar4 == 0) {
LAB_015db854:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_015db858:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar5 = *(long **)(lVar4 + 0x20);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(plVar5);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_0234cf38;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        plVar6 = (long *)FUN_01d5e86c(uVar9,0);
        plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
        if (plVar7 == (long *)0x0) goto LAB_015db854;
        if ((plVar5 != (long *)0x0) &&
           (lVar4 = thunk_FUN_0103ffe0(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
          uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_015db858;
        plVar7[4] = (long)plVar5;
        thunk_FUN_0106e12c(plVar7 + 4,plVar5);
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x898))
                                       (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x8a0)),
           plVar6 == (long *)0x0)) goto LAB_015db854;
        uVar3 = (**(code **)(*plVar6 + 0x288))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x290));
        if ((uVar3 & 1) != 0) {
          uVar9 = *(undefined8 *)PTR_DAT_0234cf50;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar9 = FUN_01d5e86c(uVar9,0);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01022c14(*unaff_x24);
          }
          goto LAB_015db4e4;
        }
      }
    }
    uVar3 = (**(code **)(*unaff_x20 + 0x568))();
    if ((uVar3 & 1) == 0) {
switchD_015db7b0_default:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      plVar5 = (long *)thunk_FUN_010400dc();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244(lVar4);
      }
      FUN_01956634(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return plVar5;
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
      goto switchD_015db7b0_default;
    }
  }
  else {
    lVar4 = *unaff_x25;
    puVar8 = (undefined8 *)PTR_DAT_0234cf30;
  }
  uVar9 = *puVar8;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar9 = FUN_01d5e86c(uVar9,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x24);
  }
LAB_015db4e4:
  plVar5 = (long *)FUN_01d8868c(uVar9);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar5);
    }
  }
  return plVar5;
}


