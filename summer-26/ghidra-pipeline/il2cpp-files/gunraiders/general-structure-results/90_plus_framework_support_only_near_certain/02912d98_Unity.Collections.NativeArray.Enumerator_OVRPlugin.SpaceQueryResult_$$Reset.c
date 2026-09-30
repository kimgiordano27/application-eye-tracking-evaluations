/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 02912d98
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Reset(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint uVar9;
  long unaff_x23;
  int iVar10;
  long unaff_x25;
  
  if (unaff_x21 == (long *)0x0) {
    if (unaff_x19 != (long *)0x0) {
      uVar2 = (**(code **)(*unaff_x19 + 0x158))();
      uVar1 = *(uint *)(unaff_x25 + 0x18);
      uVar2 = uVar2 & 0x7fffffff;
      iVar10 = 0;
      if (uVar1 != 0) {
        iVar10 = (int)uVar2 / (int)uVar1;
      }
      uVar9 = uVar2 - iVar10 * uVar1;
      if (uVar1 <= uVar9) goto LAB_0291301c;
      iVar10 = *(int *)(unaff_x25 + (ulong)uVar9 * 4 + 0x20);
      plVar4 = (long *)FUN_022cb9f0(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
      if (unaff_x23 != 0) {
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        uVar9 = iVar10 - 1;
        if (uVar1 <= uVar9) {
          return uVar9;
        }
        iVar10 = 0;
        do {
          lVar5 = (long)(int)uVar9;
          if (*(uint *)(unaff_x23 + lVar5 * 0x40 + 0x20) == uVar2) {
            if (plVar4 == (long *)0x0) break;
            uVar7 = (**(code **)(*plVar4 + 0x1b8))
                              (plVar4,*(undefined8 *)(unaff_x23 + lVar5 * 0x40 + 0x28));
            if ((uVar7 & 1) != 0) {
              return uVar9;
            }
            uVar1 = *(uint *)(unaff_x23 + 0x18);
          }
          if (uVar1 <= uVar9) goto LAB_0291301c;
          uVar9 = *(uint *)(unaff_x23 + lVar5 * 0x40 + 0x24);
          if ((int)uVar1 <= iVar10) {
            FUN_032f2aac(0);
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
          iVar10 = iVar10 + 1;
          if (uVar1 <= uVar9) {
            return uVar9;
          }
        } while( true );
      }
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394(lVar5);
    }
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02912ee0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_02912ee0:
    uVar2 = (*(code *)*puVar3)();
    uVar1 = *(uint *)(unaff_x25 + 0x18);
    uVar2 = uVar2 & 0x7fffffff;
    iVar10 = 0;
    if (uVar1 != 0) {
      iVar10 = (int)uVar2 / (int)uVar1;
    }
    uVar9 = uVar2 - iVar10 * uVar1;
    if (uVar1 <= uVar9) {
LAB_0291301c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (unaff_x23 != 0) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      uVar9 = *(int *)(unaff_x25 + (ulong)uVar9 * 4 + 0x20) - 1;
      if (uVar9 < uVar1) {
        iVar10 = 0;
        do {
          if (*(uint *)(unaff_x23 + (long)(int)uVar9 * 0x40 + 0x20) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01c72394(lVar5);
            }
            lVar6 = *unaff_x21;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_02912fa8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_01c72498();
LAB_02912fa8:
            uVar7 = (*(code *)*puVar3)();
            if ((uVar7 & 1) != 0) {
              return uVar9;
            }
            uVar1 = *(uint *)(unaff_x23 + 0x18);
          }
          if (uVar1 <= uVar9) goto LAB_0291301c;
          uVar9 = *(uint *)(unaff_x23 + (long)(int)uVar9 * 0x40 + 0x24);
          if ((int)uVar1 <= iVar10) {
            FUN_032f2aac(0);
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar9 < uVar1);
      }
      return uVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


