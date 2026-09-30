/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$op_Implicit
ENTRY_POINT: 047dfdec
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


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__op_Implicit
               (undefined8 param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  long lVar12;
  long unaff_x25;
  long lVar13;
  long unaff_x26;
  long *plVar14;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  if (-1 < *(int *)(unaff_x25 + 0x28)) {
    param_2 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x28,param_2,unaff_x22);
  uVar2 = FUN_03642bb8();
  if ((uVar2 & 1) == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar3 = thunk_FUN_0367fe20();
    uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a00250);
    puVar7 = (undefined8 *)FUN_05d7e1a0(uVar3,uVar5,0);
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar3);
    }
  }
  else {
    lVar12 = *(long *)(unaff_x20 + 0x20);
    pvVar4 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
      pvVar4 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x28,pvVar4,unaff_x22);
    lVar12 = *(long *)(lVar12 + 0xc0);
    puVar6 = *(undefined8 **)(lVar12 + 0x68);
    uVar3 = *puVar6;
    puVar7 = unaff_x28;
    if (-1 < *(int *)(*(long *)(lVar12 + 0x30) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x28;
    }
    lVar12 = *(long *)(unaff_x29 + -0x30);
    pcVar10 = (code *)puVar6[2];
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    *(long *)(unaff_x29 + -0x10) = unaff_x29 + -0x1c;
    puVar7 = (undefined8 *)(*pcVar10)(uVar3,puVar6,lVar12,unaff_x29 + -0x18,unaff_x29 + -0x20);
    lVar12 = *(long *)(lVar12 + 0x10);
    if (lVar12 == 0) {
      lVar12 = *(long *)(unaff_x26 + 0x28);
LAB_047e00d4:
      if (lVar12 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    else {
      uVar1 = *(uint *)(unaff_x29 + -0x20);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        lVar12 = *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar12 != 0) {
          *(long *)(unaff_x29 + -0x40) = (long)(int)uVar1;
          *(long *)(unaff_x29 + -0x38) = unaff_x26;
          lVar13 = 0;
          do {
            lVar8 = lVar12;
            lVar12 = *(long *)(unaff_x20 + 0x20);
            plVar14 = *(long **)(*(long *)(unaff_x29 + -0x30) + 0x20);
            pvVar4 = unaff_x21;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
              pvVar4 = (void *)(unaff_x29 + -0x28);
            }
            memcpy(unaff_x28,pvVar4,unaff_x22);
            pvVar4 = (void *)thunk_FUN_036a1ed0(lVar8,*(undefined8 *)
                                                       (*(long *)(*(long *)(lVar12 + 0xc0) + 0x40) +
                                                       0x80));
            puVar7 = memcpy(unaff_x19,pvVar4,unaff_x22);
            if (plVar14 == (long *)0x0) {
LAB_047e00cc:
              lVar12 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x28);
              goto LAB_047e00d4;
            }
            lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
            lVar12 = *(long *)(lVar9 + 0x18);
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_0367c9fc(lVar12);
              lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
            }
            puVar7 = unaff_x28;
            puVar6 = unaff_x19;
            if (-1 < *(int *)(*(long *)(lVar9 + 0x30) + 0x28)) {
              puVar7 = (undefined8 *)*unaff_x28;
              puVar6 = (undefined8 *)*unaff_x19;
            }
            lVar9 = *plVar14;
            uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar2 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar12) {
                  lVar12 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
                  goto LAB_047dff98;
                }
                uVar2 = uVar2 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar2 != 0);
            }
            lVar12 = FUN_0367cd30(plVar14,lVar12,0);
LAB_047dff98:
            *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
            *(undefined8 **)(unaff_x29 + -0x10) = puVar6;
            lVar12 = *(long *)(lVar12 + 8);
            (**(code **)(lVar12 + 0x10))
                      (*(undefined8 *)(lVar12 + 8),lVar12,plVar14,unaff_x29 + -0x18,
                       unaff_x29 + -0x1c);
            if (*(char *)(unaff_x29 + -0x1c) != '\0') {
              if (lVar13 == 0) {
                lVar12 = *(long *)(*(long *)(unaff_x29 + -0x30) + 0x10);
                puVar7 = (undefined8 *)
                         thunk_FUN_036a1ed0(lVar8,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20
                                                                                         + 0x20) +
                                                                               0xc0) + 0x40) + 0x80)
                                                  + 0x40);
                if (lVar12 == 0) goto LAB_047e00cc;
                unaff_x26 = *(long *)(unaff_x29 + -0x38);
                if (*(uint *)(lVar12 + 0x18) <= (uint)*(long *)(unaff_x29 + -0x40))
                goto LAB_047e00e4;
                *(undefined8 *)(lVar12 + *(long *)(unaff_x29 + -0x40) * 8 + 0x20) = *puVar7;
                thunk_FUN_036b7ad0();
              }
              else {
                puVar7 = (undefined8 *)
                         thunk_FUN_036a1ed0(lVar8,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20
                                                                                         + 0x20) +
                                                                               0xc0) + 0x40) + 0x80)
                                                  + 0x40);
                FUN_03159758(lVar13,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0
                                                                 ) + 0x40) + 0x80) + 0x40,*puVar7);
                unaff_x26 = *(long *)(unaff_x29 + -0x38);
              }
              puVar7 = (undefined8 *)0x1;
              uVar3 = *(undefined8 *)(*(long *)(unaff_x29 + -0x30) + 0x18);
              *(ulong *)(*(long *)(unaff_x29 + -0x30) + 0x18) =
                   CONCAT44((int)((ulong)uVar3 >> 0x20) + (int)((ulong)DAT_0164f610 >> 0x20),
                            (int)uVar3 + (int)DAT_0164f610);
              goto LAB_047e009c;
            }
            plVar14 = (long *)thunk_FUN_036a1ed0(lVar8,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  unaff_x20 + 0x20) + 0xc0) + 0x40) + 0x80) + 0x40);
            lVar12 = *plVar14;
            lVar13 = lVar8;
          } while (*plVar14 != 0);
          unaff_x26 = *(long *)(unaff_x29 + -0x38);
        }
        puVar7 = (undefined8 *)0x0;
LAB_047e009c:
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
      }
      else {
LAB_047e00e4:
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar7);
}


