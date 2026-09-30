/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$get_Current
ENTRY_POINT: 037a5a6c
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


/* WARNING: Removing unreachable block (ram,0x037a5d90) */

void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Current
               (ulong param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar10 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    *(undefined1 *)(unaff_x22 + 0x5cb) = 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  iVar2 = FUN_0338e504();
  *param_2 = iVar2;
  if (iVar2 < 2) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    uVar3 = FUN_02f0880c(lVar4,iVar2 + -1);
  }
  *(undefined8 *)(param_2 + 6) = uVar3;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  lVar7 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_037a5b90;
      }
      uVar9 = uVar9 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02f421d0();
LAB_037a5b90:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar1 = PTR_DAT_067c91b8;
  if (plVar6 != (long *)0x0) {
    iVar2 = 0;
    do {
      lVar4 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_037a5c0c;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar1,0);
LAB_037a5c0c:
      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar4 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 == 0) goto LAB_037a5d3c;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_037a5d24;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c(lVar4);
      }
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_037a5ca0;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(plVar6,lVar4,0);
LAB_037a5ca0:
      auVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (iVar2 == 0) {
        *(long *)(param_2 + 2) = auVar10._0_8_;
        piVar8 = param_2 + 4;
      }
      else {
        lVar4 = *(long *)(param_2 + 6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar4 + 0x18) <= iVar2 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar4 = lVar4 + (long)(int)(iVar2 - 1U) * 0x10;
        *(long *)(lVar4 + 0x20) = auVar10._0_8_;
        piVar8 = (int *)(lVar4 + 0x28);
      }
      *(long *)piVar8 = auVar10._8_8_;
      iVar2 = iVar2 + 1;
    } while (plVar6 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar8 = piVar8 + 4;
    if (uVar9 == 0) break;
LAB_037a5d24:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_037a5d58;
    }
  }
LAB_037a5d3c:
  puVar5 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)PTR_DAT_067c91b0,0);
LAB_037a5d58:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


