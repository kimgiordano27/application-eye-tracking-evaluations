/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$TriggerHapticPulse
ENTRY_POINT: 03719aa8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03719be4) */
/* WARNING: Removing unreachable block (ram,0x03719c0c) */
/* WARNING: Removing unreachable block (ram,0x03719c68) */
/* WARNING: Removing unreachable block (ram,0x03719c70) */

void OVR_OpenVR_CVRSystem__TriggerHapticPulse(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
code_r0x03719aa8:
  if (in_w8 == 3) {
    FUN_037184fc();
    uVar2 = FUN_03587f1c(unaff_x22 + 0x28,0);
    FUN_03405678(*unaff_x28,uVar2,0);
    FUN_037184fc();
  }
  else {
    FUN_037184fc();
  }
LAB_037199d8:
  do {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03719a24;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03719a24:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_03719bb4;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03719a80;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03719a80:
    unaff_x22 = (*(code *)*puVar1)();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    in_w8 = *(int *)(unaff_x22 + 0x10);
    if (in_w8 != 1) {
      if (in_w8 == 2) {
        FUN_037184fc();
        uVar2 = FUN_035870e0(unaff_x22 + 0x20,0);
        FUN_03405678(*unaff_x27,uVar2,0);
        FUN_037184fc();
        uVar2 = FUN_03587f1c(unaff_x22 + 0x28,0);
        FUN_03405678(*unaff_x28,uVar2,0);
        FUN_037184fc();
        goto LAB_037199d8;
      }
      goto code_r0x03719aa8;
    }
    FUN_037184fc();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03719bd0;
    }
  }
LAB_03719bb4:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03719bd0:
  (*(code *)*puVar1)();
  return;
}


