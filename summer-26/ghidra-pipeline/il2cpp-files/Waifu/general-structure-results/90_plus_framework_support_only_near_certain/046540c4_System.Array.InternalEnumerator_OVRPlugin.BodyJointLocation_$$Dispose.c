/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 046540c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x046543a8) */

void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  FUN_04653548();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  iVar6 = *unaff_x20;
  if (unaff_w21 < iVar6) {
    uVar5 = *(undefined8 *)(unaff_x20 + 2);
    uVar1 = *(undefined8 *)(unaff_x20 + 4);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
      iVar6 = *unaff_x20;
    }
    FUN_04ddeef8(uVar5,uVar1,unaff_w21,uVar5,uVar1,unaff_w21 + unaff_w22,iVar6 - unaff_w21,
                 DAT_083f90a8);
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0338f618();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0338f618(lVar2);
  }
  lVar7 = *unaff_x23;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_046541bc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_0338f71c();
LAB_046541bc:
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  do {
    lVar2 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083cc870) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04654220;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar4,DAT_083cc870,0);
LAB_04654220:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) break;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618(lVar2);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_046542a4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar4,lVar2,0);
LAB_046542a4:
    uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    uVar5 = FUN_04654e70(uVar5);
    unaff_w22 = unaff_w22 + -1;
    *(undefined8 *)(*(long *)(unaff_x20 + 2) + (long)unaff_w21 * 8) = uVar5;
    unaff_w21 = unaff_w21 + 1;
    *unaff_x20 = *unaff_x20 + 1;
  } while (unaff_w22 != 0);
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083cc7a8) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04654344;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar4,DAT_083cc7a8,0);
LAB_04654344:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}


