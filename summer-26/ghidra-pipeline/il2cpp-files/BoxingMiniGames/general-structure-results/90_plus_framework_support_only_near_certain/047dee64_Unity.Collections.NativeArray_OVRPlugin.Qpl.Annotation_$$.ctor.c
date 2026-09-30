/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 047dee64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *plVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  
code_r0x047dee64:
  puVar4 = (undefined8 *)FUN_0367cd30(unaff_x26,param_2,0);
  do {
    uVar5 = (*(code *)*puVar4)(unaff_x26,unaff_x27,unaff_x28);
    if ((uVar5 & 1) != 0) {
      return unaff_x20;
    }
    do {
      unaff_x20 = *(long *)(unaff_x20 + 0x38);
      if (unaff_x20 == 0) {
        if ((unaff_x25 & 1) == 0) {
          return 0;
        }
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_047df048;
        if (*(int *)(unaff_x19 + 0x28) == *(int *)(lVar7 + 0x18)) {
          FUN_047df05c();
          lVar7 = *(long *)(unaff_x19 + 0x18);
          if (lVar7 == 0) goto LAB_047df048;
        }
        iVar1 = *(int *)(lVar7 + 0x18);
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28) + 0x135) &
            1) == 0) {
          FUN_0367c9fc();
        }
        lVar7 = thunk_FUN_0367fe20();
        FUN_04195844(lVar7,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0xa8));
        if (lVar7 == 0) goto LAB_047df048;
        *(undefined8 *)(lVar7 + 0x10) = unaff_x24;
        *(undefined8 *)(lVar7 + 0x18) = unaff_x23;
        thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x10),0);
        lVar8 = *(long *)(unaff_x22 + 0x20);
        *(int *)(lVar7 + 0x20) = unaff_w21;
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0xb0);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0367c9fc();
        }
        uVar6 = FUN_03642a4c(lVar8,1);
        *(undefined8 *)(lVar7 + 0x28) = uVar6;
        thunk_FUN_036b7ad0();
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_047df048;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = unaff_w21 / iVar1;
        }
        uVar2 = unaff_w21 - iVar3 * iVar1;
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(lVar8 + (ulong)uVar2 * 8 + 0x20);
          thunk_FUN_036b7ad0();
          plVar10 = *(long **)(unaff_x19 + 0x18);
          if (plVar10 == (long *)0x0) goto LAB_047df048;
          lVar8 = thunk_FUN_0367fd24(lVar7,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar8 == 0) {
            uVar6 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar6,0);
          }
          if (uVar2 < *(uint *)(plVar10 + 3)) {
            plVar10[(ulong)uVar2 + 4] = lVar7;
            thunk_FUN_036b7ad0(plVar10 + (ulong)uVar2 + 4,lVar7);
            plVar10 = (long *)(unaff_x19 + 0x20);
            lVar8 = lVar7;
            if (*plVar10 != 0) {
              *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(*plVar10 + 0x40);
              thunk_FUN_036b7ad0();
              lVar8 = *plVar10;
              if (lVar8 == 0) goto LAB_047df048;
            }
            *(long *)(lVar8 + 0x40) = lVar7;
            thunk_FUN_036b7ad0((long *)(lVar8 + 0x40),lVar7);
            *(long *)(unaff_x19 + 0x20) = lVar7;
            thunk_FUN_036b7ad0(plVar10,lVar7);
            *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
            return lVar7;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
    } while (*(int *)(unaff_x20 + 0x20) != unaff_w21);
    unaff_x26 = *(long **)(unaff_x19 + 0x10);
    if (unaff_x26 == (long *)0x0) {
LAB_047df048:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    unaff_x27 = *(undefined8 *)(unaff_x20 + 0x10);
    unaff_x28 = *(undefined8 *)(unaff_x20 + 0x18);
    param_2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_0367c9fc(param_2);
    }
    lVar7 = *unaff_x26;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 == 0) goto code_r0x047dee64;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
      if (uVar5 == 0) goto code_r0x047dee64;
    }
    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
  } while( true );
}


