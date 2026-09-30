/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 04025568
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

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current
               (undefined8 param_1,undefined1 *param_2,size_t param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  long *unaff_x24;
  uint unaff_w25;
  uint uVar6;
  long *unaff_x26;
  long unaff_x27;
  
code_r0x04025568:
  memcpy(unaff_x22,param_2,param_3);
  thunk_FUN_03048534();
  uVar6 = unaff_w25;
  do {
    unaff_w25 = uVar6 + 1;
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04025458;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_04025458:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_040255bc;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_040255a4;
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4(lVar2);
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_040254dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_040254dc:
    (*(code *)*puVar1)(&stack0x00000230);
    memcpy(&stack0x00000450,&stack0x00000230,0x220);
    if (unaff_w25 == 0) break;
    lVar2 = *(long *)(unaff_x21 + 0x228);
    memcpy(&stack0x00000230,&stack0x00000450,0x220);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    memcpy(&stack0x00000010,&stack0x00000230,0x220);
    if (*(uint *)(lVar2 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar2 = lVar2 + (int)uVar6 * unaff_x27;
    memcpy((void *)(lVar2 + 0x20),&stack0x00000010,0x220);
    thunk_FUN_03048534(lVar2 + 0x38,0);
    uVar6 = unaff_w25;
  } while( true );
  param_2 = &stack0x00000450;
  param_3 = 0x220;
  goto code_r0x04025568;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_040255a4:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_040255d8;
    }
  }
LAB_040255bc:
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_040255d8:
  (*(code *)*puVar1)();
  return;
}


