/*
FUNCTION_NAME: System.Array.InternalEnumerator<PlayerLoopSystem>$$get_Current
ENTRY_POINT: 015cdc00
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


long * System_Array_InternalEnumerator<PlayerLoopSystem>__get_Current(ulong param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x25;
  long *plVar13;
  
  plVar13 = *(long **)(unaff_x25 + 0xc58);
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0103c244();
  }
  uVar11 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x20);
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01022c14(*plVar13);
  }
  puVar2 = PTR_DAT_0234bce0;
  plVar4 = (long *)FUN_01d5e86c(uVar11,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_015ce12c;
  }
  uVar11 = FUN_01d5e86c(*(undefined8 *)PTR_DAT_0234bd38,0);
  uVar5 = FUN_01d603ec(plVar4,uVar11,0);
  if ((uVar5 & 1) == 0) {
    uVar11 = *(undefined8 *)PTR_DAT_0234bda8;
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar11 = FUN_01d5e86c(uVar11,0);
    uVar5 = FUN_01d603ec(plVar4,uVar11,0);
    if ((uVar5 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf40);
      FUN_01d33adc(plVar4,0);
      goto 
      System_Array_InternalEnumerator<PlayerLoopSystem>__System_Collections_IEnumerator_get_Current;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01022c14(*plVar13);
    }
    plVar7 = (long *)FUN_01d5e86c(uVar11,0);
    if (plVar7 == (long *)0x0) {
LAB_015ce134:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x290));
    if ((uVar5 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_015ce134;
      uVar5 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
      if ((uVar5 & 1) == 0) {
LAB_015ce010:
        uVar5 = (**(code **)(*plVar4 + 0x568))(plVar4,*(undefined8 *)(*plVar4 + 0x570));
        if ((uVar5 & 1) == 0) {
switchD_015ce090_default:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0103c244();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          plVar13 = (long *)thunk_FUN_010400dc();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0103c244(lVar6);
          }
          FUN_01951ee0(plVar13,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar13;
        }
        if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar11 = OVRPlugin__get_positionSupported(plVar4,0);
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_01022c14(*plVar13);
        }
        uVar3 = FUN_01d62dc0(uVar11,0);
        switch(uVar3) {
        case 5:
          lVar6 = *plVar13;
          puVar10 = (undefined8 *)PTR_DAT_0234cf58;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar6 = *plVar13;
          puVar10 = (undefined8 *)PTR_DAT_0234cf28;
          break;
        case 7:
          lVar6 = *plVar13;
          puVar10 = (undefined8 *)PTR_DAT_0234cf60;
          break;
        case 0xb:
        case 0xc:
          lVar6 = *plVar13;
          puVar10 = (undefined8 *)PTR_DAT_0234cf48;
          break;
        default:
          goto switchD_015ce090_default;
        }
        goto LAB_015cdd88;
      }
      uVar11 = (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
      uVar12 = *(undefined8 *)PTR_DAT_0234cb98;
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01022c14(*plVar13);
      }
      uVar12 = FUN_01d5e86c(uVar12,0);
      uVar5 = FUN_01d603ec(uVar11,uVar12,0);
      if ((uVar5 & 1) == 0) goto LAB_015ce010;
      lVar6 = (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
      if (lVar6 == 0) goto LAB_015ce134;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_015ce138:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar7 = *(long **)(lVar6 + 0x20);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar7);
        }
      }
      uVar11 = *(undefined8 *)PTR_DAT_0234cf38;
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      plVar8 = (long *)FUN_01d5e86c(uVar11,0);
      plVar9 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
      if (plVar9 == (long *)0x0) goto LAB_015ce134;
      if ((plVar7 != (long *)0x0) &&
         (lVar6 = thunk_FUN_0103ffe0(plVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
        uVar11 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar11,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_015ce138;
      plVar9[4] = (long)plVar7;
      thunk_FUN_0106e12c(plVar9 + 4,plVar7);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x898))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x8a0)),
         plVar8 == (long *)0x0)) goto LAB_015ce134;
      uVar5 = (**(code **)(*plVar8 + 0x288))(plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x290));
      if ((uVar5 & 1) == 0) goto LAB_015ce010;
      uVar11 = *(undefined8 *)PTR_DAT_0234cf50;
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar11 = FUN_01d5e86c(uVar11,0);
      plVar4 = plVar7;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar2);
      }
    }
    else {
      lVar6 = *plVar13;
      puVar10 = (undefined8 *)PTR_DAT_0234cf30;
LAB_015cdd88:
      uVar11 = *puVar10;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar11 = FUN_01d5e86c(uVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar2);
      }
    }
    plVar4 = (long *)FUN_01d8868c(uVar11,plVar4,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
    }
    plVar13 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf20);
    FUN_01d339dc(plVar4,0);
System_Array_InternalEnumerator<PlayerLoopSystem>__System_Collections_IEnumerator_get_Current:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    plVar13 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar13;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_015ce12c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar4);
    }
  }
  return plVar4;
}


