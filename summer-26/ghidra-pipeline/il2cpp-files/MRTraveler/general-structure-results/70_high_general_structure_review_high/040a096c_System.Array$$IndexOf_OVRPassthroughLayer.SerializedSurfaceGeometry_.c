/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 040a096c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int *unaff_x19;
  long *plVar11;
  long unaff_x20;
  undefined1 auVar12 [16];
  long *plStack0000000000000000;
  ulong uStack0000000000000008;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e7c088);
  FUN_03c8f898(PTR_DAT_08e7c090);
  FUN_03c8f898(PTR_DAT_08e69888);
  FUN_03c8f898(PTR_DAT_08e69640);
  *(undefined1 *)(unaff_x20 + 0x569) = 1;
  if (*unaff_x19 == 0) {
    auVar12 = *(undefined1 (*) [16])(unaff_x19 + 8);
    unaff_x19[8] = 0;
    unaff_x19[9] = 0;
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
LAB_040a0a58:
    uStack0000000000000008 = auVar12._8_8_;
    plStack0000000000000000 = auVar12._0_8_;
    if (DAT_0940ffef == '\0') {
      FUN_03c8f898(PTR_DAT_08e69648);
      DAT_0940ffef = '\x01';
    }
    if (plStack0000000000000000 != (long *)0x0) {
      lVar7 = *plStack0000000000000000;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e69648) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_040a0e0c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plStack0000000000000000,*(long *)PTR_DAT_08e69648,2);
LAB_040a0e0c:
      (*(code *)*puVar4)(plStack0000000000000000,uStack0000000000000008 & 0xffff,puVar4[1]);
    }
  }
  else {
    if (*unaff_x19 == 1) {
      auVar12 = *(undefined1 (*) [16])(unaff_x19 + 8);
      unaff_x19[8] = 0;
      unaff_x19[9] = 0;
      unaff_x19[10] = 0;
      unaff_x19[0xb] = 0;
      *unaff_x19 = -1;
    }
    else {
      lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e7c090);
      FUN_07145224(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(unaff_x19 + 6);
      thunk_FUN_03d233cc();
      puVar1 = PTR_DAT_08e69e20;
      if (*(int *)(*(long *)PTR_DAT_08e69e20 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (DAT_0941112c == '\0') {
        FUN_03c8f898(PTR_DAT_08e69e20);
        DAT_0941112c = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar5 = *(long *)puVar1;
      }
      if (**(char **)(lVar5 + 0xb8) == '\0') goto LAB_040a0f58;
      lVar5 = *(long *)(*(long *)PTR_DAT_08e69760 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03cf1244();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03cf1244();
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      *(undefined8 *)(lVar7 + 0x18) = 0;
      thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x18),0);
      *(undefined1 *)(lVar7 + 0x20) = 0;
      lVar5 = FUN_0743ab60(0);
      uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e78620);
      FUN_06603f38(uVar6,lVar7,*(undefined8 *)PTR_DAT_08e7c070,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05a3984c(lVar5,uVar6,*(undefined8 *)PTR_DAT_08e78628);
      lVar5 = *(long *)(*(long *)PTR_DAT_08e69688 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03cf1244();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03cf1244();
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(char *)(**(long **)(lVar5 + 0xb8) + 0x41) != '\0') {
        lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69888,2);
        puVar2 = PTR_DAT_08e69820;
        uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e69820);
        FUN_04d4a8e4(uVar6,lVar7,*(undefined8 *)PTR_DAT_08e7c078,0);
        puVar1 = PTR_DAT_08e69640;
        if (*(int *)(*(long *)PTR_DAT_08e69640 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        auVar12 = FUN_07c95e90(uVar6,8,0,0,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        *(undefined1 (*) [16])(lVar5 + 0x20) = auVar12;
        thunk_FUN_03d233cc((undefined1 (*) [16])(lVar5 + 0x20),0);
        uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
        FUN_04d4a8e4(uVar6,lVar7,*(undefined8 *)PTR_DAT_08e7c080,0);
        auVar12 = FUN_07c95e90(uVar6,8,0,0,0);
        if (*(uint *)(lVar5 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        *(undefined1 (*) [16])(lVar5 + 0x30) = auVar12;
        thunk_FUN_03d233cc((undefined1 (*) [16])(lVar5 + 0x30),0);
        _in_stack_00000010 =
             UnityEngine_Animations_Rigging_RigUtils_RigSyncSceneToStreamData__UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues
                       (lVar5,0);
        thunk_FUN_03d233cc(&stack0x00000010,0);
        auVar12 = _in_stack_00000010;
        uVar8 = in_stack_00000018;
        plVar11 = in_stack_00000010;
        if (DAT_0940ffed == '\0') {
          FUN_03c8f898(PTR_DAT_08e69640);
          DAT_0940ffed = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (DAT_0940ffee == '\0') {
          FUN_03c8f898(PTR_DAT_08e69648);
          DAT_0940ffee = '\x01';
        }
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e69648) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_040a1010;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e69648,0);
LAB_040a1010:
          iVar3 = (*(code *)*puVar4)(plVar11,uVar8 & 0xffff,puVar4[1]);
          if (iVar3 == 0) {
            *unaff_x19 = 0;
            *(undefined1 (*) [16])(unaff_x19 + 8) = auVar12;
            thunk_FUN_03d233cc(unaff_x19 + 8,0);
            FUN_040a36bc(unaff_x19 + 2);
            return;
          }
        }
        goto LAB_040a0a58;
      }
      uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e69820);
      FUN_04d4a8e4(uVar6,lVar7,*(undefined8 *)PTR_DAT_08e7c088,0);
      puVar1 = PTR_DAT_08e69640;
      if (*(int *)(*(long *)PTR_DAT_08e69640 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      _in_stack_00000010 = FUN_07c95e90(uVar6,8,0,0,0);
      thunk_FUN_03d233cc(&stack0x00000010,0);
      auVar12 = _in_stack_00000010;
      uVar8 = in_stack_00000018;
      plVar11 = in_stack_00000010;
      if (DAT_0940ffed == '\0') {
        FUN_03c8f898(PTR_DAT_08e69640);
        DAT_0940ffed = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (DAT_0940ffee == '\0') {
        FUN_03c8f898(PTR_DAT_08e69648);
        DAT_0940ffee = '\x01';
      }
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e69648) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_040a1068;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e69648,0);
LAB_040a1068:
        iVar3 = (*(code *)*puVar4)(plVar11,uVar8 & 0xffff,puVar4[1]);
        if (iVar3 == 0) {
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 8) = auVar12;
          thunk_FUN_03d233cc(unaff_x19 + 8,0);
          FUN_040a36bc(unaff_x19 + 2);
          return;
        }
      }
    }
    uStack0000000000000008 = auVar12._8_8_;
    plStack0000000000000000 = auVar12._0_8_;
    if (DAT_0940ffef == '\0') {
      FUN_03c8f898(PTR_DAT_08e69648);
      DAT_0940ffef = '\x01';
    }
    if (plStack0000000000000000 != (long *)0x0) {
      lVar7 = *plStack0000000000000000;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e69648) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_040a0f48;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plStack0000000000000000,*(long *)PTR_DAT_08e69648,2);
LAB_040a0f48:
      (*(code *)*puVar4)(plStack0000000000000000,uStack0000000000000008 & 0xffff,puVar4[1]);
    }
  }
LAB_040a0f58:
  *unaff_x19 = -2;
  if (DAT_0940fff2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e69650);
    DAT_0940fff2 = '\x01';
  }
  plVar11 = *(long **)(unaff_x19 + 2);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e69650) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_040a0fe0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e69650,2);
LAB_040a0fe0:
    (*(code *)*puVar4)(plVar11,puVar4[1]);
  }
  return;
}


