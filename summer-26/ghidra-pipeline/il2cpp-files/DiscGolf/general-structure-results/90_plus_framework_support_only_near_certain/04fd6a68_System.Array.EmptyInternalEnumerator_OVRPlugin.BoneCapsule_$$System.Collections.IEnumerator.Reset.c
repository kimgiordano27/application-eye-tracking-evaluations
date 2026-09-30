/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04fd6a68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  long in_x10;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  int *piVar11;
  long *unaff_x23;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  long unaff_x26;
  undefined8 unaff_x28;
  uint unaff_w29;
  uint uStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  piVar11 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar11 + 1) * 0x10 + 0x138);
      goto LAB_04fd6ab4;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_02dd004c();
LAB_04fd6ab4:
  uVar2 = (*(code *)*puVar3)();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_04fd6e68;
  uVar14 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar10 = 0;
  if (uVar14 != 0) {
    iVar10 = (int)uVar2 / (int)uVar14;
  }
  uVar12 = uVar2 - iVar10 * uVar14;
  if (uVar12 < uVar14) {
    piVar11 = (int *)(lVar6 + (ulong)uVar12 * 4 + 0x20);
    uVar14 = *piVar11 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0) goto LAB_04fd6e68;
      uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar12 = (uint)uVar13;
      if (uVar14 < uVar12) {
        iVar10 = 0;
        lVar6 = unaff_x26 + 0x20;
        do {
          uVar12 = (uint)uVar13;
          if (*(uint *)(lVar6 + (long)(int)uVar14 * 0x18) == uVar2) {
            plVar4 = (long *)FUN_0390b9f8(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(unaff_x26 + 0x18) <= uVar14) goto LAB_04fd6e64;
            if (plVar4 == (long *)0x0) goto LAB_04fd6e68;
            uVar8 = (**(code **)(*plVar4 + 0x1b8))
                              (plVar4,*(undefined4 *)(lVar6 + (long)(int)uVar14 * 0x18 + 8),
                               uStack000000000000002c,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) {
                puVar3 = (undefined8 *)&stack0x00000028;
                lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                uStack0000000000000028 = uStack000000000000002c;
                goto 
                System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
                ;
              }
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              if (*(uint *)(unaff_x26 + 0x18) <= uVar14) goto LAB_04fd6e64;
              *(undefined8 *)(lVar6 + (long)(int)uVar14 * 0x18 + 0x10) = unaff_x28;
              goto FUN_04fd6e18;
            }
            uVar12 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar12 <= uVar14) goto LAB_04fd6e64;
          uVar14 = *(uint *)(lVar6 + (long)(int)uVar14 * 0x18 + 4);
          if ((int)uVar12 <= iVar10) {
            FUN_05509a24(0);
          }
          uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar10 = iVar10 + 1;
          uVar12 = (uint)uVar13;
        } while (uVar14 < uVar12);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_04fd6e68;
      uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar12 = (uint)uVar13;
      if (uVar14 < uVar12) {
        iVar10 = 0;
        lVar6 = unaff_x26 + 0x20;
        uStack000000000000000c = unaff_w29;
        do {
          uVar12 = (uint)uVar13;
          if (*(uint *)(lVar6 + (long)(int)uVar14 * 0x18) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02dcfd18(lVar5);
            }
            lVar7 = *unaff_x23;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_04fd6ba8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_02dd004c();
LAB_04fd6ba8:
            uVar8 = (*(code *)*puVar3)();
            if ((uVar8 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
                puVar3 = (undefined8 *)((long)&stack0x00000020 + 4);
                lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                in_stack_00000020._4_4_ = uStack000000000000002c;

                System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
                :
                uVar13 = thunk_FUN_02dd2d7c(*(undefined8 *)(lVar6 + 0x70),puVar3);
                FUN_05509920(uVar13,0);
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              if (uVar14 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined8 *)(lVar6 + (long)(int)uVar14 * 0x18 + 0x10) = unaff_x28;
FUN_04fd6e18:
                LeanTween__value();
                return 1;
              }
              goto LAB_04fd6e64;
            }
            uVar12 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar12 <= uVar14) goto LAB_04fd6e64;
          uVar14 = *(uint *)(lVar6 + (long)(int)uVar14 * 0x18 + 4);
          if ((int)uVar12 <= iVar10) {
            FUN_05509a24(0);
          }
          uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar10 = iVar10 + 1;
          uVar12 = (uint)uVar13;
        } while (uVar14 < uVar12);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar14 = *(uint *)(unaff_x20 + 0x20);
      if (uVar14 == uVar12) {
        FUN_04fd7204();
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
        if (lVar5 == 0) goto LAB_04fd6e68;
        uVar12 = *(uint *)(lVar5 + 0x18);
        iVar10 = 0;
        if (uVar12 != 0) {
          iVar10 = (int)uVar2 / (int)uVar12;
        }
        uVar1 = uVar2 - iVar10 * uVar12;
        if (uVar12 <= uVar1) goto LAB_04fd6e64;
        lVar6 = *(long *)(unaff_x20 + 0x18);
        piVar11 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        lVar6 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
      }
      if (lVar6 == 0) {
LAB_04fd6e68:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_04fd6e64;
      lVar6 = lVar6 + (long)(int)uVar14 * 0x18;
    }
    else {
      uVar14 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      if (uVar12 <= uVar14) goto LAB_04fd6e64;
      lVar6 = unaff_x26 + (long)(int)uVar14 * 0x18;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
    }
    *(uint *)(lVar6 + 0x20) = uVar2;
    *(int *)(lVar6 + 0x24) = *piVar11 + -1;
    *(undefined4 *)(lVar6 + 0x28) = uStack000000000000002c;
    *(undefined8 *)(lVar6 + 0x30) = unaff_x28;
    LeanTween__value((undefined8 *)(lVar6 + 0x30),unaff_x28);
    *piVar11 = uVar14 + 1;
    return 1;
  }
LAB_04fd6e64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


