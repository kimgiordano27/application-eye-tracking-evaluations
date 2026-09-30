/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetControllerAxisTypeNameFromEnum
ENTRY_POINT: 03719b50
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

void OVR_OpenVR_CVRSystem__GetControllerAxisTypeNameFromEnum(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  do {
    FUN_037184fc();
LAB_037199d8:
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03719a24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03719a24:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_03719bb4;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_03719b9c;
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03719a80;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03719a80:
    lVar4 = (*(code *)*puVar2)();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = *(int *)(lVar4 + 0x10);
  } while (iVar1 == 1);
  if (iVar1 == 2) {
    FUN_037184fc();
    uVar3 = FUN_035870e0(lVar4 + 0x20,0);
    FUN_03405678(*unaff_x27,uVar3,0);
    FUN_037184fc();
    uVar3 = FUN_03587f1c(lVar4 + 0x28,0);
    FUN_03405678(*unaff_x28,uVar3,0);
    FUN_037184fc();
  }
  else if (iVar1 == 3) {
    FUN_037184fc();
    uVar3 = FUN_03587f1c(lVar4 + 0x28,0);
    FUN_03405678(*unaff_x28,uVar3,0);
    FUN_037184fc();
  }
  else {
    FUN_037184fc();
  }
  goto LAB_037199d8;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03719b9c:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03719bd0;
    }
  }
LAB_03719bb4:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03719bd0:
  (*(code *)*puVar2)();
  return;
}


