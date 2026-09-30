/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 04fd6620
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext
               (long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  long unaff_x22;
  long lVar14;
  undefined4 uStack000000000000000c;
  
  if (unaff_x22 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    plVar12 = *(long **)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 0x18);
    uStack000000000000000c = param_2;
    if (plVar12 == (long *)0x0) {
      uVar4 = FUN_05504f1c(&stack0x0000000c,0);
      uVar13 = *(uint *)(unaff_x22 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar11 = 0;
      if (uVar13 != 0) {
        iVar11 = (int)uVar4 / (int)uVar13;
      }
      uVar3 = uVar4 - iVar11 * uVar13;
      if (uVar13 <= uVar3) goto LAB_04fd68e0;
      if (lVar14 == 0) goto LAB_04fd68e4;
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar13 = *(int *)(unaff_x22 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar13 < uVar1) {
        iVar11 = 0;
        lVar6 = lVar14 + 0x20;
        do {
          if (*(uint *)(lVar6 + (long)(int)uVar13 * 0x18) == uVar4) {
            plVar12 = (long *)FUN_0390b9f8(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_04fd68e0;
            if (plVar12 == (long *)0x0) goto LAB_04fd68e4;
            uVar9 = (**(code **)(*plVar12 + 0x1b8))
                              (plVar12,*(undefined4 *)(lVar6 + (long)(int)uVar13 * 0x18 + 8),
                               uStack000000000000000c,*(undefined8 *)(*plVar12 + 0x1c0));
            if ((uVar9 & 1) != 0) {
              return uVar13;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar13) goto LAB_04fd68e0;
          uVar13 = *(uint *)(lVar6 + (long)(int)uVar13 * 0x18 + 4);
          if ((int)uVar1 <= iVar11) {
            FUN_05509a24(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar11 = iVar11 + 1;
        } while (uVar13 < uVar1);
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      lVar7 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_04fd6788;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar12,lVar6,1);
LAB_04fd6788:
      uVar4 = (*(code *)*puVar5)(plVar12,param_2,puVar5[1]);
      uVar13 = *(uint *)(unaff_x22 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar11 = 0;
      if (uVar13 != 0) {
        iVar11 = (int)uVar4 / (int)uVar13;
      }
      uVar3 = uVar4 - iVar11 * uVar13;
      if (uVar13 <= uVar3) {
LAB_04fd68e0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (lVar14 == 0) {
LAB_04fd68e4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar13 = *(int *)(unaff_x22 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar13 < uVar1) {
        iVar11 = 0;
        lVar6 = lVar14 + 0x20;
        do {
          if (*(uint *)(lVar6 + (long)(int)uVar13 * 0x18) == uVar4) {
            lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar2 = *(undefined4 *)(lVar6 + (long)(int)uVar13 * 0x18 + 8);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02dcfd18(lVar7);
            }
            lVar8 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04fd6864;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02dd004c(plVar12,lVar7,0);
LAB_04fd6864:
            uVar9 = (*(code *)*puVar5)(plVar12,uVar2,param_2,puVar5[1]);
            if ((uVar9 & 1) != 0) {
              return uVar13;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar13) goto LAB_04fd68e0;
          uVar13 = *(uint *)(lVar6 + (long)(int)uVar13 * 0x18 + 4);
          if ((int)uVar1 <= iVar11) {
            FUN_05509a24(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar11 = iVar11 + 1;
        } while (uVar13 < uVar1);
      }
    }
  }
  return uVar13;
}


