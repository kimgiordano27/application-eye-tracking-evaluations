/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 03f63c10
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f63e04) */
/* WARNING: Removing unreachable block (ram,0x03f63e6c) */

undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_VirtualKeyboardModelAnimationState>
          (long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x22;
  int iVar11;
  long unaff_x27;
  long *plVar12;
  long unaff_x28;
  undefined8 *puVar13;
  
  plVar12 = *(long **)(unaff_x27 + 0x2a8);
  puVar13 = *(undefined8 **)(unaff_x28 + 0x6c8);
  plVar10 = (long *)0x0;
  uVar4 = 0;
  iVar1 = 0;
  do {
    iVar11 = iVar1;
    uVar9 = uVar4;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      do {
        lVar5 = *param_1;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *plVar12) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f63c84;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_0322c1e8(param_1,*plVar12,0);
LAB_03f63c84:
        uVar7 = (*(code *)*puVar2)(param_1,puVar2[1]);
        if ((uVar7 & 1) == 0) {
          if (param_1 == (long *)0x0) goto LAB_03f63df8;
          lVar5 = *param_1;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 == 0) goto LAB_03f63dd0;
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_03f63db8;
        }
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0322bef4(lVar5);
        }
        lVar6 = *param_1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto FUN_03f63cf8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_0322c1e8(param_1,lVar5,0);
FUN_03f63cf8:
        plVar3 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
      } while (plVar3 == (long *)0x0);
      uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      uVar7 = FUN_05c87ee0(uVar4,0);
    } while ((uVar7 & 1) != 0);
    iVar1 = 1;
    if (iVar11 != 0) {
      if (iVar11 == 1) {
        plVar10 = (long *)thunk_FUN_0322f148(*puVar13);
        FUN_05c93158(plVar10,0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_05c94b84(plVar10,uVar9,0);
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_05c94b84(plVar10);
      FUN_05c94b84(plVar10,uVar4,0);
      uVar4 = uVar9;
      iVar1 = iVar11 + 1;
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03f63db8:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar13 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03f63dec;
    }
  }
LAB_03f63dd0:
  puVar13 = (undefined8 *)FUN_0322c1e8(param_1,*(long *)PTR_DAT_0759b580,0);
LAB_03f63dec:
  (*(code *)*puVar13)(param_1,puVar13[1]);
LAB_03f63df8:
  if (iVar11 == 0) {
    uVar9 = 0;
  }
  else if (iVar11 != 1) {
    if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f63e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  return uVar9;
}


