/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 049ad728
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__Dispose
          (long param_1,undefined4 param_2,undefined8 *param_3,char param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int in_w8;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  long unaff_x21;
  int iVar13;
  long *plVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  *(int *)(param_1 + 0x2c) = in_w8 + 1;
  uStack000000000000002c = param_2;
  if (in_x9 == 0) {
    FUN_049ad634(param_1,0,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10));
  }
  plVar14 = *(long **)(param_1 + 0x30);
  lVar18 = *(long *)(param_1 + 0x18);
  lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if (plVar14 == (long *)0x0) {
    uVar4 = FUN_050f1a40(&stack0x0000002c,*(undefined8 *)(lVar7 + 0x188));
  }
  else {
    lVar7 = *(long *)(lVar7 + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c(lVar7);
    }
    lVar8 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_049ad7ec;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar14,lVar7,1);
LAB_049ad7ec:
    uVar4 = (*(code *)*puVar5)(plVar14,param_2,puVar5[1]);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_049adbac;
  uVar17 = *(uint *)(lVar7 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar13 = 0;
  if (uVar17 != 0) {
    iVar13 = (int)uVar4 / (int)uVar17;
  }
  uVar15 = uVar4 - iVar13 * uVar17;
  if (uVar15 < uVar17) {
    piVar12 = (int *)(lVar7 + (ulong)uVar15 * 4 + 0x20);
    uVar17 = *piVar12 - 1;
    if (plVar14 == (long *)0x0) {
      if (lVar18 == 0) goto LAB_049adbac;
      uVar16 = *(undefined8 *)(lVar18 + 0x18);
      uVar15 = (uint)uVar16;
      if (uVar17 < uVar15) {
        iVar13 = 0;
        lVar7 = lVar18 + 0x20;
        do {
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar7 + (long)(int)uVar17 * 0x24) == uVar4) {
            plVar14 = (long *)FUN_0363acb8(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_049adba8;
            if (plVar14 == (long *)0x0) goto LAB_049adbac;
            uVar10 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar7 + (long)(int)uVar17 * 0x24 + 8),
                                uStack000000000000002c,*(undefined8 *)(*plVar14 + 0x1c0));
            if ((uVar10 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar6 = &stack0x00000028;
                lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                in_stack_00000028 = uStack000000000000002c;
                goto FUN_049adb90;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_049adba8;
              uVar16 = param_3[2];
              uVar20 = param_3[1];
              uVar19 = *param_3;
              lVar7 = lVar7 + (long)(int)uVar17 * 0x24;
              goto LAB_049adb58;
            }
            uVar15 = *(uint *)(lVar18 + 0x18);
          }
          if (uVar15 <= uVar17) goto LAB_049adba8;
          uVar17 = *(uint *)(lVar7 + (long)(int)uVar17 * 0x24 + 4);
          if ((int)uVar15 <= iVar13) {
            FUN_050f65d8(0);
          }
          uVar16 = *(undefined8 *)(lVar18 + 0x18);
          iVar13 = iVar13 + 1;
          uVar15 = (uint)uVar16;
        } while (uVar17 < uVar15);
      }
    }
    else {
      if (lVar18 == 0) goto LAB_049adbac;
      uVar16 = *(undefined8 *)(lVar18 + 0x18);
      uVar15 = (uint)uVar16;
      if (uVar17 < uVar15) {
        iVar13 = 0;
        lVar7 = lVar18 + 0x20;
        do {
          uVar3 = uStack000000000000002c;
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar7 + (long)(int)uVar17 * 0x24) == uVar4) {
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + (long)(int)uVar17 * 0x24 + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02f41e9c(lVar8);
            }
            lVar9 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto 
                  System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor
                  ;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_02f421d0(plVar14,lVar8,0);
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor:
            uVar10 = (*(code *)*puVar5)(plVar14,uVar1,uVar3,puVar5[1]);
            if ((uVar10 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar6 = (undefined4 *)((long)&stack0x00000020 + 4);
                lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                in_stack_00000020._4_4_ = uStack000000000000002c;
FUN_049adb90:
                uVar16 = thunk_FUN_02f44ec4(*(undefined8 *)(lVar7 + 0x70),puVar6);
                FUN_050f64d4(uVar16,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar17 < *(uint *)(lVar18 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uVar17 * 0x24;
                uVar16 = param_3[2];
                uVar20 = param_3[1];
                uVar19 = *param_3;
LAB_049adb58:
                *(undefined8 *)(lVar7 + 0x1c) = uVar16;
                *(undefined8 *)(lVar7 + 0x14) = uVar20;
                *(undefined8 *)(lVar7 + 0xc) = uVar19;
                return 1;
              }
              goto LAB_049adba8;
            }
            uVar15 = *(uint *)(lVar18 + 0x18);
          }
          if (uVar15 <= uVar17) goto LAB_049adba8;
          uVar17 = *(uint *)(lVar7 + (long)(int)uVar17 * 0x24 + 4);
          if ((int)uVar15 <= iVar13) {
            FUN_050f65d8(0);
          }
          uVar16 = *(undefined8 *)(lVar18 + 0x18);
          iVar13 = iVar13 + 1;
          uVar15 = (uint)uVar16;
        } while (uVar17 < uVar15);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar17 = *(uint *)(param_1 + 0x20);
      if (uVar17 == uVar15) {
        FUN_049adf34(param_1,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1b0))
        ;
        lVar7 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
        if (lVar7 == 0) goto LAB_049adbac;
        uVar15 = *(uint *)(lVar7 + 0x18);
        iVar13 = 0;
        if (uVar15 != 0) {
          iVar13 = (int)uVar4 / (int)uVar15;
        }
        uVar2 = uVar4 - iVar13 * uVar15;
        if (uVar15 <= uVar2) goto LAB_049adba8;
        lVar18 = *(long *)(param_1 + 0x18);
        piVar12 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar18 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar17 + 1;
      }
      if (lVar18 == 0) {
LAB_049adbac:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_049adba8;
      lVar18 = lVar18 + (long)(int)uVar17 * 0x24;
    }
    else {
      uVar17 = *(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      if (uVar15 <= uVar17) goto LAB_049adba8;
      lVar18 = lVar18 + (long)(int)uVar17 * 0x24;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar18 + 0x24);
    }
    *(uint *)(lVar18 + 0x20) = uVar4;
    *(int *)(lVar18 + 0x24) = *piVar12 + -1;
    *(undefined4 *)(lVar18 + 0x28) = uStack000000000000002c;
    uVar19 = param_3[1];
    uVar16 = *param_3;
    *(undefined8 *)(lVar18 + 0x3c) = param_3[2];
    *(undefined8 *)(lVar18 + 0x34) = uVar19;
    *(undefined8 *)(lVar18 + 0x2c) = uVar16;
    *piVar12 = uVar17 + 1;
    return 1;
  }
LAB_049adba8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


