/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 03ca6874
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03ca6a78) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__Dispose(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  undefined1 auVar10 [16];
  
  plVar2 = (long *)(*(code *)*param_1)();
  puVar1 = PTR_DAT_069fbff8;
  if (plVar2 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar4 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03ca68ec;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)puVar1,0);
LAB_03ca68ec:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar4 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_03ca6a10;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02dcfd18();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02dcfd18(lVar4);
      }
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03ca6980;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02dd004c(plVar2,lVar4,0);
LAB_03ca6980:
      auVar10 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (iVar9 == 0) {
        *(undefined1 (*) [16])(unaff_x20 + 8) = auVar10;
        LeanTween__value(unaff_x20 + 8,0);
      }
      else {
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar4 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        pauVar6 = (undefined1 (*) [16])(lVar4 + (long)(int)(iVar9 - 1U) * 0x10 + 0x20);
        *pauVar6 = auVar10;
        LeanTween__value(pauVar6,0);
      }
      iVar9 = iVar9 + 1;
    } while (plVar2 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03ca6a10:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03ca6a44;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor:
  puVar3 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_069fbff0,0);
LAB_03ca6a44:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


