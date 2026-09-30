/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01b12094
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01b121a8) */

undefined8 System_Array__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar8;
  long *unaff_x23;
  
LAB_01b120a4:
  uVar2 = (*(code *)*param_1)();
  uVar3 = (**(code **)(unaff_x21 + 0x18))
                    (*(undefined8 *)(unaff_x21 + 0x40),uVar2,*(undefined8 *)(unaff_x21 + 0x28));
  if ((uVar3 & 1) == 0) {
    lVar6 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01b12030;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8();
LAB_01b12030:
    uVar3 = (*(code *)*puVar4)();
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
      iVar8 = 0xb;
      iVar1 = 0xb;
      if (unaff_x20 == (long *)0x0) goto LAB_01b1214c;
      goto LAB_01b120ec;
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    lVar5 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          param_1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01b120a4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_0185dba8();
    goto LAB_01b120a4;
  }
  iVar8 = 10;
  iVar1 = 10;
  if (unaff_x20 != (long *)0x0) {
LAB_01b120ec:
    iVar8 = iVar1;
    lVar6 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_037f3288) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01b12140;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8();
LAB_01b12140:
    (*(code *)*puVar4)();
  }
LAB_01b1214c:
  if ((iVar8 != 0xb) && (iVar8 != 0)) {
    return uVar2;
  }
  FUN_02ec3478(0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474();
}


