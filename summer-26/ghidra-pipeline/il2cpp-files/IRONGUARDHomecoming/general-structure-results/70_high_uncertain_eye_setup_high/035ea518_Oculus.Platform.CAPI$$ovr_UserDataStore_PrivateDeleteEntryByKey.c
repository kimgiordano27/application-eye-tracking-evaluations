/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_UserDataStore_PrivateDeleteEntryByKey
ENTRY_POINT: 035ea518
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x035ea614) */
/* WARNING: Removing unreachable block (ram,0x035ea690) */
/* WARNING: Removing unreachable block (ram,0x035ea62c) */
/* WARNING: Removing unreachable block (ram,0x035ea630) */
/* WARNING: Removing unreachable block (ram,0x035ea6f0) */

void Oculus_Platform_CAPI__ovr_UserDataStore_PrivateDeleteEntryByKey
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_035ea548;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_035ea548:
        uVar2 = (*(code *)*puVar1)();
        uVar2 = FUN_034a66ec(uVar2,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar2,uVar2);
        }
        FUN_0329d8fc();
        lVar3 = *unaff_x22;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x23) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_035ea4ec;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_035ea4ec:
        uVar4 = (*(code *)*puVar1)();
        if ((uVar4 & 1) == 0) {
          if (unaff_x22 == (long *)0x0) goto LAB_035ea60c;
          lVar3 = *unaff_x22;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_035ea5b8;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_035ea5a0;
        }
        param_1 = *unaff_x22;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_035ea5a0:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_035ea600;
    }
  }
LAB_035ea5b8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_035ea600:
  (*(code *)*puVar1)();
LAB_035ea60c:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(unaff_x21 + 0x18) < 1) {
    return;
  }
  FUN_035ea7b8();
  return;
}


