/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRAnchor.Telemetry.Key>$$MoveNext
ENTRY_POINT: 015dfd8c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


long * System_Array_InternalEnumerator<OVRAnchor_Telemetry_Key>__MoveNext(void)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *unaff_x24;
  long *unaff_x25;
  
  plVar3 = (long *)FUN_01d5e86c();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24))
    goto 
    System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_Reset;
  }
  uVar4 = FUN_01d5e86c(*(undefined8 *)PTR_DAT_0234bd38,0);
  uVar5 = FUN_01d603ec(plVar3,uVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = *(undefined8 *)PTR_DAT_0234bda8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar4 = FUN_01d5e86c(uVar4,0);
    uVar5 = FUN_01d603ec(plVar3,uVar4,0);
    if ((uVar5 & 1) != 0) {
      plVar3 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf40);
      FUN_01d33adc(plVar3,0);
      goto LAB_015dfe6c;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x25);
    }
    plVar9 = (long *)FUN_01d5e86c(uVar4,0);
    if (plVar9 == (long *)0x0) {
LAB_015e0290:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar5 = (**(code **)(*plVar9 + 0x288))(plVar9,plVar3,*(undefined8 *)(*plVar9 + 0x290));
    if ((uVar5 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_015e0290;
      uVar5 = (**(code **)(*plVar3 + 0x3a8))(plVar3,*(undefined8 *)(*plVar3 + 0x3b0));
      if ((uVar5 & 1) == 0) {
LAB_015e016c:
        uVar5 = (**(code **)(*plVar3 + 0x568))(plVar3,*(undefined8 *)(*plVar3 + 0x570));
        if ((uVar5 & 1) == 0) {
switchD_015e01ec_default:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0103c244();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          plVar3 = (long *)thunk_FUN_010400dc();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0103c244(lVar6);
          }
          FUN_019580c4(plVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar3;
        }
        if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar4 = OVRPlugin__get_positionSupported(plVar3,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x25);
        }
        uVar2 = FUN_01d62dc0(uVar4,0);
        switch(uVar2) {
        case 5:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_0234cf58;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_0234cf28;
          break;
        case 7:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_0234cf60;
          break;
        case 0xb:
        case 0xc:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_0234cf48;
          break;
        default:
          goto switchD_015e01ec_default;
        }
        goto LAB_015dfee4;
      }
      uVar4 = (**(code **)(*plVar3 + 0x428))(plVar3,*(undefined8 *)(*plVar3 + 0x430));
      uVar11 = *(undefined8 *)PTR_DAT_0234cb98;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x25);
      }
      uVar11 = FUN_01d5e86c(uVar11,0);
      uVar5 = FUN_01d603ec(uVar4,uVar11,0);
      if ((uVar5 & 1) == 0) goto LAB_015e016c;
      lVar6 = (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
      if (lVar6 == 0) goto LAB_015e0290;
      if (*(int *)(lVar6 + 0x18) == 0) {

        System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_get_Current
        :
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar9 = *(long **)(lVar6 + 0x20);
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
      plVar7 = (long *)FUN_01d5e86c(uVar4,0);
      plVar8 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
      if (plVar8 == (long *)0x0) goto LAB_015e0290;
      if ((plVar9 != (long *)0x0) &&
         (lVar6 = thunk_FUN_0103ffe0(plVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
        uVar4 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar4,0);
      }
      if ((int)plVar8[3] == 0)
      goto 
      System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_get_Current
      ;
      plVar8[4] = (long)plVar9;
      thunk_FUN_0106e12c(plVar8 + 4,plVar9);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x898))
                                     (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x8a0)),
         plVar7 == (long *)0x0)) goto LAB_015e0290;
      uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x290));
      if ((uVar5 & 1) == 0) goto LAB_015e016c;
      uVar4 = *(undefined8 *)PTR_DAT_0234cf50;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar4 = FUN_01d5e86c(uVar4,0);
      plVar3 = plVar9;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x24);
      }
    }
    else {
      lVar6 = *unaff_x25;
      puVar10 = (undefined8 *)PTR_DAT_0234cf30;
LAB_015dfee4:
      uVar4 = *puVar10;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar4 = FUN_01d5e86c(uVar4,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x24);
      }
    }
    plVar3 = (long *)FUN_01d8868c(uVar4,plVar3,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
    }
    plVar9 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar3 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf20);
    FUN_01d339dc(plVar3,0);
LAB_015dfe6c:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    plVar9 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar9;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_Reset:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar3);
    }
  }
  return plVar3;
}


