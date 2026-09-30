/*
FUNCTION_NAME: FUN_06015454
ENTRY_POINT: 06015454
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_06015454(float param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  
  if ((DAT_06bc5344 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_141__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_142__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_143__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_144__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_146__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_147__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_148__);
    DAT_06bc5344 = 1;
  }
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_146__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_144__;
  uVar10 = FUN_06015cec(param_2);
  if ((uVar10 & 1) == 0) {
LAB_06015590:
    fVar19 = *(float *)(param_2 + 100);
    fVar18 = *(float *)(param_2 + 0x58);
    bVar7 = false;
    bVar8 = false;
    bVar9 = false;
    if (param_1 <= DAT_011b0660) {
      bVar7 = false;
      bVar8 = false;
      bVar9 = true;
      if (!NAN(fVar18) && !NAN(fVar19)) {
        bVar7 = fVar18 < fVar19;
        bVar8 = fVar18 == fVar19;
        bVar9 = false;
      }
    }
    if (!bVar8 && bVar7 == bVar9) {
      if (*(char *)(param_2 + 0x5d) != '\0') {
        return;
      }
      param_1 = 1.0;
      *(undefined1 *)(param_2 + 0x5d) = 1;
    }
    puVar6 = Method_OVRPlugin_<>c_<_cctor>b__837_148__;
    puVar5 = Method_OVRPlugin_<>c_<_cctor>b__837_147__;
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_143__;
    lVar11 = *(long *)(param_2 + 0x38);
    if (lVar11 != 0) {
      iVar17 = 0;
      do {
        if (*(int *)(lVar11 + 0x20) <= iVar17) {
          lVar11 = *(long *)(param_2 + 0x40);
          if (lVar11 != 0) {
            iVar17 = 0;
            goto LAB_060156e0;
          }
          break;
        }
        lVar14 = *(long *)(param_2 + 0x48);
        plVar12 = (long *)FUN_04e383a4(lVar11,iVar17,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) break;
        lVar15 = *plVar12;
        lVar11 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar11) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06015654;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar12,lVar11,0);
LAB_06015654:
        auVar20 = (*(code *)*puVar13)(param_1,plVar12,puVar13[1]);
        if (lVar14 == 0) break;
        lVar11 = *(long *)(lVar14 + 0x10);
        lVar15 = *(long *)puVar6;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar11 == 0) break;
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          *(undefined1 (*) [16])(lVar11 + (long)(int)uVar1 * 0x10 + 0x20) = auVar20;
        }
        else {
          FUN_03a7aedc(lVar14,auVar20._0_8_,auVar20._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *(long *)(param_2 + 0x38);
        iVar17 = iVar17 + 1;
      } while (lVar11 != 0);
    }
  }
  else {
    lVar11 = *(long *)(param_2 + 0x38);
    if (lVar11 != 0) {
      iVar17 = 0;
      do {
        if (*(int *)(lVar11 + 0x20) <= iVar17) goto LAB_06015590;
        plVar12 = (long *)FUN_04e383a4(lVar11,iVar17,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) break;
        lVar14 = *plVar12;
        lVar11 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar11) {
              puVar13 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_06015574;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar12,lVar11,1);
LAB_06015574:
        (*(code *)*puVar13)(plVar12,puVar13[1]);
        lVar11 = *(long *)(param_2 + 0x38);
        iVar17 = iVar17 + 1;
      } while (lVar11 != 0);
    }
  }
  goto LAB_06015768;
LAB_060156e0:
  do {
    if (*(int *)(lVar11 + 0x20) <= iVar17) {
      fVar19 = *(float *)(param_2 + 0x58);
      fVar18 = (float)FUN_060fbf1c(0);
      *(float *)(param_2 + 0x58) = fVar19 + fVar18;
      return;
    }
    plVar12 = (long *)FUN_04e383a4(lVar11,iVar17,*(undefined8 *)puVar2);
    if (plVar12 == (long *)0x0) break;
    lVar11 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0601574c;
        }
        uVar10 = uVar10 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar5,0);
LAB_0601574c:
    (*(code *)*puVar13)(param_1,plVar12,puVar13[1]);
    lVar11 = *(long *)(param_2 + 0x40);
    iVar17 = iVar17 + 1;
  } while (lVar11 != 0);
LAB_06015768:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


