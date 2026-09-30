/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 056b3c7c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector3f>___cctor(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar13;
  long *plVar14;
  
  lVar8 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0367c9fc(lVar8);
  }
  lVar9 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar8) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_056b3cfc;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0367cd30();
LAB_056b3cfc:
  uVar6 = (*(code *)*puVar7)();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar2 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar5 = 0;
    if (uVar2 != 0) {
      iVar5 = (int)uVar6 / (int)uVar2;
    }
    uVar4 = uVar6 - iVar5 * uVar2;
    if (uVar2 <= uVar4) {
LAB_056b3efc:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar2 = *(int *)(lVar8 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (-1 < (int)uVar2) {
      uVar10 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_056b3ef8;
        if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_056b3efc;
        puVar1 = (undefined4 *)(lVar8 + 0x20 + (ulong)uVar2 * 0x20);
        if (*(uint *)(lVar8 + 0x20 + (ulong)uVar2 * 0x20) == uVar6) {
          plVar14 = *(long **)(unaff_x19 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_03b1c798(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0) goto LAB_056b3ef8;
            uVar11 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(puVar1 + 2));
          }
          else {
            uVar13 = *(undefined8 *)(puVar1 + 2);
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_0367c9fc(lVar8);
            }
            lVar9 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_056b3e30;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_0367cd30(plVar14,lVar8,0);
LAB_056b3e30:
            uVar11 = (*(code *)*puVar7)(plVar14,uVar13);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar8 = *(long *)(unaff_x19 + 0x10);
              if (lVar8 == 0) goto LAB_056b3ef8;
              if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_056b3efc;
              *(int *)(lVar8 + (ulong)uVar4 * 4 + 0x20) = puVar1[1] + 1;
            }
            else {
              lVar8 = *(long *)(unaff_x19 + 0x18);
              if (lVar8 == 0) goto LAB_056b3ef8;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_056b3efc;
              *(undefined4 *)(lVar8 + uVar10 * 0x20 + 0x24) = puVar1[1];
            }
            uVar3 = *(undefined4 *)(unaff_x19 + 0x24);
            *(undefined8 *)(puVar1 + 2) = 0;
            *puVar1 = 0xffffffff;
            puVar1[1] = uVar3;
            *(uint *)(unaff_x19 + 0x24) = uVar2;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar10 = (ulong)uVar2;
        uVar2 = puVar1[1];
      } while (-1 < (int)puVar1[1]);
    }
    return 0;
  }
LAB_056b3ef8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


