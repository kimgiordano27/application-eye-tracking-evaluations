/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03d61ed0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03d61f98) */

void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_Reset
               (undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined1 unaff_w24;
  
LAB_03d61ee0:
  do {
    plVar3 = (long *)(*(code *)*param_1)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar1 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    if (iVar1 == 1) {
      *(undefined1 *)(unaff_x20 + 400) = unaff_w24;
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03d61e68;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac();
LAB_03d61e68:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto code_r0x03d61f70;
      lVar4 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03d61f44;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8(lVar4);
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          param_1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03d61ee0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    param_1 = (undefined8 *)FUN_032937ac();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03d61f60;
    }
  }
LAB_03d61f44:
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_03d61f60:
  (*(code *)*puVar2)();
code_r0x03d61f70:
  if (unaff_x20 != 0) {
    FUN_064ec248();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


