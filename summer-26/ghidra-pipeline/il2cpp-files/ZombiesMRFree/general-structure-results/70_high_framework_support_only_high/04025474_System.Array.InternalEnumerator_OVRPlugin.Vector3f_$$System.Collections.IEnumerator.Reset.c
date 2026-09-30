/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04025474
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04025618) */

void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_Reset(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  
  do {
    lVar1 = FUN_02feb2c4();
    do {
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x38);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4(lVar1);
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_040254dc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_040254dc:
      (*(code *)*puVar2)(&stack0x00000230);
      memcpy(&stack0x00000450,&stack0x00000230,0x220);
      if (unaff_w25 == 0) {
        memcpy(unaff_x22,&stack0x00000450,0x220);
        thunk_FUN_03048534();
      }
      else {
        lVar1 = *(long *)(unaff_x21 + 0x228);
        memcpy(&stack0x00000230,&stack0x00000450,0x220);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        memcpy(&stack0x00000010,&stack0x00000230,0x220);
        if (*(uint *)(lVar1 + 0x18) <= unaff_w25 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar1 = lVar1 + (int)(unaff_w25 - 1U) * unaff_x27;
        memcpy((void *)(lVar1 + 0x20),&stack0x00000010,0x220);
        thunk_FUN_03048534(lVar1 + 0x38,0);
      }
      unaff_w25 = unaff_w25 + 1;
      lVar1 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04025458;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_04025458:
      uVar4 = (*(code *)*puVar2)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar1 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar4 == 0) goto LAB_040255bc;
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_040255a4;
      }
      lVar1 = *(long *)(unaff_x20 + 0x20);
    } while ((*(byte *)(lVar1 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_040255a4:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_040255d8;
    }
  }
LAB_040255bc:
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_040255d8:
  (*(code *)*puVar2)();
  return;
}


