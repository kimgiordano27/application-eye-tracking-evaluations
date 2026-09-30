/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 02f80de4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong * System_Array__InternalArray__ICollection_Contains<OVRPlugin_Qpl_Annotation_Builder_Entry>
                  (ulong param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4,long param_5,
                  char *param_6,undefined *param_7,undefined8 *param_8,long param_9)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_x13;
  undefined *in_x14;
  undefined *in_x15;
  undefined4 in_w16;
  undefined *in_x17;
  ulong *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar9;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined **unaff_x30;
  
  do {
    uVar6 = unaff_x27;
    if (param_1 == unaff_x24 >> 0xc) {
      uVar2 = param_3[1];
LAB_02f80df0:
      uVar3 = unaff_x24 >> 4 & 0xff;
      uVar5 = (ulong)*(ushort *)(*(long *)(uVar2 + 0x30) + uVar3 * 2);
      if ((unaff_x24 & 0xf) != 0 || uVar5 != 0) {
        if ((*(byte *)(uVar2 + 0x19) >> 5 & 1) == 0) {
          uVar7 = unaff_x24 & 0xf | uVar5 << 4;
          if (*(char *)((long)param_8 + param_9 + uVar7) == '\0') {
LAB_02f80f1c:
            if (*(int *)(unaff_x30 + 0x1af) == 0) {
              FUN_02f76bf8(unaff_x24);
            }
            else {
              FUN_02f76ca4(unaff_x24);
            }
            in_x14 = &DAT_06de1000;
            in_x15 = &DAT_06de1000;
            in_w16 = 5;
            in_x17 = &DAT_06de1000;
            param_4 = &DAT_06bce000;
            param_5 = -0x1ff0;
            param_6 = "Mark stack overflow; current size = %lu entries\n";
            param_7 = &DAT_06de1000;
            param_8 = &DAT_06bcef28;
            param_9 = 0x54e0;
            unaff_x30 = &PTR_FUN_06bb3000;
            goto LAB_02f80e68;
          }
          uVar3 = uVar3 - uVar5;
          unaff_x24 = unaff_x24 - uVar7;
        }
        else {
          if ((unaff_x24 - *(ulong *)(uVar2 + 0x10) == (unaff_x24 & 0xfff)) &&
             (*(char *)((long)param_8 + param_9 + (unaff_x24 & 0xfff)) == '\0')) goto LAB_02f80f1c;
          uVar3 = 0;
          unaff_x24 = *(ulong *)(uVar2 + 0x10);
        }
      }
      uVar5 = unaff_x23 << (uVar3 & 0x3f);
      uVar7 = *(ulong *)(uVar2 + 0x40 + (uVar3 >> 6) * 8);
      if ((uVar5 & uVar7) == 0) {
        lVar8 = *(long *)(uVar2 + 0x38);
        uVar9 = *(ulong *)(uVar2 + 0x28);
        *(ulong *)(uVar2 + 0x40 + (uVar3 >> 6) * 8) = uVar5 | uVar7;
        *(long *)(uVar2 + 0x38) = lVar8 + 1;
        if (uVar9 != 0) {
          puVar4 = unaff_x21 + 2;
          if (unaff_x22 <= puVar4) {
            iVar1 = *(int *)(param_4 + 0x1e4);
            *(undefined4 *)(in_x15 + 0xa68) = in_w16;
            *(int *)(in_x17 + 0xa98) = (int)unaff_x23;
            if (iVar1 != 0) {
              FUN_02f76a9c(param_6,*(undefined8 *)(param_7 + 0xa48));
              unaff_x30 = &PTR_FUN_06bb3000;
              param_9 = 0x54e0;
              param_8 = &DAT_06bcef28;
              param_7 = &DAT_06de1000;
              param_6 = "Mark stack overflow; current size = %lu entries\n";
              param_5 = -0x1ff0;
              param_4 = &DAT_06bce000;
              in_x17 = &DAT_06de1000;
              in_w16 = 5;
              in_x15 = &DAT_06de1000;
              in_x14 = &DAT_06de1000;
            }
            puVar4 = (ulong *)((long)unaff_x21 + param_5);
          }
          *puVar4 = unaff_x24;
          puVar4[1] = uVar9;
          unaff_x21 = puVar4;
        }
      }
    }
    else {
      uVar2 = FUN_02f77adc(unaff_x24);
      unaff_x30 = &PTR_FUN_06bb3000;
      param_9 = 0x54e0;
      param_8 = &DAT_06bcef28;
      param_7 = &DAT_06de1000;
      param_6 = "Mark stack overflow; current size = %lu entries\n";
      param_5 = -0x1ff0;
      param_4 = &DAT_06bce000;
      in_x17 = &DAT_06de1000;
      in_w16 = 5;
      in_x15 = &DAT_06de1000;
      if (uVar2 != 0) goto LAB_02f80df0;
    }
LAB_02f80e68:
    do {
      unaff_x27 = uVar6 >> 1;
      unaff_x19 = unaff_x19 + 1;
      if (uVar6 < 2) {
        puVar4 = unaff_x21;
        if (*(int *)(*(long *)(in_x14 + 0xc20) + unaff_x20 * 0x10 + 8) != 0) {
          puVar4 = unaff_x21 + 2;
          if (unaff_x22 <= puVar4) {
            DAT_06de1a68 = 5;
            DAT_06de1a98 = 1;
            if (DAT_06bcef20 != 0) {
              FUN_02f76a9c("Mark stack overflow; current size = %lu entries\n",DAT_06de1a48);
            }
            puVar4 = unaff_x21 + -0x3fe;
          }
          uVar6 = (ulong)DAT_06de1c38;
          *puVar4 = in_x13 + 0x200;
          puVar4[1] = (unaff_x20 * 0x40 + 0x40U | uVar6) << 2 | 2;
        }
        return puVar4;
      }
      uVar6 = unaff_x27;
    } while ((((unaff_x27 & 1) == 0) || (unaff_x24 = *unaff_x19, unaff_x24 < unaff_x28)) ||
            (unaff_x26 < unaff_x24));
    param_3 = (ulong *)(unaff_x29 + (unaff_x24 >> 0xc & 7) * 0x10);
    param_1 = *param_3;
  } while( true );
}


