/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 04fd6628
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current
               (long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  long unaff_x22;
  long lVar13;
  undefined8 in_stack_00000008;
  
  plVar11 = *(long **)(param_1 + 0x30);
  lVar13 = *(long *)(param_1 + 0x18);
  if (plVar11 == (long *)0x0) {
    uVar3 = FUN_05504f1c((long)&stack0x00000008 + 4,0);
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    uVar3 = uVar3 & 0x7fffffff;
    iVar10 = 0;
    if (uVar1 != 0) {
      iVar10 = (int)uVar3 / (int)uVar1;
    }
    uVar12 = uVar3 - iVar10 * uVar1;
    if (uVar1 <= uVar12) goto LAB_04fd68e0;
    if (lVar13 == 0) goto LAB_04fd68e4;
    uVar1 = *(uint *)(lVar13 + 0x18);
    uVar12 = *(int *)(unaff_x22 + (ulong)uVar12 * 4 + 0x20) - 1;
    if (uVar12 < uVar1) {
      iVar10 = 0;
      lVar5 = lVar13 + 0x20;
      do {
        if (*(uint *)(lVar5 + (long)(int)uVar12 * 0x18) == uVar3) {
          plVar11 = (long *)FUN_0390b9f8(*(undefined8 *)
                                          (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_04fd68e0;
          if (plVar11 == (long *)0x0) goto LAB_04fd68e4;
          uVar8 = (**(code **)(*plVar11 + 0x1b8))
                            (plVar11,*(undefined4 *)(lVar5 + (long)(int)uVar12 * 0x18 + 8),
                             in_stack_00000008._4_4_,*(undefined8 *)(*plVar11 + 0x1c0));
          if ((uVar8 & 1) != 0) {
            return uVar12;
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar1 <= uVar12) goto LAB_04fd68e0;
        uVar12 = *(uint *)(lVar5 + (long)(int)uVar12 * 0x18 + 4);
        if ((int)uVar1 <= iVar10) {
          FUN_05509a24(0);
        }
        uVar1 = *(uint *)(lVar13 + 0x18);
        iVar10 = iVar10 + 1;
      } while (uVar12 < uVar1);
    }
  }
  else {
                    /* try { // try from 04fd6638 to 050d663f has its CatchHandler @ 04fd6700 */
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 04fd6654 to 050d669b has its CatchHandler @ 04fd6708 */
      lVar5 = FUN_02dcfd18(lVar5);
    }
    lVar6 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_04fd6788;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar11,lVar5,1);
LAB_04fd6788:
    uVar3 = (*(code *)*puVar4)(plVar11,param_2,puVar4[1]);
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    uVar3 = uVar3 & 0x7fffffff;
    iVar10 = 0;
    if (uVar1 != 0) {
      iVar10 = (int)uVar3 / (int)uVar1;
    }
    uVar12 = uVar3 - iVar10 * uVar1;
    if (uVar1 <= uVar12) {
LAB_04fd68e0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (lVar13 == 0) {
LAB_04fd68e4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar1 = *(uint *)(lVar13 + 0x18);
    uVar12 = *(int *)(unaff_x22 + (ulong)uVar12 * 4 + 0x20) - 1;
    if (uVar12 < uVar1) {
      iVar10 = 0;
      lVar5 = lVar13 + 0x20;
      do {
        if (*(uint *)(lVar5 + (long)(int)uVar12 * 0x18) == uVar3) {
          lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
          uVar2 = *(undefined4 *)(lVar5 + (long)(int)uVar12 * 0x18 + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02dcfd18(lVar6);
          }
          lVar7 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_04fd6864;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02dd004c(plVar11,lVar6,0);
LAB_04fd6864:
          uVar8 = (*(code *)*puVar4)(plVar11,uVar2,param_2,puVar4[1]);
          if ((uVar8 & 1) != 0) {
            return uVar12;
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar1 <= uVar12) goto LAB_04fd68e0;
        uVar12 = *(uint *)(lVar5 + (long)(int)uVar12 * 0x18 + 4);
        if ((int)uVar1 <= iVar10) {
          FUN_05509a24(0);
        }
        uVar1 = *(uint *)(lVar13 + 0x18);
        iVar10 = iVar10 + 1;
      } while (uVar12 < uVar1);
    }
  }
  return uVar12;
}


