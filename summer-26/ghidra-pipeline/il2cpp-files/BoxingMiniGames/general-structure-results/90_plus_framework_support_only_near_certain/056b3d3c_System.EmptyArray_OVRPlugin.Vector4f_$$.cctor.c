/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4f>$$.cctor
ENTRY_POINT: 056b3d3c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector4f>___cctor(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  uint unaff_w24;
  long unaff_x25;
  int unaff_w26;
  ulong uVar9;
  long *plVar10;
  
  uVar9 = 0xffffffff;
  do {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) goto LAB_056b3ef8;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w24) goto LAB_056b3efc;
    puVar1 = (undefined4 *)(lVar4 + 0x20 + (ulong)unaff_w24 * 0x20);
    if (*(int *)(lVar4 + 0x20 + (ulong)unaff_w24 * 0x20) == unaff_w26) {
      plVar10 = *(long **)(unaff_x19 + 0x30);
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)FUN_03b1c798(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
        if (plVar10 == (long *)0x0) goto LAB_056b3ef8;
        uVar6 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(puVar1 + 2));
      }
      else {
        uVar8 = *(undefined8 *)(puVar1 + 2);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc(lVar4);
        }
        lVar5 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_056b3e30;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0367cd30(plVar10,lVar4,0);
LAB_056b3e30:
        uVar6 = (*(code *)*puVar3)(plVar10,uVar8);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)(uint)uVar9 < 0) {
          lVar4 = *(long *)(unaff_x19 + 0x10);
          if (lVar4 == 0) goto LAB_056b3ef8;
          if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x25) goto LAB_056b3efc;
          *(int *)(lVar4 + unaff_x25 * 4 + 0x20) = puVar1[1] + 1;
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 == 0) {
LAB_056b3ef8:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar9) {
LAB_056b3efc:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          *(undefined4 *)(lVar4 + uVar9 * 0x20 + 0x24) = puVar1[1];
        }
        uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
        *(undefined8 *)(puVar1 + 2) = 0;
        *puVar1 = 0xffffffff;
        puVar1[1] = uVar2;
        *(uint *)(unaff_x19 + 0x24) = unaff_w24;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    uVar9 = (ulong)unaff_w24;
    unaff_w24 = puVar1[1];
    if ((int)puVar1[1] < 0) {
      return 0;
    }
  } while( true );
}


