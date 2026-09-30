/*
FUNCTION_NAME: System.EmptyArray<ShadowRequestIntermediateUpdateData>$$.cctor
ENTRY_POINT: 05fbc910
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


uint System_EmptyArray<ShadowRequestIntermediateUpdateData>___cctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar9;
  uint uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long unaff_x25;
  
  plVar9 = *(long **)(unaff_x22 + 0x30);
  lVar12 = *(long *)(unaff_x22 + 0x18);
  if (plVar9 == (long *)0x0) {
    if (unaff_x19 != (long *)0x0) {
      uVar2 = (**(code **)(*unaff_x19 + 0x158))();
      uVar1 = *(uint *)(unaff_x25 + 0x18);
      uVar2 = uVar2 & 0x7fffffff;
      iVar13 = 0;
      if (uVar1 != 0) {
        iVar13 = (int)uVar2 / (int)uVar1;
      }
      uVar10 = uVar2 - iVar13 * uVar1;
      if (uVar1 <= uVar10) goto LAB_05fbcbc0;
      iVar13 = *(int *)(unaff_x25 + (ulong)uVar10 * 4 + 0x20);
      plVar9 = (long *)FUN_04036464(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        uVar10 = iVar13 - 1;
        if (uVar1 <= uVar10) {
          return uVar10;
        }
        iVar13 = 0;
        lVar4 = lVar12 + 0x20;
        do {
          if (*(uint *)(lVar4 + (long)(int)uVar10 * 0x18) == uVar2) {
            if (plVar9 == (long *)0x0) break;
            uVar7 = (**(code **)(*plVar9 + 0x1b8))
                              (plVar9,*(undefined8 *)(lVar4 + (long)(int)uVar10 * 0x18 + 8));
            if ((uVar7 & 1) != 0) {
              return uVar10;
            }
            uVar1 = *(uint *)(lVar12 + 0x18);
          }
          if (uVar1 <= uVar10) goto LAB_05fbcbc0;
          uVar10 = *(uint *)(lVar4 + (long)(int)uVar10 * 0x18 + 4);
          if ((int)uVar1 <= iVar13) {
            FUN_067723dc(0);
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          iVar13 = iVar13 + 1;
          if (uVar1 <= uVar10) {
            return uVar10;
          }
        } while( true );
      }
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05fbca6c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar9,lVar4,1);
LAB_05fbca6c:
    uVar2 = (*(code *)*puVar3)(plVar9);
    uVar1 = *(uint *)(unaff_x25 + 0x18);
    uVar2 = uVar2 & 0x7fffffff;
    iVar13 = 0;
    if (uVar1 != 0) {
      iVar13 = (int)uVar2 / (int)uVar1;
    }
    uVar10 = uVar2 - iVar13 * uVar1;
    if (uVar1 <= uVar10) {
LAB_05fbcbc0:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      uVar10 = *(int *)(unaff_x25 + (ulong)uVar10 * 4 + 0x20) - 1;
      if (uVar10 < uVar1) {
        iVar13 = 0;
        lVar4 = lVar12 + 0x20;
        do {
          if (*(uint *)(lVar4 + (long)(int)uVar10 * 0x18) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
            uVar11 = *(undefined8 *)(lVar4 + (long)(int)uVar10 * 0x18 + 8);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03ac4090(lVar5);
            }
            lVar6 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_05fbcb48;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_03ac43c4(plVar9,lVar5,0);
LAB_05fbcb48:
            uVar7 = (*(code *)*puVar3)(plVar9,uVar11);
            if ((uVar7 & 1) != 0) {
              return uVar10;
            }
            uVar1 = *(uint *)(lVar12 + 0x18);
          }
          if (uVar1 <= uVar10) goto LAB_05fbcbc0;
          uVar10 = *(uint *)(lVar4 + (long)(int)uVar10 * 0x18 + 4);
          if ((int)uVar1 <= iVar13) {
            FUN_067723dc(0);
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          iVar13 = iVar13 + 1;
        } while (uVar10 < uVar1);
      }
      return uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


