/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.RoomGuardian$$Update
ENTRY_POINT: 06ded3dc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06ded7c4) */

undefined8 Meta_XR_MRUtilityKit_RoomGuardian__Update(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    lVar8 = *unaff_x19;
    lVar12 = *(long *)(unaff_x20 + 0x68);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e91328) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06ded444;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06ded444:
    uVar5 = (*(code *)*puVar4)();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar5,uVar5);
    }
    FUN_06a4e36c(lVar12);
    iVar3 = 5;
  }
  else {
    iVar3 = 4;
  }
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_03cdf404();
  }
  if ((iVar3 != 5) && (iVar3 != 0)) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    FUN_06deecc4();
    puVar2 = PTR_DAT_08e91328;
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e91328) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto LAB_06ded50c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06ded50c:
    (*(code *)*puVar4)();
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
          goto LAB_06ded56c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06ded56c:
    uVar5 = (*(code *)*puVar4)();
    puVar1 = PTR_DAT_08e912a8;
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e912a8);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              ();
    lVar8 = FUN_0714874c(uVar5,uVar6,0);
    lVar12 = *(long *)puVar2;
    if (lVar8 != 0) {
      uVar5 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_03cf5138(lVar8,uVar5);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar8,uVar5);
      }
    }
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x16) * 0x10 + 0x138);
          goto LAB_06ded63c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06ded63c:
    (*(code *)*puVar4)();
    plVar11 = *(long **)(unaff_x20 + 0x60);
    uVar5 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e91dc8);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar6 = *(undefined8 *)PTR_DAT_08e91dd0;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar13 = *(undefined8 *)PTR_DAT_08e91cf0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e82378) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
            goto LAB_06ded6e0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e82378,7);
LAB_06ded6e0:
      (*(code *)*puVar4)(plVar11,uVar5,0,0,0,0,uVar6,uVar13);
      lVar8 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_06ded764;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06ded764:
      uVar5 = (*(code *)*puVar4)();
      iVar3 = FUN_06deec30();
      if ((iVar3 != 0) && (lVar8 = *(long *)(unaff_x20 + 0x98), lVar8 != 0)) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),uVar5);
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


