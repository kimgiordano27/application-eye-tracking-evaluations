/*
FUNCTION_NAME: System.Array.InternalEnumerator<Scene>$$get_Current
ENTRY_POINT: 015cfdac
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


long * System_Array_InternalEnumerator<Scene>__get_Current(void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar3 = (*in_x9)();
  if ((uVar3 & 1) != 0) {
    uVar4 = (**(code **)(*unaff_x20 + 0x428))();
    uVar10 = *(undefined8 *)PTR_DAT_0234cb98;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x25);
    }
    uVar10 = FUN_01d5e86c(uVar10,0);
    uVar3 = FUN_01d603ec(uVar4,uVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = (**(code **)(*unaff_x20 + 0x448))();
      if (lVar5 == 0) {
LAB_015d0084:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_015d0088:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar9 = *(long **)(lVar5 + 0x20);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar9);
        }
      }
      uVar4 = *(undefined8 *)PTR_DAT_0234cf38;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      plVar6 = (long *)FUN_01d5e86c(uVar4,0);
      plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
      if (plVar7 == (long *)0x0) goto LAB_015d0084;
      if ((plVar9 != (long *)0x0) &&
         (lVar5 = thunk_FUN_0103ffe0(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar4 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar4,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_015d0088;
      plVar7[4] = (long)plVar9;
      thunk_FUN_0106e12c(plVar7 + 4,plVar9);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x898))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x8a0)),
         plVar6 == (long *)0x0)) goto LAB_015d0084;
      uVar3 = (**(code **)(*plVar6 + 0x288))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x290));
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)PTR_DAT_0234cf50;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar4 = FUN_01d5e86c(uVar4,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x24);
        }
        goto LAB_015cfd14;
      }
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x568))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar4 = OVRPlugin__get_positionSupported();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x25);
    }
    uVar2 = FUN_01d62dc0(uVar4,0);
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
      goto switchD_015cffe0_default;
    }
    uVar4 = *puVar8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar4 = FUN_01d5e86c(uVar4,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x24);
    }
LAB_015cfd14:
    plVar9 = (long *)FUN_01d8868c(uVar4);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
      {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar9);
      }
    }
    return plVar9;
  }
switchD_015cffe0_default:
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  plVar9 = (long *)thunk_FUN_010400dc();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  FUN_01952978(plVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return plVar9;
}


