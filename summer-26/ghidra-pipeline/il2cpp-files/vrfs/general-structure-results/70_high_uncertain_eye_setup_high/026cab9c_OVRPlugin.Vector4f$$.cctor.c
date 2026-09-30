/*
FUNCTION_NAME: OVRPlugin.Vector4f$$.cctor
ENTRY_POINT: 026cab9c
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Vector4f___cctor(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long unaff_x26;
  int *piVar13;
  int iVar14;
  undefined8 unaff_x29;
  uint uStack000000000000000c;
  
  if ((*(byte *)(param_2 + 0x132) & 1) == 0) {
    param_2 = FUN_015c2790(param_2);
  }
  lVar7 = *unaff_x24;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar10 != 0) {
    piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == param_2) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_026cac14;
      }
      uVar10 = uVar10 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80();
LAB_026cac14:
  uVar2 = (*(code *)*puVar3)();
  lVar7 = *(long *)(unaff_x21 + 0x10);
  if (lVar7 == 0) goto LAB_026caf80;
  uVar12 = *(uint *)(lVar7 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar14 = 0;
  if (uVar12 != 0) {
    iVar14 = (int)uVar2 / (int)uVar12;
  }
  uVar6 = uVar2 - iVar14 * uVar12;
  if (uVar6 < uVar12) {
    piVar13 = (int *)(lVar7 + (ulong)uVar6 * 4 + 0x20);
    uVar12 = *piVar13 - 1;
    uStack000000000000000c = unaff_w23;
    if (unaff_x24 == (long *)0x0) {
      plVar4 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x10)
                                   + 8))();
      if (unaff_x26 == 0) goto LAB_026caf80;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x18 + 0x20) == uVar2) {
            if (plVar4 == (long *)0x0) goto LAB_026caf80;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined8 *)(unaff_x26 + lVar7 * 0x18 + 0x28));
            if ((uVar10 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) goto LAB_026caf68;
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined8 *)(unaff_x26 + lVar7 * 0x18 + 0x30) = unaff_x29;
                return 1;
              }
              goto LAB_026caf7c;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_026caf7c;
          uVar12 = *(uint *)(unaff_x26 + lVar7 * 0x18 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_031dbf48(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_026caf80;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x18 + 0x20) == uVar2) {
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_015c2790(lVar7);
            }
            lVar9 = *unaff_x24;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_026cacfc;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_015c2a80();
LAB_026cacfc:
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
LAB_026caf68:
                FUN_031dbe34();
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined8 *)(unaff_x26 + (long)(int)uVar12 * 0x18 + 0x30) = unaff_x29;
                return 1;
              }
              goto LAB_026caf7c;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_026caf7c;
          uVar12 = *(uint *)(unaff_x26 + (long)(int)uVar12 * 0x18 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_031dbf48(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    if (*(int *)(unaff_x21 + 0x28) < 1) {
      uVar12 = *(uint *)(unaff_x21 + 0x20);
      if (uVar12 == uVar6) {
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x168) + 8))();
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
        if (lVar7 == 0) goto LAB_026caf80;
        uVar6 = *(uint *)(lVar7 + 0x18);
        iVar14 = 0;
        if (uVar6 != 0) {
          iVar14 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar14 * uVar6;
        if (uVar6 <= uVar1) goto LAB_026caf7c;
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        piVar13 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
      }
      if (unaff_x26 == 0) {
LAB_026caf80:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      bVar5 = false;
    }
    else {
      uVar12 = *(uint *)(unaff_x21 + 0x24);
      *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
      bVar5 = true;
    }
    if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
      if (bVar5) {
        *(undefined4 *)(unaff_x21 + 0x24) =
             *(undefined4 *)(unaff_x26 + (long)(int)uVar12 * 0x18 + 0x24);
      }
      lVar7 = unaff_x26 + (long)(int)uVar12 * 0x18;
      *(uint *)(lVar7 + 0x20) = uVar2;
      iVar14 = *piVar13;
      *(undefined8 *)(lVar7 + 0x28) = unaff_x20;
      *(int *)(lVar7 + 0x24) = iVar14 + -1;
      thunk_FUN_01656ef8((undefined8 *)(lVar7 + 0x28));
      *(undefined8 *)(lVar7 + 0x30) = unaff_x29;
      *piVar13 = uVar12 + 1;
      return 1;
    }
  }
LAB_026caf7c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


