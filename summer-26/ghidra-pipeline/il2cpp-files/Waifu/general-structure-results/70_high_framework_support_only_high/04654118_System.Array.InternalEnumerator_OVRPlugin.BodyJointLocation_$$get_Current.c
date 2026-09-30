/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$get_Current
ENTRY_POINT: 04654118
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x046543a8) */

void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__get_Current(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  
  FUN_0338f618();
  FUN_04ddeef8();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0338f618();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x38);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0338f618(lVar1);
  }
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_046541bc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0338f71c();
LAB_046541bc:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  do {
    lVar1 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083cc870) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04654220;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc870,0);
LAB_04654220:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) break;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0338f618();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0338f618(lVar1);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_046542a4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar3,lVar1,0);
LAB_046542a4:
    uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    uVar4 = FUN_04654e70(uVar4);
    unaff_w22 = unaff_w22 + -1;
    *(undefined8 *)(*(long *)(unaff_x20 + 2) + (long)unaff_w21 * 8) = uVar4;
    unaff_w21 = unaff_w21 + 1;
    *unaff_x20 = *unaff_x20 + 1;
  } while (unaff_w22 != 0);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083cc7a8) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04654344;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc7a8,0);
LAB_04654344:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return;
}


