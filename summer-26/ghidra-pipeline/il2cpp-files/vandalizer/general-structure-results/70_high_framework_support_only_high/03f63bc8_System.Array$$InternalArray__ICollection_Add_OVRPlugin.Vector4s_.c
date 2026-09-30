/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector4s>
ENTRY_POINT: 03f63bc8
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
System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector4s>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x22;
  int iVar14;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03f63bfc;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_03f63bfc:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_0759e6c8;
  puVar1 = PTR_DAT_0759e2a8;
  plVar13 = (long *)0x0;
  uVar7 = 0;
  iVar3 = 0;
  do {
    iVar14 = iVar3;
    uVar12 = uVar7;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      do {
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03f63c84;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)puVar1,0);
LAB_03f63c84:
        uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_03f63df8;
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_03f63dd0;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_03f63db8;
        }
        lVar8 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0322bef4(lVar8);
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto FUN_03f63cf8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_0322c1e8(plVar5,lVar8,0);
FUN_03f63cf8:
        plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      } while (plVar6 == (long *)0x0);
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar10 = FUN_05c87ee0(uVar7,0);
    } while ((uVar10 & 1) != 0);
    iVar3 = 1;
    if (iVar14 != 0) {
      if (iVar14 == 1) {
        plVar13 = (long *)thunk_FUN_0322f148(*(undefined8 *)puVar2);
        FUN_05c93158(plVar13,0);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_05c94b84(plVar13,uVar12,0);
      }
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_05c94b84(plVar13);
      FUN_05c94b84(plVar13,uVar7,0);
      uVar7 = uVar12;
      iVar3 = iVar14 + 1;
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03f63db8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03f63dec;
    }
  }
LAB_03f63dd0:
  puVar4 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_0759b580,0);
LAB_03f63dec:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_03f63df8:
  if (iVar14 == 0) {
    uVar12 = 0;
  }
  else if (iVar14 != 1) {
    if (plVar13 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f63e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  return uVar12;
}


