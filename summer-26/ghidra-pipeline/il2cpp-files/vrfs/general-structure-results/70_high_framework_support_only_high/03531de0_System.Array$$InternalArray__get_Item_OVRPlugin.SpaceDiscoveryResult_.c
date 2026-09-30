/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03531de0
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__get_Item<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x19;
  code *pcVar12;
  long *unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x24;
  long *unaff_x25;
  
  FUN_031c8668(**(undefined8 **)(param_1 + 0xf98),0);
  uVar5 = FUN_031d212c();
  if ((uVar5 & 1) == 0) {
    uVar13 = *(undefined8 *)PTR_DAT_06db4eb8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_031c8668(uVar13,0);
    uVar5 = FUN_031d212c();
    if ((uVar5 & 1) == 0) {
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_015c2790();
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x25);
      }
      plVar6 = (long *)FUN_031c8668(uVar13,0);
      if (plVar6 == (long *)0x0) goto LAB_035322ec;
      uVar5 = (**(code **)(*plVar6 + 0x298))();
      if ((uVar5 & 1) != 0) {
        lVar7 = *unaff_x25;
        puVar10 = (undefined8 *)PTR_DAT_06e0f818;
        goto LAB_03531f14;
      }
      if (unaff_x20 == (long *)0x0) goto LAB_035322ec;
      uVar5 = (**(code **)(*unaff_x20 + 0x3b8))();
      puVar3 = PTR_DAT_06d97e60;
      if ((uVar5 & 1) == 0) {
LAB_0353219c:
        uVar5 = (**(code **)(*unaff_x20 + 0x598))();
        if ((uVar5 & 1) == 0) {
switchD_0353221c_default:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_015c2790();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
            FUN_015c2790();
          }
          plVar6 = (long *)thunk_FUN_015d056c();
          if (plVar6 != (long *)0x0) {
            lVar11 = *(long *)(unaff_x19 + 0x20);
            uVar2 = *(ushort *)(lVar11 + 0x132);
            lVar7 = lVar11;
            if ((uVar2 & 1) == 0) {
              lVar11 = FUN_015c2790(lVar11);
              uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
              lVar7 = *(long *)(unaff_x19 + 0x20);
            }
            pcVar12 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x30) + 8);
            if ((uVar2 & 1) == 0) {
              lVar7 = FUN_015c2790(lVar7);
            }
            (*pcVar12)(plVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30));
            return plVar6;
          }
LAB_035322ec:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(int *)(*(long *)PTR_DAT_06e41fa8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar13 = FUN_02d418dc();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x25);
        }
        uVar4 = FUN_031d4d6c(uVar13,0);
        switch(uVar4) {
        case 5:
          lVar7 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_06e62420;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar7 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_06d89750;
          break;
        case 7:
          lVar7 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_06e0d528;
          break;
        case 0xb:
        case 0xc:
          lVar7 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_06df24e8;
          break;
        default:
          goto switchD_0353221c_default;
        }
LAB_03531f14:
        uVar13 = *puVar10;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar13 = FUN_031c8668(uVar13,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x24);
        }
      }
      else {
        uVar13 = (**(code **)(*unaff_x20 + 0x438))();
        uVar14 = *(undefined8 *)puVar3;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x25);
        }
        uVar14 = FUN_031c8668(uVar14,0);
        uVar5 = FUN_031d212c(uVar13,uVar14,0);
        if ((uVar5 & 1) == 0) goto LAB_0353219c;
        lVar7 = (**(code **)(*unaff_x20 + 0x458))();
        puVar3 = PTR_DAT_06dba180;
        if (lVar7 == 0) goto LAB_035322ec;
        if (*(int *)(lVar7 + 0x18) == 0) {
LAB_035322f0:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        plVar6 = *(long **)(lVar7 + 0x20);
        if (plVar6 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 300);
          if ((*(byte *)(*plVar6 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar6);
          }
        }
        uVar13 = *(undefined8 *)PTR_DAT_06e41b90;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        plVar8 = (long *)FUN_031c8668(uVar13,0);
        plVar9 = (long *)FUN_0160edfc(*(undefined8 *)puVar3,1);
        if (plVar9 == (long *)0x0) goto LAB_035322ec;
        if ((plVar6 != (long *)0x0) &&
           (lVar7 = thunk_FUN_015d0480(plVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
          uVar13 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar13,0);
        }
        if ((int)plVar9[3] == 0) goto LAB_035322f0;
        plVar9[4] = (long)plVar6;
        thunk_FUN_01656ef8(plVar9 + 4,plVar6);
        if ((plVar8 == (long *)0x0) ||
           (plVar8 = (long *)(**(code **)(*plVar8 + 0x938))
                                       (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x940)),
           plVar8 == (long *)0x0)) goto LAB_035322ec;
        uVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar6,*(undefined8 *)(*plVar8 + 0x2a0));
        if ((uVar5 & 1) == 0) goto LAB_0353219c;
        uVar13 = *(undefined8 *)PTR_DAT_06e43370;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar13 = FUN_031c8668(uVar13,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x24);
        }
      }
      plVar6 = (long *)FUN_02d4fc68(uVar13);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_015c2790(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_015c2790(lVar7);
      }
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      goto LAB_03531f94;
    }
    plVar6 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06db7378);
    if (plVar6 == (long *)0x0) goto LAB_035322ec;
    FUN_03824dfc(plVar6,0);
  }
  else {
    plVar6 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e55bc0);
    if (plVar6 == (long *)0x0) goto LAB_035322ec;
    FUN_03824cf8(plVar6,0);
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_015c2790();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_015c2790(lVar7);
  }
LAB_03531f94:
  if ((*(byte *)(lVar7 + 300) <= *(byte *)(*plVar6 + 300)) &&
     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) == lVar7)) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160f170(plVar6);
}


