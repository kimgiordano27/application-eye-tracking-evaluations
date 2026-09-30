/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$op_Implicit
ENTRY_POINT: 047dfe24
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__op_Implicit
               (void *param_1,undefined8 param_2,size_t param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long lVar11;
  long unaff_x24;
  long lVar12;
  long unaff_x26;
  long *plVar13;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  pvVar3 = unaff_x21;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x24 + 0xc0) + 0x30) + 0x28)) {
    pvVar3 = unaff_x23;
  }
  memcpy(param_1,pvVar3,param_3);
  puVar4 = *(undefined8 **)(*(long *)(unaff_x24 + 0xc0) + 0x68);
  uVar2 = *puVar4;
  puVar5 = unaff_x28;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x24 + 0xc0) + 0x30) + 0x28)) {
    puVar5 = (undefined8 *)*unaff_x28;
  }
  lVar11 = *(long *)(unaff_x29 + -0x30);
  pcVar9 = (code *)puVar4[2];
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
  *(long *)(unaff_x29 + -0x10) = unaff_x29 + -0x1c;
  puVar5 = (undefined8 *)(*pcVar9)(uVar2,puVar4,lVar11,unaff_x29 + -0x18,unaff_x29 + -0x20);
  lVar11 = *(long *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    lVar11 = *(long *)(unaff_x26 + 0x28);
LAB_047e00d4:
    if (lVar11 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    uVar1 = *(uint *)(unaff_x29 + -0x20);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      if (lVar11 != 0) {
        *(long *)(unaff_x29 + -0x40) = (long)(int)uVar1;
        *(long *)(unaff_x29 + -0x38) = unaff_x26;
        lVar12 = 0;
        do {
          lVar6 = lVar11;
          lVar11 = *(long *)(unaff_x20 + 0x20);
          plVar13 = *(long **)(*(long *)(unaff_x29 + -0x30) + 0x20);
          pvVar3 = unaff_x21;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x30) + 0x28)) {
            pvVar3 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(unaff_x28,pvVar3,unaff_x22);
          pvVar3 = (void *)thunk_FUN_036a1ed0(lVar6,*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar11 + 0xc0) + 0x40) +
                                                     0x80));
          puVar5 = memcpy(unaff_x19,pvVar3,unaff_x22);
          if (plVar13 == (long *)0x0) {
LAB_047e00cc:
            lVar11 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x28);
            goto LAB_047e00d4;
          }
          lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          lVar11 = *(long *)(lVar7 + 0x18);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
            lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          }
          puVar5 = unaff_x28;
          puVar4 = unaff_x19;
          if (-1 < *(int *)(*(long *)(lVar7 + 0x30) + 0x28)) {
            puVar5 = (undefined8 *)*unaff_x28;
            puVar4 = (undefined8 *)*unaff_x19;
          }
          lVar7 = *plVar13;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar11) {
                lVar11 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
                goto LAB_047dff98;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          lVar11 = FUN_0367cd30(plVar13,lVar11,0);
LAB_047dff98:
          *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
          *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
          lVar11 = *(long *)(lVar11 + 8);
          (**(code **)(lVar11 + 0x10))
                    (*(undefined8 *)(lVar11 + 8),lVar11,plVar13,unaff_x29 + -0x18,unaff_x29 + -0x1c)
          ;
          if (*(char *)(unaff_x29 + -0x1c) != '\0') {
            if (lVar12 == 0) {
              lVar11 = *(long *)(*(long *)(unaff_x29 + -0x30) + 0x10);
              puVar5 = (undefined8 *)
                       thunk_FUN_036a1ed0(lVar6,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                       0x20) + 0xc0)
                                                                   + 0x40) + 0x80) + 0x40);
              if (lVar11 == 0) goto LAB_047e00cc;
              unaff_x26 = *(long *)(unaff_x29 + -0x38);
              if (*(uint *)(lVar11 + 0x18) <= (uint)*(long *)(unaff_x29 + -0x40)) goto LAB_047e00e4;
              *(undefined8 *)(lVar11 + *(long *)(unaff_x29 + -0x40) * 8 + 0x20) = *puVar5;
              thunk_FUN_036b7ad0();
            }
            else {
              puVar5 = (undefined8 *)
                       thunk_FUN_036a1ed0(lVar6,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                       0x20) + 0xc0)
                                                                   + 0x40) + 0x80) + 0x40);
              FUN_03159758(lVar12,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0)
                                                     + 0x40) + 0x80) + 0x40,*puVar5);
              unaff_x26 = *(long *)(unaff_x29 + -0x38);
            }
            puVar5 = (undefined8 *)0x1;
            uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -0x30) + 0x18);
            *(ulong *)(*(long *)(unaff_x29 + -0x30) + 0x18) =
                 CONCAT44((int)((ulong)uVar2 >> 0x20) + (int)((ulong)DAT_0164f610 >> 0x20),
                          (int)uVar2 + (int)DAT_0164f610);
            goto LAB_047e009c;
          }
          plVar13 = (long *)thunk_FUN_036a1ed0(lVar6,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  unaff_x20 + 0x20) + 0xc0) + 0x40) + 0x80) + 0x40);
          lVar11 = *plVar13;
          lVar12 = lVar6;
        } while (*plVar13 != 0);
        unaff_x26 = *(long *)(unaff_x29 + -0x38);
      }
      puVar5 = (undefined8 *)0x0;
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


