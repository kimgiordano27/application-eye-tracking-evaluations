/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 0402539c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04025618) */

void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  int iVar9;
  
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_040253d8;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_040253d8:
  puVar1 = PTR_DAT_06f70b30;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_06f70b38;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  iVar9 = 0;
  do {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04025458;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar4,*(long *)puVar2,0);
LAB_04025458:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_040255bc;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_040254dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar4,lVar5,0);
LAB_040254dc:
    (*(code *)*puVar3)(&stack0x00000230,plVar4,puVar3[1]);
    memcpy(&stack0x00000450,&stack0x00000230,0x220);
    if (iVar9 == 0) {
      memcpy((void *)(unaff_x21 + 8),&stack0x00000450,0x220);
      thunk_FUN_03048534(unaff_x21 + 0x20,0);
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x228);
      memcpy(&stack0x00000230,&stack0x00000450,0x220);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      memcpy(&stack0x00000010,&stack0x00000230,0x220);
      if (*(uint *)(lVar5 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar5 = lVar5 + (long)(int)(iVar9 - 1U) * 0x220;
      memcpy((void *)(lVar5 + 0x20),&stack0x00000010,0x220);
      thunk_FUN_03048534(lVar5 + 0x38,0);
    }
    iVar9 = iVar9 + 1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_040255d8;
    }
  }
LAB_040255bc:
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar4,*(long *)puVar1,0);
LAB_040255d8:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


