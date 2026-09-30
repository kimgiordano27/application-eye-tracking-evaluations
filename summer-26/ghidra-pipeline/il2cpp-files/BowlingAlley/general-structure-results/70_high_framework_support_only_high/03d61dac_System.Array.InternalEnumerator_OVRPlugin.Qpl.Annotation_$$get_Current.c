/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 03d61dac
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

void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_076cf8e6 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    DAT_076cf8e6 = 1;
  }
  puVar1 = PTR_DAT_07279f60;
  plVar4 = (long *)FUN_03d4c220(param_1 + 0xe0,
                                *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xb0))
  ;
  puVar2 = PTR_DAT_0727a180;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  do {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03d61e68;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_032937ac(plVar4,*(long *)puVar2,0);
LAB_03d61e68:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_03d61f6c;
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_03d61f44;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8(lVar7);
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03d61ee0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_032937ac(plVar4,lVar7,0);
LAB_03d61ee0:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar3 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
    if (iVar3 == 1) {
      *(undefined1 *)(param_1 + 400) = 1;
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03d61f60;
    }
  }
LAB_03d61f44:
  puVar5 = (undefined8 *)FUN_032937ac(plVar4,*(long *)puVar1,0);
LAB_03d61f60:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_03d61f6c:
  if (param_1 != 0) {
    FUN_064ec248(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


