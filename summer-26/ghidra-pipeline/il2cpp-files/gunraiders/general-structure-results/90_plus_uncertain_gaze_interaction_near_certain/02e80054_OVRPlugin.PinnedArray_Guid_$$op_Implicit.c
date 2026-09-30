/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$op_Implicit
ENTRY_POINT: 02e80054
PROGRAM: gunraiders-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e8041c) */
/* WARNING: Removing unreachable block (ram,0x02e80460) */

void OVRPlugin_PinnedArray<Guid>__op_Implicit(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    FUN_01c72394(param_2);
  }
  plVar4 = (long *)thunk_FUN_01c495e4();
  if (plVar4 == (long *)0x0) {
    if (unaff_w21 < (int)unaff_x19[3]) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394(lVar6);
      }
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02e8028c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498();
LAB_02e8028c:
      plVar4 = (long *)(*(code *)*puVar5)();
      puVar2 = PTR_DAT_04230960;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02e802f4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar2,0);
LAB_02e802f4:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) goto LAB_02e803a4;
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02e8036c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar4,lVar6,0);
LAB_02e8036c:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
        FUN_02e7fd9c();
      } while( true );
    }
    FUN_02e80c64();
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02e8014c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar4,lVar6,0);
LAB_02e8014c:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_02e7f6a8();
      iVar1 = (int)unaff_x19[3] - unaff_w21;
      if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
        FUN_032f42b0(unaff_x19[2],unaff_w21,unaff_x19[2],iVar3 + unaff_w21,iVar1,0);
      }
      if (unaff_x19 == plVar4) {
        FUN_032f42b0(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
        FUN_032f42b0(unaff_x19[2],iVar3 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                     (int)unaff_x19[3] - unaff_w21,0);
      }
      else {
        lVar7 = unaff_x19[2];
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394(lVar6);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto FUN_02e8025c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar4,lVar6,5);
FUN_02e8025c:
        (*(code *)*puVar5)(plVar4,lVar7,unaff_w21,puVar5[1]);
      }
      *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar3;
    }
  }
UnityEngine_UIElements_PointerEventBase<object>__get_pressedButtons:
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
LAB_02e803a4:
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto UnityEngine_UIElements_PointerEventBase<object>__get_pointerType;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_0422fce8,0);
UnityEngine_UIElements_PointerEventBase<object>__get_pointerType:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto UnityEngine_UIElements_PointerEventBase<object>__get_pressedButtons;
}


