/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03db3818
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03db3c90) */

long System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  size_t unaff_x23;
  undefined8 unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  plVar1 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar3 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06f70b38) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03db388c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02feb5b8(plVar1,*(long *)PTR_DAT_06f70b38,0);
LAB_03db388c:
  uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  if ((uVar6 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    lVar4 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_03db3900;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_02feb5b8(plVar1,lVar3,0);
LAB_03db3900:
    *(void **)(unaff_x29 + -0x10) = unaff_x25;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar1,unaff_x29 + -0x10);
    memcpy(unaff_x27,unaff_x25,unaff_x23);
    memcpy(unaff_x26,unaff_x27,unaff_x23);
    uVar6 = FUN_02fe94a8(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar6 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar4 = *(long *)(unaff_x20 + 0x38);
      lVar3 = *(long *)(lVar4 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02feb2c4();
        lVar4 = *(long *)(unaff_x20 + 0x38);
      }
      FUN_02fe9dc8(lVar3,*(undefined8 *)(lVar4 + 0x28));
      lVar3 = *(long *)(unaff_x29 + -0x10);
    }
    lVar4 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06f70b38) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03db39e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar1,*(long *)PTR_DAT_06f70b38,0);
LAB_03db39e0:
    uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      lVar4 = FUN_05980954(0x10,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_0597e018(lVar4,lVar3,0);
      do {
        lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4(lVar3);
        }
        lVar5 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              lVar3 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
              goto LAB_03db3a78;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        lVar3 = FUN_02feb5b8(plVar1,lVar3,0);
LAB_03db3a78:
        *(void **)(unaff_x29 + -0x10) = unaff_x25;
        lVar3 = *(long *)(lVar3 + 8);
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar1,unaff_x29 + -0x10);
        memcpy(unaff_x27,unaff_x25,unaff_x23);
        FUN_0597dec8(lVar4);
        memcpy(unaff_x26,unaff_x27,unaff_x23);
        uVar6 = FUN_02fe94a8(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(unaff_x20 + 0x38);
          lVar3 = *(long *)(lVar5 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4();
            lVar5 = *(long *)(unaff_x20 + 0x38);
          }
          FUN_02fe9dc8(lVar3,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(unaff_x29 + -0x18));
          FUN_0597e018(lVar4,*(undefined8 *)(unaff_x29 + -0x10),0);
        }
        lVar3 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06f70b38) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03db3b70;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02feb5b8(plVar1,*(long *)PTR_DAT_06f70b38,0);
LAB_03db3b70:
        uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      } while ((uVar6 & 1) != 0);
      lVar3 = FUN_05980ab0(lVar4,0);
      goto LAB_03db3bac;
    }
    if (lVar3 != 0) goto LAB_03db3bac;
  }
  lVar3 = **(long **)(*(long *)PTR_DAT_06f6df20 + 0xb8);
LAB_03db3bac:
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06f70b30) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03db3c08;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar1,*(long *)PTR_DAT_06f70b30,0);
LAB_03db3c08:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}


