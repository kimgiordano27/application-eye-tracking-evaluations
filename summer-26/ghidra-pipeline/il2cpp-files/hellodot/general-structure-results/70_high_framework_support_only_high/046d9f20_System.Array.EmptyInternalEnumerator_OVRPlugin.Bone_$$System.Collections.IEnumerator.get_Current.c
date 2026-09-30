/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046d9f20
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
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
  undefined8 *unaff_x29;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uStack000000000000000c;
  
  piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar13 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar13 + 1) * 0x10 + 0x138);
      goto LAB_046d9f78;
    }
    in_x9 = in_x9 + -1;
    piVar13 = piVar13 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_046d9f78:
  uVar2 = (*(code *)*puVar3)();
  lVar7 = *(long *)(unaff_x21 + 0x10);
  if (lVar7 == 0) goto LAB_046da2f4;
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
      plVar4 = (long *)FUN_02eb80f0(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
      if (unaff_x26 == 0) goto LAB_046da2f4;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x28 + 0x20) == uVar2) {
            if (plVar4 == (long *)0x0) goto LAB_046da2f4;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined8 *)(unaff_x26 + lVar7 * 0x28 + 0x28));
            if ((uVar10 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) goto LAB_046da2e0;
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              uVar8 = unaff_x29[2];
              uVar16 = unaff_x29[1];
              uVar15 = *unaff_x29;
              goto LAB_046da2a4;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_046da2dc;
          uVar12 = *(uint *)(unaff_x26 + lVar7 * 0x28 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_04f52508(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_046da2f4;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x28 + 0x20) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02ce0978(lVar5);
            }
            lVar9 = *unaff_x24;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_046da060;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_046da060:
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
LAB_046da2e0:
                FUN_04f52404();
              }
              else if ((uStack000000000000000c & 0xff) == 1) {
                uVar8 = unaff_x29[2];
                uVar16 = unaff_x29[1];
                uVar15 = *unaff_x29;
LAB_046da2a4:
                if ((uint)lVar7 < *(uint *)(unaff_x26 + 0x18)) {
                  lVar5 = unaff_x26 + lVar7 * 0x28;
                  *(undefined8 *)(lVar5 + 0x40) = uVar8;
                  *(undefined8 *)(lVar5 + 0x38) = uVar16;
                  *(undefined8 *)(lVar5 + 0x30) = uVar15;
                  if ((uint)lVar7 < *(uint *)(unaff_x26 + 0x18)) {
                    return 1;
                  }
                }
                goto LAB_046da2dc;
              }
              return 0;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_046da2dc;
          uVar12 = *(uint *)(unaff_x26 + lVar7 * 0x28 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_04f52508(0);
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
        FUN_046da6a0();
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
        if (lVar7 == 0) goto LAB_046da2f4;
        uVar6 = *(uint *)(lVar7 + 0x18);
        iVar14 = 0;
        if (uVar6 != 0) {
          iVar14 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar14 * uVar6;
        if (uVar6 <= uVar1) goto LAB_046da2dc;
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        piVar13 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
      }
      if (unaff_x26 == 0) {
LAB_046da2f4:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_046da2dc;
      lVar7 = (long)(int)uVar12;
    }
    else {
      *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
      uVar12 = *(uint *)(unaff_x21 + 0x24);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_046da2dc;
      lVar7 = (long)(int)uVar12;
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x28 + 0x24);
    }
    lVar7 = unaff_x26 + lVar7 * 0x28;
    *(uint *)(lVar7 + 0x20) = uVar2;
    iVar14 = *piVar13;
    *(undefined8 *)(lVar7 + 0x28) = unaff_x20;
    *(int *)(lVar7 + 0x24) = iVar14 + -1;
    uVar15 = unaff_x29[1];
    uVar8 = *unaff_x29;
    *(undefined8 *)(lVar7 + 0x40) = unaff_x29[2];
    *(undefined8 *)(lVar7 + 0x38) = uVar15;
    *(undefined8 *)(lVar7 + 0x30) = uVar8;
    *piVar13 = uVar12 + 1;
    return 1;
  }
LAB_046da2dc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


