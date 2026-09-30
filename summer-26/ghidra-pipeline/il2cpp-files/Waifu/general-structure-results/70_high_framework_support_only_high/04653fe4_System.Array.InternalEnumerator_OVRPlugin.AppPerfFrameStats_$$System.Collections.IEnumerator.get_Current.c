/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04653fe4
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x046543a8) */

void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
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
  long unaff_x24;
  undefined1 unaff_w25;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f90a8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x24 + 0x356) = unaff_w25;
  if (unaff_x23 == (long *)0x0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar4 = thunk_FUN_03398a84();
    uVar5 = FUN_033d1ba8(&DAT_08454e40);
    FUN_0677f140(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar4);
  }
  if (unaff_w22 < 0) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    unaff_w22 = FUN_03f278a8();
  }
  if (unaff_w21 < 0) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    unaff_w21 = *unaff_x20;
  }
  if (unaff_w22 != 0) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    if ((DAT_086da351 & 1) == 0) {
      FUN_0335b6c8(&DAT_083f90b8,1);
      DataMemoryBarrier(2,3);
      DAT_086da351 = 1;
    }
    iVar6 = 0;
    if (*(long *)(unaff_x20 + 2) != 0) {
      iVar6 = unaff_x20[4];
    }
    if (iVar6 < *unaff_x20 + unaff_w22) {
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0338f618();
      }
      FUN_04653548();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    iVar6 = *unaff_x20;
    if (unaff_w21 < iVar6) {
      uVar4 = *(undefined8 *)(unaff_x20 + 2);
      uVar5 = *(undefined8 *)(unaff_x20 + 4);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0338f618();
        iVar6 = *unaff_x20;
      }
      FUN_04ddeef8(uVar4,uVar5,unaff_w21,uVar4,uVar5,unaff_w21 + unaff_w22,iVar6 - unaff_w21,
                   DAT_083f90a8);
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0338f618();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0338f618(lVar1);
    }
    lVar7 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_046541bc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
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
      uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_083cc870) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04654220;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc870,0);
LAB_04654220:
      uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar8 & 1) == 0) break;
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0338f618();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0338f618(lVar1);
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar1) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_046542a4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
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
      uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_083cc7a8) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04654344;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc7a8,0);
LAB_04654344:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
    }
  }
  return;
}


