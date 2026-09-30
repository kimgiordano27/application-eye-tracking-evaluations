/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRTask<OVRSceneManager.Metrics>>$$Dispose
ENTRY_POINT: 015b83c8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_7;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * System_Array_InternalEnumerator<OVRTask<OVRSceneManager_Metrics>>__Dispose(void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  FUN_01d5e86c();
  uVar3 = FUN_01d603ec();
  if ((uVar3 & 1) == 0) {
    uVar9 = *(undefined8 *)PTR_DAT_0234bda8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01d5e86c(uVar9,0);
    uVar3 = FUN_01d603ec();
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x25);
      }
      plVar4 = (long *)FUN_01d5e86c(uVar9,0);
      if (plVar4 == (long *)0x0) {
LAB_015b887c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar3 = (**(code **)(*plVar4 + 0x288))();
      if ((uVar3 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_015b887c;
        uVar3 = (**(code **)(*unaff_x20 + 0x3a8))();
        if ((uVar3 & 1) == 0) {
System_Array_InternalEnumerator<TempAllocator_Page<ushort>>__Dispose:
          uVar3 = (**(code **)(*unaff_x20 + 0x568))();
          if ((uVar3 & 1) == 0) {
switchD_015b87d8_default:
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0103c244();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
              FUN_0103c244();
            }
            plVar4 = (long *)thunk_FUN_010400dc();
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0103c244(lVar5);
            }
            FUN_0194b594(plVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
            return plVar4;
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
            goto switchD_015b87d8_default;
          }
          goto LAB_015b84d0;
        }
        uVar9 = (**(code **)(*unaff_x20 + 0x428))();
        uVar10 = *(undefined8 *)PTR_DAT_0234cb98;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x25);
        }
        uVar10 = FUN_01d5e86c(uVar10,0);
        uVar3 = FUN_01d603ec(uVar9,uVar10,0);
        if ((uVar3 & 1) == 0)
        goto System_Array_InternalEnumerator<TempAllocator_Page<ushort>>__Dispose;
        lVar5 = (**(code **)(*unaff_x20 + 0x448))();
        if (lVar5 == 0) goto LAB_015b887c;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_015b8880:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar4 = *(long **)(lVar5 + 0x20);
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(plVar4);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_0234cf38;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        plVar7 = (long *)FUN_01d5e86c(uVar9,0);
        plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
        if (plVar6 == (long *)0x0) goto LAB_015b887c;
        if ((plVar4 != (long *)0x0) &&
           (lVar5 = thunk_FUN_0103ffe0(plVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
          uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar9,0);
        }
        if ((int)plVar6[3] == 0) goto LAB_015b8880;
        plVar6[4] = (long)plVar4;
        thunk_FUN_0106e12c(plVar6 + 4,plVar4);
        if ((plVar7 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar7 + 0x898))
                                       (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x8a0)),
           plVar7 == (long *)0x0)) goto LAB_015b887c;
        uVar3 = (**(code **)(*plVar7 + 0x288))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x290));
        if ((uVar3 & 1) == 0)
        goto System_Array_InternalEnumerator<TempAllocator_Page<ushort>>__Dispose;
        uVar9 = *(undefined8 *)PTR_DAT_0234cf50;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar9 = FUN_01d5e86c(uVar9,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x24);
        }
      }
      else {
        lVar5 = *unaff_x25;
        puVar8 = (undefined8 *)PTR_DAT_0234cf30;
LAB_015b84d0:
        uVar9 = *puVar8;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar9 = FUN_01d5e86c(uVar9,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x24);
        }
      }
      plVar4 = (long *)FUN_01d8868c(uVar9);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244(lVar5);
      }
      plVar7 = *(long **)(lVar5 + 0xc0);
      goto LAB_015b8534;
    }
    plVar4 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf40);
    FUN_01d33adc(plVar4,0);
  }
  else {
    plVar4 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf20);
    FUN_01d339dc(plVar4,0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  plVar7 = *(long **)(lVar5 + 0xc0);
LAB_015b8534:
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar4);
    }
  }
  return plVar4;
}


