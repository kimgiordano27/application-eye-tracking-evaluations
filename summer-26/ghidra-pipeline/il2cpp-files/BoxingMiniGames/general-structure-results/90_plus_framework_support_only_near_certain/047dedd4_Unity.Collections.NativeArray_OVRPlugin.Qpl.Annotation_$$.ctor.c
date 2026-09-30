/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 047dedd4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(long param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  long *plVar13;
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = param_2 / (int)uVar2;
    }
    uVar3 = param_2 - iVar4 * uVar2;
    if (uVar2 <= uVar3) goto LAB_047df04c;
    for (lVar12 = *(long *)(param_1 + (ulong)uVar3 * 8 + 0x20); lVar12 != 0;
        lVar12 = *(long *)(lVar12 + 0x38)) {
      if (*(int *)(lVar12 + 0x20) == param_2) {
        plVar13 = *(long **)(unaff_x19 + 0x10);
        if (plVar13 == (long *)0x0) goto LAB_047df048;
        uVar7 = *(undefined8 *)(lVar12 + 0x10);
        uVar1 = *(undefined8 *)(lVar12 + 0x18);
        lVar8 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0367c9fc(lVar8);
        }
        lVar9 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_047dee80;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar13,lVar8,0);
LAB_047dee80:
        uVar10 = (*(code *)*puVar6)(plVar13,uVar7,uVar1);
        if ((uVar10 & 1) != 0) {
          return lVar12;
        }
      }
    }
    if ((unaff_x25 & 1) == 0) {
      return 0;
    }
    lVar12 = *(long *)(unaff_x19 + 0x18);
    if (lVar12 != 0) {
      if (*(int *)(unaff_x19 + 0x28) == *(int *)(lVar12 + 0x18)) {
        FUN_047df05c();
        lVar12 = *(long *)(unaff_x19 + 0x18);
        if (lVar12 == 0) goto LAB_047df048;
      }
      iVar4 = *(int *)(lVar12 + 0x18);
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28) + 0x135) & 1)
          == 0) {
        FUN_0367c9fc();
      }
      lVar12 = thunk_FUN_0367fe20();
      FUN_04195844(lVar12,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0xa8));
      if (lVar12 != 0) {
        *(undefined8 *)(lVar12 + 0x10) = unaff_x24;
        *(undefined8 *)(lVar12 + 0x18) = unaff_x23;
        thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x10),0);
        lVar8 = *(long *)(unaff_x22 + 0x20);
        *(int *)(lVar12 + 0x20) = param_2;
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0xb0);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0367c9fc();
        }
        uVar7 = FUN_03642a4c(lVar8,1);
        *(undefined8 *)(lVar12 + 0x28) = uVar7;
        thunk_FUN_036b7ad0();
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 != 0) {
          iVar5 = 0;
          if (iVar4 != 0) {
            iVar5 = param_2 / iVar4;
          }
          uVar2 = param_2 - iVar5 * iVar4;
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar8 + (ulong)uVar2 * 8 + 0x20);
            thunk_FUN_036b7ad0();
            plVar13 = *(long **)(unaff_x19 + 0x18);
            if (plVar13 == (long *)0x0) goto LAB_047df048;
            lVar8 = thunk_FUN_0367fd24(lVar12,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar8 == 0) {
              uVar7 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar7,0);
            }
            if (uVar2 < *(uint *)(plVar13 + 3)) {
              plVar13[(ulong)uVar2 + 4] = lVar12;
              thunk_FUN_036b7ad0(plVar13 + (ulong)uVar2 + 4,lVar12);
              plVar13 = (long *)(unaff_x19 + 0x20);
              lVar8 = lVar12;
              if (*plVar13 != 0) {
                *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(*plVar13 + 0x40);
                thunk_FUN_036b7ad0();
                lVar8 = *plVar13;
                if (lVar8 == 0) goto LAB_047df048;
              }
              *(long *)(lVar8 + 0x40) = lVar12;
              thunk_FUN_036b7ad0((long *)(lVar8 + 0x40),lVar12);
              *(long *)(unaff_x19 + 0x20) = lVar12;
              thunk_FUN_036b7ad0(plVar13,lVar12);
              *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
              return lVar12;
            }
          }
LAB_047df04c:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
      }
    }
  }
LAB_047df048:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


