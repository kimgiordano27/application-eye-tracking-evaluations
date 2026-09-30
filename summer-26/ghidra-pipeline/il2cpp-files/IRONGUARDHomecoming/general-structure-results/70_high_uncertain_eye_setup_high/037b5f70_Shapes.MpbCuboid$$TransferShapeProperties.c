/*
FUNCTION_NAME: Shapes.MpbCuboid$$TransferShapeProperties
ENTRY_POINT: 037b5f70
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


/* WARNING: Removing unreachable block (ram,0x037b6050) */

void Shapes_MpbCuboid__TransferShapeProperties(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = (uint)in_x10 + 1;
      puVar3 = (undefined8 *)(param_1 + in_x10 * 8 + 0x20);
      *puVar3 = unaff_x20;
      thunk_FUN_01f51358(puVar3);
    }
    else {
      FUN_030f2bb4();
    }
LAB_037b5e2c:
    do {
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_037b5e78;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_037b5e78:
      uVar4 = (*(code *)*puVar3)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 == 0) goto LAB_037b5ff4;
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_037b5fdc;
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_037b5ed4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_037b5ed4:
      uVar1 = (*(code *)*puVar3)();
      uVar4 = thunk_FUN_0340e318(uVar1,*unaff_x27,0);
      if ((uVar4 & 1) != 0) {
        *unaff_x23 = unaff_x20;
        thunk_FUN_01f51358();
        goto LAB_037b5e2c;
      }
      uVar4 = thunk_FUN_0340e318(uVar1,*unaff_x28,0);
      if ((uVar4 & 1) != 0) {
        *unaff_x22 = unaff_x20;
        thunk_FUN_01f51358();
        goto LAB_037b5e2c;
      }
      uVar4 = thunk_FUN_0340e318(uVar1,*unaff_x29,0);
    } while ((uVar4 & 1) == 0);
    param_2 = *(long *)(unaff_x21 + 0x38);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *(long *)(param_2 + 0x10);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    in_x10 = (long)*(int *)(param_2 + 0x18);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_037b5fdc:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_037b6010;
    }
  }
LAB_037b5ff4:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_037b6010:
  (*(code *)*puVar3)();
  return;
}


