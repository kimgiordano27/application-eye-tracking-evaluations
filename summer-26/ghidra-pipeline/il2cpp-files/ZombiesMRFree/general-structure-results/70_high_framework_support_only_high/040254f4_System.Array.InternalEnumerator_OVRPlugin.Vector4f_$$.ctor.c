/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 040254f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04025618) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>___ctor
               (undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  long lVar5;
  
  do {
    memcpy(param_1,param_2,0x220);
    if (unaff_w25 == 0) {
      memcpy(unaff_x22,&stack0x00000450,0x220);
      thunk_FUN_03048534();
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x228);
      memcpy(&stack0x00000230,&stack0x00000450,0x220);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      memcpy(&stack0x00000010,&stack0x00000230,0x220);
      if (*(uint *)(lVar5 + 0x18) <= unaff_w25 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar5 = lVar5 + (int)(unaff_w25 - 1U) * unaff_x27;
      memcpy((void *)(lVar5 + 0x20),&stack0x00000010,0x220);
      thunk_FUN_03048534(lVar5 + 0x38,0);
    }
    unaff_w25 = unaff_w25 + 1;
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04025458;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_04025458:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) break;
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar5) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_040254dc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_040254dc:
    (*(code *)*puVar1)(&stack0x00000230);
    param_1 = &stack0x00000450;
    param_2 = &stack0x00000230;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_040255d8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_040255d8:
    (*(code *)*puVar1)();
  }
  return;
}


