/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsReadOnlySpan
ENTRY_POINT: 047dfda4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnlySpan
               (undefined8 param_1,void *param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  int *piVar12;
  undefined8 *puVar13;
  ulong __n;
  long lVar14;
  long *plVar15;
  undefined8 *__dest;
  long unaff_x29;
  
  lVar14 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar14 + 0x28);
  lVar6 = *(long *)(param_3 + 0x20);
  *(void **)(unaff_x29 + -0x28) = param_2;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
  __n = (ulong)*(uint *)(lVar6 + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(&stack0x00000000 + -uVar10);
  puVar13 = (undefined8 *)((long)__dest - uVar10);
  pvVar3 = param_2;
  if (-1 < *(int *)(lVar6 + 0x28)) {
    pvVar3 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(__dest,pvVar3,__n);
  uVar10 = FUN_03642bb8(lVar6,__dest);
  if ((uVar10 & 1) == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar2 = thunk_FUN_0367fe20();
    uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a00250);
    puVar7 = (undefined8 *)FUN_05d7e1a0(uVar2,uVar4,0);
    if (*(long *)(lVar14 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar2,param_3);
    }
  }
  else {
    lVar6 = *(long *)(param_3 + 0x20);
    pvVar3 = param_2;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x28)) {
      pvVar3 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(__dest,pvVar3,__n);
    lVar6 = *(long *)(lVar6 + 0xc0);
    puVar5 = *(undefined8 **)(lVar6 + 0x68);
    uVar2 = *puVar5;
    puVar7 = __dest;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x30) + 0x28)) {
      puVar7 = (undefined8 *)*__dest;
    }
    lVar6 = *(long *)(unaff_x29 + -0x30);
    pcVar11 = (code *)puVar5[2];
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    *(long *)(unaff_x29 + -0x10) = unaff_x29 + -0x1c;
    puVar7 = (undefined8 *)(*pcVar11)(uVar2,puVar5,lVar6,unaff_x29 + -0x18,unaff_x29 + -0x20);
    lVar6 = *(long *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      lVar14 = *(long *)(lVar14 + 0x28);
LAB_047e00d4:
      if (lVar14 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    else {
      uVar1 = *(uint *)(unaff_x29 + -0x20);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar6 != 0) {
          *(long *)(unaff_x29 + -0x40) = (long)(int)uVar1;
          *(long *)(unaff_x29 + -0x38) = lVar14;
          lVar14 = 0;
          do {
            lVar8 = lVar6;
            lVar6 = *(long *)(param_3 + 0x20);
            plVar15 = *(long **)(*(long *)(unaff_x29 + -0x30) + 0x20);
            pvVar3 = param_2;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x28)) {
              pvVar3 = (void *)(unaff_x29 + -0x28);
            }
            memcpy(__dest,pvVar3,__n);
            pvVar3 = (void *)thunk_FUN_036a1ed0(lVar8,*(undefined8 *)
                                                       (*(long *)(*(long *)(lVar6 + 0xc0) + 0x40) +
                                                       0x80));
            puVar7 = memcpy(puVar13,pvVar3,__n);
            if (plVar15 == (long *)0x0) {
LAB_047e00cc:
              lVar14 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x28);
              goto LAB_047e00d4;
            }
            lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
            lVar6 = *(long *)(lVar9 + 0x18);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0367c9fc(lVar6);
              lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
            }
            puVar7 = __dest;
            puVar5 = puVar13;
            if (-1 < *(int *)(*(long *)(lVar9 + 0x30) + 0x28)) {
              puVar7 = (undefined8 *)*__dest;
              puVar5 = (undefined8 *)*puVar13;
            }
            lVar9 = *plVar15;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar6) {
                  lVar6 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
                  goto LAB_047dff98;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            lVar6 = FUN_0367cd30(plVar15,lVar6,0);
LAB_047dff98:
            *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
            *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
            lVar6 = *(long *)(lVar6 + 8);
            (**(code **)(lVar6 + 0x10))
                      (*(undefined8 *)(lVar6 + 8),lVar6,plVar15,unaff_x29 + -0x18,unaff_x29 + -0x1c)
            ;
            if (*(char *)(unaff_x29 + -0x1c) != '\0') {
              if (lVar14 == 0) {
                lVar6 = *(long *)(*(long *)(unaff_x29 + -0x30) + 0x10);
                puVar7 = (undefined8 *)
                         thunk_FUN_036a1ed0(lVar8,*(long *)(*(long *)(*(long *)(*(long *)(param_3 +
                                                                                         0x20) +
                                                                               0xc0) + 0x40) + 0x80)
                                                  + 0x40);
                if (lVar6 == 0) goto LAB_047e00cc;
                lVar14 = *(long *)(unaff_x29 + -0x38);
                if (*(uint *)(lVar6 + 0x18) <= (uint)*(long *)(unaff_x29 + -0x40))
                goto LAB_047e00e4;
                *(undefined8 *)(lVar6 + *(long *)(unaff_x29 + -0x40) * 8 + 0x20) = *puVar7;
                thunk_FUN_036b7ad0();
              }
              else {
                puVar13 = (undefined8 *)
                          thunk_FUN_036a1ed0(lVar8,*(long *)(*(long *)(*(long *)(*(long *)(param_3 +
                                                                                          0x20) +
                                                                                0xc0) + 0x40) + 0x80
                                                            ) + 0x40);
                FUN_03159758(lVar14,*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0)
                                                       + 0x40) + 0x80) + 0x40,*puVar13);
                lVar14 = *(long *)(unaff_x29 + -0x38);
              }
              puVar7 = (undefined8 *)0x1;
              uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -0x30) + 0x18);
              *(ulong *)(*(long *)(unaff_x29 + -0x30) + 0x18) =
                   CONCAT44((int)((ulong)uVar2 >> 0x20) + (int)((ulong)DAT_0164f610 >> 0x20),
                            (int)uVar2 + (int)DAT_0164f610);
              goto LAB_047e009c;
            }
            plVar15 = (long *)thunk_FUN_036a1ed0(lVar8,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  param_3 + 0x20) + 0xc0) + 0x40) + 0x80) + 0x40);
            lVar6 = *plVar15;
            lVar14 = lVar8;
          } while (*plVar15 != 0);
          lVar14 = *(long *)(unaff_x29 + -0x38);
        }
        puVar7 = (undefined8 *)0x0;
LAB_047e009c:
        if (*(long *)(lVar14 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
      }
      else {
LAB_047e00e4:
        if (*(long *)(lVar14 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar7);
}


