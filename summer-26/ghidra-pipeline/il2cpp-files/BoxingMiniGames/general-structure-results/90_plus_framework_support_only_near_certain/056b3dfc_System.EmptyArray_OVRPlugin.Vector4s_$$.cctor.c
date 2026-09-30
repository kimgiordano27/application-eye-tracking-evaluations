/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4s>$$.cctor
ENTRY_POINT: 056b3dfc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector4s>___cctor(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  ulong unaff_x24;
  ulong uVar10;
  long unaff_x25;
  int unaff_w26;
  undefined4 *unaff_x27;
  uint uVar11;
  ulong unaff_x28;
  
code_r0x056b3dfc:
  uVar9 = (uint)unaff_x24;
  uVar11 = (uint)unaff_x28;
  plVar3 = (long *)FUN_03b1c798(param_1);
  if (plVar3 == (long *)0x0) {
LAB_056b3ef8:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(unaff_x27 + 2));
  do {
    uVar10 = unaff_x24;
    if ((uVar4 & 1) != 0) {
      if ((int)uVar11 < 0) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_056b3ef8;
        if ((uint)unaff_x25 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + unaff_x25 * 4 + 0x20) = unaff_x27[1] + 1;
          goto LAB_056b3ecc;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_056b3ef8;
        if (uVar11 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar11 * 0x20 + 0x24) = unaff_x27[1];
LAB_056b3ecc:
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(unaff_x27 + 2) = 0;
          *unaff_x27 = 0xffffffff;
          unaff_x27[1] = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_056b3efc:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    do {
      uVar9 = unaff_x27[1];
      unaff_x24 = (ulong)uVar9;
      unaff_x28 = uVar10 & 0xffffffff;
      uVar11 = (uint)uVar10;
      if ((int)uVar9 < 0) {
        return 0;
      }
      lVar6 = *(long *)(unaff_x19 + 0x18);
      if (lVar6 == 0) goto LAB_056b3ef8;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_056b3efc;
      unaff_x27 = (undefined4 *)(lVar6 + 0x20 + unaff_x24 * 0x20);
      uVar10 = unaff_x24;
    } while (*(int *)(lVar6 + 0x20 + unaff_x24 * 0x20) != unaff_w26);
    plVar3 = *(long **)(unaff_x19 + 0x30);
    if (plVar3 == (long *)0x0) break;
    uVar8 = *(undefined8 *)(unaff_x27 + 2);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_056b3e30;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar3,lVar6,0);
LAB_056b3e30:
    uVar4 = (*(code *)*puVar2)(plVar3,uVar8);
  } while( true );
  param_1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
  goto code_r0x056b3dfc;
}


